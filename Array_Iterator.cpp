// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array_Iterator.h"

//
// Array_Iterator
//
// Default constructor
//template <typename T>
/*Array_Iterator<T>::Array_Iterator(void)
	: a_(nullptr), Current_Position(0)
{

}*/

//
// Array_Iterator (Array<T> & array)
//
// copy constructor of stack
template <typename T>
Array_Iterator <T>::Array_Iterator(Array<T> & array)
	: a_(array), Current_Position(0)
{

}

//
// ~Array_Iterator
//
// Destructor
template <typename T>
Array_Iterator <T>::~Array_Iterator(void)
{

}

template <typename T>
T * Array_Iterator<T>::operator -> (void)
{

	return &this->a_.get(this->Current_Position);

}

template <typename T>
T Array_Iterator<T>::operator * (void)
{

	return this->a_.get(this->Current_Position);

}

template <typename T>
bool Array_Iterator<T>::is_done(void)
{

	return this->Current_Position >= this->a_.size();	

}

template <typename T>
bool Array_Iterator<T>::advance(void)
{
	
	++ this->Current_Position;
	return true;
}
