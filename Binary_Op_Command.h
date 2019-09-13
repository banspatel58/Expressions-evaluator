//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _BINARY_OP_COMMAND_H_
#define _BINARY_OP_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"
/**
 * @class Binary_Op_Command
 *
 * Basic implementation of a standard Binary_Op_Command for all kinds of binary 
 * expressions.
 */
class Binary_Op_Command
	: public Expr_Command
{
public:

	/// Default constructor.
	Binary_Op_Command(void);

	/// Destructor.
	~Binary_Op_Command(void);

	/**
	 * Defines a pure virutal method called evaluate. Since each operator has its
	 * own method to evaluate an expression, Binary_Op_Command does not define the 
	 * method instead each and every operator(child) is forced to define its own method.
	 */
	virtual int evaluate(int n1, int n2) = 0;


	/**
	 * Definition of the execute function from parent class Expr_Command. Since each 
	 * operator has a common way to evaluate an expression, this method define that commonality
	 * and all operators use this definition.
	 */
	virtual void execute(Stack<int> & s);

	virtual int getPrecedence(void) = 0;


};

#include "Binary_Op_Command.cpp"

#endif   // !defined _EXPR_COMMAND_H_
