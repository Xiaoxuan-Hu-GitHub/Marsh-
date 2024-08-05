// UI.h - APIs for user interface.
// Version: 0.0.0.5
// Written by Xiaoxuan Hu.

#pragma once

#include <string>

#include "../LanguageSupport/LanguageSupport.h"

namespace UI_Xiaoxuan_Hu {
	class UI {
	private:
		Language_Xiaoxuan_Hu::LanguageSupport lang;
	public:
		void linkToLanguageFile(std::string path);
		void linkToLanguageFile(const char* path);

		void print(std::string str);
		void print(const char* str);

		void printWithLanguageFile(std::string str);
		void printWithLanguageFile(const char* str);

		std::string input();
	};
}