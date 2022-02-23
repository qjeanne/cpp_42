#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include "iostream"
#include "string"
#include "Form.hpp"
class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

		Bureaucrat();

	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);

		Bureaucrat &operator =(const Bureaucrat &other);

		std::string		getName() const;
		int 			getGrade() const;
		void			decreaseGrade();
		void 			increaseGrade();
		void			signForm(Form &form);
		void			executeForm(Form const &form);

		class GradeTooHighException : public std::exception
		{
			public:
				const char 	*what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char 	*what() const throw();
		};
};

std::ostream &operator <<(std::ostream &out, Bureaucrat &value);

#endif
