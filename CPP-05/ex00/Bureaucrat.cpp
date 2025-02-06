#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name(){};

Bureaucrat::~Bureaucrat(void){};

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	this->_name = copy.GetName();
	this->_grade = copy.GetGrade();
	std::cout << "Constructeur de copie"<< std::endl;
}

std::string	Bureaucrat::GetName( void )
{
	return this->_name;
}

int		Bureaucrat::GetGrade( void )
{
	return this->_grade;
}

Bureaucrat&	operator=(const Bureaucrat &copy)
{
	std::cout << "Surcharge d'operateur" << std::endl;
	return *this;
}