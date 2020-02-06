#pragma once
#include "Framework\GameObject.h"
class Cursor:
	public GameObject

{
public:
	Cursor();
	~Cursor();
	void Replace();

	void setWindow(sf::RenderWindow* hwnd) { window = hwnd; }

private:
	sf::RenderWindow* window;
	sf::Texture texture;
};

