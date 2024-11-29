#include <iostream>

struct Fraction {
    int numerator{};
    int denominator{};
};

Fraction readFraction() {
    Fraction tmp{};
    std::cout << "Enter a value for the numerator: ";
    std::cin >> tmp.numerator;
    
    std::cout << "Enter a value for the denominator: ";
    std::cin >> tmp.denominator;

    std::cout << "\n";

    return tmp;
}

Fraction multiplyFractions(Fraction& fraction1, Fraction& fraction2) {
    return { .numerator{ fraction1.numerator * fraction2.numerator }, .denominator{ fraction1.denominator * fraction2.denominator } };
}

void printFraction(Fraction& fraction) {
    std::cout << "Your fractions multiplied together: " << fraction.numerator << "/" << fraction.denominator << "\n";
}

int main() {
    Fraction fraction1 { readFraction() };
    Fraction fraction2 { readFraction() };
    
    Fraction result { multiplyFractions(fraction1, fraction2) };
    
    printFraction(result);
    
    return 0;
}
