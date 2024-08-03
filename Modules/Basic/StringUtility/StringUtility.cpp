// StringUtility.cpp - Utilitys for strings.
// Version: 0.0.0.2
// Written by Xiaoxuan Hu.

#include <sstream>
// <string> has already been included in "StringUtility.h".

#include "StringUtility.h"

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