//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _UNARY_EXPR_NODE_H_
#define _UNARY_EXPR_NODE_H_

#include "Operator_Node.h"
/**
 * @class Unary_Expr_Node
 *
 * Basic implementation of a standard Unary_Expr_Node for all kinds of binary
 * expressions.
 */
class Unary_Expr_Node
	: public Operator_Node
{
public:

	/// Default constructor.
	Unary_Expr_Node (void);

	/// Destructor.
	virtual ~Unary_Expr_Node(void);

	/**
	 * Defines a pure virutal method called evaluate. Since each operator has its
	 * own method to evaluate an expression, Unary_Expr_Node does not define the
	 * method instead each and every operator(child) is forced to define its own method.
	 */
	virtual int execute(void);

	virtual int get_Precedence() = 0;

protected:

	Expr_Node * child_;
	
};

#include "Unary_Expr_Node.cpp"

#endif   // !defined _UNARY_EXPR_NODE_H_
