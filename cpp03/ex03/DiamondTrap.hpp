#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string		_name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &other);
		~DiamondTrap();

		DiamondTrap	&operator =(DiamondTrap const &other);

		void			whoAmI(void) const;
		using			ScavTrap::attack;
		using			ScavTrap::_energy_points;
		using			FragTrap::_hitpoints;
		using			FragTrap::_attack_damage;
};


#endif
