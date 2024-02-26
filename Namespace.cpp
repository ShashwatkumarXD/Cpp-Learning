#include <iostream>

// namespace first{
//     int x=1;
// }
// namespace z{
//     int x=9;
// }
// int main(){
//     int x=0;
//     std::cout<<x;
//     return 0;
// }
// OUTPUT= 0. BUT----------------------->

namespace first{
    int x=1;
}
namespace z{
    int x=9;
}
int main(){
    int x=0;
    std::cout<<x << std::endl;
    std::cout<<first::x <<std::endl <<z::x; 
    return 0;
}

// OUTPUT= 0,1,9 ONLY BY PRINTING X.

// namespace allows to use same entities/varaible(with diff-diff values) identically as long as they are in 
//different namespace.
