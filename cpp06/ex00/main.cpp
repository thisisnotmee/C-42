#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	system("clear");

	if (ac != 2) 
	{
		std::cout << "Ce programme ne prend qu'un seul argument \n";
		return (1);
	}
	try 
	{
		ScalarConverter::convert(av[1]);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}