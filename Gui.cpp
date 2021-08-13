#include "Gui.h"
#include <iostream>
//apps panel
AppsPanel::AppsPanel() :
	background(APPS_PANEL_COL_ONE, APPS_PANEL_COL_TWO),
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
	background(DASHBOARD_COL_ONE, DASHBOARD_COL_TWO),
	apps(BUTTON_GRID_ONE, BUTTON_WIDE, "Apps", c),
	dashboard_text("Dashboard", DASHBOARD__TEXT_POS, WHITE, TEXT_SIZE)
{

}

void
Dashboard::Draw() {
	background.Draw();
	apps.Draw(c);
	dashboard_text.Draw();
	c.update_cur();
}

Dashboard::~Dashboard() {}

//gui
Gui::Gui() {}

void
Gui::update() {
	if (dash.apps.clicked) {
		apps_is_open = true;
		dash.apps.clicked = false;
	}
	else if (apps.back.clicked) {
		apps_is_open = false;
		apps.back.clicked = false;
	}
	
	if (apps_is_open) {
		apps.Draw();
	}
	else if(!apps_is_open){
		dash.Draw();
	}
}

Gui::~Gui() {}