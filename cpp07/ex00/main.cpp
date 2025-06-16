#include <iostream>
#include <cstdlib>
#include "Template.hpp"


int main( void )
{
    int a = 10;
    int b = 50;

    system("clear");

    std::cout << "B = MAX = " << max(a, b) << "\n";
    std::cout << "A = MIN = " << min(a, b) << "\n";

    swap(a, b);

    std::cout << BLEU_CLAIR << "[Swapping values]\n" << RESET;

    std::cout << "A = MAX = " << max(a, b) << "\n";
    std::cout << "B = MIN = " << min(a, b) << "\n";

    if (a > b)
        std::cout << VERT_CLAIR << "[Swap Valide]\n" << RESET;
    else
        std::cout << "[Erreur de Swap]\n";

    return 0;
}