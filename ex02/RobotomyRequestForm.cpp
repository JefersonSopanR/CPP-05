#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robotomyRequestForm) : AForm(robotomyRequestForm), _target(robotomyRequestForm._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &robotomyRequestForm)
{
	if (this == &robotomyRequestForm)
		return *this;
	AForm::operator=(robotomyRequestForm);
	return *this;
}

std::string const &RobotomyRequestForm::getTarget() const
{
	return _target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	else
	{
		static int i = 0;
		std::cout << "Drilling noises....." << std::endl;
		if (i % 2 == 0)
			std::cout << _target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Robotomization of " << _target << " has failed" << std::endl;
		i++;
	}
}
/*
std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &robotomyRequestForm)
{
	out << "Form: " << robotomyRequestForm.getName() << std::endl;
	out << "Signed: " << robotomyRequestForm.getSigned() << std::endl;
	out << "Grade to sign: " << robotomyRequestForm.getGradeToSign() << std::endl;
	out << "Grade to execute: " << robotomyRequestForm.getGradeToExecute() << std::endl;
	out << "Target: " << robotomyRequestForm.getTarget() << std::endl;
	return out;
}
*/
