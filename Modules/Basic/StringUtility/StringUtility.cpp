// StringUtility.cpp - Utilitys for strings.
// Version: 0.0.0.0
// Written by Xiaoxuan Hu.

#include <sstream>

#include "StringUtility.h"

template<typename T> void StringUtility_Xiaoxuan_Hu::stringToNumber(std::string str, T& num) {
	std::stringstream ss;

	ss << str;
	ss >> num;

	return;
}
template<typename T> void StringUtility_Xiaoxuan_Hu::NumberToString(T num, std::string& str) {
	std::stringstream ss;

	ss << num;
	ss >> str;

	return;
}