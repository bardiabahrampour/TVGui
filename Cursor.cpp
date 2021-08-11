#include "Cursor.h"


Cursor::Cursor(int i){
	curpos = BUTTON_GRID_ONE;
}


void
Cursor::update_cur() {
	if(grid_one){
		if (curpos.x == BUTTON_GRID_ONE.x && curpos.y == BUTTON_GRID_ONE.y) {
			if (IsKeyPressed(KEY_RIGHT)) {
				if (grid_two) {
					curpos = BUTTON_GRID_TWO;
				}
			}
		}
	}
	if(grid_two){
		if (curpos.x == BUTTON_GRID_TWO.x && curpos.y == BUTTON_GRID_TWO.y) {
			if (IsKeyPressed(KEY_LEFT)){
				if (grid_one) {
					curpos = BUTTON_GRID_ONE;
				}
			}
		}
	}
}

void
Cursor::add_pos(Vector2 pos) {
	if (pos.x == BUTTON_GRID_ONE.x && pos.y == BUTTON_GRID_ONE.y) {
		grid_one = true;
	}
	else if (pos.x == BUTTON_GRID_TWO.x && pos.y == BUTTON_GRID_TWO.y) {
		grid_two = true;
	}
}