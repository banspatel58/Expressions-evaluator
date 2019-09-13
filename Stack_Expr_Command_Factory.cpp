// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Stack_Expr_Command_Factory.h"

//
// Stack_Expr_Command_Factory
//
// Default constructor
/*Stack_Expr_Command_Factory::Stack_Expr_Command_Factory(void)
	: stack(*new Stack<int>())
{

}*/

//
// Stack_Expr_Command_Factory (Stack <T> & stack)
//
// copy constructor
Stack_Expr_Command_Factory::Stack_Expr_Command_Factory(Stack <int> & s)
	: stack(s)
{

}

//
// ~Stack_Expr_Command_Factory
//
// Destructor
Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory(void)
{

}

//
// create_number_command
//
// creates a number command
Num_Command * Stack_Expr_Command_Factory::create_number_command(Stack<int> & stack, int num)
{

	return new Num_Command(stack, num);

}

//
// create_add_command
//
// creates a add command
Add_Command * Stack_Expr_Command_Factory::create_add_command(void)
{

	return new Add_Command();

}

//
// create_subtract_command
//
// creates a subtract command
Subtract_Command * Stack_Expr_Command_Factory::create_subtract_command(void)
{

	return new Subtract_Command();

}

//
// create_multiply_command
//
// creates a multiply command
Multiply_Command * Stack_Expr_Command_Factory::create_multiply_command(void)
{

	return new Multiply_Command();

}

//
// create_division_command
//
// creates a division command
Division_Command * Stack_Expr_Command_Factory::create_division_command(void)
{

	return new Division_Command();

}

//
// create_mod_command
//
// creates a mod command
Mod_Command * Stack_Expr_Command_Factory::create_mod_command(void)
{

	return new Mod_Command();

}

//
// create_parenthesis_command
//
// creates a parenthesis command
Parenthesis_Command * Stack_Expr_Command_Factory::create_parenthesis_command(void)
{

	return new Parenthesis_Command();

}