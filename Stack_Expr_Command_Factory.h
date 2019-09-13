//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _STACK_EXPR_COMMAND_FACTORY_H_
#define _STACK_EXPR_COMMAND_FACTORY_H_

#include "Expr_Command_Factory.h"
#include "Num_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Division_Command.h"
#include "Mod_Command.h"
#include "Parenthesis_Command.h"

/**
 * @class Stack_Expr_Command_Factory
 *
 * Basic implementation of a standard Stack_Expr_Command_Factory for all kinds of expressions.
 */
class Stack_Expr_Command_Factory
	: public Expr_Command_Factory
{
public:

	/// Default constructor.
	Stack_Expr_Command_Factory(void) = default;

	/// Destructor.
	~Stack_Expr_Command_Factory(void);

	Stack_Expr_Command_Factory(Stack <int> & s);

	/**
	 * Defines a pure virutal method from Expr_Command_factory. Each method returns a concrete
	 * object to evaluate an expression.
	 */
	virtual Num_Command * create_number_command(Stack<int> & stack, int num);

	virtual Add_Command * create_add_command(void);

	virtual Subtract_Command * create_subtract_command(void);

	virtual Multiply_Command * create_multiply_command(void);

	virtual Division_Command * create_division_command(void);

	virtual Mod_Command * create_mod_command(void);

	virtual Parenthesis_Command * create_parenthesis_command(void);

private:
	/// prevent the client from calling following method in all sub classes.

	Stack<int> & stack;
	int num;
};

#include "Stack_Expr_Command_Factory.cpp"

#endif   // !defined _STACK_EXPR_COMMAND_FACTORY_H_
