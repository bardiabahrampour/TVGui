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
	//Panel panel(960, 540, 100, 100,RED);
	Text text("Dashboard", Vector2{(float)GetScreenWidth()/24,(float)GetScreenHeight()/36},WHITE,GetScreenHeight()/9);
	std::cout << GetScreenWidth() << " " << GetScreenHeight();
	Button test(Vector2{ 1920/2,1080/2 }, Vector2{ 1000,1000 }, "Apps");
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(background_color);
		fps++;
		DrawRectangleGradientH(0, 0, GetScreenWidth(), GetScreenHeight(), { 34,74,123,255 }, { 28,89,110,255 });
		//panel.Draw();
		text.Draw();
		test.Draw();
		if (IsKeyPressed(KEY_ESCAPE))
			App::~App();
		EndDrawing();
	}
}

App::~App() {
	CloseWindow();
}

//960 x 540