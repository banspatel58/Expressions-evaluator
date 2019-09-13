// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <stdexcept>         // for std::out_of_bounds exception

//
// Array
//
// Default constructor
template <typename T>
Array<T>::Array(void)
	: Array_Base<T>(), max_size_(0)
{

}

//
// Array
//
//Assigns the values to the variables.
template <typename T>
Array<T>::Array(size_t length)
	: Array_Base<T>(length), max_size_(length)
{

}

//
// Array (size_t, char)
//
// Initializing array
template <typename T>
Array <T>::Array (size_t length, T fill)
	: Array_Base<T>(length, fill), max_size_(length)
{

}

//
// Array (const Array &)
//
// copy constructor
template <typename T>
Array <T>::Array (const Array & array)
	: Array_Base<T>(array), max_size_(array.cur_size_)
{

}

//
// ~Array
//
// Destructor
template <typename T>
Array <T>::~Array (void)
{

}

//
// resize
//
// resizes the array to the new size. retains all the
// elements that were in the previous array
template <typename T>
void Array <T>::resize (size_t new_size)
{

	T * MyArray = nullptr;

	if (new_size > this->cur_size_ )
	{

		this->cur_size_ = new_size;

	}

	MyArray = new T[this->cur_size_];
	for ( size_t i = 0; i < this->cur_size_; i++ )
	{

		MyArray[i] = this->data_[i];

	}

	this->cur_size_ = new_size;

	delete[] this->data_;

	this->data_ = MyArray;

}


// shrinks the array to free the unused memory
template <typename T>
void Array<T>::shrink(void)
{

	// create a new temp. array with size equal to the number of
	// elements in the array that is current size
	T * MyArray = nullptr;

	if ( this->max_size_ > this->cur_size_ ) {

		MyArray = new T[this->cur_size_];

		for (size_t i = 0; i < this->cur_size_; i++)
		{
			// restore the elements from the original data
			MyArray[i] = this->data_[i];

		}

	}

	delete[] this->data_;

	this->data_ = MyArray;

}


//
// reverses the Array
//
template <typename T>
void Array<T>::reverse(void)
{

	for( size_t i = 0, j = this->cur_size_; i < j; i++, j--  ){

		int temp = this->data_[i];

		this->data_[i] = this->data_[j];

		this->data_[j] = temp;

	}

}

//
// slices an Array_Base from the index given till
// the end but not including the end
//
template <typename T>
T Array<T>::slice(size_t begin) const
{
	//creates a shallow copy of an Array_Base
	Array * NewArray = new Array(Array_Base<T>::cur_size_);
	T * MyArray = Array_Base<T>::data_;
	for (size_t i = 0; i < Array_Base<T>::cur_size_ - begin; i++) {

		for (size_t j = begin; j < Array_Base<T>::cur_size_; j++) {

			MyArray[i] = Array_Base<T>::data_[j];

		}

	}
	return *NewArray;
}
//
// slices an Array_Base starting from the beginning
// index given till the end index given
//
template <typename T>
 T Array<T>::slice(size_t begin, size_t end) const
{
	//creates a shallow copy of an Array_Base.
	 Array * NewArray = new Array(Array_Base<T>::cur_size_);
	T * MyArray = Array_Base<T>::data_;
	for (size_t i = 0; i < end - begin; i++) {

		for (size_t j = begin; j < end; j++) {

			MyArray[i] = Array_Base<T>::data_[j];

		}

	}

	return *NewArray;
}
