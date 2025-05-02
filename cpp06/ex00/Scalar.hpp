#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <cctype>

class  ScalarConverter {
	private :
		ScalarConverter( void );
		~ScalarConverter( void );
		ScalarConverter(ScalarConverter &Src);
		ScalarConverter &operator=(ScalarConverter &Src);
		
		void	SetChar( char	final_char );
		void	SetInt( int	final_int );
		void	SetFloat( float	final_float );
		void	SetDouble( double	final_double );

		char		_tochar;
		int			_toint;
		float		_tofloat;
		double		_todouble;

	public :
		static void Convert( std::string av );

		class EmptyString : public std::exception{
			virtual const char *what() const throw() { return "Empty string"; };
		};
		class IsNotAscii : public std::exception{
			virtual const char *what() const throw() { return "string isnt alpha, isnt digit pls retry"; };
		};
};

#endif