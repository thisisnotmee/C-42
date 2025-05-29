#include "Iter.hpp"

int main( void )
{
	int (*liste) = new (int[10]);

	std::cout << "Tab INT = " << ROUGE;
	iter(liste, 10, print<int>);
	iter(liste, 10, randomise<int>);
	std::cout << RESET << "RANDOMISE INT = " << ROUGE;
	iter(liste, 10, print<int>);
	std::cout << RESET;
	return 0;
}