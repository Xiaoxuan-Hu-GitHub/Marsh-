// filebase.cpp - Basic file operations.
// Version: 1.0.0.12
// Written by Xiaoxuan Hu.

#include <cstdio>

#include "Filebase.h"

void File_Xiaoxuan_Hu::FileBase::linkToFile(std::string npath) {
	path = npath;
	isOk = true;
	return;
}
void File_Xiaoxuan_Hu::FileBase::linkToFile(const char* path) {
	std::string tmp = path;
	linkToFile(tmp);
	return;
}
void File_Xiaoxuan_Hu::FileBase::unlinkToFile() {
	path = "";
	isOk = false;
	return;
}

void File_Xiaoxuan_Hu::FileBase::rewriteFile(std::string str) {
	file.open(path.c_str(), std::ios::out);
	if (!file.is_open()) {
		unlinkToFile();
		return;
	}
	file << str;
	if (file.fail() || file.bad()) {
		unlinkToFile();
		return;
	}
	file.close();
	if (file.fail() || file.bad()) {
		unlinkToFile();
		return;
	}
	return;
}
void File_Xiaoxuan_Hu::FileBase::rewriteFile(const char* str) {
	std::string tmp = str;
	rewriteFile(tmp);
	return;
}
void File_Xiaoxuan_Hu::FileBase::appendFile(std::string str) {
	file.open(path.c_str(), std::ios::app);
	if (!file.is_open()) {
		unlinkToFile();
		return;
	}
	file << str;
	if (file.fail() || file.bad()) {
		unlinkToFile();
		return;
	}
	file.close();
	if (file.fail() || file.bad()) {
		unlinkToFile();
		return;
	}
	return;
}
void File_Xiaoxuan_Hu::FileBase::appendFile(const char* str) {
	std::string tmp = str;
	appendFile(tmp);
	return;
}
std::string File_Xiaoxuan_Hu::FileBase::readFile() {
	std::string str = "";
	file.open(path.c_str(), std::ios::in);
	if (!file.is_open()) {
		unlinkToFile();
		return str;
	}
	while (getline(file, str)) {
		str += '\n';
		if (file.fail() || file.bad()) {
			unlinkToFile();
			str = "";
			return str;
		}
	}
	file.close();
	if (file.fail() || file.bad()) {
		unlinkToFile();
		return str;
	}
	return str;
}
void File_Xiaoxuan_Hu::FileBase::removeFile() {
	remove(path.c_str());
	unlinkToFile();
	return;
}

bool File_Xiaoxuan_Hu::FileBase::ready() {
	return isOk;
}
