#include "Lurker.h"

Lurker::Lurker()
{
	health = 125;
	maxHP = health;
	cout << "Spawn Lurker" << endl;
}

Lurker::~Lurker()
{
	cout << "Release Lurker" << endl;
}

void Lurker::Recovery()
{
	health = maxHP;
}

void Lurker::SetHP(int hp)
{

}
