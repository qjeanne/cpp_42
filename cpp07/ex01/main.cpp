#include "iostream"
#include "iter.hpp"

template <typename T>
void print( T const & x )
{
	std::cout << x << std::endl;
	return ;
}

int main(void)
{
	std::string	str_array[4] = {"a" , "b", "c", "d"};
	int int_array[4] = {1, 2, 3, 4};

	int			size = 4;

	iter(str_array, size, print);
	std::cout << std::endl;
	iter(int_array, size, print);
	return (0);
}