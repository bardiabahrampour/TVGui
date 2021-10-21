#pragma once
#include <raylib.h>
#include <string>
/*
		You Can Define THEME_MULTI_COLOR in Order to Use All Four Colors But it is Disabled by Default to Save Memmory
*/
class tvTheme
{
	Color primary, secondary; 

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

