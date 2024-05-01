// UI.h - APIs for user interface.
// Version: 0.0.0.2
// Written by Xiaoxuan Hu.

#pragma once

#include "../FileEditor/FileEditor.h"
#include "../LanguageSupport/LanguageSupport.h"

namespace UI_Xiaoxuan_Hu {
	class UI {
	private:
		File_Xiaoxuan_Hu::FileEditor file;
		Language_Xiaoxuan_Hu::LanguageBase lang;
	public:
		void print(std::string str);
		void print(const char* str);
		std::string input();
	};
}