#include <iostream>
#include <stdio.h>


class B{
    void f(){std::cout << "" << std::endl;}
};

class A : B{
    void f(){std::cout << "Classe A" << std::endl;}
};

int main( void )
{
	B b; A a;
	
	A* a1 = &b;
    return 0;
}