#include "Span.hpp"

Span::Span(): _MAX_SIZE(0)
{
	std::cout << VERT_CLAIR << "->Constructeur" << RESET << " [SPAN CLASS]\n";

}

Span::Span(unsigned int n): _MAX_SIZE(n)
{
	std::cout << VERT_CLAIR << "->Constructeur" << RESET << " [SPAN CLASS]\n";
}

Span::~Span()
{
	std::cout << ROUGE_CLAIR << "->Destructeur" << RESET << " [SPAN CLASS]";
}

Span::Span(Span const &src)
{
	*this = src;
}

Span	&Span::operator=(Span const &src)
{
	if (this != &src)
	{
		_MAX_SIZE = src._MAX_SIZE;
		_v = src._v;
	}
	return *this;
}

void	Span::addNumber(unsigned int n)
{
	if (_v.size() >= _MAX_SIZE)
		throw VectorFullException();
	else
		_v.push_back(n);
}

void	Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (std::distance(start, end) + _v.size() > _MAX_SIZE)
		throw VectorFullException();
	_v.insert(_v.end(), start, end);
}

int		Span::shortestSpan()
{
	if (_v.size() <= 1)
		throw ErrorException();

	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return (min);
}

int		Span::longestSpan()
{
	if (_v.size() <= 1)
		throw ErrorException();

	std::vector<int> tmp = _v;
	std::sort(tmp.begin(), tmp.end());

	return (tmp[tmp.size() - 1] - tmp[0]);
}