// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Variable_Node.h"

//
// Variable_Node
//
// Default constructor
Variable_Node::Variable_Node(void)
{

}

//
// ~Variable_Node
//
// Destructor
Variable_Node::~Variable_Node(void)
{

}

//
// Variable_Node(char variable, std::map<char, int> variable_value)
//
// Copy Constructor
Variable_Node::Variable_Node(std::string variable, std::map<std::string, int> variable_value)
	: x(variable), get_value(variable_value)
{

}

//
// execute(void)
//
// executes the operation
int Variable_Node::eval(void)
{
	
}

//
// accept(Expr_Node_Visitor & v)
//
// accept the visitor
int Variable_Node::accept(Expr_Node_Visitor & v)
{

	v.Visit_Variable_Node(*this);
	return v.result();

}

//
// get_variable_value(void) 
//
// get the variable value from the map
int Variable_Node::get_variable_value(void) 
{

	return get_value[x];

}
