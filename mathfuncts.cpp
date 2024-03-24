#include <iostream>
#include <cmath>

//basic math functions. For advanced math, go to: https://www.cplusplus.com/reference/cmath.
//not many explanations this time because im writing this at 1am with not enough sleep. I'll comment usable fuctions instead.
int main(){

    double x = 3;
    double y = 4;
    double z;

    //z = std::max(x, y);
    //z = std::min(x, y);
    //z = pow(x, y);
    //z= sqrt (x);
    //z = abs(-3); //If you enter a negative number, the compiler will spit out a positive number. Idk how absolute power works (i dont pay attention in math class)
      z = round(y); //use ceil instead of round if you want to round up. Use floor to always round down.


    std::cout << z;

    return 0;
}