#include "Cursor.h"


Cursor::Cursor(){
	curpos = BUTTON_GRID_ONE;
}


void
Cursor::update_cur() {
	if (curpos.x == BUTTON_GRID_ONE.x && curpos.y == BUTTON_GRID_ONE.y) {
		if (IsKeyPressed(KEY_RIGHT))
			curpos = BUTTON_GRID_TWO;
	}
	else if (curpos.x == BUTTON_GRID_TWO.x && curpos.y == BUTTON_GRID_TWO.y) {
		if (IsKeyPressed(KEY_LEFT))
			curpos = BUTTON_GRID_ONE;
	}
}