#pragma once
#include <raylib.h>
#include "Cursor.h"
//Button State Colors

//Normal State Color
#define COLOR_NORMAL   CLITERAL(Color){18,23,45,255}
//Hovered State Color
#define COLOR_HOVERED  CLITERAL(Color){25,46,89,255}
//Clicked State Color
#define COLOR_CLICKED  CLITERAL(Color){34,74,123,255}
//Text Color
#define COLOR_TEXT    WHITE
//text pos
#define TEXT_POS     CLITERAL(Vector2){pos.x + (float)GetScreenWidth()/64,pos.y + (float)GetScreenHeight()/36}

//Button Grids
#define BUTTON_GRID_ONE CLITERAL(Vector2){(float)GetScreenWidth()/20,(float)GetScreenHeight()/4}
#define BUTTON_GRID_TWO CLITERAL(Vector2){(float)GetScreenWidth()/3,(float)GetScreenHeight()/4}

//Button Sizes
#define BUTTON_WIDE_SIZE CLITERAL(Vector2){(float)GetScreenWidth()/4,(float)GetScreenHeight()/6}
#define BUTTON_WIDE 1


//Buttons Controlled by the Keyboard 
class Button
{
private:
	Color color{};
	Font title_font{};
	const char* font_path{"data/fonts/default.ttf"};
	int font_size{GetScreenHeight()/9};
public:
	int size_state{};   // 0 = small, 1 = wide , 2 = large
	Button(Vector2 p_pos,int p_size,const char* p_title,Cursor &c);
	~Button();
	void Draw(Cursor c);
	bool Click();
	bool clicked{ false };
	Vector2 pos{}, size{};
	const char* title{};
	Rectangle sprite{};
	//Button States
	enum Button_state {
		Normal,
		Hovered,
		Clicked
	};
	Button_state  state = Normal;
};