#include <iostream>

int main(){

    //Ternary operators are a replacement to an if/else statement.
    //Condition ? expression1 : expression2;
    //The compiler might spit out "3.64eblabla". I have no idea why it does this. Please open a pull request if you know how to fix this.

    double grade;
    double result;

    std::cout << "Please input your grade here: "; std::cin >> grade;

    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail\n";
         std::cout << result;


    
    return 0;
}