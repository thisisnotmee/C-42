#include "Bureaucrat.hpp"

int main( void )
{
    Bureaucrat Jean("Jean", 10);

    while(Jean.GetGrade() != 1)
    {
        system("sleep 1");
        Jean.GradeIncrase();
        std::cout << Jean << std::endl;
    }        
    Jean.GradeIncrase();
}