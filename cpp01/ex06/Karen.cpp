#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	void	(Karen::*ptr)(void);
	int		idx;
	t_map	table[4] = {
			{"DEBUG",		&Karen::debug},
			{"INFO",		&Karen::info},
			{"WARNING",	&Karen::warning},
			{"ERROR",		&Karen::error}
	};

	std::string	level_array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string *level_array_ptr = std::find(level_array, level_array + 4, level);
	idx = level_array_ptr - level_array;
	switch (idx)
	{
		case 0:
			ptr = table[0].function;
			std::cout << "[ " << table[0].str << " ]" << std::endl;
			(this->*ptr)();
			std::cout << std::endl;
			idx++;
		case 1:
			ptr = table[1].function;
			std::cout << "[ " << table[1].str << " ]" << std::endl;
			(this->*ptr)();
			std::cout << std::endl;
			idx++;
		case 2:
			ptr = table[2].function;
			std::cout << "[ " << table[2].str << " ]" << std::endl;
			(this->*ptr)();
			std::cout << std::endl;
			idx++;
		case 3:
			ptr = table[3].function;
			std::cout << "[ " << table[3].str << " ]" << std::endl;
			(this->*ptr)();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
