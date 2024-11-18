#include <iostream>
#include <string>
#include <string_view>

std::string getPersonName(int count) {
    std::string name {};
    std::cout << "Enter the name of person #" << count << ": ";
    // make sure to read a full line of text, otherwise it will stop at first whitespace
    // and have the rest of input buffered
    std::getline(std::cin >> std::ws, name);
    
    return name;
}

int getPersonAge(std::string_view name) {
    int age {};
    std::cout << "Enter the age of " << name << ": ";
    std::cin >> age;
    
    return age;
}

int main() {
    const std::string firstPersonName { getPersonName(1) };
    int firstPersonAge { getPersonAge(firstPersonName) };

    const std::string secondPersonName { getPersonName(2) };
    int secondPersonAge { getPersonAge(secondPersonName) };
    
    // could maybe move to function
    if (firstPersonAge > secondPersonAge)
        std::cout << firstPersonName << " (age " << firstPersonAge << ")" << " is older than " << secondPersonName << " (age " << secondPersonAge << ")." << "\n";
    else
        std::cout << secondPersonName << " (age " << secondPersonAge << ")" << " is older than " << firstPersonName << " (age " << firstPersonAge << ")."  << "\n";
    
    return 0;
}
