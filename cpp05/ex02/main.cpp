#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Presidential.hpp"
#include "Robotomy.hpp"
#include "Shrubbery.hpp"


int main( void )
{
	Bureaucrat B1("Base", 100);

	Bureaucrat dieu("dieu", 1);

	ShrubberyCreationForm  Imp("dieu");
	RobotomyRequestForm		Bot("dieu");
	PresidentialPardonForm	Pres("dieu");

	Bot.beExecuted(dieu);
	Imp.beExecuted(dieu);
	Pres.beExecuted(dieu);

	return 0;
}