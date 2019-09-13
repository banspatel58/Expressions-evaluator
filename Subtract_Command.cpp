// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Subtract_Command.h"

//
// Subtract_Command
//
// Default constructor
Subtract_Command::Subtract_Command(void)
{

}

//
// ~Subtract_Command
//
// Destructor
Subtract_Command::~Subtract_Command(void)
{

}
//
// evaluate(n1, n2)
//
// evaluate function for subtract operator actually 
// returns the difference between of two numbers.
//
int Subtract_Command::evaluate(int n1, int n2) {

	return (n2 - n1);

}

//
// getPrecedence()
//
// returns the precedence of the subtract 
// operator.
int Subtract_Command::getPrecedence() {

	return 1;

}