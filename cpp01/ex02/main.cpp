#include <iostream>
#include "string"

int main()
{
	std::string		string;
	std::string		*stringPTR;
	std::string&	stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	std::cout << &string << " string: " << string << std::endl;
	std::cout << &stringPTR << " -> " << stringPTR << " string by stringPTR: " << *stringPTR << std::endl;
	std::cout << &stringREF << " string by stringREF: " << stringREF << std::endl;
	return 0;
}
