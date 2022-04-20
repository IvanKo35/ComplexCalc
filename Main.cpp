#include <iostream>
#include "Complex.h"
int main()
{
    Complex a{ 5,6 };
    Complex b{ 4,6 };
    a.sum(b).printComplex();
    
}
