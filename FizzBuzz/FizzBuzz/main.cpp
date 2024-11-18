#include <iostream>

void fizzbuzz(int value) {
    for(int i{1}; i <= value; ++i) {
        if((i % 15) == 0) {
            std::cout << "fizzbuzz";
        } else if ((i % 5) == 0) {
            std::cout << "buzz";
        } else if ((i % 3) == 0) {
            std::cout << "fizz";
        } else {
            std::cout << i;
        }
        
        std::cout << "\n";
    }
}

int main()
{
    fizzbuzz(15);

     return 0;
}
