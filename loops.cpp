#include <iostream>
#include <string>

int main() {
    for (int i = 1; i <= 10; i++) {
        std::cout << "Spawning wave " << i << std::endl;
    }

    int ammo = 5;

    while (ammo > 0) {
        std::cout << "Shot fired! Ammo remaining: " << ammo << std::endl;
        ammo = ammo - 1;
    }

    std::cout << "You have no ammo left." << std::endl;

    return 0;
}