#include <iostream>

double readDoubleInput() {
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    return x;
}

char readOperatorInput() {
    std::cout << "Enter +, -, *, or /: ";
    char c{};
    std::cin >> c;

    return c;
}

void print(double x, double y, char op, double output) {
    std::cout << x << " " << op << " " << y << " is " << output << "\n";
}

int main(int argc, const char * argv[]) {
    double x { readDoubleInput() };
    double y { readDoubleInput() };
    char op { readOperatorInput() };
    
    if (op == '+')
        print(x, y, op, x + y);
    else if (op == '-')
        print(x, y, op, x - y);
    else if (op == '*')
        print(x, y, op, x * y);
    else if (op == '/')
        print(x, y, op, x / y);
    else
        // do nothing
    return 0;
}
