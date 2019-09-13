// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Multiply_Node.h"

//
// Multiply_Node
//
// Default constructor
Multiply_Node::Multiply_Node(void)
{

}

//
// ~Multiply_Node
//
// Destructor
Multiply_Node::~Multiply_Node(void)
{

}

//
// accept(Expr_Node_Visitor & v)
//
// accept the visitor
int Multiply_Node::accept(Expr_Node_Visitor & v)
{

	v.Visit_Multiplication_Node(*this);

	return v.result();

}

//
// get_Precedence()
//
// returns the precedence of the division operator
int Multiply_Node::get_Precedence() {

	return 2;

}