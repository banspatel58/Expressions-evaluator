//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _DIVISION_NODE_H_
#define _DIVISION_NODE_H_

#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"
/**
 * @class Division_Node
 *
 * Basic implementation of a standard Division_Node for all kinds of binary
 * expressions.
 */
class Division_Node
	: public Binary_Expr_Node
{
public:

	/// Default constructor.
	Division_Node(void);

	/// Destructor.
	virtual ~Division_Node(void);

	/**
	 * Defines a pure virutal method called evaluate. Since each operator has its
	 * own method to evaluate an expression, Division_Node does not define the
	 * method instead each and every operator(child) is forced to define its own method.
	 */
	//virtual int execute(int n1, int n2);

	virtual int accept(Expr_Node_Visitor & v);

	virtual int get_Precedence();
};

#include "Division_Node.cpp"

#endif   // !defined _DIVISION_NODE_H_
