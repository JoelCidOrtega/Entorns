#include "Character.h"
#include <string>
Character::Character()
{
	name = "";
	HP = 0;
	DMG = 0;
}

Character::Character(string name, int HP, int DMG)
{
	this->name = name;
	this->HP = HP;
	this->DMG = DMG;
}

string Character::getName()
{
	return name;
}

void Character::setName(string name)
{
	this->name = name;
}

int Character::getHP()
{
	return HP;
}

void Character::setHP(int HP)
{
	this->HP = HP;
}

int Character::getDMG()
{
	return DMG;
}

void Character::setDMG(int DMG)
{
	this->DMG = DMG;
}

string Character::getStatus()
{
	return string("\nName: " + name+ "\nHP: " + to_string(HP) + "\nDMG: " + to_string(DMG));
}

void Character::attack(Character& c)
{
	//c.setHP(c.getHP() - DMG);
	c.setHP(c.getHP()-this->getDMG());
}