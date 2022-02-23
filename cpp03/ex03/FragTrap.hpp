#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
	private:
		FragTrap();

	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const& src);
		~FragTrap();

		FragTrap&	operator=(FragTrap const& src);

		void		highFivesGuys(void);
};


#endif
