//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _EXPR_COMMAND_FACTORY_H_
#define _EXPR_COMMAND_FACTORY_H_

#include "Num_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Division_Command.h"
#include "Mod_Command.h"
#include "Parenthesis_Command.h"

/**
 * @class Expr_Command_Factory
 *
 * Basic implementation of a standard Binary_Op_Command for all kinds of binary
 * expressions.
 */
class Expr_Command_Factory
{
public:

	/// Default constructor.
	Expr_Command_Factory(void);

	/// Destructor.
	~Expr_Command_Factory(void);

	/**
	 * Defines a pure virutal method called evaluate. Since each operator has its
	 * own method to evaluate an expression, Expr_Command_Factory does not define the
	 * method instead each and every operator(child) is forced to define its own method.
	 */
	virtual Num_Command * create_number_command (Stack<int> & stack, int num) = 0;

	virtual Add_Command * create_add_command(void) = 0;

	virtual Subtract_Command * create_subtract_command(void) = 0;

	virtual Multiply_Command * create_multiply_command(void) = 0;

	virtual Division_Command * create_division_command(void) = 0;

	virtual Mod_Command * create_mod_command(void) = 0;

	virtual Parenthesis_Command * create_parenthesis_command(void) = 0;

private:
	/// prevent the client from calling following method in all sub classes.
	//Expr_Command_Factory(const Expr_Command_Factory &);

	//const Expr_Command_Factory & operator = (const Expr_Command_Factory &);


};

#include "Expr_Command_Factory.cpp"

#endif   // !defined _EXPR_COMMAND_FACTORY_H_
