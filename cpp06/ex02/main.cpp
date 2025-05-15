#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"


void identify_pointer(Base *src)
{
    if (dynamic_cast<A*>(src))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(src))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(src))
        std::cout << "C" << std::endl;
}

void identify_reference(Base & p)
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
    
    for (int i = 0; i < 5; i++) 
	{
        Base *base = generate();
        
        std::cout << "Test " << i + 1 << ":" << std::endl;
        std::cout << "Pointer identification: ";
        identify_pointer(base);
        std::cout << "Reference identification: ";
        identify_reference(*base);
        std::cout << std::endl;
        
        delete base;
    }
    
    return 0;
}