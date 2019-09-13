//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _SUBTRACT_COMMAND_H_
#define _SUBTRACT_COMMAND_H_

#include "Binary_Op_Command.h"
/**
 * @class Subtract_Command
 *
 * Basic implementation of a standard Subtract_Command for all kinds of binary
 * expressions.
 */
class Subtract_Command
	: public Binary_Op_Command
{
public:

	/// Default constructor.
	Subtract_Command (void);

	/// Destructor.
	~Subtract_Command (void);

	/**
	 *  A virutal method called evaluate. The subtract command defines
	 * the evaluate function from the parent class.
	 *
	 * @param[in]      n1        number 1
	 * @param[in]      n2        number 2
	 * @retval		   int		 difference of two numbers
	 */
	virtual int evaluate (int n1, int n2);

	/*
	*  A method called getPrecedence returns the precedence of
	*  the subtract operator.
	*
	*  @retval		   int		 precedence of the subtract operator
	*
	*/
	int getPrecedence();


};

#include "Subtract_Command.cpp"

#endif   // !defined _Subtract_COMMAND_H_
