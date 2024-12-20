#include <iostream>
#include <string_view>

enum class Animal {
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

constexpr std::string_view getAnimalName(Animal animal) {
    using enum Animal;

    switch(animal) {
        case pig:
            return "pig";
        case chicken:
            return "chicken";
        case goat:
            return "goat";
        case cat:
            return "cat";
        case dog:
            return "dog";
        case duck:
            return "duck";
        default:
            return "???";
    }
}

void printNumberOfLegs(Animal animal) {
    using enum Animal;

    std::cout << "A " << getAnimalName(animal) << " has ";
    
    switch(animal) {
        case pig:
        case goat:
        case cat:
        case dog:
            std::cout << "4 legs";
            break;
        case chicken:
        case duck:
            std::cout << "2 legs";
            break;
        default:
            std::cout << "unknown legs";
            break;
    }
    std::cout << "\n";
}

int main() {
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);

    return 0;
}
