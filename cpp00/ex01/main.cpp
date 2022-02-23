#include "PhoneBook.hpp"

int main()
{
	std::string	str;
	PhoneBook	phoneBook;
	int		i = 0;

	while (!std::cin.eof())
	{
		std::cout << "Enter the command" << std::endl;
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
		{
			phoneBook.add(i);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (str.compare("SEARCH") == 0)
			phoneBook.search();
		else if (str.compare("EXIT") == 0)
			exit(0);
	}
	return (0);
}
