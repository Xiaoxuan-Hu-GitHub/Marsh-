// Game.cpp - Game cycle.
// Version: 0.0.0.2
// Written by Xiaoxuan Hu.

#include "../Modules/UI/UI.h"
#include "../Modules/Basic/StringUtility/StringUtility.h"

namespace Game_Xiaoxuan_Hu {
	void inline safe(int& attack, int& defense, int& life) { // Magic word: inline
		int thing;
		bool flag;
		
		UI_Xiaoxuan_Hu::UI ui;

		ui.linkToLanguageFile("Languages/zh-cn/Game/Safe.lang");
		do {
			flag = false;
			ui.printWithLanguageFile("Choose");
			StringUtility_Xiaoxuan_Hu::stringToNumber(ui.input(), thing);
			switch (thing)
			{
			case 1: {
				attack += 2;
				ui.printWithLanguageFile("1");
				break;
			}
			case 2: {
				defense += 2;
				ui.printWithLanguageFile("2");
				break;
			}
			case 3: {
				life += 25;
				ui.printWithLanguageFile("3");
				break;
			}
			default: {
				flag = true;
				ui.printWithLanguageFile("Other");
				break;
			}
			}
		} while (flag);
		return;
	}
}