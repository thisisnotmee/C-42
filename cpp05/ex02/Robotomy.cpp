#include "Robotomy.hpp"

// Required grades: sign 72, exec 45

RobotomyRequestForm::RobotomyRequestForm( void ): AForm("RobotomyRequestForm", 72, 45), _cible("default")
{}

RobotomyRequestForm::~RobotomyRequestForm( void )
{}

RobotomyRequestForm::RobotomyRequestForm( std::string cible ): AForm("RobotomyRequestForm", 72, 45), _cible(cible)
{}

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const  &src)
{
	o << src.GetCible() << ", " << src.GetName() << ", " << src.GetGrade2sign() << ", " << src.GetGrade2exec() << std::endl;
	return o;
}

std::string RobotomyRequestForm::GetCible() const
{
	return this->_cible;
}

void	RobotomyRequestForm::beExecuted(Bureaucrat const &executor) const
{
	int	i = 0;

	if (executor.GetGrade() > this->GetGrade2exec())
		throw GradeTooLowException();
	std::cout << "Pense... Pense..." << std::endl;
	sleep(1);
	std::cout << "Pense... Pense..." << std::endl;
	srand(time(NULL));
	i = rand();
	if (i % 2 == 0)
		std::cout << this->_cible << " à été robotomisé avec succès" << std::endl;
	else
		std::cout << this->_cible << " n'a pas pu être robotomisé" << std::endl;
}