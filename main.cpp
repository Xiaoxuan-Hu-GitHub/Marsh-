// Marsh�����ӿα� ���ư� - "Marsh�����ӿα�"��һ�����ư汾��
// �汾��: 0.0.0.0
// ԭ����δ֪�����汾��Xiaoxuan Hu��д��
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
	lang.readFromLanguageFile("D:/Projects/C++/Marsh�����ӿα� ���ư�/Languages/zh-cn/Story/Story.lang", "D:/Projects/C++/Marsh�����ӿα� ���ư�/UILog.log");
	std::cout << lang.getValue("Story");
	return 0;
}