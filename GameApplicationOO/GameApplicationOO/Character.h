#pragma once
#include <iostream>
using namespace std;
class Character
{

	// ATRIBUTOS
private:
	string name;
	int HP;
	int DMG;
public:

	//CONSTRUCTOR
	Character();
	Character(string name, int HP, int DMG);

	//GETTERS & SETTERS

	string getName();
	void setName(string name);

	int getHP();
	void setHP(int HP);

	int getDMG();
	void setDMG(int DMG);

	//SIMILAR A TOSTRING
	string getStatus();

	//METODOS PROPIOS
	void attack(Character& c);
};