#include <iostream>
#include <string>
#include <string_view>

struct Monster {
    enum MonsterType {
        ogre,
        dragon,
        orc,
        spider,
        slime,
    };

    MonsterType type {};
    std::string name {};
    int health {};
};

constexpr std::string_view getMonsterName(Monster::MonsterType monsterType) {
    using enum Monster::MonsterType;

    switch(monsterType) {
        case ogre:
            return "Ogre";
        case dragon:
            return "Dragon";
        case orc:
            return "Orc";
        case spider:
            return "Spider";
        case slime:
            return "Slime";
        default:
            return "???";
    }
}

void printMonster(Monster& monster) {
    // need getMonsterName, can just do monster.type
    // because it is a scoped enum and won't get converted
    // even if it was unscoped it would get converted to an integral
    std::cout << "This " << getMonsterName(monster.type)
        << " is named " << monster.name
    << " and has " << monster.health << " health." << "\n";
}

int main() {
    Monster ogre { Monster::ogre, "Torg", 145 };
    Monster slime { Monster::slime, "Blurp", 23 };
    
    printMonster(ogre);
    printMonster(slime);
    
    return 0;
}
