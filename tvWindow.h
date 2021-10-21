#pragma once
#include <string>
class tvWindow
{
public:
	tvWindow(int sizex, int sizey, std::string winname);
	void UpdateSize(int screensize);
	~tvWindow();
private:
	int sizex, sizey;
	std::string winname;
};

