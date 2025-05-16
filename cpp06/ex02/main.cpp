#include "Base.hpp"


void identify_ptr(Base *src)
{
    if (dynamic_cast<A*>(src))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(src))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(src))
        std::cout << "C" << std::endl;
}

void identify_ref(Base &p)
{
    try 
	{
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (std::bad_cast &) {}
    
    try
	{
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (std::bad_cast &) {}
    
    try
	{
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (std::bad_cast &) {}
}

Base * generate(void)
{
    int random = rand() % 3;
    
    switch (random) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return NULL;
    }
}

int main(void)
{
    std::srand(time(NULL));
    
    for (int i = 0; i < 3; i++) 
	{
        Base *base = generate();
        std::cout << "Pointeur : ";
        identify_ptr(base);
        std::cout << "Référence : ";
        identify_ref(*base);
		        
        delete base;
    }
    
    return 0;
}