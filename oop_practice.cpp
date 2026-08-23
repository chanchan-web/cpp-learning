#include <iostream>
#include <string>

class Character {
    public:
    std::string name;
    int health;
    int attackPower;

    Character(std::string characterName, int characterHealth, int characterAttack) {
        name = characterName;
        health = characterHealth;
        attackPower = characterAttack;
    }

    void introduce() {
        std::cout << name << " has " << health << " HP and " << attackPower << " attack power." << std::endl;

    }
};

int main() {
    Character player("Christian", 100, 15);
    Character monster("Goblin", 30, 8);
    Character monster1("Orc", 50, 12);

    player.introduce();
    monster.introduce();
    monster1.introduce();

    return 0;
}