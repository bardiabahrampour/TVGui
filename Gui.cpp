#include "Gui.h"

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
	if (back.clicked) {
		open = false;
	}
	else if (!back.clicked){
		open = true;
	}
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
	if (apps.clicked) {
		open_apps = true;
	}
	else if(!apps.clicked){
		open_apps = false;
	}
}

Dashboard::~Dashboard() {}