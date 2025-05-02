#include "Scalar.hpp"

using namespace std;

int main(int ac, char **av)
{
	if (ac > 2 || ac < 2)
		std::cout << "Attention, il y a une erreur d'arguments. Vérifiez à nouveau..." << std::endl;
	else
	{
		std::string str = av[1]; // av[1] = argument
		try
		{
			ScalarConverter::Convert(str);
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;	
}