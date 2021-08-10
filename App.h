#pragma once
#include "Panel.h"
class App
{
private:
	int winsizex{}, winsizey{};
	const char* winname{ "TVGui" };
	int fps{ 60 };
	Color background_color{ BLACK };
public:
	App();
	~App();
};
