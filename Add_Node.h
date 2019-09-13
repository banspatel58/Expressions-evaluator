//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _ADD_NODE_H_
#define _ADD_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"
/**
 * @class Add_Node
 *
 * Basic implementation of a standard Add_Node for all kinds of binary
 * expressions.
 */
class Add_Node
	: public Binary_Expr_Node
{
public:

	/// Default constructor.
	Add_Node(void);

	/// Destructor.
	virtual ~Add_Node(void);

	/**
	 * Defines a pure virutal method called evaluate. Since each operator has its
	 * own method to evaluate an expression, Add_Node does not define the
	 * method instead each and every operator(child) is forced to define its own method.
	 */
	virtual int accept(Expr_Node_Visitor & v);

	virtual int get_Precedence();

};

#include "Add_Node.cpp"

#endif   // !defined _ADD_NODE_H_
