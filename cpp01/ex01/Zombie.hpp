#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP

#include "iostream"
#include "string"

class Zombie
{
	private:
		std::string		_name;
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void Name(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif //EX00_ZOMBIE_HPP
