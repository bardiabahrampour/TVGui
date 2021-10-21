#include "tvApp.h"
#include "raywin.h"

void
tvApp::check_for_app() {
	_start_doc = new pugi::xml_document;
	_start_doc->load_file("_start.xml");
	appxml_name = _start_doc->child("start").text().as_string();
	delete _start_doc;
	OutputDebugStringA(appxml_name.c_str());
}

void 
tvApp::get_xml_app() {
	app_doc.load_file(appxml_name.c_str());
	window_name = app_doc.child("app").child("config").child("appname").text().as_string();
}

tvApp::tvApp() {
	check_for_app();
}