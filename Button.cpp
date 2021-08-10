//Button Behaviours
#include "Button.h"
#include <iostream>
//Function to Init Buttons (Must be used after SetTargetFps() and before the main loop
Button::Button(Vector2 p_pos, int p_size, const char* p_title ,Cursor &c) {
	title_font = LoadFontEx(font_path, font_size, 0, 0);
	pos = p_pos;
	if (p_size == 1)
		size = BUTTON_WIDE_SIZE;
	else size = pos;
	title = p_title;
	c.add_pos(pos);
	
}


void
Button::Draw(Cursor c) {
	if (state == Normal)
		color = COLOR_NORMAL;
	else if (state == Hovered)
		color = COLOR_HOVERED;
	else if (state == Clicked)
		color = COLOR_CLICKED;
	DrawRectangle(pos.x, pos.y, size.x, size.y, color);
	DrawTextEx(title_font, title, TEXT_POS, font_size, 1, COLOR_TEXT);
	if (c.curpos.x == pos.x && c.curpos.y == pos.y) {
		state = Hovered;
	}
	else {
		state = Normal;
	}
	if (state == Hovered) {
		if (IsKeyPressed(KEY_ENTER)) {
			Click();
		}
	}
}

bool
Button::Click() {
	state = Clicked;
	if (((int)GetTime() % 350) == 0) {
		state = Normal;
	}
	clicked = true;
	return true;
}

Button::~Button() {
	UnloadFont(title_font);
}