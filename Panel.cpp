#include "Panel.h"

Panel::Panel(float x,float y,float sx,float sy,Color c) {
	sprite = { x,y,sx,sy };
	pos.x = x;
	pos.y = y;
	sizex = sx;
	sizey = sy;
	color = c;
}


//Draw Function (Should be called in the main loop)
void
Panel::Draw() {
	DrawRectangle(pos.x, pos.y, sizex, sizey, color);
}

Panel::~Panel() {
	//This Doesn't seem to do anything at the current moment
}