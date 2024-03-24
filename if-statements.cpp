#include <iostream>

int main(){

    //If statements = do something if the condition is true
    //if not, don't do it, or do something else. Simple.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Age requirement passed. Welcome to placeholder app.";

    }
    else if(age < 0){
        std::cout << "Less than zero? You're not supposed to be here! Please enter your real age. This application will now close.";

    }
    else {
        std::cout << "Age conditions not met. This application will now close.";
    }
//Important note: else if order matters. If you want the app to be locked for people above a certain age, set that else if first.

    return 0;
}