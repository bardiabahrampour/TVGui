#include "Text.h"
#include <iostream>
Text::Text(const char* p_text, Vector2 p_pos, Color p_color, int p_fontsize) {
	font = LoadFontEx("data/fonts/default.ttf",GetScreenHeight()/2.16, 0, 0);
	text = p_text;
	pos = p_pos;
	color = p_color;
	fontsize = p_fontsize;
	GenTextureMipmaps(&font.texture);
	SetTextureFilter(font.texture,TEXTURE_FILTER_TRILINEAR);
}


void
Text::Draw() {
	DrawTextEx(font, text, pos, fontsize, 1.0f, color);
}


Text::~Text() {
	UnloadFont(font);
	UnloadTexture(font.texture);
	printf("text killed\n");
}