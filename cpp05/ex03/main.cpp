#include "Bureaucrat.hpp"
#include "Intern.hpp"


int main()
{
	Intern	intern;
	try
	{
		Form *sf = intern.makeForm("shrubbery creation", "John");
		Form *pf = intern.makeForm("presidential pardon", "Bob");
		Form *rf = intern.makeForm("robotomy request", "Sam");
		Form *no = intern.makeForm("error", "Rick");
		(void)no;
		std::cout << std::endl << *sf << *rf << *pf << std::endl;
		std::cout << std::endl;

		Bureaucrat  ted("Ted", 1);
		std::cout << ted << std::endl;
		std::cout << std::endl;

		ted.signForm(*sf);
		rf->beSigned(ted);
		pf->beSigned(ted);
		std::cout << *sf << *rf << *pf << std::endl;
		std::cout << std::endl;

		ted.executeForm(*sf);
		std::cout << std::endl;

		ted.executeForm(*rf);
		std::cout << std::endl;

		ted.executeForm(*pf);
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
