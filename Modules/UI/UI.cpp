// UI.cpp - APIs for user interface.
// Version: 0.0.0.2
// Written by Xiaoxuan Hu.

#include <iostream>

#include <Windows.h>

#include "UI.h"

void UI_Xiaoxuan_Hu::UI::print(std::string str) {
	for (size_t i = 0; i < str.size(); i++) {
		switch (str[i]) {
			case '\\':
			{
				switch (str[++i]) {
					case 's':
					{
						Sleep((str[i + 1] - '0') * 1000);
						break;
					}
					case 'n':
					{
						std::cout << std::endl;
						break;
					}
					default:
					{
						std::cout << str[i];
						break;
					}
				}
				break;
			}
			default:
			{
				std::cout << str[i];
				break;
			}
		}
	}

	return;
}

void UI_Xiaoxuan_Hu::UI::print(const char* str) {
	std::string tmp = str;
	print(tmp);
	return;
}

std::string UI_Xiaoxuan_Hu::UI::input() {
	std::string str;
	getline(std::cin, str);
	return str;
}
