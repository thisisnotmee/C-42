#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <exception>
#include <string.h>


class Bureaucrat{
    public:
        Bureaucrat();                       							// Constructeur
		Bureaucrat(std::string name, int grade);						// Perso
        ~Bureaucrat();                      							// Destructeur
        Bureaucrat(Bureaucrat &copy);       							// Copie
        Bureaucrat&	operator=(const Bureaucrat &copy);                  // Operateur=
		const std::string		GetName( void );						// Getter
		int		GetGrade( void );										// Getter
		void	print( void );											// Print
		void		SetGrade(int grade);								// Grade atribution
        void	GradeIncrase( void );
        void	GradeDecrase( void );
        void 	afficher(std::ostream& os);

        class GradeTooHighException : public std::exception { // Exception
            virtual const char* what() const throw() { return "Grade Too High Exception"; }
        };
        class GradeTooLowException : public std::exception { // Exception
            virtual const char* what() const throw() { return "Grade Too Low Exception"; }
        };

    private:
        const std::string   _name;
        int                 _grade;
};

#endif