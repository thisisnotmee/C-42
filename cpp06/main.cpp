#include <iostream>

class A {
	public :
		virtual void hello() {std::cout << "Je suis A" << std::endl;}
};

class B {
	public :
		virtual void hello() {std::cout << "Je suis A" << std::endl;}
};

int main( void )
{
	A 	*Parent;
	B	*enfant;

	
}