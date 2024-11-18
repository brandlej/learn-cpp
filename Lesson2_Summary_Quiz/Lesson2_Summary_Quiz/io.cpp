#include "io.h"
#include <iostream>

int readNumber() {
    int num{};
    std::cout << "Enter a number: ";
    std::cin >> num;
    return num;
}

void writeAnswer(int answer) {
    std::cout << answer << "\n";
}
