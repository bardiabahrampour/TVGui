#include "Gui.h"
#include <iostream>
//apps panel
AppsPanel::AppsPanel() :
	background(PANEL_COL_ONE, PANEL_COL_TWO),
	back(BUTTON_GRID_ONE, BUTTON_WIDE, "Back", c),
	apps_text("Apps", DASHBOARD__TEXT_POS, WHITE, TEXT_SIZE)
{

}

void
AppsPanel::Draw() {
	background.Draw();
	back.Draw(c);
	apps_text.Draw();
	c.update_cur();
}

AppsPanel::~AppsPanel() {}

//dashboard
Dashboard::Dashboard() :
	background(PANEL_COL_ONE,PANEL_COL_TWO),
	apps(BUTTON_GRID_ONE, BUTTON_WIDE, "Apps", c),
	dashboard_text("Dashboard", DASHBOARD__TEXT_POS, WHITE, TEXT_SIZE),
	music(BUTTON_GRID_TWO,BUTTON_WIDE,"Music",c)
{

}

void
Dashboard::Draw() {
	background.Draw();
	apps.Draw(c);
	dashboard_text.Draw();
	c.update_cur();
	music.Draw(c);
}

Dashboard::~Dashboard() {}

//music panel
MusicPanel::MusicPanel() :
	background(PANEL_COL_ONE,PANEL_COL_TWO),
	back(BUTTON_GRID_ONE,BUTTON_WIDE,"Back",c),
	music_text("Music", DASHBOARD__TEXT_POS,WHITE,TEXT_SIZE){

}

void
MusicPanel::Draw() {
	background.Draw();
	back.Draw(c);
	music_text.Draw();
	c.update_cur();
}

MusicPanel::~MusicPanel() {}

//gui
Gui::Gui() {}

void
Gui::update() {
	if (dash.apps.clicked) {
		apps_is_open = true;
		dash.apps.clicked = false;
	}
	else if (dash.music.clicked) {
		music_is_open = true;
		dash.music.clicked = false;
	}
	else if (apps.back.clicked) {
		apps_is_open = false;
		apps.back.clicked = false;
	}
	else if (music.back.clicked) {
		music_is_open = false;
		music.back.clicked = false;
	}
	
	if (apps_is_open) {
		apps.Draw();
	}
	else if (music_is_open) {
		music.Draw();
	}
	else{
		dash.Draw();
	}
}

Gui::~Gui() {}