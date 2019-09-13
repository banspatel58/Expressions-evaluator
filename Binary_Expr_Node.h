//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

#include "Operator_Node.h"
#include "Expr_Node_Visitor.h"
 /**
 * @class Binary_Expr_Node
 *
 * Basic implementation of a standard Binary_Expr_Node for all kinds of binary
 * expressions.
 */
class Binary_Expr_Node
	: public Operator_Node
{

public:

	/// Default constructor.
	Binary_Expr_Node(void);

	/// Destructor.
	virtual ~Binary_Expr_Node(void);

	/**
	 * Defines a pure virutal method called evaluate. Since each operator has its
	 * own method to evaluate an expression, Binary_Expr_Node does not define the
	 * method instead each and every operator(child) is forced to define its own method.
	 */
	virtual int eval(void);
	
	virtual int accept(Expr_Node_Visitor & v) = 0;

	// returns the precedence of the operator
	virtual int get_Precedence() = 0;

	// setters for left and right node of the expression tree
	void setLeftChild(Expr_Node * left_child);
	void setRightChild(Expr_Node * right_Child);

	// getters for the left and right node of the expression tree
	Expr_Node * getLeftChild();
	Expr_Node * getRightChild();

protected:
	Expr_Node * left_;
	Expr_Node * right_;

};

#include "Binary_Expr_Node.cpp"

#endif   // !defined _BINARY_EXPR_NODE_H_
