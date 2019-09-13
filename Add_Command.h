//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "Binary_Op_Command.h"
/**
 * @class Add_Command
 *
 * Basic implementation of a standard Add_Command for all kinds of binary
 * expressions.
 */
class Add_Command
	: public Binary_Op_Command
{
public:

	/// Default constructor.
	Add_Command(void);
	
	/// Destructor.
	~Add_Command(void);
	
	/**
	 *  A virutal method called evaluate. The add command defines
	 * the evaluate function from the parent class. 
	 *
	 * @param[in]      n1        number 1
	 * @param[in]      n2        number 2
	 * @retval		   int		 sum of two numbers
	 */
	//virtual void execute(void);
	virtual int evaluate(int n1, int n2);
	/**
	 *  A method called getPrecedence returns the precedence of
	 *  the add operator.
	 *
	 * @retval		   int		 precedence of the add operator
	 */
	virtual int getPrecedence(void);

};

#include "Add_Command.cpp"

#endif   // !defined _ADD_COMMAND_H_
