#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm	sf("John");
		RobotomyRequestForm		rf("Bob");
		PresidentialPardonForm	pf("Kate");
		std::cout << sf << rf << pf << std::endl;
		std::cout << std::endl;

		Bureaucrat  ted("Ted", 1);
		std::cout << ted << std::endl;
		std::cout << std::endl;

		ted.signForm(sf);
		rf.beSigned(ted);
		pf.beSigned(ted);
		std::cout << sf << rf << pf << std::endl;
		std::cout << std::endl;

		ted.executeForm(sf);
		std::cout << std::endl;

		ted.executeForm(rf);
		std::cout << std::endl;

		ted.executeForm(pf);
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----------------------------------\n" << std::endl;

	try
	{
		ShrubberyCreationForm	sf("John");
		RobotomyRequestForm		rf("Bob");
		PresidentialPardonForm	pf("Kate");
		std::cout << sf << rf << pf << std::endl;
		std::cout << std::endl;

		Bureaucrat  ted("Ted", 1);
		std::cout << ted << std::endl;
		std::cout << std::endl;

		ted.executeForm(sf);
		ted.executeForm(rf);
		ted.executeForm(pf);
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-----------------------------------\n" << std::endl;

	try
	{
		ShrubberyCreationForm	sf("John");
		RobotomyRequestForm		rf("Bob");
		PresidentialPardonForm	pf("Kate");
		std::cout << sf << rf << pf << std::endl;
		std::cout << std::endl;

		Bureaucrat  ted("Ted", 1);
		Bureaucrat	sam("Sam", 150);
		std::cout << ted << sam << std::endl;
		std::cout << std::endl;

		ted.signForm(sf);
		ted.signForm(rf);
		ted.signForm(pf);
		std::cout << std::endl;

		sam.executeForm(sf);
		sam.executeForm(rf);
		sam.executeForm(pf);
		std::cout << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
