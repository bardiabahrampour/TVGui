#pragma once
#include <raylib.h>


#define BUTTON_GRID_ONE CLITERAL(Vector2){(float)GetScreenWidth()/20,(float)GetScreenHeight()/4}
#define BUTTON_GRID_TWO CLITERAL(Vector2){(float)GetScreenWidth()/3,(float)GetScreenHeight()/4}
class Cursor {
public:
	Vector2 curpos{};
	void update_cur();
	void add_pos(Vector2 pos);
	Cursor();
	bool grid_one{false}, grid_two{false}, grid_three{false}, grid_four{false}, grid_five{false};
};
