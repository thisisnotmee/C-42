#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Presidential.hpp"
#include "Robotomy.hpp"
#include "Shrubbery.hpp"
#include "intern.hpp"

int main( void )
{
	try 
	{
		Bureaucrat B1("Base", 100);

		Intern i;
	
		i.makeForm("robotomy request", "B1");
		i.makeForm("presidential pardon", "B1");
		i.makeForm("iiibubibuibuyivtyigvojpnpinmnjbhgvfcdxwq<zewresxtdcyfvubg", "");
	}
	catch (const std::exception& e) 
	{
		std::cout << e.what() << std::endl;
	}

	return 0; 
}