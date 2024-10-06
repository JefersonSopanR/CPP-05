#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string const _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &robotomyRequestForm);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(RobotomyRequestForm const &robotomyRequestForm);

		std::string const &getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif