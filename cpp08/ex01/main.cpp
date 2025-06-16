#include "Span.hpp"

int main( void )
{
	Span	s(100000000);
	srand(time(NULL));

	try
	{
		std::vector<int> tmp;
	
		for (unsigned int i = 0; i < 10000000; i++)
		{
			tmp.push_back(rand() % 100000);
		}

		std::vector<int>::iterator start = tmp.begin();
		std::vector<int>::iterator end = tmp.end();
		s.addNumbers(start, end);
		std::cout << VERT_CLAIR << "Shortest Span : " << s.shortestSpan() << "\n";
		std::cout << ROUGE_CLAIR << "Longuest Span : " << s.longestSpan() << "\n";
	}
	catch(std::exception &e)
	{
		std::cout << BLEU_CLAIR << "Exception :" << e.what() << RESET;
	}
	
	return 0;
}