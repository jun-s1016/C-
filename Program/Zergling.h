#pragma once
#include "Zerg.h"

class Zergling : public Zerg
{
	int maxHP = 30;
public:
	Zergling();
	void SetHP(int hp);
};