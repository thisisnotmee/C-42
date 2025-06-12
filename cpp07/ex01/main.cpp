#include "Iter.hpp"

int main( void )
{
	int *liste = new int[10];

	std::cout << "(Print) Iteration --> " << ROUGE;
	iter(liste, 10, print<int>);
	iter(liste, 10, randomise<int>);
	std::cout << RESET << "(Random + print) Iteration --> " << ROUGE;
	iter(liste, 10, print<int>);
	std::cout << RESET;

	delete[] liste;
	return 0;
}