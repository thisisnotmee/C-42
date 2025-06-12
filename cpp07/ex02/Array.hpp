#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <cstdlib>

#define RESET      "\033[0m"

// Standard Colors
#define NOIR       "\033[0;30m"
#define ROUGE      "\033[0;31m"
#define VERT       "\033[0;32m"
#define JAUNE      "\033[0;33m"
#define BLEU       "\033[0;34m"
#define MAGENTA    "\033[0;35m"
#define CYAN       "\033[0;36m"
#define BLANC      "\033[0;37m"

// Bright Colors
#define GRIS       "\033[1;30m"
#define ROUGE_CLAIR "\033[1;31m"
#define VERT_CLAIR "\033[1;32m"
#define JAUNE_CLAIR "\033[1;33m"
#define BLEU_CLAIR "\033[1;34m"
#define MAGENTA_CLAIR "\033[1;35m"
#define CYAN_CLAIR "\033[1;36m"
#define BLANC_CLAIR "\033[1;37m"

// Background Colors
#define FOND_ROUGE     "\033[41m"
#define FOND_VERT      "\033[42m"
#define FOND_JAUNE     "\033[43m"
#define FOND_BLEU      "\033[44m"
#define FOND_MAGENTA   "\033[45m"
#define FOND_CYAN      "\033[46m"
#define FOND_GRIS      "\033[47m"

template<class T>
class Array
{
	public :
		Array( void ); // Constructeur OK
		~Array( void ); // Destructeur OK
		Array( unsigned int n ); // tab[n]; OK
		Array( const Array &copie ); // Copie par réf OK
		T&			operator[](unsigned int i) const; // Accède aux cases OK
		Array &operator=( Array const &copie ); // Copie 
		
		void		print(std::ostream& os) const; // Affichage
		int	getSize( void ) const; // getsize OK

		class	OpException : public std::exception
		{
			public :
				virtual const char *what() const throw(){
					return "\nUtilisation de l'operateur incorrecte\n";
				}
		};
	private :
		T*		_tab;
		unsigned int		_size;
};

template<class T>
Array<T>::Array( void ): _size(0)
{
	std::cout << ROUGE_CLAIR << "\n-> Constructeur\n" << RESET;
	this->_tab = new T[_size];
}

template<class T>
Array<T>::Array( unsigned int n ): _size(n)
{
	std::cout << ROUGE_CLAIR << "\n-> Constructeur[n]\n" << RESET;
	this->_tab = new T[_size];

}

template<class T>
Array<T>::Array( Array<T> const &copie )
{
	std::cout << ROUGE_CLAIR << "\n-> Constructeur de Copie\n" << RESET;
	_tab = NULL;
	operator=(copie);
}

template<class T>
int		Array<T>::getSize( void ) const
{
	return this->_size;
}

template <class T>
Array<T>::~Array( void )
{
	std::cout << ROUGE_CLAIR << "\n-> Destructeur\n" << RESET;
	delete[] _tab;
}

template <class T>
void	Array<T>::print(std::ostream& stream) const
{
	unsigned int i;

	if (_size == 0)
	{
		std::cout << "Template Vide" << std::endl;
		return ;
	}
	for (i = 0; i < _size - 1; i++)
		stream << _tab[i] << " - ";
	if (i == _size - 1)
		stream << _tab[i];
}

template <class T>
T&			Array<T>::operator[](unsigned int i) const
{
	if (i >= _size || _tab == NULL)
	{
		throw OpException();
	}
	return _tab[i];
}

template <class T>
std::ostream&	operator<<(std::ostream& os, Array<T> const &src)
{
	src.print(os);
	return (os);
}

template<class T>
Array<T> 	&Array<T>::operator=( Array const &copie )
{
	if (_tab != NULL)
		delete[] _tab;
	_size = copie._size;
	_tab = new T[_size];

	for (unsigned int i = 0; i < _size; i++)
	{
		this->_tab[i] = copie[i];
	}
	return *this;
}

#endif