#include "ScalarConverter.hpp"

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
	float to_float;
	char to_char;
	int to_int;
	double to_double;

	to_float = std::atof(str.c_str());
	to_char = static_cast<char>(to_float);
	to_int = static_cast<int>(to_float);
	to_double = static_cast<double>(to_float);
	
	if (!isprint(to_char))
		std::cout << "char: non displayble" << std::endl;
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
	std::stringstream ss(str);

	ss >> to_double;
	to_char = static_cast<char>(to_double);
	to_int = static_cast<int>(to_double);
	to_float = static_cast<float>(to_double);

	if (!isprint(to_char))
		std::cout << "char: non displayble" << std::endl;
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
	std::stringstream ss(str);
	
	ss >> to_int;
	to_char = static_cast<char>(to_int);
	to_double = static_cast<double>(to_int);
	to_float = static_cast<float>(to_int);

	if (!isprint(to_char))
		std::cout << "char: non displayble" << std::endl;
	else
		std::cout << "char: " << to_char << std::endl;

	std::cout << std::fixed << std::setprecision(1) << "double: " << to_double << std::endl;
	std::cout << "int: " << to_int << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << to_float << "f" << std::endl;
}

void	CharPrint(std::string const str)
{
	float	to_float;
	int 	to_int;
	double	to_double;

	to_int = str[0] - '0';
	to_double = static_cast<double>(to_int);
	to_float = static_cast<float>(to_int);

	if (!isprint(str[0]))
		std::cout << "char: non displayble" << std::endl;
	else
		std::cout << "char: " << str[0] << std::endl;

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
	int 	sign = 0;
	int		other = 0;

	if ( arg.empty() )
		std::cout << "Attention chaine vide !!" << std::endl;
	else if ( arg == "nan" || arg == "nanf" || arg == "-inff" || arg == "+inff"  || arg == "-inf" || arg == "+inf" )
	{
		SpecialTypePrint(arg);
		return "nan/nanf";
	}
	while (arg[i])
	{
		if ( arg[i] == '.' )
			point++;
		if ( arg[i] >= '0' && arg[i] <= '9' )
			is_num++;
		if ( (arg[i] >= 'A' && arg[i] <= 'Z') || (arg[i] >= 'a' && arg[i] <= 'z') )
			is_char++;
		if (arg[i] == '-' || arg[i] == '+')
			sign++;
		if ( arg[i] <= 44 || (arg[i] > 58 && arg[i] < 64) || (arg[i] > 91 && arg[i] < 96) 
			|| (arg[i] > 123 && arg[i] < 127))
			other++;
		i++;
	}
	if ( sign >= 2 )
		return "Erreur: Signes";
	else if (other)
		return "Erreur: argument illisible par le programme";
	else if ( is_num >= 10 )
		std::cout << "Erreur: INT_MAX" << std::endl;
	else if ( point == 1 && arg[arg.size() - 1] == 'f' )
	{
		FloatPrint(arg);
		return "--------";
	}
	else if ( point == 1 && arg[arg.size() - 1] != 'f' && is_num == (int)arg.size() - 1)
	{
		DoublePrint(arg);
		return "--------";
	}
	else if ( is_num != 0 && (int)arg.size() == is_num + sign && sign <= 1)
	{
		IntPrint(arg);
		return "--------";
	}
	else if ( is_char == 1 && (int)arg.size() == is_char )
	{
		CharPrint(arg);
		return "--------";
	}
	else
		std::cout << "Erreur: ARGS" << std::endl;
	return " ";	
}


void	ScalarConverter::convert(char *arg)
{
	std::string Main_t;
	std::string	Args = arg;

	Main_t = TypeFind(Args);

	std::cout << "\n" << Main_t << std::endl;
}