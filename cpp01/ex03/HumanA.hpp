#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		std::string	_name;
		Weapon	&_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void);
};

#endif
