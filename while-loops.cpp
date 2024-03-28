#include <iostream>
//A while loop can make code keep running an infinite amount of times.
//As long as a while condition is true, it will keep looping whatever code is after the statement's block.

int main(){
// Make string name for storing purposes
std::string name;

//As long as you don't enter a name, this code will infinitely repeat itself.
while(name.empty()){
std::cout << "Please enter your name: ";
std::getline(std::cin, name);

}

    std::cout << "Hello, " << name;
}