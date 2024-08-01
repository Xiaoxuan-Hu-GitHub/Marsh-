// StringUtility.h - Utilitys for strings.
// Version: 0.0.0.1
// Written by Xiaoxuan Hu.

#pragma once

#include <string>

namespace StringUtility_Xiaoxuan_Hu {
	template<typename T> void stringToNumber(std::string str, T& num);
	template<typename T> void numberToString(T num, std::string& str);
}