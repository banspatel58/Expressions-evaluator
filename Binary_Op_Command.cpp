// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Binary_Op_Command.h"

//
// Binary_Op_Command
//
// Default constructor
Binary_Op_Command::Binary_Op_Command(void)
{

}

//
// ~Binary_Op_Command
//
// Destructor
Binary_Op_Command::~Binary_Op_Command(void)
{

}
//
// execute(void)
//
// since each operator does the same initial steps that is
// popping elements off the stack, doing their respective 
// operation and then pushing the result back to the stack
// this comman functionality is defined once and every 
// operator executes it.
void Binary_Op_Command::execute(Stack<int>& s) {
	
	int n1 = s.top();
	s.pop();
	int n2 = s.top();
	s.pop();
	int result = this->evaluate(n1, n2);

	s.push(result);
	
}

