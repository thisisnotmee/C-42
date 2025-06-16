#include "easyfind.hpp"


int main( void )
{
	std::vector<int> V = VectorGen();
	print(V);
	easyfind(V, rand() % 20);
	
	return 0;
}