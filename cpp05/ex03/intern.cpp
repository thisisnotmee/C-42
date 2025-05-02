#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Presidential.hpp"
#include "Robotomy.hpp"
#include "Shrubbery.hpp"
#include "intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

AForm* Intern::makeForm( std::string name, std::string target )
{
	std::string _name[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	int i = 0;
	AForm* Fo = NULL;

	try 
	{
		if (name.empty())
			throw Intern::InvalidFormException();
		while (i < 3 && _name[i] != name)
		i++;
		switch(i)
		{
			case 0:
				Fo = new ShrubberyCreationForm(target);
				break;
			case 1:
				Fo = new RobotomyRequestForm(target);
				break;
			case 2:
				Fo = new PresidentialPardonForm(target);
				break;
			default:
				throw Intern::InvalidFormException();
		}
		std::cout << "Intern creates " << name << std::endl;
		return Fo;
	}
	catch( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
	return Fo;
}
