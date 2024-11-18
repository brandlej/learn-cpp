#include <iostream>

int main(int argc, const char * argv[]) {
//    Chapter 1 program
//    std::cout << "Enter an integer: ";
//
//    int input{};
//    std::cin >> input;
//    
//    std::cout << "Double " << input << " is: " << input * 2 << "\n";
//    std::cout << "Triple " << input << " is: " << input * 3 << "\n";
    
    // Chapter 1 summary and quiz
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;
    
    std::cout << "Enter another integer: ";
    int num2{};
    std::cin >> num2;
    
    std::cout << num << " + " << num2 << " is " << num + num2 << ".\n";
    std::cout << num << " - " << num2 << " is " << num - num2 << ".\n";
    
    return 0;
}
