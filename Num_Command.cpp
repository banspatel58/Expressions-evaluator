// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Num_Command.h"

//
// ~Num_Command
//
// Destructor
Num_Command::~Num_Command(void)
{

}

//
// Num_Command (Stack <int> & stack, int n)
//
// copy constructor of stack
Num_Command::Num_Command(Stack <int> & s, int n)
	: s_(s), n_(n)
{

}

//
// execute(void)
//
// pushes/adds number to the stack
void Num_Command::execute(Stack<int> & s_)
{

	s_.push(this->n_);

}

//
// getPrecedence(void)
//
// returns precedence of the number command
int Num_Command::getPrecedence(void) {

	return -1;

}