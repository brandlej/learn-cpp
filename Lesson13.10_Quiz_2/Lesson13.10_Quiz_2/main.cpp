#include <iostream>

struct AdMetrics {
    int watchedCount{};
    double percentClicked{};
    double earningsPerClicked{};
};

AdMetrics inputAdMetrics() {
    AdMetrics tmp {};
    std::cout << "Enter how many ads were watched: ";
    std::cin >> tmp.watchedCount;

    std::cout << "Enter what percentage of users clicked on an ad: ";
    std::cin >> tmp.percentClicked;

    std::cout << "Enter the average earnings per clicked ad: ";
    std::cin >> tmp.earningsPerClicked;

    return tmp;
}

void printAdMetrics(AdMetrics& adMetrics) {
    std::cout << "Watched Count: " << adMetrics.watchedCount << "\n";
    std::cout << "Percent Clicked: " << adMetrics.percentClicked << "\n";
    std::cout << "Earnings Per Clicked: " << adMetrics.earningsPerClicked << "\n";
    std::cout << "Total: $" << (adMetrics.watchedCount * adMetrics.percentClicked / 100 * adMetrics.earningsPerClicked);
    std::cout << "\n";
}

int main() {
    AdMetrics adMetrics { inputAdMetrics() };
    printAdMetrics(adMetrics);
    
    return 0;
}
