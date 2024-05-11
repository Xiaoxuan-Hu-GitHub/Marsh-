// UI.h - APIs for user interface.
// Version: 0.0.0.3
// Written by Xiaoxuan Hu.

#pragma once

#include "../FileEditor/FileEditor.h"
#include "../LanguageSupport/LanguageSupport.h"

namespace UI_Xiaoxuan_Hu {
	class UI {
	private:
		Language_Xiaoxuan_Hu::LanguageBase lang;
	public:
		void linkToLanguageFile(std::string path);
		void linkToLanguageFile(const char* path);

		void print(std::string str);
		void print(const char* str);
		std::string input();
	};
}