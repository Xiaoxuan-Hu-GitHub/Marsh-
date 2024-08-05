// LanguageSupport.cpp - Class designed for language file editing.
// Version: 0.0.0.7
// Written by Xiaoxuan Hu.

#include <map>
#include <string>

#include "LanguageSupport.h"
#include "../Basic/LanguageFileUtility/LanguageFileUtility.h"

void Language_Xiaoxuan_Hu::LanguageSupport::readFromLanguageFile(std::string languageFilePath) {
	std::string cache, tmp = "";

	dictionary.clear();
	file.linkToFile(languageFilePath);
	cache = file.read();

	for (size_t i = 0; i < cache.size() && !LanguageUtility_Xiaoxuan_Hu::pendingEnd(cache, i); i++) {
		// Split the whole string.
		if (!LanguageUtility_Xiaoxuan_Hu::pendingAnotherLine(cache, i))
			tmp += cache[i];
		else {
			size_t j;
			std::string tkey = "", tvalue = "";

			// Get key & value.
			for (j = 0; j < tmp.size() && tmp[j] != ' '; j++)
				tkey += tmp[j];
			for (j = j + 4; j < tmp.size() && tmp[j] != '\"'; j++)
				tvalue += tmp[j];

			dictionary.insert(std::pair<std::string, std::string>(tkey, tvalue));

			tmp = ""; // Reset.
		}
	}

	file.unlinkToFile();
	return;
}

void Language_Xiaoxuan_Hu::LanguageSupport::readFromLanguageFile(const char* languageFilePath) {
	std::string lfpath = languageFilePath;
	readFromLanguageFile(lfpath);
	return;
}

std::string Language_Xiaoxuan_Hu::LanguageSupport::getValue(std::string key) {
	std::string tmp = dictionary[key];
	return dictionary[key];
}
std::string Language_Xiaoxuan_Hu::LanguageSupport::getValue(const char* key) {
	std::string tmp = key;
	return getValue(tmp);
}
