#include <iostream>
#include <string>

void displayWelcome () {
    std::cout << "===Welcome to the Arena===" << std::endl;
}

int calculateDamage (int attackPower, int defense) {
    int result = attackPower - defense;

    if (result < 0) {
        return 0;
    } else {
        return result;
    }
}

int main() {

    displayWelcome();

    int damageTaken = calculateDamage(10, 5);
    std::cout << "Damage taken: " << damageTaken << std::endl;

    damageTaken = calculateDamage(5, 10);
    std::cout << "Damage taken: " << damageTaken << std::endl;

    return 0;

}