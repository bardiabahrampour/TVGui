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



//----- Variables ------------------------------------------------------------------------------------
	Text dashboard_text("Dashboard", DASHBOARD__TEXT_POS,
		WHITE,TEXT_SIZE);
	Cursor c;
	Button apps(BUTTON_GRID_ONE, 1 , "Apps",c);
	Button settings(BUTTON_GRID_TWO, 1 , "Settings",c);
	Panel apps_panel(0, 0, 1920, 1080, BLACK);
	Panel settings_panel(0, 0, 1920, 1080, WHITE);
//---------------------------------------------------------------------------------------------------



	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(background_color);
		DrawRectangleGradientH(0, 0, GetScreenWidth(), GetScreenHeight(), { 34,74,123,255 }, { 28,89,110,255 });

//------- Draw Everything ------------------------------
		dashboard_text.Draw();
		apps.Draw(c);
		settings.Draw(c);
		c.update_cur();
//------------------------------------------------------



		if (IsKeyPressed(KEY_ESCAPE))
			App::~App();


		EndDrawing();
	}
}


App::~App() {
	CloseWindow();
}
