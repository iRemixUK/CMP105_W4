#include "Cursor.h"

Cursor::Cursor()
{
	

}

Cursor::~Cursor()
{

}

void Cursor::Replace()
{
	// Set position        
	int position_x = input->getMouseX();
	int position_y = input->getMouseY();
	setPosition(position_x, position_y);
}
