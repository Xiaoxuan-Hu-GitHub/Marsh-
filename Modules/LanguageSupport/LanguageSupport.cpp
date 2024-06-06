// LanguageSupport.cpp - Class designed for language file editing.
// Version: 0.0.0.2
// Written by Xiaoxuan Hu.

#include <map>
#include <string>

#include "LanguageSupport.h"
#include "../Basic/StringUtility/StringUtility.h"

void Language_Xiaoxuan_Hu::LanguageBase::readFromLanguageFile(std::string languageFilePath, std::string lpath = "LanguageSupportLog.log") {
	std::string cache, tmp = "";

	dictionary.clear();
	file.linkToFile(languageFilePath, lpath);
	cache = file.readFile();

	for (size_t i = 0; i < cache.size(); i++) {
		// Split the whole string.
		if (Utility_Xiaoxuan_Hu::pendingAnotherLine(cache, i))
			tmp += cache[i];
		else {
			size_t j;
			std::string tkey = "", tvalue = "";

			// TODO: �޸��ַ����ָ����⡣

			// Get key & value.
			for (j = 0; j < tmp.size() && tmp[j] != ' ' && tmp[j + 1] != '=' && tmp[j + 2] != ' '; j++)
				tkey += tmp[j];
			for (j = j + 4; j < tmp.size() && tmp[j] != '\"'; j++)
				tvalue += tmp[j];
			
			// ASAP.

			dictionary.insert(std::make_pair(tkey, tvalue));

			tmp = ""; // Reset.
		}
	}

	file.unlinkToFile();
	return;
}

void Language_Xiaoxuan_Hu::LanguageBase::readFromLanguageFile(const char* languageFilePath, const char* lpath = "LanguageSupportLog.log") {
	std::string lfpath = languageFilePath, nlpath = lpath;
	readFromLanguageFile(lfpath, nlpath);
	return;
}

std::string Language_Xiaoxuan_Hu::LanguageBase::getValue(std::string key) {
	return dictionary[key];
}
std::string Language_Xiaoxuan_Hu::LanguageBase::getValue(const char* key) {
	std::string tmp = key;
	return getValue(tmp);
}
