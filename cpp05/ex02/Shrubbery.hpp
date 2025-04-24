#ifndef SHRUBBERY_HPP

#define SHRUBBERY_HPP

#include "Presidential.hpp"
#include "Robotomy.hpp"
#include "Shrubbery.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class Bureaucrat;


class ShrubberyCreationForm : public AForm{
	public :
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &cible);
		std::string		GetCible() const;
		void	beExecuted(Bureaucrat const &exec) const;
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &src);
	private :
		std::string	_cible;
};


#endif