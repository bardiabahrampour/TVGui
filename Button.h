#pragma once
#include <raylib.h>
#include "Text.h"
//Button State Colors

//Normal State Color
#define COLOR_NORMAL   CLITERAL(Color){18,23,45,255}
//Hovered State Color
#define COLOR_HOVERED  CLITERAL(Color){25,46,89,255}
//Clicked State Color
#define COLOR_CLICKED  CLITERAL(Color){34,74,123,255}
//Text Color
#define COLOR_TEXT    WHITE


//Button Grids

//Button Number One Grid
#define BUTTON_GRID_ONE CLITERAL(Vector2){(float)GetScreenWidth()/5,(float)GetScreenHeight()/2}



//The Big Size Button(For now The Only Option
#define BUTTON_BIG_SIZE CLITERAL(Vector2){(float)GetScreenWidth()/20,(float)GetScreenHeight()/4}



//Buttons Controlled by the Keyboard 
class Button
{
private:
	//Button States
	enum Button_state {
		Normal,
		Hovered,
		Clicked
	};
	Button_state  state=Normal;
	Color color{};
	Font title_font{};
	const char* font_path{"data/fonts/default.ttf"};
	int font_size{GetScreenHeight()/9};
public:
	Button(Vector2 p_pos,Vector2 p_size,const char* p_title);
	~Button();
	void Draw();
	Vector2 pos{}, size{};
	const char* title{};
};

