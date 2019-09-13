//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _NUM_COMMAND_H_
#define _NUM_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

/**
 * @class Num_Command
 *
 * Basic implementation of a standard Expr_Command for all kinds of expressions.
 */
class Num_Command
	: public Expr_Command
{
public:

	/// Default constructor.
	Num_Command(void) = default;

	/// Destructor.
	~Num_Command(void);

	Num_Command(Stack<int> & s, int n);
	/**
	 * Define a pure virutal method called execute. Since each operator has its
	 * own method to evaluate an expression, Expr_Command does not define the method
	 * instead each and every child is forced to define their own method.
	 */
	virtual void execute(Stack<int> & s);

	virtual int getPrecedence(void);

protected:

	Stack<int> & s_;
	int n_;

};

#include "Num_Command.cpp"

#endif   // !defined _NUM_COMMAND_H_
