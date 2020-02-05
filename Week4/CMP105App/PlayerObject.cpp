#include "PlayerObject.h"

PlayerObject::PlayerObject()
{
	speedx = 0.f;
	speedy = 0.f;
}

PlayerObject::~PlayerObject()
{

}

 void PlayerObject::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Up)) // Up
	{
		speedy = -200.f;
	}
	else if (input->isKeyDown(sf::Keyboard::Down)) // Down
	{
		speedy = 200.f;
	}
	else
	{
		speedy = 0;
	}

	if (input->isKeyDown(sf::Keyboard::Left)) // Left
	{
		speedx = -200.f;
	}
	else if (input->isKeyDown(sf::Keyboard::Right)) // Right
	{
		speedx = 200.f;
	}
	else
	{
		speedx = 0;
	}

}

 float PlayerObject::getSpeedX()
 {
	 return speedx;
 }

 float PlayerObject::getSpeedY()
 {
	 return speedy;
 }