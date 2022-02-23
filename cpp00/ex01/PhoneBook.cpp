#include "PhoneBook.hpp"

void PhoneBook::add(int i)
{
	contact[i].new_contact();
}

void print_word(std::string str)
{
	int 	n = 0;

	if ((int)str.size() <= 10)
		std::cout << std::setw(10) << str;
	else
	{
		while (n < 10 - (int) str.size())
			n++;
		n = 0;
		while (str[n] != '\0' && n < 10)
		{
			if (n == 9)
			{
				if (str[10] == '\0')
					std::cout << str[n];
				else
					std::cout << ".";
			} else
				std::cout << str[n];
			n++;
		}
	}
}

void PhoneBook::search()
{
	int 		i = 0;
	std::string	str;

	print_word("index");
	std::cout << "|";
	print_word("first name");
	std::cout << "|";
	print_word("last name");
	std::cout << "|";
	print_word("nickname");
	std::cout << "\n";
	while (i < 8 && contact[i].get_is_empty() == 1)
	{
		contact[i].search(i + 1);
        i++;
	}
	std::cout << "Enter the index" << std::endl;
	std::getline(std::cin, str);
		i = atoi(str.c_str());
	if (i > 0 && i < 9 && contact[i - 1].get_is_empty() == 1)
	{
		std::cout << contact[i - 1].get_first_name() << std::endl;
		std::cout << contact[i - 1].get_last_name() << std::endl;
		std::cout << contact[i - 1].get_nickname() << std::endl;
		std::cout << contact[i - 1].get_phone_number() << std::endl;
		std::cout << contact[i - 1].get_darkest_secret() << std::endl;
	}
	else
		std::cout << "Invalid index or empty line in the phone book" << std::endl;
}
