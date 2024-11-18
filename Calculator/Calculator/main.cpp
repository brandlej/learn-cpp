#include <iostream>

int calculate(int x, int y, char op) {
    switch(op) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '%':
            return x % y;
        default:
            std::cout << "Invalid operator" << "\n";
            return 0;
    }
}

char getOperator() {
    char c{};
    std::cin >> c;
    
    return c;
}

int getOperand() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    
    return x;
}

int main()
{
    int x{ getOperand() };
    int y{ getOperand() };
    
    char op{};
    std::cout << "Enter an operator: ";
    std::cin >> op;
    
    std::cout << x << " " << op << " " << y << " is " << calculate(x, y, op) << "\n";
    
    
    
    return 0;
}
