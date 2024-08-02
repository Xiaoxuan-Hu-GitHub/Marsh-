// Item.cpp - File for items.
// Version: 0.0.0.0
// Written by Xiaoxuan Hu.

#include "Item.h"
#include "../Basic/StringUtility/StringUtility.h"

std::string Game_Xiaoxuan_Hu::Item::info(bool returnId, bool returnName, bool returnRole) {
	std::string info;
	if (returnId) {
		std::string tmp;
		StringUtility_Xiaoxuan_Hu::numberToString(id, tmp);
		info += tmp + '.';
	}
	if (returnName)
		info += name + ' ';
	if (returnRole)
		info += role;
	info += '\n';
	return info;
}

size_t Game_Xiaoxuan_Hu::Item::getNum() {
	return num;
}

void Game_Xiaoxuan_Hu::Item::setNum(size_t nnum) {
	num = nnum;
	return;
}
