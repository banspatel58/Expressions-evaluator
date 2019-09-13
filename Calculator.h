//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include "Expr_Node.h"
#include "Expr_Tree_Builder.h"
#include "Eval_Expr_Tree.h"
#include "Math_Expr.h"
#include <iterator>
#include <memory>
#include <sstream>
#include <iostream>
#include <map>
/**
 * @class Calculator
 *
 * Basic implementation of a standard Calculator for all kinds of binary
 * expressions.
 */
class Calculator
{
public:

	/// Default constructor.
	Calculator(void);

	/// Destructor.
	~Calculator(void);

	/// Copy Constructor
	Calculator(Expr_Tree_Builder & builder);

	bool parse_expression(const std::string & infix);

	int evaluate(const std::string & infix);

	void map_variables(void); 
	std::map<std::string, int> get_variable_map();

	bool check_parenthesis = false;
private:
	Expr_Tree_Builder & builder_;

protected:

	std::map<std::string, int> variable_map;

};

#include "Calculator.cpp"

#endif   // !defined  _CALCULATOR_H_

