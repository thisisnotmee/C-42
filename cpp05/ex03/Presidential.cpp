#include "Presidential.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _cible("default")
{
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _cible(target)
{

}

PresidentialPardonForm&		PresidentialPardonForm::operator=(PresidentialPardonForm const &President)
{
	this->_cible = President._cible;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy)
{
	if (this->GetName() != copy.GetName())
	{
		*this = copy;
		std::cout << "Constructeur de copie Presidentiel" << std::endl;
	}
}

std::string	PresidentialPardonForm::GetCible()
{
	return _cible;
}


void	PresidentialPardonForm::beExecuted(const Bureaucrat &executor) const
{
	try
	{
		if (executor.GetGrade() > this->GetGrade2exec())
		{
			std::cout << "Grade requis pour executer " << this->GetGrade2exec() << " et le bureaucrat: " << executor.GetName() << " a ";
			throw GradeTooLowException();
		}
		std::cout << this->_cible << " à été pardonné par Zaphod Beeblebrox." << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}