#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <bits/stdc++.h>
#include <sstream>

class ScalarConverter {
	public :
		static void		convert(char *arg);
	private :
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &copie);
};


#endif