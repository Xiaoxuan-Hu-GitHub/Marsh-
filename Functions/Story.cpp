// Story.cpp - Story.
// Version: 0.0.0.3
// Written by Xiaoxuan Hu.


#include "../Modules/UI/UI.h"

namespace Story_Xiaoxuan_Hu {
	void inline story(UI_Xiaoxuan_Hu::UI& output) { // Magic word: inline
		output.linkToLanguageFile("Languages/zh-cn/Story/Story.lang");
		output.printWithLanguageFile("Story");
		return;
	}
}