//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _EXPR_NODE_VISITOR_H_
#define _EXPR_NODE_VISITOR_H_
#include "Expr_Node.h"
class Add_Node;
class Subtract_Node;
class Multiply_Node;
class Division_Node;
class Mod_Node;
class Num_Node;
class Variable_Node;

/**
 * @class Expr_Node_Visitor
 *
 * Basic implementation of a standard Expr_Node_Visitor for all kinds of expressions.
 */
class Expr_Node_Visitor
{
public:

	/// Default constructor.
	Expr_Node_Visitor(void);

	/// Destructor.
	virtual ~Expr_Node_Visitor(void);

	virtual void Visit_Addition_Node(Add_Node & node) = 0;

	virtual void Visit_Subtraction_Node(Subtract_Node & node) = 0;

	virtual void Visit_Multiplication_Node(Multiply_Node & node) = 0;

	virtual void Visit_Modulus_Node(Mod_Node & node) = 0;

	virtual void Visit_Division_Node(Division_Node & node) = 0;

	virtual void Visit_Number_Node(Num_Node & node) = 0;

	virtual void Visit_Variable_Node(Variable_Node & node) = 0;

	virtual int result(void) const = 0;

};

#include "Expr_Node_Visitor.cpp"

#endif   // !defined _EXPR_NODE_H_
