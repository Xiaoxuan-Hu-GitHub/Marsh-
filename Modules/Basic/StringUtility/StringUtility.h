// StringUtility.h - Utilitys for strings.
// Version: 0.0.0.3
// Written by Xiaoxuan Hu.

#pragma once

#include <string>
#include <sstream>

namespace StringUtility_Xiaoxuan_Hu {
	template<typename T> void stringToNumber(std::string str, T& num);
	template<typename T> std::string numberToString(T num);
}

template<typename T> void StringUtility_Xiaoxuan_Hu::stringToNumber(std::string str, T& num) {
	std::stringstream ss;

	ss << str;
	ss >> num;

	return;
}
template<typename T> std::string StringUtility_Xiaoxuan_Hu::numberToString(T num) {
	std::stringstream ss;
	std::string str;

	ss << num;
	ss >> str;

	return str;
}