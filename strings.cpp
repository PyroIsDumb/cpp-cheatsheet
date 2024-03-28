#include <iostream>

//I'm too lazy to add comments today, sorry.

int main()
{
    
    std::string name;
    std::cout << "Enter your desired display name: ";
    std::getline(std::cin, name);

if(name.length() > 12){
            std::cout << "Your display name can't be over 12 characters. Please pick a new one.";
    }
        else{
            std::cout << "Welcome " << name;
        }


if (name.empty()){
    std::cout << "Name cannot be empty. Please enter a name.";

}
    else{
        std::cout << "Welcome " << name;
    }

    return 0;
}