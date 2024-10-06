#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string const _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const &presidentialPardonForm);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(PresidentialPardonForm const &presidentialPardonForm);

		std::string const &getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif