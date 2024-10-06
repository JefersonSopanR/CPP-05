#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

void test1()
{
	try {
        Bureaucrat bureaucrat("Bill", 2);
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
        std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
        bureaucrat.signForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.executeForm(form2);
        std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
        bureaucrat.signForm(form3);
        bureaucrat.executeForm(form3);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
	Bureaucrat bureaucrat("bureaucrat", 1);
	PresidentialPardonForm presidentialPardonForm("presidentialPardonForm");
	RobotomyRequestForm robotomyRequestForm("robotomyRequestForm");
	ShrubberyCreationForm shrubberyCreationForm("shrubberyCreationForm");

	std::cout << bureaucrat << std::endl;
	std::cout << presidentialPardonForm << std::endl;
	std::cout << robotomyRequestForm << std::endl;
	std::cout << shrubberyCreationForm << std::endl;

	bureaucrat.signForm(presidentialPardonForm);
	bureaucrat.signForm(robotomyRequestForm);
	bureaucrat.signForm(shrubberyCreationForm);

	bureaucrat.executeForm(presidentialPardonForm);// presidentialPardonForm message
	bureaucrat.executeForm(robotomyRequestForm);// robotomyRequestForm %50 chance to success
	bureaucrat.executeForm(robotomyRequestForm);// robotomyRequestForm %50 chance to success
	bureaucrat.executeForm(shrubberyCreationForm);// shrubberyCreationForm create a file with tree

	std::cout << std::endl;	
	std::cout << "--------------------TEST 1--------------------" << std::endl;
	std::cout << std::endl;

	test1();

	return 0;
}