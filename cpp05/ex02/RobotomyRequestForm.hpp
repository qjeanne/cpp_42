#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();

	public:
		RobotomyRequestForm(const RobotomyRequestForm &robotomy_request_form);
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator =(const RobotomyRequestForm &robotomy_request_form);

		int	execute(Bureaucrat const &executor) const;
};


#endif
