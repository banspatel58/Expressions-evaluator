#include "Expr_Command_Factory.h"
#include "Stack_Expr_Command_Factory.h"
#include "Add_Node.h"
#include "Subtract_Node.h"
#include "Mod_Node.h"
#include "Multiply_Node.h"
#include "Division_Node.h"
#include "Convert_to_Postfix.h"
#include "Calculator.h"
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char * argv[])
{	
	
	bool KeepGoing = true;
	std::string expression;

	Calculator calculate;

	// stack to store results 
	// after evaluating expression
	Stack <int> result;

	//calculate.map_variables();
	while (KeepGoing)
	{
		std::cout << "Enter the expression: ";

		getline(std::cin, expression);
		
		if (expression == "QUIT") 
		{

			KeepGoing = false;
			break;

		}
		std::cout << "Expression you entered is: " << expression << std::endl;

		if (calculate.parse_expression(expression)) {

			calculate.evaluate(expression);
		
		}

		/*
		* NOTE FOR INSTRUCTOR:
		* My Code has some issues with Calculator.cpp file complaining that 
		* std::is not a member of runtime exception. I do not have my 
		* parenthesis operator and variable part working yet. Because I want
		* to make sure my base code works prperly. I am confused with the 
		* builder pattern currently and figuring out how to make it 
		* integrate with visitor pattern.
		*/
		
	}
	return 0;
}