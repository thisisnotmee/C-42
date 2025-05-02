#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <exception>
#include <string.h>


class Bureaucrat{
    public:
        Bureaucrat();
		Bureaucrat(std::string name, int grade);
        ~Bureaucrat(); 
        Bureaucrat(Bureaucrat const &copy); 
        Bureaucrat&	operator=(Bureaucrat const &copy); 
		const std::string		GetName( void ) const;	
		int		GetGrade( void ) const;	
		void		SetGrade(int grade);							
        void	GradeIncrase( void );
        void	GradeDecrase( void );

        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw() { return "Grade Too High Exception"; }
        };
        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw() { return "Grade Too Low Exception"; }
        };
        class InvalidPrint : public std::exception {
            virtual const char * what() const throw(){return "Invalid grade cannot print";}
        };

    private:
        const std::string   _name;
        int                 _grade;
};

std::ostream 	&operator<<(std::ostream &os, Bureaucrat const &src);



#endif