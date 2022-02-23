#include "PhoneBook.hpp"

Contact::Contact()
{
	is_empty = 0;
}

std::string	Contact::get_first_name()
{
	return (first_name);
}

std::string	Contact::get_last_name()
{
	return (last_name);
}

std::string	Contact::get_nickname()
{
	return (nickname);
}

std::string	Contact::get_phone_number()
{
	return (phone_number);
}

std::string	Contact::get_darkest_secret()
{
	return (darkest_secret);
}

bool	Contact::get_is_empty()
{
	return (is_empty);
}

void Contact::new_contact()
{
	is_empty = 1;
	std::cout << "Enter the first name" << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "Enter the last name" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "Enter the nickname" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "Enter the phone number" << std::endl;
	std::getline(std::cin, phone_number);
	std::cout << "Enter the darkest secret" << std::endl;
	std::getline(std::cin, darkest_secret);
}

void Contact::search(int i)
{
	int 	n = 0;

	while (n++ < 9)
		std::cout << " ";
	std::cout << i << "|";
	print_word(first_name);
	std::cout << "|";
	print_word(last_name);
	std::cout << "|";
	print_word(nickname);
	std::cout << "\n";
}
