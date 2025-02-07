#include "Bureaucrat.hpp"

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

Bureaucrat::Bureaucrat( Bureaucrat &copy )
{
	*this = copy;
	std::cout << "Constructeur de copie"<< std::endl;
}

const std::string	Bureaucrat::GetName( void )
{
	return this->_name;
}

int		Bureaucrat::GetGrade( void )
{
	return this->_grade;
}

void	Bureaucrat::print( void )
{
	std::cout << this->GetName() << std::endl;
	std::cout << this->GetGrade() << std::endl;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat &copy )
{
	std::cout << "Opérateur de copie" << std::endl;
	(void)copy;
	return *this;
}

void	Bureaucrat::GradeIncrase( void )
{
	try {
		if (this->GetGrade() == 1)
			throw GradeTooHighException();
		else
			this->_grade--;
	}
	catch (std::exception &ex) {
		std::cout <<ex.what() << std::endl;
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
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
}

void	Bureaucrat::SetGrade(int grade)
{
	try {
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
}


void 	Bureaucrat::afficher(std::ostream& sortie)
{
   sortie << this->_name << ", bureaucrat grade " << this->_grade << std::endl;
}
