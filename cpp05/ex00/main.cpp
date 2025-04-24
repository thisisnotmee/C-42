#include "Bureaucrat.hpp"

int main( void )
{
    Bureaucrat Jean("Jean", 150);

    while(Jean.GetGrade() != 1)
    {
        Jean.GradeIncrase();
        std::cout << Jean << std::endl;
    }        
    Jean.GradeIncrase();
}