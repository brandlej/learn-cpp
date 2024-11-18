#include <iostream>

// Write the function getQuantityPhrase() here
constexpr std::string_view getQuantityPhrase(int count) {
    if (count < 0) {
        return "negative";
    } else if (count == 0) {
        return "no";
    } else if (count == 1) {
        return "a single";
    } else if (count == 2) {
        return "a couple of";
    } else if (count == 3) {
        return "a few";
    }

    return "many";
}

// Write the function getApplesPluralized() here
constexpr std::string_view getApplesPluralized(int count) {
    // wrap condition in parantheses!
    return (count == 1) ? "apple" : "apples";
}

int main()
{
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}

