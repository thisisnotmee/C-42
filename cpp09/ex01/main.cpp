#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
        std::cout << "Attention veuillez entrer les bons arguments" << std::endl;
    else if (argc > 2)
        std::cout << "Attention trop d'arguments" << std::endl;
    else
    {
        RPN exp;
        exp.SortArg(argv);
    }
}
