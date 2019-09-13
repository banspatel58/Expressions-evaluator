//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _AUTO_POINTER_H_
#define _AUTO_POINTER_H_

/**
 * @class Auto_Pointer
 *
 * Basic implementation of a standard Auto_Pointer for Pointers
 */
template <typename T>
class Auto_Pointer
{
public:
	/// Type definition of the element type.
	typedef T type;

	/// Default constructor.
	Auto_Pointer(void);

	/// Constructor
	Auto_Pointer(T * ptr);

	/// Destructor.
	~Auto_Pointer(void);


	/**
	 * @overload ->
	 *
	 * return the pointer.
	 */
	T * operator -> (void);

	/**
	 * @overload *
	 *
	 * return the value of the pointer.
	 */
	T & operator * (void);

	operator T * (void);

	T & operator [] (int i);

private:
	
	// Pointer to the memory.
	T * ptr;

};

#include "Auto_Pointer.cpp"

#endif   // !defined _AUTO_POINTER_H_
