#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    Bureaucrat pleb("pauvres", 149);
    std::cout << pleb << std::endl;

    Bureaucrat  DIEU("dieu", 1);

    Form    F1("F1", -10, 148);

    std::cout << F1 << std::endl;
    
    pleb.SignForm(F1);

    pleb.GradeIncrase();
    std::cout << pleb << std::endl;
    pleb.SignForm(F1);
}