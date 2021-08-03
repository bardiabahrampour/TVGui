#include "Cursor.h"

Cursor::Cursor() {
	
}

void
Cursor::Update() {
	int kp{};
#ifdef NDEBUG
	DrawRectangle(pos.x, pos.y, size.x, size.y, TRANSPARENT);
#endif
#ifndef NDEBUG
    DrawRectangle(pos.x, pos.y, size.x, size.y, RED);
#endif
	switch (IsKeyPressed(kp)) {
	case KEY_LEFT:
		pos.x -= 5;
	case KEY_RIGHT:
		pos.x += 5;
	}
}

Cursor::~Cursor(){}