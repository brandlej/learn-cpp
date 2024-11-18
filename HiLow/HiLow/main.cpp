#include "Random.h"
#include <iostream>

void promptStart() {
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << "\n";
}

char promptPlayAgain(){
    char c {};
    bool validChoice { false };
    while(!validChoice) {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> c;
        if(c == 'y' || c == 'n') {
            validChoice = true;
        }
    }

    return c;
}

int promptGuess(int count) {
    int guess {};
    std::cout << "Guess #" << count << ": ";
    std::cin >> guess;
    
    return guess;
}

int main() {
    promptStart();
    
    int guessCount { 1 };
    int randomNumber { Random::get(1, 100) };
    
    while(guessCount <= 7) {
        int guess = promptGuess(guessCount);
        if (guess == randomNumber) {
            std::cout << "Correct! You win!" << "\n";
            char c = promptPlayAgain();
            if(c == 'n') {
                break;
            } else {
                guessCount = 1;
                promptStart();
                randomNumber = Random::get(1, 100);
                continue;
            }
        } else if (guess < randomNumber) {
            std::cout << "Your guess is too low." << "\n";
        } else if (guess > randomNumber) {
            std::cout << "Your guess is too high." << "\n";
        }

        ++guessCount;
    }
}
