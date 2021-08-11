#include "Background.h"

Background::Background(Color colone, Color coltwo) {
	color_one = colone;
	color_two = coltwo;
}

void
Background::Draw() {
	DrawRectangleGradientH(posx, posy, GetScreenWidth(), GetScreenHeight(), color_one, color_two);
}

Background::~Background() {

}