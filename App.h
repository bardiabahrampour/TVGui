#pragma once
#include "Panel.h"
#define BUTTON_GRID_ONE CLITERAL(Vector2){(float)GetScreenWidth()/5,(float)GetScreenHeight()/2}
class App
{
private:
	int winsizex{}, winsizey{};
	const char* winname{ "TVGui" };
	int fps{ 60 };
	Color background_color{ BLACK };
public:
	App();
	~App();
};

