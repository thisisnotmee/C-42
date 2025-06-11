#include "Span.hpp"

Span::Span(unsigned int n)
{
	_MAX_SIZE = n;
}

Span::~Span()
{

}

Span::Span(Span const &src)
{
	*this = src;
}

Span	&Span::operator=(Span const &src)
{
	if (this != &src)
	{
		this->_MAX_SIZE = src._MAX_SIZE;
		this->_mySet = src._mySet;
	}
}

void	Span::addNumber(unsigned int n)
{
	try
	{
		if ((_mySet.size()) >= _MAX_SIZE)
			throw MaxException();
		else if (_mySet.size() < _MAX_SIZE)
			this->_mySet.push_back(n);
	}
	catch (std::exception &e)
	{
		std::cout << "EXCEPTION CATCH : " << e.what();
	}
}

int		Span::shortestSpan()
{
	try 
	{
		if (_mySet.empty() || _mySet.size() == 1)
			throw ErrorException();
		
		std::sort(_mySet.begin(), _mySet.end());
		int intmax = std::numeric_limits<int>::max();

		for (size_t i = 0; i < _mySet.size() - 1; ++i)
		{
			int temp = _mySet[i + 1] - _mySet[i];

			if (temp < intmax)
				intmax = temp;
		}

	}
	catch(std::exception &e)
	{
		std::cout << "Exception :" << e.what() << "\n";
	}
}

int		Span::longestSpan()
{

}