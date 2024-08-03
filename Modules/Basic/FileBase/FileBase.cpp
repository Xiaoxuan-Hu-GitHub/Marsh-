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

void File_Xiaoxuan_Hu::FileBase::rewrite(std::string str) {
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
void File_Xiaoxuan_Hu::FileBase::rewrite(const char* str) {
	std::string tmp = str;
	rewrite(tmp);
	return;
}
void File_Xiaoxuan_Hu::FileBase::append(std::string str) {
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
void File_Xiaoxuan_Hu::FileBase::append(const char* str) {
	std::string tmp = str;
	append(tmp);
	return;
}
std::string File_Xiaoxuan_Hu::FileBase::read() {
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
void File_Xiaoxuan_Hu::FileBase::remove() {
	std::remove(path.c_str());
	unlinkToFile();
	return;
}