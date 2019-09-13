//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _OPERATOR_NODE_H_
#define _OPERATOR_NODE_H_

#include "Expr_Node.h"
#include "Expr_Node_Visitor.h"
 /**
 * @class Operator_Node
 *
 * Basic implementation of a standard Operator_Node for all kinds of binary
 * expressions.
 */
class Operator_Node
	: public Expr_Node
{

public:

	/// Default constructor.
	Operator_Node(void);

	/// Destructor.
	virtual ~Operator_Node(void);

	/**
	 * Defines a pure virutal method called evaluate. Since each operator has its
	 * own method to evaluate an expression, Operator_Node does not define the
	 * method instead each and every operator(child) is forced to define its own method.
	 */
	virtual int eval(void) = 0;

	virtual int accept(Expr_Node_Visitor & v) = 0;

	// returns the precedence of the operator
	virtual int get_Precedence() = 0;
	
};

#include "Operator_Node.cpp"

#endif   // !defined _OPERATOR_NODE_H_
