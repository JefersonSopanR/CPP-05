#include "Intern.hpp"

Intern::Intern()
{
	_forms[0] = "presidential pardon";
	_forms[1] = "robotomy request";
	_forms[2] = "shrubbery creation";
	_formFunctions[0] = &Intern::createPresidentialPardonForm;
	_formFunctions[1] = &Intern::createRobotomyRequestForm;
	_formFunctions[2] = &Intern::createShrubberyCreationForm;
}

Intern::Intern(Intern const &intern)
{
	*this = intern;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &intern)
{
	if (this == &intern)
		return *this;
	return *this;
}

AForm *Intern::makeForm(std::string const &formName, std::string const &target)
{
	for (int i = 0; i < 3; i++)
	{
		if (formName == _forms[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*_formFunctions[i])(target);
		}
	}
	throw Intern::FormNotFoundException();
	return NULL;
}

AForm *Intern::createPresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::createRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

AForm *Intern::createShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

std::ostream &operator<<(std::ostream &out, Intern const &intern)
{
	(void)intern;
	out << "Intern";
	return out;
}
