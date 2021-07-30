#pragma once
#include <raylib.h>
class Panel
{
public:
	Color color{};
	Rectangle sprite{};
	Vector2 pos{};
	int sizex{};
	int sizey{};
	Panel(float x, float y, float sx, float sy, Color c);
	void Draw();
	~Panel();
};

