#include "Intern.hpp"

void test1()
{
	Bureaucrat	testExec("Bill", 1);
	Intern someRandomIntern;
	AForm* rrf;
	try
	{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Tree_of_Life");
		testExec.signForm(*rrf);
		testExec.executeForm(*rrf);
		delete rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Mark");
		testExec.signForm(*rrf);
		testExec.executeForm(*rrf);
		delete rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Jeff");
		testExec.signForm(*rrf);
		testExec.executeForm(*rrf);
		delete rrf;
		std::cout << "Everything passed successfully!" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "--------------------TEST 0--------------------" << std::endl;
	Intern intern;
	AForm *form;

	form = intern.makeForm("presidential pardon", "target");
	std::cout << *form << std::endl;
	delete form;
	form = intern.makeForm("robotomy request", "target");
	std::cout << *form << std::endl;
	delete form;

	try
	{
		form = intern.makeForm("shrubbery creation", "target");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "trying to create unknown form" << std::endl;
	try
	{
		form = intern.makeForm("unknown", "target");
		std::cout << *form << std::endl;
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	std::cout << std::endl;
	std::cout << "--------------------TEST 1--------------------" << std::endl;
	std::cout << std::endl;
	test1();

	return 0;
}