#include "App.h"
#include "Text.h"
#include "Button.h"
#include <iostream>
int fps{};
App::App() {
//if the app is in debug mode then window can be resized , this makes life a bit easier
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
	Text text("Dashboard", Vector2{(float)GetScreenWidth()/24,(float)GetScreenHeight()/36},WHITE,GetScreenHeight()/9);
	std::cout << GetScreenWidth() << " " << GetScreenHeight();
	Button test(BUTTON_GRID_ONE, BUTTON_BIG_SIZE, "Apps");
	Button settings(BUTTON_GRID_TWO, BUTTON_BIG_SIZE, "Settings");
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(background_color);
		fps++;
		DrawRectangleGradientH(0, 0, GetScreenWidth(), GetScreenHeight(), { 34,74,123,255 }, { 28,89,110,255 });
		text.Draw();
		test.Draw();
		settings.Draw();
		if (IsKeyPressed(KEY_ESCAPE))
			App::~App();
		EndDrawing();
	}
}

App::~App() {
	CloseWindow();
}
