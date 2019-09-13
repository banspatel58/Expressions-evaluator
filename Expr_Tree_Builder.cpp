// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Expr_Tree_Builder.h"

//
// Expr_Tree_Builder
//
// Default constructor
Expr_Tree_Builder::Expr_Tree_Builder(void)
{

}

//
// ~Expr_Tree_Builder
//
// Destructor
Expr_Tree_Builder::~Expr_Tree_Builder(void)
{
	delete tree_;
	delete node;
	delete root;
	delete binary_tree;
}

//
// start_Expression()
//
// start building the expression tree
void Expr_Tree_Builder::start_expression(void) 
{
	
	this->tree_ = new Expr_Tree(this->root);

}

//
// get_Expression()
//
// get the current expression tree
Math_Expr  * Expr_Tree_Builder::get_expression(void) 
{

	return this->tree_;

}

//
// Build_Number(int n)
//
// build the number node
void Expr_Tree_Builder::Build_Number(int n)
{

	Expr_Node * node = new Num_Node(n);
	this->operand_stack.push(node);
	
}

//
// Build_Add_Operator(void)
//
// build the addition node
void Expr_Tree_Builder::Build_Add_Operator(void)
{
	
	Binary_Expr_Node * node = new Add_Node();

	Add_To_Stack(node, this->operator_stack, this->operand_stack);

}

//
// Build_Subtract_Operator(void)
//
// build the subtraction node
void Expr_Tree_Builder::Build_Subtract_Operator(void)
{

	Binary_Expr_Node * node = new Subtract_Node();

	Add_To_Stack(node, this->operator_stack, this->operand_stack);

}

//
// Build_Multiplication_Operator(void)
//
// build the multiplication node
void Expr_Tree_Builder::Build_Multiplication_Operator(void)
{

	Binary_Expr_Node * node = new Multiply_Node();

	Add_To_Stack(node, this->operator_stack, this->operand_stack);

}

//
// Build_Modulus_Operator(void)
//
// build the modulus node
void Expr_Tree_Builder::Build_Modulus_Operator(void)
{

	Binary_Expr_Node * node = new Mod_Node();

	Add_To_Stack(node, this->operator_stack, this->operand_stack);

}

//
// Build_Divide_Operator(void)
//
// build the division node
void Expr_Tree_Builder::Build_Divide_Operator(void)
{

	Binary_Expr_Node * node = new Division_Node();

	Add_To_Stack(node, this->operator_stack, this->operand_stack);

}

//
// Build_Variable(void)
//
// build the variable node
void Expr_Tree_Builder::Build_Variable(std::string x, std::map<std::string, int> m)
{

	Expr_Node * node = new Variable_Node(x, m);
	this->operand_stack.push(node);

}

//
// Add_To_Stack(Binary_Expr_Node * operator_node, Stack<Binary_Expr_Node *> & operator_stack, Stack<Expr_Node *> & operand_stack)
//
// checks the precedence of the operators on the operator stack and push them accordingly
void Expr_Tree_Builder::Add_To_Stack(Binary_Expr_Node * operator_node, Stack<Binary_Expr_Node *> & operator_stack, Stack<Expr_Node *> & operand_stack)
{

	if (operator_stack.is_empty()) {

		operator_stack.push(operator_node);

	}
	else {

		Binary_Expr_Node * top_node = operator_stack.top();

		if( top_node->get_Precedence() < operator_node->get_Precedence() ){
		
			operator_stack.push(operator_node);
		
		}
		else {

			while (!operator_stack.is_empty() && top_node->get_Precedence() >= operator_node->get_Precedence())
			{

				// Get an operator node
				binary_tree = operator_stack.top();
				operator_stack.pop();
				
				// assign to the operator node its left and right children
				binary_tree->setRightChild(operand_stack.top());
				operand_stack.pop();

				binary_tree->setLeftChild(operand_stack.top());
	 			operand_stack.pop();

				operand_stack.push(binary_tree);
				
			}
			operator_stack.push(operator_node);

		}

	}

}

void Expr_Tree_Builder::build_Expression() 
{

	while (!this->operator_stack.is_empty())
	{

		binary_tree = this->operator_stack.top();
		this->operator_stack.pop();
		
		// assign to the operator node its left and right children
		binary_tree->setRightChild(this->operand_stack.top());
		this->operand_stack.pop();

		binary_tree->setLeftChild(this->operand_stack.top());
		this->operand_stack.pop();

		operand_stack.push(binary_tree);
	}

	this->root = binary_tree;

}