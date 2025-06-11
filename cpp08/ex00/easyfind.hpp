#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


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

// Trouve le second dans le premier 
template<typename T>
void	easyfind(T container, int toFind)
{
	if (std::find(container.begin(), container.end(), toFind) != container.end())
		std::cout << "\nContainer is contain the value : " << toFind;
	else
		std::cout << "\nThe Value isnt in this containers\n";
}


#endif