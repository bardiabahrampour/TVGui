#include "App.h"
#include "Gui.h"
#include <iostream>



App::App() {

#ifdef NDEBUG

	SetConfigFlags(FLAG_FULLSCREEN_MODE);
	InitWindow(GetScreenWidth(), GetScreenHeight(), winname);
	DisableCursor();

#endif

#ifndef NDEBUG

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(800, 450, winname);

#endif
	SetTargetFPS(fps);
	Gui gui;
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(background_color);
		gui.update();
		if (IsKeyPressed(KEY_ESCAPE))
			App::~App();
		EndDrawing();
	}
}


App::~App() {
	CloseWindow();
}
