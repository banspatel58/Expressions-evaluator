// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Division_Node.h"

//
// Division_Node
//
// Default constructor
Division_Node::Division_Node(void)
{

}

//
// ~Division_Node
//
// Destructor
Division_Node::~Division_Node(void)
{

}
//
// accept(Expr_Node_Visitor & v)
//
// accept the visitor
int Division_Node::accept(Expr_Node_Visitor & v) 
{

	v.Visit_Division_Node(*this);
	return v.result();

}

//
// get_Precedence()
//
// returns the precedence of the division operator
int Division_Node::get_Precedence() {

	return 2;

}