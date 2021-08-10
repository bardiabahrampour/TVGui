#pragma once
/***********************************************************
*		All The Gui Components                             *
*       And Definitions                                    *
************************************************************/

// Header Files
#include "Text.h"
#include "Panel.h"
#include "Button.h"


// Definitions
#define DASHBOARD__TEXT_POS CLITERAL(Vector2){(float)GetScreenWidth()/24, (float)GetScreenHeight()/36}
#define TEXT_SIZE CLITERAL(int){GetScreenHeight()/9}

//Apps
class AppsPanel {
	Cursor c;
	Panel background;
	Button back;
	Text apps_text;
public:
	AppsPanel();
	void Draw();
	~AppsPanel();
};