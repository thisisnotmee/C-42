#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <exception>
#include <string>
#include <fstream>
#include <iostream>

#include "AForm.hpp"

class AForm;

class Bureaucrat {
    public:
        Bureaucrat( void );  
		Bureaucrat( std::string name, int grade );						
        ~Bureaucrat( void ); 
        Bureaucrat( Bureaucrat &copy ); 
        Bureaucrat&	operator=( const Bureaucrat &copy ); 
		std::string		GetName( void ) const;
		int		GetGrade( void ) const;
		void	print( void );
		void		SetGrade( int grade );
        void	GradeIncrase( void );
        void	GradeDecrase( void );
        void	SignForm( AForm &form );
        void	executeForm(AForm const &form);

        class GradeTooHighException : public std::exception
        {
            public :
                virtual const char* what() const throw() {return "Grade Too High Exception";};
        };
        
        class GradeTooLowException : public std::exception
        {
            public :
                virtual const char* what() const throw() {return "Grade Too Low Exception";};
        };

    private:
        const std::string   _name;
        int                 _grade;
};

std::ostream	&operator<<(std::ostream &output, Bureaucrat &cible);

#endif