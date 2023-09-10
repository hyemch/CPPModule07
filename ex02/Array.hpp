#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<class T>
class	Array
{
public:
	Array() : array(NULL), arraySize(0)
	{
//		array = new T[0];
	}

	Array(unsigned int n)
	{
		arraySize = n;
		array = new T[arraySize];
		for (int i = 0; i < arraySize; i++)
			array[i] = T();
	}

	~Array()
	{
		if (array != NULL)
			delete[] array;
	}

	Array(const Array& other)
	{
		arraySize = other.arraySize;
		array = new T[arraySize];
		for (int i = 0; i <arraySize; i++)
			array[i] = other.array[i];
	}

	Array& operator=(const Array& other)
	{
		if (this != &other)
		{
			delete[] array;
			arraySize = other.arraySize;
			array = new T[arraySize];
			for (int i = 0; i < arraySize; i++)
				array[i] = other.array[i];
		}
	}

private:
	T*	array;
	int	arraySize;
};

#endif