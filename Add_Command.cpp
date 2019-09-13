// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Add_Command.h"

//
// Add_Command
//
// Default constructor
Add_Command::Add_Command(void)
{

}

//
// ~Add_Command
//
// Destructor
Add_Command::~Add_Command(void)
{

}

//
// evaluate(n1, n2)
//
// evaluate function for add operator actually 
// returns the sum of two numbers.
//
int Add_Command::evaluate(int n1, int n2)
{

	return (n1 + n2);

}

//
// getPrecedence()
//
// returns the precedence of the add 
// operator.
int Add_Command::getPrecedence(void)
{

	return 1;

}