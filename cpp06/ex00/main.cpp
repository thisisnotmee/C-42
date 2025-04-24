#include "Scalar.hpp"

using namespace std;

int main(int ac, char **av)
{
	ScalarConverter magie;

	if (ac != 2)
		std::cout << "Attention, il y a une erreur d'arguments. Vérifiez à nouveau..." << std::endl;
	else
	{
		cout << "Voici l'argument = " << av[1] << endl;	

		magie.Convert(av);
	}
	return 0;	
}