#include <iostream>

int getInteger();

int main(int argc, const char * argv[]) {
    int x{ getInteger() };
    int y{ getInteger() };
    
    std::cout << x << " + " << y << " is " << x + y << "\n";

    return 0;
}
