// Story.cpp - Story.
// Version: 0.0.0.2
// Written by Xiaoxuan Hu.


#include "../Modules/UI/UI.h"

namespace Story_Xiaoxuan_Hu {
	void inline story() { // Magic word: inline
		UI_Xiaoxuan_Hu::UI output;
		output.linkToLanguageFile("Languages/zh-cn/Story/Story.lang");
		output.printWithLanguageFile("Story");
		return;
	}
}