//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _SUBTRACT_NODE_H_
#define _SUBTRACT_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"
/**
 * @class Subtract_Node
 *
 * Basic implementation of a standard Subtract_Node for all kinds of binary
 * expressions.
 */
class Subtract_Node
	: public Binary_Expr_Node
{
public:

	/// Default constructor.
	Subtract_Node(void);

	/// Destructor.
	virtual ~Subtract_Node(void);
	
	virtual int accept(Expr_Node_Visitor & v);

	virtual int get_Precedence();
};

#include "Subtract_Node.cpp"

#endif   // !defined _SUBTRACT_NODE_H_
