#include "Intern.hpp"

const   Intern::FormMaker Intern::_tab[3] = {

		{ "presidential pardon", &Intern::makePresidentialPardonForm },
		{ "robotomy request", &Intern::makeRobotomyRequestForm },
		{ "shrubbery creation", &Intern::makeShrubberyCreationForm },
};

Intern::Intern()
{
}

Intern::Intern(Intern const &intern)
{
	(void)intern;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(Intern const &intern)
{
	(void)intern;
	return *this;
}

Form    *Intern::makePresidentialPardonForm(std::string const &target) {

	return (new PresidentialPardonForm(target));
}

Form    *Intern::makeRobotomyRequestForm(std::string const &target) {

	return (new RobotomyRequestForm(target));
}

Form    *Intern::makeShrubberyCreationForm(std::string const &target) {

	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string formName, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (formName == Intern::_tab[i].formName)
		{
			std::cout << "Intern creates new " << formName << " form " << std::endl;
			return (Intern::_tab[i].f(target));
		}
	}
	std::cout << "Error: Intern failed to create new form " << formName << std::endl;
	return (NULL);
}
