// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Close_Parenthesis_Node.h"

//
// Close_Parenthesis_Node
//
// Default constructor
Close_Parenthesis_Node::Close_Parenthesis_Node(void)
{

}

//
// ~Close_Parenthesis_Node
//
// Destructor
Close_Parenthesis_Node::~Close_Parenthesis_Node(void)
{

}

//
// eval(void)
//
// executes the operation
int Close_Parenthesis_Node::eval(void)
{

}

//
// accept(Expr_Node_Visitor & v)
//
// accept the visitor
int Close_Parenthesis_Node::accept(Expr_Node_Visitor & v) 
{

	v.Visit_Close_Parenthesis_Node(*this);
	v.result();

}