// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Binary_Expr_Node.h"

//
// Binary_Expr_Node
//
// Default constructor
Binary_Expr_Node::Binary_Expr_Node(void)
	: left_(nullptr), right_(nullptr)
{

}

//
// ~Binary_Expr_Node
//
// Destructor
Binary_Expr_Node::~Binary_Expr_Node(void)
{

}

//
// execute(void)
//
// executes the operation
int Binary_Expr_Node::eval(void)
{

	if (this->right_ && this->left_)
	{

		this->right_->eval();
		this->left_->eval();
		
	}

}

//
// setLeftChild(Expr_Node * left_child)
//
// Setter: sets the value of the left child
void Binary_Expr_Node::setLeftChild(Expr_Node * left_child) {

	this->left_ = left_child;

}

//
// setRightChild(Expr_Node * Right_child)
//
// Setter: sets the value of the Right child
void Binary_Expr_Node::setRightChild(Expr_Node * right_child) {

	this->right_ = right_child;

}

//
// getLeftChild()
//
// Getter: gets the value of the left child
Expr_Node * Binary_Expr_Node::getLeftChild() {

	return this->left_;

}

//
// getRighttChild()
//
// Getter: gets the value of the right child
Expr_Node * Binary_Expr_Node::getRightChild() {

	return this->right_;

}
