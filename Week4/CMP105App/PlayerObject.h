#pragma once
#include "Framework\GameObject.h"

class PlayerObject :
	public GameObject
{
public:
	PlayerObject();
	~PlayerObject();

	virtual void handleInput(float dt) override;
	float getSpeedX();
	float getSpeedY();
private:
	float speedx;
	float speedy;
	
};

