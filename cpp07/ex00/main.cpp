#include <iostream>
#include "Template.hpp"


int main( void )
{
    int a = 10;

    int b = 50;

    swap(a, b);

    std::cout << "a[" << a << "]\n" << std::endl;
    std::cout << "b[" << b << "]\n" << std::endl;

    return 0;
}