#pragma once
#include <iostream>
#include "Character.h"
using namespace std;
class Boss : public Character
{

public:
	Boss();
	Boss(string name, int HP, int DMG);
void specialAttack(Character& target);
};