#include "App.h"
#include "Text.h"
#include <iostream>
int fps{};
App::App() {
//if the app is in debug mode then window can be resized , this makes life a bit easier
#ifdef NDEBUG
	SetConfigFlags(FLAG_FULLSCREEN_MODE);
	InitWindow(GetScreenWidth(), GetScreenHeight(), winname);
#endif
#ifndef NDEBUG
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(800, 450, winname);
#endif
	SetTargetFPS(fps);
	//Panel panel(960, 540, 100, 100,RED);
	Text text("Welcome", Vector2{(float)GetScreenWidth()/5,(float)GetScreenHeight()/2-10},WHITE,GetScreenHeight()/9);
	std::cout << GetScreenWidth() << " " << GetScreenHeight();
	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(background_color);
		fps++;
		DrawRectangleGradientH(0, 0, GetScreenWidth(), GetScreenHeight(), { 34,74,123,255 }, { 28,89,110,255 });
		//panel.Draw();
		text.Draw();
		EndDrawing();
	}
}

App::~App() {
	CloseWindow();
}

//960 x 540