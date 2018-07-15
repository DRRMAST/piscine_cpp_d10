#ifndef EX00_HPP
#define EX00_HPP

template<typename T>
void swap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
}


template<typename T>
T min(T a, T b)
{
	T re;
	if(a < b)
		re = a;
	else
		re = b;
	return re;
}

template<typename T>
T max(T a, T b)
{
	T re;
	if(a > b)
		re = a;
	else
		re = b;
	return re;
}

template<typename T>
T add(T a, T b)
{
	return a + b;
}

#endif
