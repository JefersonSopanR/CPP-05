#include "Bureaucrat.hpp"
#include "Form.hpp"

void test1()
{
	//std::cout << "try-catch 1 (GradeTooHighException)" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Jhon", 4);
		std::cout << bureaucrat << std::endl;
		Form form("Form1", 7, 1); // grade to sign 4 is better than grade 7 therefore it will sign
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	//std::cout << "try-catch 2 (GradeTooLowException)" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Kevin", 149);
		std::cout << bureaucrat << std::endl;
		Form form("Form2", 150, 150); // grade to sign 149 is better than grade 150 therefore it will sign
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	try
	{
		Bureaucrat bureaucrat("Jhon", 2);
		std::cout << bureaucrat << std::endl;
		Form form("Form1", 1, 1); // garde 2 is lower than 1 therefore it will throw exception
		std::cout << form << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-----------TEST1--------------"<< std::endl;
	std::cout << std::endl;
	test1();
	return 0;
}