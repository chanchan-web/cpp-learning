#include <iostream>
#include <string>

int calculateDamage(int attackPower, int defense) {
    int result =attackPower - defense;
    if (result < 0) {
        return 0;
    } else {
        return result;
    }

}

int main() {
    std::string playerName;
    int playerHealth = 100;
    int playerAttack = 15;

    int monsterHealth = 50;
    int monsterAttack = 10;

    std::cout << "Enter your character's name: ";
    std::cin >> playerName;

    std::cout << "A wild monster appears before " << playerName << "!" << std::endl;

    int round = 1;
    while (playerHealth > 0 && monsterHealth > 0) {
        std::cout << "--- Round " << round << " ---" << std::endl;

        int damageToMonster = calculateDamage(playerAttack, 0);
        monsterHealth = monsterHealth - damageToMonster;
        std::cout << playerName << " attacks! Monster takes " << damageToMonster << " damage" << std::endl;

        if (monsterHealth > 0) {
            int damageToPlayer = calculateDamage(monsterAttack, 0);
            playerHealth = playerHealth - damageToPlayer;
            std::cout << "Monster" << " attacks! Player takes " << damageToPlayer << " damage" << std::endl;
        }

        round = round + 1;
    }

    if (playerHealth <= 0) {
        std::cout << playerName << " has been defeated. Game over." << std::endl;
    } else {
        std::cout << "You defeated the monster! " << playerName << " wins!" << std::endl;
    }

    std::cout << "Final Health: " << playerHealth << std::endl;

    return 0;
}