// LanguageFileUtility.h - Utilitys for Language Files.
// Version: 0.0.0.1
// Written by Xiaoxuan Hu.

#pragma once

#include <string>

namespace Language_Xiaoxuan_Hu {
	bool pendingAnotherLine(std::string str, size_t pos);
	bool pendingEnd(std::string str, size_t pos);
}