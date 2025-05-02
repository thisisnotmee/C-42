#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

int ScalarConverter::Convert(char *av)
{
	char num_char;
	int num_int;
	float num_float;
	double num_double;

	std::string std_char;
	std::string std_int;
	std::string std_float;
	std::string std_double;

	std::string sign;
	std::string argv(av);
	std::stringstream ss;
	
	char *end;

	if (argv.empty())
		throw ScalarConverter::UnknownString();
	if ((argv.size() == 1) && !isdigit(argv[0]))
	{
		num_char = argv[0];
		num_int = static_cast<int>(argv[0]);
		num_float = static_cast<float>(argv[0]);
		num_double = static_cast<double>(argv[0]);

		ss << "'" << num_char << "'";
		std_char = ss.str();
		ss.str(std::string());

		ss << num_int;
		std_int = ss.str();
		ss.str(std::string());

		ss << num_float << ".0f";
		std_float = ss.str();
		ss.str(std::string());

		ss << num_double << ".0";
		std_double = ss.str();
		ss.str(std::string());
	}
	else if ((isdigit(argv[0])) || (argv[0] == '-' && isdigit(argv[1])))
	{
		float temp = strtod(av, &end);
		if ((end[0] != 'f' && end[0] != '\0') ||
		(end[0] == 'f' && end[1] != '\0') ||
		(end[0] == '.' && end[1] == 'f' && end[2] != '\0'))
			throw ScalarConverter::UnknownString();

		if (temp > std::numeric_limits<char>::max() || temp < std::numeric_limits<char>::min())
		{
			std_char = "overflow";
		}
		else if (!isprint(num_char = static_cast<char>(temp)))
		{
			std_char = "Non displayable";
		}
		else
		{
			ss << "'" << num_char << "'";
			std_char = ss.str();
			ss.str(std::string());
		}

		if (temp > std::numeric_limits<int>::max() || temp < std::numeric_limits<int>::min())
		{
			std_int = "overflow";
		}
		else
		{
			num_int = static_cast<int>(temp);
			ss << num_int;
			std_int = ss.str();
			ss.str(std::string());
		}

		if (temp + 0.00000001 > std::numeric_limits<float>::max() || temp + 0.00000001 < std::numeric_limits<float>::min())
		{
			std::cout << temp << " | " << std::numeric_limits<float>::min() << std::endl;
			std_float = "overflow";
		}
		else
		{
			num_float = temp;
			ss << std::fixed << std::setprecision(1) << num_float << "f";
			std_float = ss.str();
			ss.str(std::string());
		}

		if (temp + 0.00000001 > std::numeric_limits<double>::max() || temp + 0.00000001 < std::numeric_limits<double>::min())
		{
			std_double = "overflow";
		}
		else
		{
			num_double = static_cast<double>(temp);
			ss << std::fixed << std::setprecision(1) << num_double;
			std_double = ss.str();
			ss.str(std::string());
		}
	}
	else if (argv == "nan" || argv == "nanf" || argv == "-inff" || argv == "+inff" || argv == "+inf" || argv == "-inf")
	{
		if (argv[0] == '+')
			sign += argv[0];
		num_double = strtod(av, &end);
		num_float = static_cast<float>(num_double);

		std_char = "impossible";
		std_int = "impossible";

		std::stringstream ss;
		ss << sign << num_double;
		std_double = ss.str();
		ss.str(std::string());

		ss << sign << num_float << "f";
		std_float = ss.str();
		ss.str(std::string());
	}
	else
		throw ScalarConverter::UnknownString();
	std::cout << "char: " << std_char << std::endl;
	std::cout << "int: " << std_int << std::endl;
	std::cout << "float: " << std_float << std::endl;
	std::cout << "double: " << std_double << std::endl;
	return (0);
}

const char* ScalarConverter::UnknownString::what() const throw()
{
	return ("UnknownString");
}