// FileEditor.cpp - Class designed for file editing.
// Version: 0.0.0.8
// Written by Xiaoxuan Hu.


#include "FileEditor.h"

void File_Xiaoxuan_Hu::FileEditor::linkToFile(std::string path) {
	File_Xiaoxuan_Hu::FileBase::linkToFile(path);
	return;
}
void File_Xiaoxuan_Hu::FileEditor::linkToFile(const char* path) {
	std::string tmp = path;
	linkToFile(tmp);
	return;
}
void File_Xiaoxuan_Hu::FileEditor::unlinkToFile() {
	File_Xiaoxuan_Hu::FileBase::unlinkToFile();
	return;
}

void File_Xiaoxuan_Hu::FileEditor::createFile(std::string path) {
	linkToFile(path);
	rewrite("");
	return;
}
void File_Xiaoxuan_Hu::FileEditor::createFile(const char* path) {
	linkToFile(path);
	rewrite("");
	return;
}
void File_Xiaoxuan_Hu::FileEditor::removeFile() {
	File_Xiaoxuan_Hu::FileBase::remove();
	return;
}

void File_Xiaoxuan_Hu::FileEditor::rewrite(std::string str) {
	File_Xiaoxuan_Hu::FileBase::rewrite(str);
	return;
}
void File_Xiaoxuan_Hu::FileEditor::rewrite(const char* str) {
	std::string tmp = str;
	rewrite(tmp);
	return;
}
void File_Xiaoxuan_Hu::FileEditor::append(std::string str) {
	File_Xiaoxuan_Hu::FileBase::append(str);
	return;
}
void File_Xiaoxuan_Hu::FileEditor::append(const char* str) {
	std::string tmp = str;
	append(tmp);
	return;
}
std::string File_Xiaoxuan_Hu::FileEditor::read() {
	std::string str = File_Xiaoxuan_Hu::FileBase::read();
	return str;
}