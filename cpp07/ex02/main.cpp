#include "Array.hpp"

int main( void )
{
	Array<int> tab(10);
	srand(time(NULL));
	int *a = new int();
	
	for (int i = 0; i < tab.getSize(); i++) {
		tab[i] = rand() % 100;
	}
	
	std::cout << "\nTemplate() = " << VERT << tab << RESET << "\n";
	std::cout << "\nint *a = new int() = " << VERT << a << RESET << "\n";
	Array<int> copie(tab);
	std::cout << "\nTemplate de copie = " << VERT << copie << RESET << "\n";

	delete a;

	return 0;
}