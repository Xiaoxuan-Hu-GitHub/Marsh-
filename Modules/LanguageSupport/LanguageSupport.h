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
		void readFromFile(const char* languageFilePath);
	};
}