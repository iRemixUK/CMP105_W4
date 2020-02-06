#include "EnemyObject.h"

EnemyObject::EnemyObject()
{
	speedx = 100.f;
	speedy = 100.f;

}

EnemyObject::~EnemyObject()
{

}

void EnemyObject::moveEnemy(float dt)
{
	//Current Position
	sf::Vector2f Pos = getPosition();
	// Object Size
	sf::Vector2f ObjectSize = getSize();
	// Window Size
	sf::Vector2u WinSize = window->getSize();

	if (Pos.x > WinSize.x - ObjectSize.x)
	{
		setPosition(WinSize.x - ObjectSize.x, Pos.y);
		speedx = -100.f;
	}

	if (Pos.x < 0)
	{
		setPosition(0, Pos.y);
		speedx = 100.f;
	}

	if (Pos.y > WinSize.y - ObjectSize.y)
	{
		setPosition(Pos.x, WinSize.y - ObjectSize.y);
		speedy = -100.f;
	}

	if (Pos.y < 0)
	{
		setPosition(Pos.x, 0);
		speedy = 100.f;
	}

	move(speedx * dt, speedy * dt);
}