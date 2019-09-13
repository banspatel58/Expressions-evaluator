//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _DIVISION_COMMAND_H_
#define _DIVISION_COMMAND_H_

#include "Binary_Op_Command.h"
/**
 * @class Division_Command
 *
 * Basic implementation of a standard Division_Command for all kinds of binary
 * expressions.
 */
class Division_Command
	: public Binary_Op_Command
{
public:

	/// Default constructor.
	Division_Command(void);

	/// Destructor.
	~Division_Command(void);

	/**
	 *  A virutal method called evaluate. The division command defines
	 * the evaluate function from the parent class.
	 *
	 * @param[in]      n1        number 1
	 * @param[in]      n2        number 2
	 * @retval		   int		 division of two numbers
	 */
	virtual int evaluate(int n1, int n2);

	/*
	*  A method called getPrecedence returns the precedence of
	*  the division operator.
	*
	*  @retval		   int		 precedence of the division operator
	*
	*/
	int getPrecedence();

};

#include "Division_Command.cpp"

#endif   // !defined _DIVISION_COMMAND_H_
