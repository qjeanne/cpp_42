#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void	test_deep(Character basic)
{
	std::cout << "----------Deep copy----------" << std::endl;

	Character copy = basic;
	Character copy2(basic);
	std::cout << std::endl;

	std::cout << "copy: " << copy.getInventory() << std::endl;
	std::cout << "copy2: " << copy2.getInventory() << std::endl;
	std::cout << "basic: " << basic.getInventory() << std::endl;
	std::cout << std::endl;
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;

	ICharacter* me = new Character("me");
	std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;

	ICharacter* bob = new Character("bob");
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	Character basic("basic");
	test_deep(basic);
	std::cout << "------------------------------" << std::endl << std::endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}
