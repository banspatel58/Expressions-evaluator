// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Mod_Command.h"

//
// Mod_Command
//
// Default constructor
Mod_Command::Mod_Command(void)
{

}

//
// ~Mod_Command
//
// Destructor
Mod_Command::~Mod_Command(void)
{

}
//
// evaluate(n1, n2)
//
// evaluate function for mod operator actually 
// returns the remainder when dividing two numbers.
int Mod_Command::evaluate(int n1, int n2) {

	if (n1 == 0) {

		std::cout << "Modulos of " << n2 << " by 0 is not possible." << std::endl;

	}
	return (n2 % n1);

}

//
// getPrecedence()
//
// returns the precedence of the mod
// operator.
int Mod_Command::getPrecedence() {

	return 2;

}