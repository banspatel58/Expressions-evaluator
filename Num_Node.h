//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _NUM_NODE_H_
#define _NUM_NODE_H_

#include "Expr_Node.h"
#include "Expr_Node_Visitor.h"
/**
 * @class Num_Node
 *
 * Basic implementation of a standard Binary_Op_Command for all kinds of binary
 * expressions.
 */
class Num_Node
	: public Expr_Node
{
public:

	/// Default constructor.
	Num_Node(void);

	/// Destructor.
	virtual ~Num_Node(void);

	Num_Node(int n);
	/**
	 * Defines a pure virutal method called evaluate. Since each operator has its
	 * own method to evaluate an expression, Num_Command does not define the
	 * method instead each and every operator(child) is forced to define its own method.
	 */
	virtual int eval(void);

	virtual int accept(Expr_Node_Visitor & v);

	int getNumber(void);

protected:

	Expr_Node * child_;

private: 

	int n_;



};

#include "Num_Node.cpp"

#endif   // !defined _NUM_NODE_H_
