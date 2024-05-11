// Story.cpp - Functions for long text output.
// Version: 0.0.0.1
// Written by Xiaoxuan Hu.


#include "../Modules/UI/UI.h"

namespace Story_Xiaoxuan_Hu {
	void atStart() {
		UI_Xiaoxuan_Hu::UI output;
		output.linkToLanguageFile("../Languages/zh-cn/Story/Story.lang");
		output.print("story");
		return;
	}
}