#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdio.h>
#include <unistd.h>

class Bureaucrat{
    public:
        Bureaucrat();                       // Constructeur
        ~Bureaucrat();                      // Destructeur
        Bureaucrat(Bureaucrat &copy);       // Copie
        Bureaucrat&	operator=(const Bureaucrat &copy);                    // Operateur=
		std::string		GetName( void );
		int		GetGrade( void );
    private:
        const std::string   _name;
        int                 _grade;
};

#endif