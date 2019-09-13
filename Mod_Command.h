//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _MOD_COMMAND_H_
#define _MOD_COMMAND_H_

#include "Binary_Op_Command.h"
/**
 * @class Mod_Command
 *
 * Basic implementation of a standard Mod_Command for all kinds of binary
 * expressions.
 */
class Mod_Command
	: public Binary_Op_Command
{
public:

	/// Default constructor.
	Mod_Command(void);

	/// Destructor.
	~Mod_Command(void);

	int evaluate(int n1, int n2);
	/*
	*  A method called getPrecedence returns the precedence of
	*  the mod operator.
	*
	*  @retval		   int		 precedence of the mod operator
	*
	*/

	int getPrecedence();

};

#include "Mod_Command.cpp"

#endif   // !defined _MOD_COMMAND_H_
