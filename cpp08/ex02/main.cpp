#include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> mutant;
    srand(time(NULL));
    
    for (unsigned int i = 0; i < 10; i++)
    {
        mutant.push(rand() % 100000);
    }
    mutant.print();
    std::cout << "\n Stack.begin() = " << *mutant.begin() << "\n";
    std::cout << "\n Stack.end() = " << *mutant.end() << "\n";

    return 0;
}