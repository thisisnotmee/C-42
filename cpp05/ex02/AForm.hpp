#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;


class AForm {
    public :
        // Fonctions membres
        AForm( void );
        virtual ~AForm( void );
        AForm(AForm &copy);
        AForm(std::string name, int sign, int exec);
        AForm	&operator=( const AForm &copy );
        void    beSigned(Bureaucrat &src);
        int     GetGrade2sign( void ) const;
        int     GetGrade2exec( void ) const;
        std::string	GetName( void )	const;
		bool	GetSigned( void ) const ;
        void	execute(Bureaucrat const &executor) const;
        virtual void	beExecuted(Bureaucrat const &executor) const = 0;

		std::ostream &print(std::ostream &os) const;

        class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
        };

        class GradeTooHighException : public std::exception{
			virtual const char* what() const throw();
		};

        class Form_Already_Signed : public std::exception {
            virtual const char *what() const throw (){
                return ("Form already signed exception");
            };
        };

    private :
        const std::string   _name;
        bool                _signed;
        const int           _2sign;
        const int           _2exec;
};

#endif