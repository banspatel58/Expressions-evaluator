// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Subtract_Node.h"

//
// Subtract_Node
//
// Default constructor
Subtract_Node::Subtract_Node(void)
{

}

//
// ~Subtract_Node
//
// Destructor
Subtract_Node::~Subtract_Node(void)
{

}

//
// accept(Expr_Node_Visitor & v)
//
// accept the visitor
int Subtract_Node::accept(Expr_Node_Visitor & v)
{

	v.Visit_Subtraction_Node(*this);
	v.result();

}

//
// get_Precedence()
//
// returns the precedence of the division operator
int Subtract_Node::get_Precedence() {

	return 1;

}