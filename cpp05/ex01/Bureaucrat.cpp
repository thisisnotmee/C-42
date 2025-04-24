#include "Form.hpp"
#include "Bureaucrat.hpp"

/*
_____________________________________________________

					EXERCICE 2
					Consignes
_____________________________________________________

Création d'une classe Form.

std::exception pour les erreurs.

150 = MIN_GRADE

1 = MAX_GRADE

*/

Bureaucrat::Bureaucrat( void ): _name("default")
{
	this->SetGrade(150);
}

Bureaucrat::~Bureaucrat( void )
{
	
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	this->SetGrade(grade);
}

Bureaucrat::Bureaucrat( Bureaucrat const &copy )
{
	*this = copy;
	std::cout << "Constructeur de copie"<< std::endl;
}

const std::string	Bureaucrat::GetName( void ) const
{
	return this->_name;
}

int		Bureaucrat::GetGrade( void ) const
{
	return this->_grade;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat &copy )
{
	std::cout << "Opérateur de copie" << std::endl;
	(void)copy;
	return *this;
}

std::ostream 	&operator<<(std::ostream &os, Bureaucrat const &src)
{
	os << src.GetName() << ", Bureaucrat grade " << src.GetGrade() << ".";
	return os;
}

void	Bureaucrat::GradeIncrase( void )
{
	try {
		if (this->GetGrade() == 1)
			throw GradeTooHighException();
		else
			this->_grade--;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::GradeDecrase( void )
{
	try {
		if (this->GetGrade() == 150)
			throw GradeTooLowException();
		else
			this->_grade++;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::SetGrade(int grade)
{
	try 
	{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::SignForm( Form &form ){
	try
	{
		form.BeSigned(*this);
	}
	catch(std::exception &e)
	{
		std::cout << this->GetName() << "couldn't sign" << form.GetName() << " because " << e.what() << std::endl;
	}
}