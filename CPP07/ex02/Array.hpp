
#pragma once

#include <stdint.h>
#include <exception>
#include <iostream>

template<class T>
class Array
{
	private:
		T           *_content;
		size_t      _size;
		
	public:
		Array(void) : _content(NULL), _size(0)
		{
		}

		Array(const uint32_t n) : _content(), _size(n)
		{
			for (size_t i = 0; i < _size; i++)
				_content[i] = T();
		}

		Array(const Array &a)
		{
			*this = a;
		}

		~Array()
		{
			delete[] this->_content;
		}

		Array       &operator=(const Array &array)
		{
			if (this == &array)
				return (*this);
			this->_size = array.size();
			this->_content = new T[array.size()];
			for (size_t i = 0; i < array.size(); i++)
				this->_content[i] = array[i];
			return (*this);
		}

		T           &operator[](size_t index) throw(std::exception)
		{
			if(index >= this->_size)
				throw std::exception();
			return (this->_content[index]);
		}

		const T     &operator[](size_t index) const throw(std::exception)
		{
			if(index >= this->_size)
				throw std::exception();
			return (this->_content[index]);
		}

		uint32_t    size(void) const
		{
			return (this->_size);
		}     
};
