#pragma once
#include "Zerg.h"

class Zergling : public Zerg
{
	int maxHP = 30;
public:
	Zergling();
	~Zergling();

	virtual void Recovery() override;
	void SetHP(int hp);
};