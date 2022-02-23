#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool		_guard_mode;

		ScavTrap();

	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &other);
		~ScavTrap();

		ScavTrap	&operator =(ScavTrap const &other);

		void		attack(std::string const &target);
		void		guardGuate(void);
};


#endif
