#pragma once
#include "Zerg.h"

class Lurker : public Zerg
{
	int maxHP = 125;
public:
	Lurker();
	~Lurker();

	virtual void Recovery() override;
	void SetHP(int hp);
};

