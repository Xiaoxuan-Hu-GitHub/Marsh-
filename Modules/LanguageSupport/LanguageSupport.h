// LanguageSupport.h - Class designed for language file editing.
// Version: 0.0.0.4
// Written by Xiaoxuan Hu.

#pragma once

#include <map>
#include <string>

#include "../FileEditor/FileEditor.h"

namespace Language_Xiaoxuan_Hu {
	class LanguageSupport {
	private:
		std::map<std::string, std::string> dictionary;
		File_Xiaoxuan_Hu::FileEditor file;
	public:
		void readFromLanguageFile(std::string languageFilePath);
		void readFromLanguageFile(const char* languageFilePath);
		std::string getValue(std::string key);
		std::string getValue(const char* key);
	};
}