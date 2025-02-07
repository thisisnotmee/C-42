#include "Bureaucrat.hpp"

int main( void )
{
    Bureaucrat Michel("Michael", 149);
    Michel.afficher(std::cout);
    Michel.GradeDecrase();
    Michel.afficher(std::cout);
    Michel.GradeDecrase();
    Michel.afficher(std::cout);
    return 0;
}