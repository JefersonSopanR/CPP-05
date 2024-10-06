#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		std::string _forms[3];
		AForm *(Intern::*_formFunctions[3])(std::string const &target);
		AForm *createPresidentialPardonForm(std::string const &target);
		AForm *createRobotomyRequestForm(std::string const &target);
		AForm *createShrubberyCreationForm(std::string const &target);
	public:
		Intern();
		Intern(Intern const &intern);
		~Intern();
		Intern &operator=(Intern const &intern);

		AForm *makeForm(std::string const &formName, std::string const &target);
		class FormNotFoundException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Form not found";
				}
		};
};

#endif