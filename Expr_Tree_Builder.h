//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _EXPR_TREE_BUILDER_H_
#define _EXPR_TREE_BUILDER_H_
#include "Expr_Builder.h"
#include "Stack.h"
/**
 * @class Expr_Tree_Builder
 *
 * Basic implementation of a standard Expr_Tree_Builder for all kinds of expressions.
 */
class Expr_Tree_Builder
	: public Expr_Builder
{
public:

	/// Default constructor.
	Expr_Tree_Builder(void);

	/// Destructor.
	virtual ~Expr_Tree_Builder(void);

	virtual void start_expression(void);

	// Method to build concrete Number node
	virtual void Build_Number(int n);

	// Method to build concrete Addition node
	virtual void Build_Add_Operator(void);

	// Method to build concrete Subtraction node
	virtual void Build_Subtract_Operator(void);

	// Method to build concrete Multiplication node
	virtual void Build_Multiplication_Operator(void);

	// Method to build concrete Modulus node
	virtual void Build_Modulus_Operator(void);

	// Method to build concrete Division node
	virtual void Build_Divide_Operator(void);

	// Method to build concrete variable node
	virtual void Build_Variable(std::string x, std::map<std::string, int> m);

	// get current math expression
	virtual Math_Expr * get_expression(void);
	
	/**
	* Adds Expression nodes to the stack based on thier precedence. Each node(operator node) has two child, left child and right child
	*
	* @param[in]       Operator_Node * operator_node			   node for each operator
	* @param[in]       Stack<Operator_Node *> & operator_stack     stack for the operators that is +, -, /, *
	* @param[in]	   Stack<Expr_Node *> & operand_stack		   stack for the operands that is numbers, parenthesis
	* 
	*/
	void Add_To_Stack(Binary_Expr_Node * operator_node, Stack<Binary_Expr_Node *> & operator_stack, Stack<Expr_Node *> & operand_stack);

	void build_Expression();

private:

	// current state of the expression tree
	Expr_Tree * tree_;
	Expr_Node * node;
	Expr_Node * root;
	Stack <Binary_Expr_Node *> operator_stack;
	Stack <Expr_Node *> operand_stack;
	Binary_Expr_Node * binary_tree;
};

#include "Expr_Tree_Builder.cpp"

#endif   // !defined _EXPR_TREE_BUILDER_H_
