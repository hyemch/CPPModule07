#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<class T>
class	Array
{
public:
	Array() :  arraySize(0)
	{
		array = new T[0];
	};

	Array(unsigned int n)
	{
		arraySize = n;
		array = new T[arraySize];
		for (int i = 0; i < arraySize; i++)
			array[i] = T();
	};

	~Array()
	{
		if (array != NULL)
			delete[] array;
	};

	Array(const Array<T>& other)
	{
		arraySize = other.arraySize;
		array = new T[arraySize];
		for (int i = 0; i <arraySize; i++)
			array[i] = other.array[i];
	};

	Array& operator=(const Array<T>& other)
	{
		if (this != &other)
		{
			delete[] array;
			arraySize = other.arraySize;
			array = new T[arraySize];
			for (int i = 0; i < arraySize; i++)
				array[i] = other.array[i];
		}
        return *this;
	};

    class OutOfBounds : public std::exception
    {
    public:
        const char * what() const throw()
        {
            return ("Index out of bounds");
        };
    };

    T&  operator[](int index)
    {
        if (index >= arraySize || index < 0)
            throw OutOfBounds();
        else
            return array[index];
    };

    const T&  operator[](int index) const
    {
        if (index >= arraySize || index < 0)
            throw OutOfBounds();
        else
            return array[index];
    };

    int size() const
    {
        return arraySize;
    };

private:
	T*	array;
	int	arraySize;
};

#endif