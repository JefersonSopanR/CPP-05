#include "Bureaucrat.hpp"

int main()
{
	std::cout << "try-catch 1 (GradeTooHighException)" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Jhon", 2);
		std::cout << bureaucrat << std::endl;
		std::cout << "incrementing grade" << std::endl;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;
		std::cout << "incrementing grade" << std::endl;
		bureaucrat.incrementGrade();
		std::cout << "this line won't be printed" << std::endl;
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "try-catch 2 (GradeTooLowException)" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Kevin", 149);
		std::cout << bureaucrat << std::endl;
		std::cout << "decrementing grade" << std::endl;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;
		std::cout << "decrementing grade" << std::endl;
		bureaucrat.decrementGrade();
		std::cout << "this line won't be printed" << std::endl;
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}