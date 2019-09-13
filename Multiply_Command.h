//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _MULTIPLY_COMMAND_H_
#define _MULTIPLY_COMMAND_H_

#include "Binary_Op_Command.h"

/**
 * @class Multiply_Command
 *
 * Basic implementation of a standard Multiply_Command for all kinds of binary
 * expressions.
 */
class Multiply_Command
	: public Binary_Op_Command
{
public:

	/// Default constructor.
	Multiply_Command(void);

	/// Destructor.
	~Multiply_Command (void);

	/**
	 *  A virutal method called evaluate. The multiply command defines
	 * the evaluate function from the parent class.
	 *
	 * @param[in]      n1        number 1
	 * @param[in]      n2        number 2
	 * @retval		   T		 product of two numbers
	 */
	virtual int evaluate (int n1, int n2);

	/*
	*  A method called getPrecedence returns the precedence of
	*  the multiply operator.
	*
	*  @retval		   int		 precedence of the multiply operator
	*
	*/
	int getPrecedence();

};

#include "Multiply_Command.cpp"

#endif   // !defined _MULTIPLY_COMMAND_H_
