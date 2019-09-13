//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_
#include "Stack.h"
/**
 * @class Expr_Command
 *
 * Basic implementation of a standard Expr_Command for all kinds of expressions.
 */
class Expr_Command
{
public:

	/// Default constructor.
	Expr_Command(void);

	/// Destructor.
	~Expr_Command(void);

	/**
	 * Define a pure virutal method called execute. Since each operator has its
	 * own method to evaluate an expression, Expr_Command does not define the method
	 * instead each and every child is forced to define their own method.
	 */
	virtual void execute(Stack<int> & s) = 0;

	virtual int getPrecedence(void) = 0;

	
};

#include "Expr_Command.cpp"

#endif   // !defined _EXPR_COMMAND_H_
