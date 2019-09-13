//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _ARRAY_ITERATOR_H_
#define _ARRAY_ITERATOR_H_

#include "Array.h"
#include <cstring>

/**
 * @class Array_Iterator
 *
 * Basic implementation of a standard Array_Iterator for iterating
 * in arrays
 */
template <typename T>
class Array_Iterator
{
public:
	/// Type definition of the element type.
	typedef T type;

	/// Default constructor.
	//Array_Iterator(void) = default;

	/// Copy Constructor
	Array_Iterator(Array<T> & a);

	/// Destructor.
	~Array_Iterator(void);


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
	T operator * (void);
	
	/**
	 * Boolean operator to check if it has completed iteration
	 * over the array elements
	 *
	 * @return	True	if current position is greater than array size
	 * @return	False	if current position is less than array size
	 */
	bool is_done(void);

	/**
	 * Increments the current position every time during iteration
	 * over the array elements
	 */
	bool advance(void);

private:

	// Reference to array.
	Array<T> & a_;
	size_t Current_Position;

};

#include "Array_Iterator.cpp"

#endif   // !defined _ARRAY_ITERATOR_H_
