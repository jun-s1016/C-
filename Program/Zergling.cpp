#include "Zergling.h"

Zergling::Zergling()
{
	health = 35;
	maxHP = health;
	cout << "Spawn Zerglings" << endl;
}

Zergling::~Zergling()
{
	cout << "Release Zergling" << endl;
}

void Zergling::Recovery()
{
	health = maxHP;	
}

void Zergling::SetHP(int hp)
{

}



