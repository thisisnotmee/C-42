#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public :
        Form( void );
        ~Form( void );
        Form(std::string name, int sign, int exec); // COPIE
        Form	&operator=(Form &src); // OPERATEUR

        int     GetGrade2sign( void ) const;
        int     GetGrade2exec( void ) const;
        std::string	GetName( void )	const;
		bool	GetSigned( void ) const ;
        void    BeSigned(Bureaucrat &src);
		void print(std::ostream &os) const;

        class GradeTooLowException : public std::exception {
			virtual const char* what() const throw() { return "Grade Too High Exception"; }
        };

        class GradeTooHighException : public std::exception{
			virtual const char* what() const throw() { return "Grade Too High Exception"; }
		};

    private :
        const std::string   _name;
        bool                _signed;
        const int           _2sign;
        const int           _2exec;
};

std::ostream &	operator<<(std::ostream &o, Form &src); // SURCHARGE

#endif