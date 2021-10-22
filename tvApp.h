#pragma once
#include <string>
#include <pugixml/pugixml.hpp>
#include "raywin.h"
#include "tvTheme.h"

class tvApp
{
private:
	pugi::xml_document app_doc;
	pugi::xml_document *_start_doc = nullptr;
	pugi::xml_node root_node;
	pugi::xml_parse_result result;
	std::string appxml_name{};
	void check_for_app();
	void get_xml_app();
protected:
	//virtual void Start();

//  for Custom Error Handling
	//virtual void Error();

	std::string window_name{};
	unsigned int window_sizex{}, window_sizey{};
public:
	tvApp();
	//~tvApp();
};

