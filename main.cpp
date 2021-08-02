#include "App.h"
#ifndef NDEBUG
int main() {
	App app;
	return 0;
}
#endif
#ifdef NDEBUG
int WinMain() {
	App app;
	return 0;
}
#endif