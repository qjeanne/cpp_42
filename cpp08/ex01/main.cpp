#include <iostream>
#include "span.hpp"

int main()
{
	span ss = span(100000);
	std::vector<int> v(100000, 120);
	ss.addNumber(v.begin(), v.end());


	unsigned int	N = 10;
	span sp = span(N);

	srand(time(NULL));
	try
	{
		for (int i = 0; i < N; i++)
		{
			int n = rand() % 131;
			sp.addNumber(n);
			std::cout << i << " : " << n << std::endl;
		}
	}
	catch (span::myException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (span::myException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
