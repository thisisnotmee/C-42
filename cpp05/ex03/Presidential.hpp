#ifndef PRESIDENTIAL_HPP

#define PRESIDENTIAL_HPP

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm{
	public :
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &President);
		PresidentialPardonForm(PresidentialPardonForm &copy);
		std::string				GetCible();
		void		beExecuted(Bureaucrat const &executor) const;
	private :
		std::string _cible;
};



#endif