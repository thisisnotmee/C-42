#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

class ScalarConverter{

	private :
		char	_toChar;
		int		_toInt;
		float	_toFloat;
		double	_toDouble;

	public :
		ScalarConverter();
		~ScalarConverter();
		void Convert(char **Arg);
};


#endif