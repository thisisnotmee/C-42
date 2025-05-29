#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>


// Trouve le second dans le premier 
template<typename T>
void	easyfind(T list, int toFind)
{
	
}

class ExceptionNotFound : public std::exception {
	public :
		virtual const char *what() const throw()
		{
			return "Object to find, not found... X)\n";
		}
};

#endif