#include <iostream>
#include "Calculator.h"
int main() 
{
    Calculator calc;
    double res1 = calc.Add(25.0,75.0);
    std::cout << "25 + 75 = " << res1 <<std::endl;
    double res2 = calc.Sub(50.0,25.0);
    std::cout << "50 - 25 = " << res2 <<std::endl;
    return 0;
}
