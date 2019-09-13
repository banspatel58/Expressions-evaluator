// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Division_Command.h"

//
// Division_Command
//
// Default constructor
Division_Command::Division_Command(void)
{

}

//
// ~Division_Command
//
// Destructor
Division_Command::~Division_Command(void)
{

}

//
// evaluate(n1, n2)
//
// evaluate function for divide operator actually 
// returns the division of two numbers.
int Division_Command::evaluate(int n1, int n2) {
	
	if (n1 == 0) {

		std::cout << "Division by 0 is not allowed" << std::endl;

	}
	return (n2 / n1);

}

//
// getPrecedence()
//
// returns the precedence of the division 
// operator.
int Division_Command::getPrecedence() {

	return 2;

}