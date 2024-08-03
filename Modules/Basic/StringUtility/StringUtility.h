// StringUtility.h - Utilitys for strings.
// Version: 0.0.0.2
// Written by Xiaoxuan Hu.

#pragma once

#include <string>

namespace StringUtility_Xiaoxuan_Hu {
	template<typename T> void stringToNumber(std::string str, T& num);
	template<typename T> std::string numberToString(T num);
}