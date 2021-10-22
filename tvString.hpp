#pragma once
#include <string>
#include <algorithm>

//UPCOMING: An Enum Class Defining Differrent Languages For a tvString, for now it only has us english :)
enum class Str_Language {
	En_Us,
};

//String Class With Useful Functions and Types, Compatible With std::string
struct tvString {
private:
	std::string std_str{};
public:
 // Change All Elements To UpperCase. 
	void ToUpperCase(tvString& str) {
		std::transform(str.std_str.begin(), str.std_str.end(), str.std_str.begin(), ::toupper);
	}
//  Change All Elements To LowerCase. 
	void ToLowerCase(tvString& str) {
		std::transform(str.std_str.begin(), str.std_str.end(), str.std_str.begin(), ::tolower);
	}
};