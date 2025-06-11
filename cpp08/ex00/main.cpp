#include "easyfind.hpp"

static void	print(std::vector<int> &Container)
{
	std::cout << "Vector Content = ";
	std::cout << VERT_CLAIR << "[ ";

	for (size_t i = 0; i < Container.size(); i++)
	{
       std::cout << Container[i] << " ";
	}
	std::cout << "]\n" << RESET;
}

std::vector<int> VectorGen()
{
	std::vector<int> Container;

	for (int i = 0; i < 10; i++)
	{
		Container.push_back(rand() % 10 + (i%2));
	}
	return Container;
}

int main( void )
{
	std::vector<int> Tab = VectorGen();
	print(Tab);
	easyfind(Tab, 10);
	
	return 0;
}