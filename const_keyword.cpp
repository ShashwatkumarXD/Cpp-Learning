#include <iostream>

int main(){
    const double PI=3.14159; // the variable which is declared as CONST. 
//the value of that particular variable can not be change., but for CONST. name of the variable should be in capital Letters.
// CONST. keyword convert the variable into (READ ONLY).
    double radius=10;
    double circumference=2*PI*radius;

    std::cout<< circumference<<" cm";

    return 0;    
}