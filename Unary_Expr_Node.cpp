// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Unary_Expr_Node.h"

//
// Unary_Expr_Node
//
// Default constructor
Unary_Expr_Node::Unary_Expr_Node(void)
{

}

//
// ~Unary_Expr_Node
//
// Destructor
Unary_Expr_Node::~Unary_Expr_Node(void)
{

}

//
// execute(void)
//
// executes the operation
int Unary_Expr_Node::execute(void)
{

	if (this->child_)
	{

		return this->child_->eval();

	}

}