#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#include "iostream"
#include "string"

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string type);
		~Weapon(void);
		void setType(const std::string type);
		const std::string &getType(void);
};


#endif
