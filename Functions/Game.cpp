// Game.cpp - Game functions.
// Version: 0.0.0.6
// Written by Xiaoxuan Hu.

#include <vector>

#include <cstdlib>
#include <ctime>

#include "../Modules/UI/UI.h"
#include "../Modules/Basic/StringUtility/StringUtility.h"
#include "../Modules/Item/Item.cpp"

namespace Game_Xiaoxuan_Hu {
	void inline safe(int& attack, int& defense, int& life) { // Weekend rest.
		int thing;
		bool flag;

		UI_Xiaoxuan_Hu::UI ui;

		ui.linkToLanguageFile("Languages/zh-cn/Game/Safe.lang");
		do {
			flag = false;
			ui.printWithLanguageFile("Choose");
			StringUtility_Xiaoxuan_Hu::stringToNumber(ui.input(), thing);
			switch (thing) {
				case 1:
				{
					attack += 2;
					ui.printWithLanguageFile("1");
					break;
				}
				case 2:
				{
					defense += 2;
					ui.printWithLanguageFile("2");
					break;
				}
				case 3:
				{
					life += 25;
					ui.printWithLanguageFile("3");
					break;
				}
				default:
				{
					flag = true;
					ui.printWithLanguageFile("Other");
					break;
				}
			}
		}
		while (flag);
		return;
	}
	void inline jc(int& attack, int& defense, int& life, int& gold, int& a) {
		switch (a) {
			case 1:
			{
				attack += 4;
				break;
			}
			case 2:
			{
				attack += 6;
				break;
			}
			case 3:
			{
				attack += 9;
				break;
			}
			case 4:
			{
				defense += 4;
				break;
			}
			case 5:
			{
				defense += 6;
				break;
			}
			case 6:
			{
				defense += 9;
				break;
			}
			case 7:
			{
				life += 40;
				break;
			}
			case 8:
			{
				life += 60;
				break;
			}
			case 9:
			{
				life += 90;
				break;
			}
			case 14:
			{
				gold += 10;
				break;
			}
			default:
				break;
		}
		return;
	}
	void inline change(int& attack, int& defense, int& life, int& gold, std::vector<Item>& items) { // Change your items.
		std::vector<int> js;
		UI_Xiaoxuan_Hu::UI ui;
		int choose, jh, get;
		bool flag;

		ui.linkToLanguageFile("Languages/zh-cn/Game/Change.lang");
		srand(time(0));

		do {
			flag = false;
			ui.printWithLanguageFile("Start");
			StringUtility_Xiaoxuan_Hu::stringToNumber(ui.input(), choose);
			if (choose != 1 && choose != 2) {
				flag = true;
				ui.printWithLanguageFile("ModeOther");
			}
		}
		while (flag);
		if (choose == 1) {
			ui.printWithLanguageFile("List");
			for (int i = 1; i < 18; i++) {
				if (items[i].getNum() != 0)
					ui.print(items[i].info(true, true, true));
				else
					js.push_back(i);
			}
			switch (items[18].getNum()) {
				case 1:
				{
					ui.printWithLanguageFile("18");
					break;
				}
				case 0:
				{
					js.push_back(18);
					break;
				}
				default:
				{
					break;
				}
			}

			do {
				flag = false;
				ui.printWithLanguageFile("Give");
				StringUtility_Xiaoxuan_Hu::stringToNumber(ui.input(), jh);
				if (jh < 1 || jh > 18) {
					flag = true;
					ui.printWithLanguageFile("ItemOther");
				}
			}
			while (flag);
			if (1 <= jh <= 17)
				items[jh].setNum(1);
			else
				if (jh == 18)
					items[18].setNum(0);
			get = js[rand() % js.size()];
			if (1 <= get <= 17)
				items[get].setNum(1);
			else
				if (get == 18)
					items[18].setNum(1);
			ui.printWithLanguageFile("Success");
			ui.print(items[get].info(true, true, false));
			jc(attack, defense, life, gold, get);
			switch (jh) {
				case 1:
				{
					attack -= 4;
					break;
				}
				case 2:
				{
					attack -= 6;
					break;
				}
				case 3:
				{
					attack -= 9;
					break;
				}
				case 4:
				{
					defense -= 4;
					break;
				}
				case 5:
				{
					defense -= 6;
					break;
				}
				case 6:
				{
					defense -= 9;
					break;
				}
				case 7:
				{
					life -= 40;
					break;
				}
				case 8:
				{
					life -= 60;
					break;
				}
				case 9:
				{
					life -= 90;
					break;
				}
				default:
				{
					break;
				}
			}
			ui.printWithLanguageFile("End1");
		}
		if (choose == 2) {
			life += 25;
			ui.printWithLanguageFile("End2");
		}
	}
	void inline way(int& act) { // Choose a way to go.
		std::string ways[3];
		UI_Xiaoxuan_Hu::UI ui;

		ui.linkToLanguageFile("Languages/zh-cn/Game/Way.lang");
	}
}