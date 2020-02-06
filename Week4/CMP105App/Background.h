#pragma once
#include"Framework/GameObject.h"
class Background:
	public GameObject
{
public:
	Background();
	~Background();

	void setWindow(sf::RenderWindow* hwnd) { window = hwnd; }
	void handleInput(float dt);
	float getSpeedX();
private:
	float speedx;

	sf::Vector2f dimensions;
	sf::RenderWindow* window;
	sf::View view;
};

