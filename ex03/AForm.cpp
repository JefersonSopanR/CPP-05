#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1)
{
}

AForm::AForm(std::string const name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &aForm) : _name(aForm._name), _signed(aForm._signed), _gradeToSign(aForm._gradeToSign), _gradeToExecute(aForm._gradeToExecute)
{
	*this = aForm;
}

AForm::~AForm()
{
}

AForm &AForm::operator=(AForm const &aForm)
{
	if (this == &aForm)
		return *this;
	_signed = aForm._signed;
	return *this;
}

std::string const &AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

int AForm::getGradeToSign() const
{
	return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return _gradeToExecute;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

std::ostream &operator<<(std::ostream &out, AForm const &aForm)
{
	out << aForm.getName() << ", form grade to sign " << aForm.getGradeToSign() << ", form grade to execute " << aForm.getGradeToExecute() << ", form signed " << aForm.getSigned();
	return out;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
}
