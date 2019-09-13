//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _MOD_NODE_H_
#define _MOD_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"
/**
 * @class Mod_Node
 *
 * Basic implementation of a standard Mod_Node for all kinds of binary
 * expressions.
 */
class Mod_Node
	: public Binary_Expr_Node
{
public:

	/// Default constructor.
	Mod_Node(void);

	/// Destructor.
	virtual ~Mod_Node(void);

	virtual int accept(Expr_Node_Visitor & v);

	virtual int get_Precedence();
};

#include "Mod_Node.cpp"

#endif   // !defined _MOD_NODE_H_
