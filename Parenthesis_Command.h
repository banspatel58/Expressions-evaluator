//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _PARENTHESIS_COMMAND_H_
#define _PARENTHESIS_COMMAND_H_

#include "Binary_Op_Command.h"
#include "Stack.h"
/**
 * @class Parenthesis_Command
 *
 * Basic implementation of a standard Parenthesis_Command for all kinds of binary
 * expressions.
 */
class Parenthesis_Command
	: public Expr_Command
{
public:

	/// Default constructor.
	Parenthesis_Command(void);

	/// Destructor.
	~Parenthesis_Command(void);

	/**************************************************************
	* NOTE For the Instructor: 
	* I am confused in implementing this function
	* I feel this method should be in the driver file 
	* because we are popping of operators from stack
	* till we find closing parenthesis. But then wouldn't
	* it violate the goal of getting least complexity. I mean
	* it has to check through each and every operator in order 
	* to find the ')'. I am confused in implementing the command
	* pattern for this operator
	***************************************************************/

	/**
	 *  A virutal method called evaluate. The parenthesis command 
	 *  ensures that equation within parenthesis is solved first
	 *
	 * @param[in]      n1        (
	 * @param[in]      n2        )
	 * @retval		   bool		 true if two parenthesis meet
	 */
	virtual void execute(Stack<int> & s);

	int getPrecedence();

};

#include "Parenthesis_Command.cpp"

#endif   // !defined _PARENTHESIS_COMMAND_H_
