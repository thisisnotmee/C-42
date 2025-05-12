#include "ScalarConverter.hpp"
using namespace std;

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter()
{
	
}

void	SpecialTypePrint(std::string arg)
{
	if (arg == "nan" || arg == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (arg == "-inff" || arg == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (arg == "+inff" || arg == "+inf") 
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
}

void	FloatPrint(std::string str)
{
	float	to_float;
	char	to_char;
	int 	to_int;
	double	to_double;

	to_float = std::stof(str);
	to_char = static_cast<char>(to_float);
	to_int = static_cast<int>(to_float);
	to_double = static_cast<double>(to_float);

	if (to_char < 32 || to_char > 126)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << to_char << std::endl;

	std::cout << std::fixed << std::setprecision(1) << "double: " << to_double << std::endl;
	std::cout << "int: " << to_int << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << to_float << "f" << std::endl;
}


void	DoublePrint(std::string str)
{
	float	to_float;
	char	to_char;
	int 	to_int;
	double	to_double;

	to_double = std::stod(str);
	to_char = static_cast<char>(to_double);
	to_int = static_cast<int>(to_double);
	to_float = static_cast<float>(to_double);

	if (to_char < 32 || to_char > 126)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << to_char << std::endl;

	std::cout << std::fixed << std::setprecision(1) << "double: " << to_double << std::endl;
	std::cout << "int: " << to_int << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << to_float << "f" << std::endl;
}

void	IntPrint(std::string str)
{
	float	to_float;
	char	to_char;
	int 	to_int;
	double	to_double;
	
	to_int = std::stoi(str);
	to_char = static_cast<char>(to_int);
	to_double = static_cast<double>(to_int);
	to_float = static_cast<float>(to_int);

	if (to_char < 32 || to_char > 126)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << to_char << std::endl;

	std::cout << std::fixed << std::setprecision(1) << "double: " << to_double << std::endl;
	std::cout << "int: " << to_int << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << to_float << "f" << std::endl;
}

std::string	TypeFind( std::string arg )
{
	int		point = 0;
	int		i = 0;
	int		is_num = 0;
	int		is_char = 0;

	if ( arg.empty() )
		std::cout << "Attention chaine vide !!" << std::endl;

	if ( arg == "nan" || arg == "nanf" || arg == "-inff" || arg == "+inff"  || arg == "-inf" || arg == "+inf" )
	{
		SpecialTypePrint(arg);	
	}

	while (arg[i])
	{
		if ( arg[i] == '.' )
			point++;
		if ( arg[i] >= '0' && arg[i] <= '9' )
			is_num++;
		if ( (arg[i] >= 'A' && arg[i] <= 'Z') || (arg[i] >= 'a' && arg[i] <= 'z') )
			is_char++;
		i++;
	}

	if ( point == 1 && arg.back() == 'f' )
	{
		FloatPrint(arg);
		return "float";
	}
	else if ( point == 1 && arg.back() != 'f' )
	{
		DoublePrint(arg);
		return "double";
	}
	else if ( is_num != 0 && (int)arg.size() == is_num )
	{
		IntPrint(arg);
		return "int";
	}
	else if ( is_char != 0 && (int)arg.size() == is_char )
	{
		return "char";
	}
	else
		std::cout << "Erreur argument" << std::endl;
	return "\n";	
}


void	ScalarConverter::convert(char *arg)
{
	std::string Main_t;
	std::string	StrArg = arg;

	Main_t = TypeFind(StrArg);

	std::cout << "\n" << Main_t << std::endl;
}