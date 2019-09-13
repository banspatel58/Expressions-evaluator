// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Mod_Node.h"

//
// Mod_Node
//
// Default constructor
Mod_Node::Mod_Node(void)
{

}

//
// ~Mod_Node
//
// Destructor
Mod_Node::~Mod_Node(void)
{

}

//
// accept(Expr_Node_Visitor & v)
//
// accept the visitor
int Mod_Node::accept(Expr_Node_Visitor & v) {

	v.Visit_Modulus_Node(*this);

	return v.result();
}

//
// get_Precedence()
//
// returns the precedence of the division operator
int Mod_Node::get_Precedence() {

	return 2;

}