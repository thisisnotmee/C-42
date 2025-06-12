#pragma

#include <iostream>
#include <algorithm>
#include <exception>

class Span 
{
	private :
		std::vector<int> _mySet;
		unsigned int	_MAX_SIZE;
	public :
		Span(unsigned int n);
		~Span();
		Span(Span const &src);
		Span &operator=(Span const &);
		void 	addNumber(unsigned int n);
		int		shortestSpan();
		int		longestSpan();

		class MaxException : public std::exception
		{
			virtual const char *what() const throw()
			{return "Attention : Variable 'N' dépasse la taille maximale !";};
		};
		class ErrorException : public std::exception
		{
			virtual const char *what() const throw()
			{return "Attention : Le container crée ne peut fonctionner sans un minimum de 2 membres !";};
		};
};