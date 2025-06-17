#include "BitcoinExchange.hpp"

int main(int ac , char **av)
{
	std::ifstream file;

	if (ac == 2)
		BitcoinExchange BTC(file, av);
	else
		std::cout << "number of argument is wrong" << std::endl;
	return 0;
}