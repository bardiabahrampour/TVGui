#pragma once
#include <raylib.h>
//Button State Colors

//Normal State Color
#define COLOR_NORMAL   CLITERAL(Color){18,23,45,255}
//Hovered State Color
#define COLOR_HOVERED  CLITERAL(Color){25,46,89,255}
//Clicked State Color
#define COLOR_CLICKED  CLITERAL(Color){34,74,123,255}


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
	Color color{};
	Rectangle sprite{};
public:
	Button(Vector2 p_pos,Vector2 p_size,const char* p_title);
	~Button();
	void Draw();
	Vector2 pos{}, size{};
	const char* title{};
};

