#include <iostream>

int main () {
    //type conversion converts a value of one data type to another.
    //You can do this implicit (automatic) or explicit (precede the value with new data type (int))

    //Implicit example
    double x = (int) 3.14; //Int can only display a whole number, truncating the .14.

    std::cout << x << '\n'; //The compiler should handle this request as: "int x = 3.14;", making this output as 3.
    
        char y = 100;
    std::cout << y << '\n'; //The compiler converts this with the ASCII table. This should make an output saying "d", below 3.

    //Explicit example
    std::cout << (char) 128;
    //I honestly have no clue how to explain this part lmao

    return 0;
}