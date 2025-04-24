#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* * * * * * * * * * * * * * * * * * * * * * * * 			
				fonctions de base		
* * * * * * * * * * * * * * * * * * * * * * * */

AForm::AForm( void ): _name("default"), _signed(false), _2sign(0), _2exec(0){}

AForm::~AForm( void ){}

AForm::AForm(std::string name, int sign, int exec): _name(name), _2sign(sign), _2exec(exec)
{
	if (sign > 150 || exec > 150)
		throw AForm::GradeTooLowException();
	else if (sign < 1 || exec < 1)
		throw AForm::GradeTooHighException();
}

AForm&	AForm::operator=( const AForm &copy )
{
	(void)copy;
	return *this;
}

AForm::AForm(AForm &copy): _name(copy.GetName()), _2sign(copy.GetGrade2sign()), _2exec(copy.GetGrade2exec())
{
	std::cout << "Copie du formulaire :   " << this->GetName() << std::endl;
}


/* * * * * * * * * * * * * * * * * * * * * * * * 			
				GETTERS			
* * * * * * * * * * * * * * * * * * * * * * * */
 
int    AForm::GetGrade2sign() const {return this->_2sign;}

int    AForm::GetGrade2exec() const {return this->_2exec;}

std::string     AForm::GetName() const {return this->_name;}

bool    AForm::GetSigned() const {return this->_signed;}

/* * * * * * * * * * * * * * * * * * * * * * * * 			
				FONCTIONS MEMBRE			
* * * * * * * * * * * * * * * * * * * * * * * */
/*
void    AForm::beSigned(Bureaucrat &src)
{
	try 
	{
		if (this->GetSigned())
			throw AForm::Form_Already_Signed();
		else if (src.GetGrade() > this->GetGrade2sign())
			throw AForm::GradeTooLowException();
		else
		{
			this->_signed = true;
			std::cout << "Formulaire Signé !" << std::endl;
		}
	}
	catch ( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
}
*/

void   AForm::beSigned(Bureaucrat &src)
{
	try
	{
		if (src.GetGrade() > this->GetGrade2sign())
		{
			std::cout << src.GetName() << " ne peut pas signer. Raisons :::  ";
			throw GradeTooLowException();
		}
		else if (src.GetGrade() < 1)
		{
			std::cout << src.GetName() << " ne peut pas signer. Raisons :::  ";
			throw GradeTooHighException();
		}
		else if (this->GetSigned())
		{
			std::cout << "Le formulaire " << this->GetName() << " est déjà signé" << std::endl;
			return ;
		}
		else if (!this->GetSigned())
		{
			this->_signed = true;
			std::cout << "Formulaire signé par ::: " << src.GetName() << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char *AForm::GradeTooHighException::what() const throw() {return "Grade Too High Exception";}

const char *AForm::GradeTooLowException::what() const throw() {return "Grade Too Low Exception";}



std::ostream	&AForm::print(std::ostream &os) const
{
    os << "\n*****************\n"
	   << "* Form Infos  \n"
	   << "*****************\n"
       << "* Name : " << GetName()
       << "\n* Is Signed : " << (GetSigned() ? "Yes" : "No")
       << "\n* Grade Sign : " << GetGrade2sign()
       << "\n* Grade Exec : " << GetGrade2exec()
	   << "\n*****************\n";

	   return os;
}

void	AForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.GetGrade() > this->GetGrade2exec())
			throw AForm::GradeTooLowException();
		else if (executor.GetGrade() < this->GetGrade2exec())
			throw AForm::GradeTooHighException();
		else
			this->beExecuted(executor);
	}
	catch( std::exception &e )
	{
		std::cout << e.what() << std::endl;
	}
}