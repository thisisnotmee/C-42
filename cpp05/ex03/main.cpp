#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Presidential.hpp"
#include "Robotomy.hpp"
#include "Shrubbery.hpp"
#include "intern.hpp"

int main( void )
{
	Bureaucrat B1("Base", -1);

	AForm	*Impots;

	Intern i;

	Impots = i.makeForm("robotomy request", "B1");
	i.makeForm("presidential pardon", "B1");
	i.makeForm("", "");
	
	Impots->execute(B1);
	return 0; 
}