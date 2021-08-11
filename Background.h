#pragma once
#include <raylib.h>
class Background
{
private:
	Color color_one{}, color_two{};
	Rectangle shape{};
	const int posx{ 0 }, posy{ 0 };
public:
	Background(Color colone,Color coltwo);
	void Draw();
	~Background();
};

