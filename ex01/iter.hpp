#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void	iter(T *arr, int length, F func)
{
	for (int i = 0; i < length; i++)
		func(arr[i]);
}

template <typename T, typename F>
void	iter(const T *arr, const int length, const F func)
{
	for (int i = 0; i < length; i++)
		func(arr[i]);
}

#endif