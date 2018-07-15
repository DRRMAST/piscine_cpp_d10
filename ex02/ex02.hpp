#ifndef EX02_HPP
#define EX02_HPP

#include <iostream>

template<typename T>
T min(T a, T b)
{
	T re;
	std::cout << "template min" << std::endl;
	if(a <= b)
		re = a;
	else
		re = b;
	return re;
}

int	min(int a, int b)
{
	int re;
	std::cout << "non-template min" << std::endl;
	if(a <= b)
		re = a;
	else
		re = b;
	return re;
}

template<typename T, typename U>
T templateMin(T *array, U size)
{
	T re;
	unsigned int i = 1;
	if(size < 1)
		return 0;
	re = array[0];
	while (--size)
		re = min<T>(re, array[i++]);
	return re;
}

int	nonTemplateMin(int *array, int size)
{
	int re;
	unsigned int i = 1;

	if(size < 1)
		return 0;
	re = array[0];
	while (size--)
		re = min(re, array[i++]);
	return re;
}

#endif
