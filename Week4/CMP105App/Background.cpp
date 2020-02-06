#include "Background.h"
#include <iostream>
using namespace std;

Background::Background()
{
	speedx = 0.f;
	setSize(sf::Vector2f(11038, 675));
	setPosition(0, 0);

}

Background::~Background()
{

}

void Background::handleInput(float dt)
{
	
	sf::Vector2f GetSize = getSize();
	sf::Vector2u WinSize = window->getSize();
	sf::Vector2f Pos = getPosition();
	sf::Vector2i WinPos = window->getPosition();

	std::cout << -(GetSize.x - WinSize.x) << endl;
	
	if (Pos.x > 0)
	{
		setPosition(0, 0);
	}

	if (Pos.x < -(GetSize.x - WinSize.x))
	{
		setPosition(-(GetSize.x - WinSize.x), 0);
	}

	if (input->isKeyDown(sf::Keyboard::Left )) // Left
	{
		speedx = 2000.f;
	}
	else if (input->isKeyDown(sf::Keyboard::Right )) // Right
	{
		speedx = -2000.f;
	}
	else
	{
		speedx = 0;
	}
	
}

float Background::getSpeedX()
{
	return speedx;
}