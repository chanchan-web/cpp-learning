#include <iostream>
#include <string>

int main() {
    std::string characterName;
    int startingHealth;
    int startingLevel;

    std::cout <<"What is your Name: ";
    std::cin >> characterName;

    std::cout <<"How much is your Health: ";
    std::cin >> startingHealth;

    std::cout <<"What is your Level: ";
    std::cin >> startingLevel;

    std::cout << characterName << " starts at level " << startingLevel << " with " << startingHealth << " HP!" << std::endl;

    return 0;
}