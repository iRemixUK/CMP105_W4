#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	window->setMouseCursorVisible(false);

	// initialise game objects
	//Player Object
	texture.loadFromFile("gfx/Mushroom.png");

	player.setTexture(&texture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(100, 100);
	player.setInput(input);

	// Enemy Object
	texture2.loadFromFile("gfx/goomba.png");
	Enemy.setTexture(&texture2);
	Enemy.setSize(sf::Vector2f(100, 100));
	Enemy.setPosition(800, 200);
	Enemy.setWindow(window);

	texture3.loadFromFile("gfx/Beach_Ball.png");
	Enemy2.setTexture(&texture3);
	Enemy2.setSize(sf::Vector2f(100, 100));
	Enemy2.setPosition(400, 300);
	Enemy2.setWindow(window);

	CursorPNG.loadFromFile("gfx/icon.png");
	cursor.setTexture(&CursorPNG);
	cursor.setSize(sf::Vector2f(100, 100));
	cursor.setInput(input);
	cursor.setWindow(window);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	
	player.handleInput(dt);
}


// Update game objects
void Level::update(float dt)
{
	player.move(player.getSpeedX() * dt, player.getSpeedY() * dt);
	Enemy.moveEnemy(dt);
	Enemy2.moveEnemy(dt);
	cursor.Replace();
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(player);
	window->draw(Enemy);
	window->draw(Enemy2);
	window->draw(cursor);
	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}