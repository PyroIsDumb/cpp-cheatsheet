#include <iostream>

//cin << makes the user able to enter text
//cout >> outputs text

int main () {
    //Make strings for storage/input purposes.
    std::string name;
    std::string answer;

    //Ask the user to input their name. This will be handled with the "name" string we made earlier.
    std::cout << "Please type your name here: "; //Use std::getline(std::cin, name) to handle responses with spaces.
    std::cin >> name;

    std::cout << "Your name is: " << name << "Is this correct? y/n: ";
    std::cin >> answer;
    std::cout << "I'm too lazy to actually write working y/n responses so take this";

    return 0;
}