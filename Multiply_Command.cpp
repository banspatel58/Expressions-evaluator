// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Multiply_Command.h"

//
// Multiply_Command
//
// Default constructor
Multiply_Command::Multiply_Command(void)
{

}

//
// ~Multiply_Command
//
// Destructor
Multiply_Command::~Multiply_Command(void)
{

}
//
// evaluate(n1, n2)
//
// evaluate function for multiplication operator actually 
// returns the prroduct of two numbers.

int Multiply_Command::evaluate(int n1, int n2) {

	return (n1 * n2);

}

//
// getPrecedence()
//
// returns the precedence of the multiply
// operator.
int Multiply_Command::getPrecedence() {

	return 2;

}