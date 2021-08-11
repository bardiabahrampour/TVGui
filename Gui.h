#pragma once
/*
************************************************************
*		All The Gui Components                             *
*       And Definitions                                    *
************************************************************
*/

// Header Files
#include "Text.h"
#include "Panel.h"
#include "Button.h"
#include "Background.h"


// Definitions
#define DASHBOARD__TEXT_POS CLITERAL(Vector2){(float)GetScreenWidth()/24, (float)GetScreenHeight()/36}
#define TEXT_SIZE CLITERAL(int){GetScreenHeight()/9}
#define APPS_PANEL_COL_ONE CLITERAL (Color){83,144,217,255}
#define APPS_PANEL_COL_TWO CLITERAL (Color){116,0,184,255}

//Apps
class AppsPanel {
	Cursor c;
	Background background;
	Button back;
	Text apps_text;
public:
	AppsPanel();
	void Draw();
	~AppsPanel();
};