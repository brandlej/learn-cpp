#include <iostream>

int main() {
    // outer loop count (the rows)
    int outer{ 1 };
    while(outer <= 5) {
        // init to 5 to count from 5, 4, 3, ... 1 (descending)
        int inner{ 5 };
        // inner loop to print each individual number or space
        while(inner >= 1) {
            // if outer loop count is greater than or equal to inner count, print
            // otherwise print a space bc we have not crossed that threshold
            if(outer >= inner) {
                std::cout << inner;
            } else {
                std::cout << ' ';
            }
            --inner;
        }
        std::cout << "\n";
        ++outer;
    }

    return 0;
}
