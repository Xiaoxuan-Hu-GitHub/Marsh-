// Marsh与诸子课本 重制版 - "Marsh与诸子课本"的一个重制版本。
// 版本号: 0.0.0.0
// 原作者未知。本版本由Xiaoxuan Hu编写。
/*
#include "Modules/User/User.h"

int main() {
	User_Xiaoxuan_Hu::User def;
	def.game();
	return 0;
}*/

#include <iostream>
#include "Modules/LanguageSupport/LanguageSupport.h"

int main() {
	Language_Xiaoxuan_Hu::LanguageBase lang;
	lang.readFromLanguageFile("D:/Projects/C++/Marsh与诸子课本 重制版/Languages/zh-cn/Story/Story.lang", "D:/Projects/C++/Marsh与诸子课本 重制版/UILog.log");
	std::cout << lang.getValue("Story");
	return 0;
}