#ifndef EX01_PHONEBOOK_HPP
#define EX01_PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];

	public:
		void add(int i);
		void search();
};

void print_word(std::string str);

#endif
