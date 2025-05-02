#ifndef ROBOTOMY_HPP

#define ROBOTOMY_HPP

#include "Presidential.hpp"
#include "Robotomy.hpp"
#include "AForm.hpp"
#include "Shrubbery.hpp"
#include "Bureaucrat.hpp"


class  RobotomyRequestForm : public AForm{
	public :
		RobotomyRequestForm();
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm( std::string cible );
		std::string GetCible() const;
		void	beExecuted(Bureaucrat const &executor) const;
	private :
		std::string	_cible;
};

std::ostream	&operator<<(std::ostream &o, RobotomyRequestForm const  &src);

#endif