#include <iostream>
#include <string>

int main() {
    std::string characterName = "Christian";
    int level = 1;
    float health = 100.0;
    bool hasWeapon = true;

    std::cout << "Character Name: " << characterName << std::endl;
    std::cout << "Level: " << level << std::endl;

    level = level + 1;
    std::cout << "Level: " << level << std::endl;

    std::cout << "Health: " << health << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Has weapon: " << hasWeapon << std::endl;

    return 0;
}