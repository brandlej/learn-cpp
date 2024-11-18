#include <iostream>

double calcRemainingHeight(double towerHeight, int secondsElapsed) {
    double gravity { 9.8 };
    double fallen = (gravity * secondsElapsed * secondsElapsed) * 0.5;
    double newHeight = towerHeight - fallen;

    if (newHeight < 0.0) {
        return 0.0;
    }
    
    return newHeight;
}

void printHeightValue(int currSecond, double remainingHeight) {
    if(remainingHeight == 0.0) {
        std::cout << "At " << currSecond << " seconds, the ball is on the ground." << "\n";
        return;
    }
    
    std::cout << "At " << currSecond << " seconds, the ball is at height: " << remainingHeight << " meters" << "\n";
}

int main(int argc, const char * argv[]) {
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    
    printHeightValue(0, towerHeight);
    
    printHeightValue(1, calcRemainingHeight(towerHeight, 1));
    
    printHeightValue(2, calcRemainingHeight(towerHeight, 2));
    
    printHeightValue(3, calcRemainingHeight(towerHeight, 3));
    
    printHeightValue(4, calcRemainingHeight(towerHeight, 4));
    
    printHeightValue(5, calcRemainingHeight(towerHeight, 5));
    
    
    return 0;
}
