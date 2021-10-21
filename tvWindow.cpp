#include "tvWindow.h"

tvWindow::tvWindow(int sizex,int sizey, std::string winname) {
	this->sizex = sizex;
	this->sizey = sizey;
	this->winname = winname;
}

tvWindow::~tvWindow() {

}

void
tvWindow::UpdateSize(int screensize) {

}