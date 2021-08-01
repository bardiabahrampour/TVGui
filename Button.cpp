//Button Behaviours
#include "Button.h"
//Function to Init Buttons (Must be used after SetTargetFps() and before the main loop
Button::Button(Vector2 p_pos, Vector2 p_size, const char* p_title) {
	Button_state  state;
	state = Normal;
	DrawRectangle(pos.x, pos.y, size.x, size.y, COLOR_NORMAL);
}