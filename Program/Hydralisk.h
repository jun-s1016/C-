#pragma once
#include "Zerg.h"

class Hydralisk : public Zerg
{
	int maxHP = 80;
public:
	Hydralisk();
	~Hydralisk();
	
	virtual void Recovery() override;
	void SetHP(int hp);
};

