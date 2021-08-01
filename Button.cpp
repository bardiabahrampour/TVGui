//Button Behaviours
#include "Button.h"
//Function to Init Buttons (Must be used after SetTargetFps() and before the main loop
Button::Button(Vector2 p_pos, Vector2 p_size, const char* p_title) {
	Button_state  state;
	state = Normal;
	title_font = LoadFontEx(font_path, font_size, 0, 0);
	pos = p_pos;
	size = p_size;
	title = p_title;
}


void
Button::Draw() {
	DrawRectangle(pos.x, pos.y, size.x, size.y, COLOR_NORMAL);
	DrawTextEx(title_font, title, pos, font_size, 1, WHITE);
}


Button::~Button() {
	UnloadFont(title_font);
}