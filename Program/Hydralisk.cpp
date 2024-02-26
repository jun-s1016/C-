#include "Hydralisk.h"

Hydralisk::Hydralisk()
{
	health = 80;
	maxHP = health;
	cout << "Spawn Hydralisk" << endl;
}

Hydralisk::~Hydralisk()
{
	cout << "Release Hydralisk" << endl;
}

void Hydralisk::Recovery()
{
	health = maxHP;
}

void Hydralisk::SetHP(int hp)
{
	
}
