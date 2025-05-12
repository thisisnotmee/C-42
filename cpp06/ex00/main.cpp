#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	system("clear");
	if (ac != 2) {
		std::cout << " Erreur ce programme ne prend qu'un argument \n";
		return (1);
	}
	try	{ ScalarConverter::convert(av[1]); }
	catch(const std::exception& e) { std::cerr << "[Error]: " << e.what() << std::endl; }

	return 0;
}