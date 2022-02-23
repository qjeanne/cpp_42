#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomy_request_form) :
		Form(robotomy_request_form.getName(), robotomy_request_form.getGradeSign(), robotomy_request_form.getGradeExecute(), robotomy_request_form.getTarget())
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
		Form("Robotomy Creation", 72, 45, target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator =(const RobotomyRequestForm &robotomy_request_form)
{
	this->setIsSigned(robotomy_request_form.getIsSigned());
	return *this;
}

int	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= getGradeExecute() && this->getIsSigned())
	{
		std::cout << "Drrrr...";
		srand (time(NULL));
		if (rand() % 2)
			std::cout << this->getTarget() << " has been robotomized.";
		else
			std::cout << this->getTarget() << " failed to get robotomized.";
		std::cout << std::endl;
	}
	else if (!getIsSigned())
		std::cout << "Form unsigned, cannot execute" << std::endl;
	else
		throw Form::GradeTooLowException();
	return 0;
}
