// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Stack.h"
#include "Array.h"

//
// Stack
//
// initializing the stack data which is of type array
// and the top of the stack to 0
template <typename T>
Stack <T>::Stack (void)
	: stack_array(15), stack_top(0)
{
	
}

//
// Stack
//
// Copy constructor for the stack
template <typename T>
Stack <T>::Stack (const Stack & stack)
	: stack_array(stack.size()), stack_top(stack.stack_top)
{
	
	for (size_t i = 0; i < stack.stack_top; i++)
	{

		this->stack_array[i] = stack.stack_array[i];

	}

}

//
// ~Stack
//
// destructor deleting the stack data
template <typename T>
Stack <T>::~Stack (void)
{

}

//
// push
//
// Checking to seee the value of the top of stack
// is greater than the size of stack data ( type array )
// if so then we resize the stack array to accomodate the
// new data
template <typename T>
void Stack <T>::push (T element)
{

	if ( stack_top == stack_array.size() )
	{
		
		stack_array.resize(stack_top * 2);

	}
	// COMMENT You code will fail since stack_data_ is null. Morover, you
	// should not need a pointer here since the array class is supposed to
	// contain the data
  
	// Resolved: removed stack_data_. Instead using stack_array which is of
	// type array to enable aggregation and also removing pointers.

	//stack_top = stack_top + 1;
	
	stack_array.set(stack_top++, element);

}

//
// pop
//
// Checks to see if the stack is empty
// if it is then it will throw an exception
// if not then it pops off the element from the
// stack and hence shrinking the stack array
template <typename T>
void Stack <T>::pop (void)
{

	if ( is_empty() )
	{

		throw std::out_of_range("Cannot pop. Stack is empty");

	} else {
		
	// COMMENT You code will fail since stack_data_ is null. Morover, you
	// should not need a pointer here since the array class is supposed to
	// contain the data.
  
	// Resolved: removed stack_data_. Instead using stack_array which is of
	// type array to enable aggregation and also removing pointers.
		stack_array.get(stack_top);
		
		stack_top = stack_top - 1;
	
	}

}


//
// top
//
template <typename T>
T Stack <T>::top(void) const
{
	if ( is_empty() ) {

		std::cout << "Stack is empty." << std::endl;

	}else {
		
		return stack_array.get(stack_top - 1);
		
	}

}

//
// is_empty
//
template <typename T>
bool Stack <T>::is_empty(void) const
{
	if (stack_top == 0) {

		return true;

	}
	else
	{

		return false;

	}
	
}


//
// operator =
//
// assignment operator
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	// COMMENT This is not possible since you are not using inheritence.
  
	// Resolved: Removed reference to Array. Using the correct syntax 
	// for aggregation.
	if (this != &rhs)
	{

		if (rhs.stack_top > this->stack_top)
		{

			this->stack_top = rhs.stack_top;

		}
		for (size_t i = 0; i < stack_top; i++)
		{

			this->stack_array[i] = rhs.stack_array[i];

		}

	}
	return *this;

}

//
// clear
//
// clear's the stack by popping of all elements from stack
template <typename T>
void Stack <T>::clear (void)
{

	for (size_t i = stack_top; i >= 0; i--)
	{
		
		pop();
			
	}

}
