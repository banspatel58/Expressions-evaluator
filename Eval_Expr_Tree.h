//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _EVAL_EXPR_TREE_H_
#define _EVAL_EXPR_TREE_H_
#include "Expr_Node_Visitor.h"
#include "Stack.h"
/**
 * @class Eval_Expr_Tree
 *
 * Basic implementation of a standard Eval_Expr_Tree for all kinds of expressions.
 */
class Eval_Expr_Tree
	: public Expr_Node_Visitor
{
public:

	/// Default constructor.
	Eval_Expr_Tree(void);

	/// Destructor.
	virtual ~Eval_Expr_Tree(void);

	// Method to visit concrete Addition node
	virtual void Visit_Addition_Node(Add_Node & node);

	// Method to visit concrete Subtraction node
	virtual void Visit_Subtraction_Node(Subtract_Node & node);

	// Method to visit concrete Multiplication node
	virtual void Visit_Multiplication_Node(Multiply_Node & node);

	// Method to visit concrete Modulus node
	virtual void Visit_Modulus_Node(Mod_Node & node);

	// Method to visit concrete Division node
	virtual void Visit_Division_Node(Division_Node & node);

	// Method to visit concrete Number node
	virtual void Visit_Number_Node(Num_Node & node);

	// Method to visit concrete Variable node
	virtual void Visit_Variable_Node(Variable_Node & node);

	virtual int result(void) const;

private:
	int result_;
	Stack<int> s;
};

#include "Eval_Expr_Tree.cpp"

#endif   // !defined _EVAL_EXPR_TREE_H_
