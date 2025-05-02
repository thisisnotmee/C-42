#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Presidential.hpp"
#include "Robotomy.hpp"
#include "Shrubbery.hpp"


int main( void )
{
	Bureaucrat B1("Base", -1);
	std::cout << B1 << std::endl;

	Bureaucrat dieu("dieu", 15);
	std::cout << dieu << std::endl;


	ShrubberyCreationForm  Imp("dieu");
	RobotomyRequestForm		Bot("dieu");
	PresidentialPardonForm	Pres("dieu");

	Bot.beExecuted(dieu);
	Imp.beExecuted(dieu);
	Pres.beExecuted(dieu);
	Pres.beSigned(dieu);

	return 0;
}