#ifndef EX01_HPP
#define EX01_HPP

#include <cstring>

template<typename T>
int	compare(T const& a, T const& b)
{
	if (a == b)
		return 0;
	else if (a > b)
		return 1;
	else
		return -1;
}

template<>
int	compare<const char*>(const char* const& a, const char* const& b)
{
	int re = strcmp(a, b);

	if (re == 0)
		return 0;
	else if (re > 0)
		return 1;
	else
		return -1;
}

#endif
