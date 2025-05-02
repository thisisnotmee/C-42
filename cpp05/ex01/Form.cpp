#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form( void ): _name("default"), _signed(false), _2sign(150), _2exec(150){}

Form::~Form( void ){}

Form	&Form::operator=(Form &src)
{
	(void)src;
	return *this;
}

std::ostream &	operator<<(std::ostream &o, Form &src)
{
	o << "Le formulaire, " << src.GetName() << " || grade2sign  : " << src.GetGrade2sign() << " || grade2exec : " << src.GetGrade2exec();
	if (src.GetSigned())
		o << " || est signé";
	else if (!src.GetSigned())
		o << " || n'est pas signé";
	return o;
}

Form::Form(std::string name, int sign, int exec):_name(name), _signed(false), _2sign(sign), _2exec(exec)
{
	try 
	{
		if (sign > 150 || exec > 150)
			throw Form::GradeTooLowException();
		else if (sign < 1 || exec < 1)
			throw Form::GradeTooHighException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
	}

}
 
int    Form::GetGrade2sign() const {return this->_2sign;}

int    Form::GetGrade2exec() const {return this->_2exec;}

std::string     Form::GetName() const {return this->_name;}

bool    Form::GetSigned() const {return this->_signed;}

// c beau 

void    Form::BeSigned(Bureaucrat &src)
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