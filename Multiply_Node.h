//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _MULTIPLY_NODE_H_
#define _MULTIPLY_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"
/**
 * @class Multiply_Node
 *
 * Basic implementation of a standard Multiply_Node for all kinds of binary
 * expressions.
 */
class Multiply_Node
	: public Binary_Expr_Node
{
public:

	/// Default constructor.
	Multiply_Node(void);

	/// Destructor.
	virtual ~Multiply_Node(void);

	virtual int accept(Expr_Node_Visitor & v);

	virtual int get_Precedence();
};

#include "Multiply_Node.cpp"

#endif   // !defined _MULTIPLY_NODE_H_
