#include "Array.hpp"

int main( void )
{
	Array<int> tab(10);
	tab[0] = rand() % 10;
	tab[5] = rand() % 10;
	std::cout << "TAB = " << VERT << tab << RESET << "\n";
	Array<int> copie(tab);
	std::cout << "COPIE = " << VERT << copie << RESET << "\n";


	return 0;
}