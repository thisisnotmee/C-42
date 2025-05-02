#include "Bureaucrat.hpp"

/* * * * * * * * * * * * * * * * * * * * * * * * 			
				FORME CANONIQUE			
* * * * * * * * * * * * * * * * * * * * * * * */

Bureaucrat::Bureaucrat( void ): _name("default") {this->SetGrade(150);}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name) {this->SetGrade(grade);}

Bureaucrat::Bureaucrat( Bureaucrat &copy )
{
	*this = copy;
	std::cout << "Constructeur de copie"<< std::endl;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat &copy )
{
	std::cout << "Opérateur de copie" << std::endl;
	(void)copy;
	return *this;
}

std::ostream&	operator<<(std::ostream &output, Bureaucrat &cible)
{
	output << cible.GetName() << ", Bureaucrat à pour grade : " << cible.GetGrade() << std::endl;
	
	return output;
}

/* * * * * * * * * * * * * * * * * * * * * * * * 			
				GETTERS			
* * * * * * * * * * * * * * * * * * * * * * * */

std::string	Bureaucrat::GetName( void ) const {return this->_name;}

int		Bureaucrat::GetGrade( void ) const {return this->_grade;}


/* * * * * * * * * * * * * * * * * * * * * * * * 			
				FONCTIONS MEMBRES		
* * * * * * * * * * * * * * * * * * * * * * * */

void	Bureaucrat::print( void )
{
	std::cout << this->GetName() << std::endl;
	std::cout << this->GetGrade() << std::endl;
}

void	Bureaucrat::GradeIncrase( void )
{
	try
	{
		if (this->GetGrade() == 1)
			throw GradeTooHighException();
		else
			this->_grade--;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}

void	Bureaucrat::GradeDecrase( void )
{
	try
	{
		if (this->GetGrade() == 150)
			throw GradeTooLowException();
		else
			this->_grade++;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::SetGrade( int grade )
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

void	Bureaucrat::SignForm( AForm &form )
{
	try
	{
		form.beSigned(*this);
		std::cout << this->GetName() << " à signé le formulaire : " << form.GetName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << this->GetName() << " ne peut signer " << form.GetName() << " à cause de " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
	}
	catch ( std::exception &e)
	{
		std::cout << this->_name << " ne peut éxécuter" << form.GetName() << " pour : " << e.what() << std::endl;
	}
}