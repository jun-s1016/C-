#pragma once
#include "Zerg.h"

class Lurker : public Zerg
{
	int maxHP = 125;
public:
	Lurker();
	void SetHP(int hp);
};

