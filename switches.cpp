#include <iostream>

int main(){
    //Switches are an alternative to using many "else if" statements.
    //It compares one value against matching cases.

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month)   {
    case 1:
        std::cout << "January";
        break;
    
    case 2:
        std::cout << "February";
        break;
    case 3:
        std::cout << "March";
        break;
    case 4:
        std::cout << "April";
        break;
    case 5:
        std::cout << "May";
        break;
    case 6:
        std::cout << "June";
        break;
    case 7:
        std::cout << "July";
        break;
    case 8:
        std::cout << "August";
        break;
    case 9:
        std::cout << "September";
        break;
    case 10:
        std::cout << "October";
        break;
    case 11:
        std::cout << "November";
        break;
    case 12:
        std::cout << "December";
        break;
    default:
        std::cout << "Please enter only in numbers 1 through 12. The Application will now be terminated.";

    } //Very optimized code frfr

    return 0;
}