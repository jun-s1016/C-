#include "Zerg.h"

Zerg::Zerg()
{
	cout << "Create Zerg" << endl;
}

Zerg::~Zerg()
{
	cout << "Release Zerg" << endl; 
}

void Zerg::Recovery()
{
	cout << "Zerg Recovery" << endl;
}

void Zerg::SetHP(int health)
{
	this->health = health;
}

int Zerg::GetHP()
{
	return health;
}
