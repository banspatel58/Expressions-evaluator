//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _MATH_EXPR_H_
#define _MATH_EXPR_H_
/**
 * @class Math_Expr
 *
 * Basic implementation of a standard Math_Expr for all kinds of expressions.
 */
class Math_Expr
{
public:

	/// Default constructor.
	Math_Expr(void);

	/// Destructor.
	virtual ~Math_Expr(void);

	// Used to evaluate the expression
	virtual int evaluate_expression(void) = 0;
};

#include "Math_Expr.cpp"

#endif   // !defined _MATH_EXPR_H_
