// StringUtility.cpp - Utilitys for strings.
// Version: 0.0.0.0
// Written by Xiaoxuan Hu.

#include "StringUtility.h"

bool Utility_Xiaoxuan_Hu::pendingAnotherLine(std::string str, size_t pos) {
	std::string tmp = "";
	for (size_t k = 0; k < 4; k++)
		tmp += str[pos + k];
	return tmp == "\\r\\n";
}
