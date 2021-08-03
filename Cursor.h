#pragma once
#include <raylib.h>

#define TRANSPARENT CLITERAL(Color){0,0,0,0}

//Cursor that is controlled by the keyboard
//this cursor is invisible
class Cursor
{
private:
	Vector2 size{1,1}, pos{0,0};
public:
	Rectangle sprite{};
	Cursor();
	void Update();
	~Cursor();
};

