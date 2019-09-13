// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Num_Node.h"

//
// Num_Node
//
// Default constructor
Num_Node::Num_Node(void)
	:n_(0)
{

}

//
// ~Num_Node
//
// Destructor
Num_Node::~Num_Node(void)
{

}

//
// Num_Node
//
// Copy constructor
Num_Node::Num_Node(int n)
	:n_(n)
{

}

//
// execute(void)
//
// executes the operation
int Num_Node::eval(void)
{
	if (this->child_)
	{

		return this->child_->eval();

	}
}

//
// accept(Expr_Node_Visitor & v)
//
// accept the visitor
int Num_Node::accept(Expr_Node_Visitor & v) 
{

	v.Visit_Number_Node(*this);
	return v.result();

}

int Num_Node::getNumber(void) 
{

	return this->n_;

}