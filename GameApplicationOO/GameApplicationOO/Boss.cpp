#include "Boss.h"

Boss::Boss() : Character() {}  

Boss::Boss(string name, int HP, int DMG) : Character(name, HP, DMG) {}  

void Boss::specialAttack(Character& target) {
    target.setHP(target.getHP() - (this->getDMG() * 2));
    cout << this->getName() << " usa un ataque especial contra " << target.getName() << "!" << endl;
}