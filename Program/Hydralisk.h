#pragma once
#include "Zerg.h"

class Hydralisk : public Zerg
{
	int maxHP = 80;
public:
	Hydralisk();
	void SetHP(int hp);
};

