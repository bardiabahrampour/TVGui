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
	//AppsPanel a;
	Dashboard dash;
	AppsPanel apps;
	while (!WindowShouldClose()) {
		std::cout << apps.open << std::endl;
		BeginDrawing();
		ClearBackground(background_color);
		if (dash.open_apps || apps.open) {
			apps.Draw();
		}
		else if(!apps.open){
			dash.Draw();
		}
		if (IsKeyPressed(KEY_ESCAPE))
			App::~App();
		EndDrawing();
	}
}


App::~App() {
	CloseWindow();
}
