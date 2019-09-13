//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _OPEN_PARENTHESIS_NODE_H_
#define _OPEN_PARENTHESIS_NODE_H_

#include "Expr_Node.h"
#include "Expr_Node_Visitor.h"

// COMMENT: Per our discussion in class from Assignment 3, having
// the parenthesis as a node is not a good design. Please fix this
// problem in your design.
// Resolved: Removed the opening parenthesis node from the design

 /**
 * @class Open_Parenthesis_Node
 *
 * Basic implementation of a standard Open_Parenthesis_Node for all kinds of binary
 * expressions.
 */
class Open_Parenthesis_Node
	: public Expr_Node
{

public:

	/// Default constructor.
	Open_Parenthesis_Node(void);

	/// Destructor.
	virtual ~Open_Parenthesis_Node(void);

	virtual int eval(void);

	virtual int accept(Expr_Node_Visitor & v);

};

#include "Open_Parenthesis_Node.cpp"

#endif   // !defined _OPEN_PARENTHESIS_NODE_H_
