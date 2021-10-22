#pragma once
#include <raylib.h>
#include <string>
class tvTheme
{
	Color primary, secondary; 

//You Can Define THEME_MULTI_COLOR In Order To Use Up to 4 Colors In Your Theme But It Is Disabled By Default 
#ifdef THEME_MULTI_COLOR 
	Color third, fourth; 
#endif
//	Name for the XML File and Configurations
	std::string name;
public:
	Color		GetPrimaryColor();
	Color		GetSecondaryColor();
	std::string GetName();
	void		SetName();

#ifdef THEME_MULTI_COLOR
	Color		GetThirdColor();
	Color		GetFourthColor();
#endif
};

