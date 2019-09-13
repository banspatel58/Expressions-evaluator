// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Calculator.h"

//
// Convert_to_Postfix_Command
//
// Default constructor
Calculator::Calculator(void)
	: builder_(*(new Expr_Tree_Builder()))
{

}

//
// ~Convert_to_Postfix_Command
//
// Destructor
Calculator::~Calculator(void)
{

}

//
// Convert_to_Postfix_Command
//
// Default constructor
Calculator::Calculator(Expr_Tree_Builder & builder)
	: builder_(builder)
{

}

//
// parse_expression(const std::string & infix)
//
// evaluates the expression and converts the expression to an expression tree
// returns true if the conversion is successful.
//
bool Calculator::parse_expression(const std::string & infix)
{

	int counter = 0;
	
	// parses input expression as tokens
	std::istringstream input(infix);

	// string: token
	std::string token;
	std::string sub_string;

	std::string open_parenthesis = "(";
	std::string close_parenthesis = ")";
	std::string spaces = " ";
		
	unsigned first_delim = infix.find(open_parenthesis);
	unsigned close_delim = infix.find(close_parenthesis);
	unsigned white_space = infix.find(spaces);
	
	// start a new expression
	this->builder_.start_expression();
	
	while (!input.eof()) {
		
		input >> token;
		
		if (token == "+") {

			// build a add operator
			this->builder_.Build_Add_Operator();

		}
		else if (token == "-") {

			// build a subtract operator
			this->builder_.Build_Subtract_Operator();

		}
		else if (token == "*") {

			// build a multiply operator
			this->builder_.Build_Multiplication_Operator();

		}
		else if (token == "/") {

			// build a division operator
			this->builder_.Build_Divide_Operator();

		}
		else if (token == "%") {

			// build a modulos command object
			this->builder_.Build_Modulus_Operator();

		} 
		else if (token == "(") {

			counter++;
			check_parenthesis = true;
					   
			sub_string = infix.substr(first_delim + open_parenthesis.size() + white_space, close_delim - close_parenthesis.size() - white_space);
			std::cout << sub_string << std::endl;

		}		
		else if (token == ")") {

			counter--;
			check_parenthesis = true;

		}
		else if (token[0] >= 65) {

			std::map<std::string, int> m = get_variable_map();
			this->builder_.Build_Variable(token, m);

		}
		else {

			// parse the string to an integer.
			int operand;
			operand = std::stoi(token);

			// create a add command object.
			this->builder_.Build_Number(operand);

		}

	}
	
	this->builder_.build_Expression();

	return true;

}

std::map<std::string, int> Calculator::get_variable_map()
{

	return variable_map;

}

//
// map_variables(void)
//
// prompts user with the variable and maps
// the variable to its user input value. 
// These mapped values are stored in map
void Calculator::map_variables(void)
{
	std::string char_array[] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r",
		"s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N",
		"O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };

	int value;
	// string: token
	std::string token;

	std::string user_input;
	for (size_t i = 0; i < 52; i++)
	{

		std::cout << "Enter the value for " << char_array[i] << " : ";

		getline(std::cin, user_input);

		// parses input expression as tokens
		std::istringstream input(user_input);

		input >> token;

		value = std::stoi(token);

		// store the variable and its corressponding value in a map
		variable_map.insert(std::pair<std::string, int>(char_array[i], value));

	}

}

//
// evaluate(const std::string & infix)
//
// checks the expression user entered 
// and evaluates the expression
int Calculator::evaluate(const std::string & infix)
{

	if (!this->parse_expression(infix)) 
	{

		throw std::runtime_error("Bad Expression");

	}

	std::unique_ptr<Math_Expr> expr(this->builder_.get_expression());

	if (expr.get() == nullptr) {

		throw std::runtime_error("No Expression");

	}

	return expr->evaluate_expression();

}