// filebase.cpp - Basic file operations.
// Version: 1.0.0.10
// Written by Xiaoxuan Hu.

#include "Filebase.h"

void File::FileBase::linkToFile(std::string npath) {
	path = npath;
	return;
}
void File::FileBase::linkToFile(const char* path) {
	std::string tmp = path;
	linkToFile(tmp);
	return;
}
void File::FileBase::unlinkToFile() {
	path = "";
	return;
}

void File::FileBase::rewriteFile(std::string str) {
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
void File::FileBase::rewriteFile(const char* str) {
	std::string tmp = str;
	rewriteFile(tmp);
	return;
}
void File::FileBase::appendFile(std::string str) {
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
void File::FileBase::appendFile(const char* str) {
	std::string tmp = str;
	appendFile(tmp);
	return;
}
std::string File::FileBase::readFile() {
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