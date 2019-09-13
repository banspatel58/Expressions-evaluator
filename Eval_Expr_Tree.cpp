// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Eval_Expr_Tree.h"
#include "Expr_Node_Visitor.h"
#include "Add_Node.h"
#include "Subtract_Node.h"
#include "Multiply_Node.h"
#include "Mod_Node.h"
#include "Division_Node.h"
#include "Num_Node.h"
#include "Variable_Node.h"

//
// Eval_Expr_Tree
//
// Default constructor
Eval_Expr_Tree::Eval_Expr_Tree(void)
	: result_(0)
{

}

//
// ~Eval_Expr_Tree
//
// Destructor
Eval_Expr_Tree::~Eval_Expr_Tree(void)
{

}

//
// Visit_Addition_Node(const Add_Node & node)
//
// Creating Concrete Addition Node
void Eval_Expr_Tree::Visit_Addition_Node(Add_Node & node)
{
  // COMMENT I do not see how this code compiles if the return value of "accept"
  // is void and you are assigning the return value to an int. This code below
  // should not compile.
  // Resolved: Changed the return value of accept to int in the Expr_Node.
  
	int left_node_ = node.getLeftChild()->accept(*this);
	int right_node_ = node.getRightChild()->accept(*this);

	this->result_ = left_node_ + right_node_;


}

//
// Visit_Subtraction_Node(const Subtract_Node & node)
//
// Creating Concrete Subtraction Node
void Eval_Expr_Tree::Visit_Subtraction_Node(Subtract_Node & node)
{
  // COMMENT I do not see how this code compiles if the return value of "accept"
  // is void and you are assigning the return value to an int. This code below
  // should not compile.
  // Resolved: Changed the return value of accept to int in the Expr_Node.

	int left_node_ = node.getLeftChild()->accept(*this);
	int right_node_ = node.getRightChild()->accept(*this);

	this->result_ = left_node_ - right_node_;

}

//
// Visit_Multiplication_Node(const Multiply_Node & node)
//
// Creating Concrete Multiplication Node
void Eval_Expr_Tree::Visit_Multiplication_Node(Multiply_Node & node)
{
  // COMMENT I do not see how this code compiles if the return value of "accept"
  // is void and you are assigning the return value to an int. This code below
  // should not compile.
  // Resolved: Changed the return value of accept to int in the Expr_Node.
	
	int left_node_ = node.getLeftChild()->accept(*this);
	int right_node_ = node.getRightChild()->accept(*this);

	this->result_ = left_node_ * right_node_;

}

//
// Visit_Division_Node(const Division_Node & node)
//
// Creating Concrete Division Node
void Eval_Expr_Tree::Visit_Division_Node(Division_Node & node)
{
  // COMMENT I do not see how this code compiles if the return value of "accept"
  // is void and you are assigning the return value to an int. This code below
  // should not compile.
  // Resolved: Changed the return value of accept to int in the Expr_Node.

	int left_node_ = node.getLeftChild()->accept(*this);
	int right_node_ = node.getRightChild()->accept(*this);

	if (right_node_ == 0) {

		std::cout << "Division by 0 is not allowed" << std::endl;

	}
	this->result_ = left_node_ / right_node_;

}

//
// Visit_Modulus_Node(const Mod_Node & node)
//
// Creating Concrete Modulus Node
void Eval_Expr_Tree::Visit_Modulus_Node(Mod_Node & node)
{
  // COMMENT I do not see how this code compiles if the return value of "accept"
  // is void and you are assigning the return value to an int. This code below
  // should not compile.
  // Resolved: Changed the return value of accept to int in the Expr_Node.

	int left_node_ = node.getLeftChild()->accept(*this);
	int right_node_ = node.getRightChild()->accept(*this);
	
	if (right_node_ == 0) {

		std::cout << "Modulus by 0 is not allowed" << std::endl;

	}
	this->result_ = left_node_ % right_node_;

}

//
// Visit_Number_Node(const Num_Node & node)
//
// Creating Concrete Number Node
void Eval_Expr_Tree::Visit_Number_Node(Num_Node & node)
{
	
	this->result_ = node.getNumber();

}

//
// Visit_Variable_Node(const Num_Node & node)
//
// Creating Concrete Variable Node
void Eval_Expr_Tree::Visit_Variable_Node(Variable_Node & node)
{
	
	this->result_ = node.get_variable_value();
	
}

//
// result(void)
//
// Creating Concrete Number Node
int Eval_Expr_Tree::result(void) const
{

	return this->result_;

}