#include <iostream>
#include <vector>

//Typedefs are meant for creating aliases.
//This is handy for easier readability and prevnetion of typos.
typedef std::string text_t;
typedef int number_t;
//You can also use "using" instead of typedef. You can try it by uncommenting the next lines of code. Make sure to comment typedef first.

//using text_t = std::string;
//using number_t = int;

int main () {

    text_t firstName = "Alexia";
    number_t age = 18;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}