//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _CLOSE_PARENTHESIS_NODE_H_
#define _CLOSE_PARENTHESIS_NODE_H_

#include "Expr_Node.h"
#include "Expr_Node_Visitor.h"

// COMMENT: Per our discussion in class from Assignment 3, having
// the parenthesis as a node is not a good design. Please fix this
// problem in your design.
// Resolved: Removed the closing parenthesis node from the design


 /**
 * @class Close_Parenthesis_Node
 *
 * Basic implementation of a standard Close_Parenthesis_Node for all kinds of binary
 * expressions.
 */
class Close_Parenthesis_Node
	: public Expr_Node
{

public:

	/// Default constructor.
	Close_Parenthesis_Node(void);

	/// Destructor.
	virtual ~Close_Parenthesis_Node(void);

	virtual int eval(void);

	virtual int accept(Expr_Node_Visitor & v);

};

#include "Close_Parenthesis_Node.cpp"

#endif   // !defined _CLOSE_PARENTHESIS_NODE_H_
