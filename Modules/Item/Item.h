// Item.cpp - File for items.
// Version: 0.0.0.0
// Written by Xiaoxuan Hu.

#pragma once

#include <string>

namespace Game_Xiaoxuan_Hu {
	class Item {
	private:
		int id, price;
		size_t num = 0;
		std::string name, role;
	public:
		std::string info(bool returnId, bool returnName, bool returnRole);
		size_t getNum();
		void setNum(size_t nnum);
	};
}