//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _CONVERT_TO_POSTFIX_H_
#define _CONVERT_TO_POSTFIX_H_
#define SIZE 25

#include "Array.h"
#include "Stack.h"
#include "Expr_Command_Factory.h"
#include "Expr_Command.h"
#include "Array_Iterator.h"
#include "Expr_Node.h"
#include "Expr_Tree_Builder.h"
#include <stdexcept>
#include <sstream>
#include <iostream>
#include <string>
/**
 * @class Convert_to_Postfix
 *
 * Basic implementation of a standard convert_to_postfix for all kinds of binary
 * expressions.
 */
class Convert_to_Postfix
{
public:

	/// Default constructor.
	Convert_to_Postfix(void);

	/// Destructor.
	~Convert_to_Postfix(void);

	/**
	 * A boolean method called infix_to_postfix. it evaluates the expression
	 * and converts the expression from infix format to postfix.
	 *
	 * @param[in]      std::string & infix									 number 1
	 * @param[in]      Expr_Command_Factory<Expr_Command *> & factory        number 2
	 * @param[in]	   Array <Expr_Command *> & postfix						 product of two numbers
	 * @reval		   bool	
	 */
	bool infix_to_postfix(const std::string & infix, Expr_Command_Factory & factory, Array<Expr_Command *> & postfix);

	void evaluate_postfix(Stack<int> & stack, Array<Expr_Command*>& postfix);
};

#include "Convert_to_Postfix.cpp"

#endif   // !defined  _CONVERT_TO_POSTFIX_H_

