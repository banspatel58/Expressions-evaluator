//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _VARIABLE_NODE_H_
#define _VARIABLE_NODE_H_
#include <map>
#include "Expr_Node.h"
#include "Expr_Node_Visitor.h"
/**
 * @class Variable_Node
 *
 * Basic implementation of a standard Variable_Node for all kinds of binary
 * expressions.
 */
class Variable_Node
	: public Expr_Node
{
public:

	/// Default constructor.
	Variable_Node(void);

	/// Destructor.
	virtual ~Variable_Node(void);

	Variable_Node(std::string variable, std::map<std::string, int> variable_value);

	virtual int eval(void);

	virtual int accept(Expr_Node_Visitor & v);

	virtual int get_variable_value();

private:

	std::string x;
	std::map<std::string, int> get_value;
};

#include "Variable_Node.cpp"

#endif   // !defined _VARIABLE_NODE_H_
