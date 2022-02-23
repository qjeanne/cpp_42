#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];

		Character();

	public:
		Character(std::string name);
		~Character();
		Character(Character const &other);

		Character &operator =(Character const &other);

		std::string const & getName() const;
		AMateria **getInventory();
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};


#endif
