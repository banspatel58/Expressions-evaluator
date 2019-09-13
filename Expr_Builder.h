//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _EXPR_BUILDER_H_
#define _EXPR_BUILDER_H_
#include <map>
#include "Expr_Tree_Builder.h"
#include "Expr_Node.h"
#include "Binary_Expr_Node.h"
#include "Num_Node.h"
#include "Variable_Node.h"
#include "Math_Expr.h"
#include "Expr_Tree.h"
#include "Eval_Expr_Tree.h"
/**
 * @class Expr_Builder
 *
 * Basic implementation of a standard Expr_Builder for all kinds of expressions.
 */
class Expr_Builder 
{
public:

	/// Default constructor.
	Expr_Builder(void);

	/// Destructor.
	virtual ~Expr_Builder(void);

	virtual void start_expression(void) = 0;

	// Method to build concrete Number node
	virtual void Build_Number(int n) = 0;

	// Method to build concrete Addition node
	virtual void Build_Add_Operator(void) = 0;

	// Method to build concrete Subtraction node
	virtual void Build_Subtract_Operator(void) = 0;

	// Method to build concrete Multiplication node
	virtual void Build_Multiplication_Operator(void) = 0;

	// Method to build concrete Modulus node
	virtual void Build_Modulus_Operator(void) = 0;

	// Method to build concrete Division node
	virtual void Build_Divide_Operator(void) = 0;

	// Method to build concrete variable node
	virtual void Build_Variable(std::string x, std::map<std::string,int> m) = 0;

	// get current math expression
	virtual Math_Expr * get_expression(void) = 0;

};

#include "Expr_Builder.cpp"

#endif   // !defined _EXPR_BUILDER_H_
