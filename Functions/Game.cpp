// Game.cpp - Game functions.
// Version: 0.0.0.3
// Written by Xiaoxuan Hu.

#include <vector>
#include <map>

#include "../Modules/UI/UI.h"
#include "../Modules/Basic/StringUtility/StringUtility.h"

namespace Game_Xiaoxuan_Hu {
	void inline safe(int& attack, int& defense, int& life) { // Have a rest.
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
	void inline jc(int& attack, int& defense, int& life, int& gold, int& a) {
		switch (a)
		{
		case 1: {
			attack += 4;
			break;
		}
		case 2: {
			attack += 6;
			break;
		}
		case 3: {
			attack += 9;
			break;
		}
		case 4: {
			defense += 4;
			break;
		}
		case 5: {
			defense += 6;
			break;
		}
		case 6: {
			defense += 9;
			break;
		}
		case 7: {
			life += 40;
			break;
		}
		case 8: {
			life += 60;
			break;
		}
		case 9: {
			life += 90;
			break;
		}
		case 14: {
			gold += 10;
			break;
		}
		default:
			break;
		}
		return;
	}
	void change(int& attack, int& defense, int& life, int& gold, std::vector<bool> haveItem, std::map<int, std::string> itemName, std::map<int, std::string> itemRole) { // Change your items.
		std::vector<int> js;
		UI_Xiaoxuan_Hu::UI ui;
		int choose, jh;
		bool flag;

		ui.linkToLanguageFile("Languages/zh-cn/Game/Change.lang");
		do {
			flag = false;
			ui.printWithLanguageFile("Start");
			StringUtility_Xiaoxuan_Hu::stringToNumber(ui.input(), choose);
			if (choose != 1 && choose != 2) {
				flag = true;
				ui.printWithLanguageFile("ModeOther");
			}
		} while (flag);
		if (choose == 1) {
			ui.printWithLanguageFile("List");
			for (int i = 0; i < 17; i++) {
				if (haveItem[i]) {
					std::string tmp;
					StringUtility_Xiaoxuan_Hu::numberToString(i, tmp);
					ui.print(tmp + ' ');
					ui.print(itemName[i] + ' ');
					ui.print(itemRole[i] + '\n');
				}
				else
					js.push_back(i);
			}
			if (haveItem[17]) {
				ui.printWithLanguageFile("18");
			}
			else
				js.push_back(17);

			do {
				flag = false;
				ui.printWithLanguageFile("Give");
				StringUtility_Xiaoxuan_Hu::stringToNumber(ui.input(), jh);
				if (jh < 1 || jh > 18) {
					flag = true;
					ui.printWithLanguageFile("Other");
				}
			} while (flag);
			if (jh == 18)
				haveItem[17] = false;
			else
				haveItem[jh - 1] = false;
		}
	}
}