#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include "iostream"
#include "string"

# define CYAN "\e[36m"
# define GREEN "\e[32m"
# define RED "\e[31m"
# define RESET "\e[0m"

class ClapTrap
{
	private:
		std::string		_name;
		int				_hitpoints;
		int				_energy_points;
		int				_attack_damage;

		ClapTrap();

	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &other);

		ClapTrap	&operator =(ClapTrap const &value);

		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		unsigned int	getDamage();
		void			beRepaired(unsigned int amount);
};


#endif
