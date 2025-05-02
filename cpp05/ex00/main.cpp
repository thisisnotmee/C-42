#include "Bureaucrat.hpp"

int main( void )
{
    Bureaucrat Jean("Jean", 3);

    for (int i = 0; i < 3; i++) 
    {
            std::cout << Jean << std::endl;

            if (Jean.GetGrade() == 1)
            {
                Jean.GradeIncrase();
                Jean.SetGrade(150);
                std::cout << Jean << std::endl;
            }
            else if (Jean.GetGrade() > 1 && Jean.GetGrade() < 150) 
                Jean.GradeIncrase();
            if (Jean.GetGrade() == 150)
                Jean.GradeDecrase();
    }
    
}