// filebase.cpp - Basic file operations.
// Version: 0.0.0.15
// Written by Xiaoxuan Hu.

#include <cstdio>

#include "Filebase.h"

void File_Xiaoxuan_Hu::FileBase::linkToFile(std::string npath) {
	path = npath;
	return;
}
void File_Xiaoxuan_Hu::FileBase::linkToFile(const char* path) {
	std::string tmp = path;
	linkToFile(tmp);
	return;
}
void File_Xiaoxuan_Hu::FileBase::unlinkToFile() {
	path = "";
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
	std::string tmp = "", str = "";
	file.open(path.c_str(), std::ios::in);
	if (!file.is_open()) {
		unlinkToFile();
		return str;
	}
	while (getline(file, tmp)) {
		str += (tmp + "\r\n");
		if (file.fail() || file.bad()) {
			unlinkToFile();
			str = "";
			return str;
		}
	}
	file.close();
	return str;
}
void File_Xiaoxuan_Hu::FileBase::removeFile() {
	remove(path.c_str());
	unlinkToFile();
	return;
}