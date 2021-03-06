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

#define PANEL_COL_ONE CLITERAL (Color){101,78,163,200}
#define PANEL_COL_TWO CLITERAL (Color){234,175,200,200}

//#define DASHBOARD_COL_ONE  CLITERAL (Color){71,118,230,200}
//#define DASHBOARD_COL_TWO  CLITERAL (Color){142,84,233,200}

//Apps
class AppsPanel {
	Cursor c;
	Background background;
	Text apps_text;
public:
	Button back;
	bool open{ false };
	AppsPanel();
	void Draw();
	~AppsPanel();
};

//Main Menu
class Dashboard {
	Cursor c;
	Background background;
	Text dashboard_text;
public:
	Button apps;
	Button music;
	bool open_apps{ false };
	bool hidden{ false };
	Dashboard();
	void Draw();
	~Dashboard();
};

//Music
class MusicPanel {
	Cursor c;
	Background background;
	Text music_text;
public:
	Button back;
	bool open{ false };
	MusicPanel();
	void Draw();
	~MusicPanel();
};

//Gui
class Gui {
	Dashboard dash;
	AppsPanel apps;
	MusicPanel music;
	bool apps_is_open{ false };
	bool music_is_open{ false };
public:
	Gui();
	void update();
	~Gui();
};