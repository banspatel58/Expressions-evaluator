//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _EXPR_NODE_H_
#define _EXPR_NODE_H_
#include "Expr_Node_Visitor.h"
/**
 * @class Expr_Node
 *
 * Basic implementation of a standard Expr_Node for all kinds of expressions.
 */
class Expr_Node
{
public:

	/// Default constructor.
	Expr_Node(void);

	/// Destructor.
	virtual ~Expr_Node(void);

	// Used to evaluate the expression
	virtual int eval(void) = 0;

	// Used to traverse the tree
	virtual int accept(Expr_Node_Visitor & v) = 0;
	
};

#include "Expr_Node.cpp"

#endif   // !defined _EXPR_NODE_H_
