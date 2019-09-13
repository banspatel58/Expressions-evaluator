// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Convert_to_Postfix.h"

//
// Convert_to_Postfix_Command
//
// Default constructor
Convert_to_Postfix::Convert_to_Postfix(void)
{

}

//
// ~Convert_to_Postfix_Command
//
// Destructor
Convert_to_Postfix::~Convert_to_Postfix(void)
{

}

//
// infix_to_postfix(const std::string & infix, Expr_Command_Factory<Expr_Command *> & factory, Array <Expr_Command *> & postfix)
//
// evaluates the expression and converts the expression which is inform of infix to expression in form of postfix
// returns true if the conversion is successful.
//
bool Convert_to_Postfix::infix_to_postfix(const std::string & infix, Expr_Command_Factory & factory, Array<Expr_Command*>& postfix)
{
	size_t i = 0;
	// parses input expression as tokens
	std::istringstream input(infix);

	// string: token
	std::string token;

	int array_size = SIZE;

	// command object
	Expr_Command * cmd = 0;

	// stack to store commands 
	// it assist infix to postfix
	Stack <Expr_Command *> temp;
	Stack<int> stack;

	while (!input.eof()) {

		input >> token;
		if (token == "+") {

			// create a add command object
			cmd = factory.create_add_command();
			
		}
		else if (token == "-") {

			// create a subtract command object
			cmd = factory.create_subtract_command();

		}
		else if (token == "*") {

			// create a multiply command object
			cmd = factory.create_multiply_command();

		}
		else if (token == "/") {

			// create a division command object
			cmd = factory.create_division_command();

		}
		else if (token == "%") {

			// create a modulos command object
			cmd = factory.create_mod_command();

		}
		else if (token == "(") {

			//cmd = factory.create_parenthesis_command();
			//temp.push(cmd);
			infix_to_postfix(infix, factory, postfix);
			continue;

		}
		else if (token == ")")
		{

			while (!temp.is_empty())
			{

				postfix.resize(i + 1);
				postfix[i] == temp.top();
				temp.pop();
				i++;
				
			}
			temp.pop();
			
		}
		else {

			// parse the string to an integer.
			int operand;
			operand = std::stoi(token);

			// create a add command object.
			cmd = factory.create_number_command(stack, operand);

			// if the token is a number then append it to the array
			postfix.resize(i + 1);
			postfix[i] = cmd;
			i++;
			continue;

		}
		
		while (!temp.is_empty() && temp.top()->getPrecedence() >= cmd->getPrecedence())
		{
			// else append the commmand by precedence.
			postfix.resize(i + 1);
			postfix[i] = temp.top();
			i++;
			temp.pop();

		}

		temp.push(cmd);

	}
	
	while (!temp.is_empty())
	{

		postfix.resize(i + 1);
		postfix[i] = temp.top();
		i++;
		temp.pop();
		
	}

	return true;

}

void Convert_to_Postfix::evaluate_postfix(Stack<int> & stack, Array<Expr_Command *>& postfix)
{

	int result = 0;
	Array_Iterator<Expr_Command *> iter(postfix);
	for (; !iter.is_done(); iter.advance())
	{

		(*iter)->execute(stack);
		delete (*iter);
				
	}
	
	result = stack.top();
	stack.pop();

	std::cout << "Result: " << result << std::endl;
	
}
