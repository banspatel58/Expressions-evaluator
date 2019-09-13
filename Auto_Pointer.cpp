// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Auto_Pointer.h"

//
// Auto_Pointer
//
// Default constructor
template <typename T>
Auto_Pointer<T>::Auto_Pointer(void)
	: ptr(nullptr)
{

}

//
// Auto_Pointer (T * ptr)
//
// copy constructor of stack
template <typename T>
Auto_Pointer <T>::Auto_Pointer(T * pointer)
	: ptr(pointer)
{

}

//
// ~Auto_Pointer
//
// Destructor
template <typename T>
Auto_Pointer <T>::~Auto_Pointer(void)
{

	if (0 != this->ptr)
	{

		delete [] this->ptr;

	}

}
template <typename T>
T * Auto_Pointer<T>::operator -> (void)
{

	return this->ptr;

}

template <typename T>
T & Auto_Pointer<T>::operator * (void)
{

	return *this->ptr;

}

template <typename T>
Auto_Pointer<T>::operator T * (void)
{

	return this->ptr;

}

template <typename T>
T & Auto_Pointer<T>::operator [] (int i)
{

	return this->ptr[i];

}
