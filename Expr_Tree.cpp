// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Expr_Tree.h"

//
// Expr_Tree
//
// Default constructor
Expr_Tree::Expr_Tree(void)
	: root(nullptr)
{
	
}

//
// ~Expr_Tree
//
// Destructor
Expr_Tree::~Expr_Tree(void)
{

}

//
// Expr_Tree
//
// Copy constructor
Expr_Tree::Expr_Tree(Expr_Node * r)
	: root(r)
{

}

//
// eval()
//
// evaluates the tree
int Expr_Tree::evaluate_expression(void)
{

	this->root->accept(evaluate_tree);

	int final_result = this->evaluate_tree.result();

	std::cout << "Answer: " << final_result << std::endl;
	return final_result;

}