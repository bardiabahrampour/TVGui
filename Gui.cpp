#include "Gui.h"

AppsPanel::AppsPanel() :
	background(APPS_PANEL_COL_ONE, APPS_PANEL_COL_TWO),
	back(BUTTON_GRID_ONE, BUTTON_WIDE, "Back", c),
	apps_text("Apps", DASHBOARD__TEXT_POS, WHITE, TEXT_SIZE),
	c(1){}

void
AppsPanel::Draw() {
	background.Draw();
	back.Draw(c);
	apps_text.Draw();
	c.update_cur();
}

AppsPanel::~AppsPanel() {}