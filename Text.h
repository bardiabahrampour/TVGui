#pragma once
#include <raylib.h>
class Text
{
private:
	Font font{};
	Vector2 pos{};
	const char* text{};
	int fontsize{};
public:
	Color color{};
	Text(const char* p_text,Vector2 p_pos,Color p_color,int p_fontsize);
	void Draw();
	~Text();
};