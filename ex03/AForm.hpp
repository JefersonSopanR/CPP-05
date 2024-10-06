#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string const _name;
		bool _signed;
		int const _gradeToSign;
		int const _gradeToExecute;
	public:
		AForm();
		AForm(std::string const name, int gradeToSign, int gradeToExecute);
		AForm(AForm const &aForm);
		virtual ~AForm();
		AForm &operator=(AForm const &aForm);

		std::string const &getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return "Grade is too high (max 1)";
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return "Grade is too low (min 150)";
			}
	};

	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return "Form is not signed";
			}
	};

};

std::ostream &operator<<(std::ostream &out, AForm const &aForm);

#endif