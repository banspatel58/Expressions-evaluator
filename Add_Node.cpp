// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Add_Node.h"

//
// Add_Node
//
// Default constructor
Add_Node::Add_Node(void)
{

}

//
// ~Add_Node
//
// Destructor
Add_Node::~Add_Node(void)
{

}
//
// accept(Expr_Node_Visitor & v)
//
// accept the visitor
int Add_Node::accept(Expr_Node_Visitor & v) {

	v.Visit_Addition_Node(*this);

	return v.result();

}

//
// get_Precedence()
//
// returns the precedence of the add operator
int Add_Node::get_Precedence() {

	return 1;

}