#include "Gui.h"

AppsPanel::AppsPanel():
	background(0, 0, GetScreenWidth(), GetScreenHeight(), BLACK),
	back(BUTTON_GRID_ONE,BUTTON_WIDE,"Back",c),
	apps_text("Apps",DASHBOARD__TEXT_POS,WHITE,TEXT_SIZE) {
	
}

void
AppsPanel::Draw() {
	background.Draw();
	back.Draw(c);
	apps_text.Draw();
	c.update_cur();
}

AppsPanel::~AppsPanel() {
	background.~Panel();
	back.~Button();

}