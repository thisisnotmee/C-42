#include "Bureaucrat.hpp"
#include "Form.hpp"

/* PAS DE TRY CATCH ICI Bggg <3 */

int main( void )
{
    Bureaucrat B1("B1", 100);

    Bureaucrat  dieu("dieu", 1);

    Form    F1("F1", 90, 90);

    B1.SignForm(F1);
    B1.SignForm(F1);
    F1.BeSigned(B1);
    F1.BeSigned(dieu);
    F1.BeSigned(dieu);
    F1.BeSigned(dieu);
    F1.BeSigned(dieu);
}