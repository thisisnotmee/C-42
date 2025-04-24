#include "Scalar.hpp"

ScalarConverter::ScalarConverter( void )
{
    
}

ScalarConverter::~ScalarConverter( void )
{
	
}

void ScalarConverter::Convert( char **Arg )
{
    std::string ArgConvert = Arg[1];

    this->_toFloat = static_cast<float>(std::atof(ArgConvert.c_str()));
    this->_toChar = static_cast<char>(this->_toFloat);
    this->_toInt = static_cast<int>(this->_toFloat);
    this->_toDouble = static_cast<double>(this->_toFloat);


    std::cout << "char: ";
    if (std::isprint(this->_toChar))
        std::cout << "'" << this->_toChar << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;

    std::cout << "int: " << this->_toInt << std::endl;

    std::cout << "float: " << this->_toFloat << "f" << std::endl;

    std::cout << "double: " << this->_toDouble << std::endl;
}