//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _EXPR_TREE_H_
#define _EXPR_TREE_H_

#include "Expr_Node.h"
#include "Eval_Expr_Tree.h"
#include "Math_Expr.h"

/**
 * @class Expr_Tree
 *
 * Basic implementation of a standard Expr_Tree for all kinds of expressions.
 */
class Expr_Tree
	: public Math_Expr
{
public:

	/// Default constructor.
	Expr_Tree(void);

	/// Destructor.
	virtual ~Expr_Tree(void);
	
	/// Copy constructor.
	Expr_Tree(Expr_Node * r);

	virtual int evaluate_expression(void);


private:

	Expr_Node * root;
	Eval_Expr_Tree evaluate_tree;
};

#include "Expr_Tree.cpp"

#endif   // !defined _EXPR_TREE_H_
