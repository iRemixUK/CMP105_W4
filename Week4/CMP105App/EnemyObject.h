#pragma once
#include "Framework/GameObject.h"
class EnemyObject :
	public GameObject
{
public:
	EnemyObject();
	~EnemyObject();
	
	// Set the window component
	void setWindow(sf::RenderWindow* hwnd) { window = hwnd; }

	void moveEnemy(float dt);

private:
	//Window Component
	sf::RenderWindow* window;

	float speedx;
	float speedy;
};

