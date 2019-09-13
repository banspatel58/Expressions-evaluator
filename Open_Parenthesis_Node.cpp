// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Open_Parenthesis_Node.h"

//
// Open_Parenthesis_Node
//
// Default constructor
Open_Parenthesis_Node::Open_Parenthesis_Node(void)
{

}

//
// ~Open_Parenthesis_Node
//
// Destructor
Open_Parenthesis_Node::~Open_Parenthesis_Node(void)
{

}

//
// eval(void)
//
// executes the operation
int Open_Parenthesis_Node::eval(void)
{

}

//
// accept(Expr_Node_Visitor & v)
//
// accept the visitor
int Open_Parenthesis_Node::accept(Expr_Node_Visitor & v)
{

	v.Visit_Open_Parenthesis_Node(*this);
	v.result();

}