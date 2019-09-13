// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array_Base.h"
#include <stdexcept>         // for std::out_of_bounds exception

//
// Array_Base
//
// Default constructor
template <typename T>
Array_Base <T>::Array_Base(void)
	: data_(nullptr), cur_size_(0)
{

}

//
// Array_Base (size_t)
//
// Initializng constructor
template <typename T>
Array_Base <T>::Array_Base(size_t length)
	: data_(new T[length]), cur_size_(length)
{

}

//
// Array_Base (size_t, char)
//
// Initializing Array_Base
template <typename T>
Array_Base <T>::Array_Base(size_t length, T fill)
	: data_(new T[length]), cur_size_(length)
{

	Array_Base <T>::fill(fill);

}

//
// Array_Base (const Array_Base &)
//
// copy constructor
// creates a deep copy of the array so that it is not
// dependent on the original array hence any changes made
// does not reflect changes in the original array but just
// the deep copy of an array
template <typename T>
Array_Base <T>::Array_Base( const Array_Base & Array_Base )
	: cur_size_(Array_Base.size())
{

	this->data_ = new T[cur_size_];
	for ( size_t i = 0; i < cur_size_; i ++ )
	{

		this->data_[i] = Array_Base.data_[i];

	}

}

//
// ~Array_Base
//
// Destructor
// deletes the elements on heap to avoid memory leak
template <typename T>
Array_Base <T>::~Array_Base(void)
{

	delete[] this->data_;

}

//
// operator =
//
// Overloaded Assignment operator
template <typename T>
const Array_Base <T> & Array_Base <T>::operator = ( const Array_Base & rhs )
{

	if ( this != &rhs )
	{

		if ( rhs.size() >= cur_size_ )
		{

			cur_size_ = rhs.size();

			data_ = new T[cur_size_];

		}

		for (size_t i = 0; i < cur_size_; i++)
		{

			data_[i] = rhs.data_[i];

		}

	}
	return *this;

}

//
// operator []
//

// returns the element at the given index
// if index is out of range than it throws an
// exception
template <typename T>
T & Array_Base <T>::operator [] ( size_t index )
{

	if (index >= cur_size_ || index < 0)
	{

		throw std::out_of_range("Invalid index value");
	}

	return data_[index];

}

//
// operator []
//
template <typename T>
const T & Array_Base <T>::operator [] ( size_t index ) const
{

	if ( index >= cur_size_ || index < 0 )
	{

		throw std::out_of_range("Invalid \a index value");

	}

	return data_[index];

}

//
// get
//
// returns the character at the specified index,
// if index out of range throws an exception
template <typename T>
T Array_Base <T>::get( size_t index ) const
{

	if ( index >= cur_size_ || index < 0 )
	{

		throw std::out_of_range("Invalid \a index value");

	}

	return data_[index];

}

//
// set
//
// sets the value of an array at specified index to a
// given value. If index out of range than throws an
// exception
template <typename T>
void Array_Base <T>::set( size_t index, T value )
{

	if ( index >= cur_size_ || index < 0 )
	{

		throw std::out_of_range("Invalid \a index value");

	}

	data_[index] = value;

}

//
// find (char)
//
// Parses through an array to find the given character.
// Returns the index of the character if found in an array
// else if character not found returns -1
template <typename T>
int Array_Base <T>::find( T value ) const
{

	for ( size_t i = 0; i < cur_size_; i ++ )
	{

		if ( this->data_[i] == value )
		{

			return i;

		}

	}

	return -1;

}

//
// find (char, size_t)
//

// Parses through an array to find the given character starting
// from the given start index in the array. If the start index
// is out of range than it throws an error else it returns the
// index of the character. If the character is not found in a
// given array starting from the given position then it returns -1
template <typename T>
int Array_Base <T>::find( T val, size_t start ) const
{

	if ( start >= this->cur_size_ || start < 0 )
	{

		throw std::out_of_range("Invalid index value");

	}
	for ( size_t i = start; i < this->cur_size_; i++ )
	{

		if ( this->data_[i] == val )
		{

			return i;

		}

	}

	return -1;

}

//
// over loaded operator == checks for equality in arrays
//
// checks to see if two arrays are of same size and value.
// If so it returns true else it returns false
template <typename T>
bool Array_Base <T>::operator == ( const Array_Base & rhs ) const
{

	for ( size_t i = 0; i < cur_size_; i ++ )
	{

		if ( data_[i] == rhs.data_[i] )
		{

			return true;

		}
		else
		{

			return false;

		}

	}
	if ( cur_size_ == rhs.size() )
	{

		return true;

	}
	else
	{

		return false;

	}

}

//
// over loaded operator != checks for inequality in array
//
// Checks if the two arrays differ in length or have
// different elements.If so then return true else return false
template <typename T>
bool Array_Base <T>::operator != ( const Array_Base & rhs ) const
{

	return !(*this == rhs);

}

//
// fills the array with the given value
//
template <typename T>
void Array_Base <T>::fill( T value )
{

	for ( size_t i = 0; i < cur_size_; i ++ )
	{

		data_[i] = value;

	}

}
