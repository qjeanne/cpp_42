#include <iostream>
#include "easyfind.hpp"
#include "vector"

int main()
{
	std::vector<int> vect;
	for (int nCount=0; nCount < 5; ++nCount)
		vect.push_back(nCount);

	std::vector<int>::iterator it;
	try
	{
		it = easyFind(vect, 5);
		std::cout << *it << std::endl;
	}
	catch (MyException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
