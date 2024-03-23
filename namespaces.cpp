#include <iostream>

namespace first { //Makes multiple integers of the same value possible

int x =1;

}

namespace second { 

int x = 2;

}


int main ()
{
    using namespace second; //Self explanatory

int x = 0;

std::cout << x; //If not explicitly stated what namespace is being used, the local version of the entity will be used.
                       //You can use "using namespace" inside of a function, or make it output using "std::cout << second::x;".

return 0; //Remove this line if your outputs dont match your code.

}