// User.h - Class of users.
// Version: 0.0.0.0
// Written by Xiaoxuan Hu.

#pragma once

#include <string>

#include "../UI/UI.h"

namespace User_Xiaoxuan_Hu {
	class User {
	private:
		UI_Xiaoxuan_Hu::UI UI;
		std::string userName;
		int attack, defense, life, level, finish, goal, gold, footstep;
	public:
		void game();
		void hud();
	};
}