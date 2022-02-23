#ifndef EX01_CONTACT_HPP
#define EX01_CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		bool		is_empty;

	public:
		Contact();
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
		bool		get_is_empty();
		void		new_contact();
		void		search(int i);
};

#endif
