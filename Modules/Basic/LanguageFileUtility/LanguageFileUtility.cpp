// LanguageFileUtility.cpp - Utilitys for Language Files.
// Version: 0.0.0.2
// Written by Xiaoxuan Hu.

#include "LanguageFileUtility.h"

bool Language_Xiaoxuan_Hu::pendingAnotherLine(std::string str, size_t pos) {
	std::string tmp = "";
	for (size_t k = 0; k < 2; k++)
		tmp += str[pos + k];
	return tmp == "\r\n";
}
bool Language_Xiaoxuan_Hu::pendingEnd(std::string str, size_t pos) {
	return str[pos] == '#';
}
