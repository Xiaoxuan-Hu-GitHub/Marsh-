// LanguageSupport.h - Class designed for language file editing.
// Version: 0.0.0.1
// Written by Xiaoxuan Hu.

#pragma once

#include <map>
#include <string>

#include "../FileEditor/FileEditor.h"

namespace Language_Xiaoxuan_Hu {
	class LanguageBase {
	private:
		std::map<std::string, std::string> dictionary;
		File_Xiaoxuan_Hu::FileEditor file;
	public:
		void readFromLanguageFile(std::string languageFilePath, std::string lpath);
		void readFromLanguageFile(const char* languageFilePath, const char* lpath);
		std::string getValue(std::string key);
		std::string getValue(const char* key);
	};
}