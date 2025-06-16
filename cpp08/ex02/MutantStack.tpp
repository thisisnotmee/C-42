#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
	std::cout << ROUGE_CLAIR << "\n------- Mutant Stack -------\n" << RESET;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << ROUGE_CLAIR << "----------------------------\n" << RESET; 
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &ref)
{
	*this = ref;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &ref)
{
	if (*this != ref)
	{
		this->c = ref->c;
	}
	return *this;
}