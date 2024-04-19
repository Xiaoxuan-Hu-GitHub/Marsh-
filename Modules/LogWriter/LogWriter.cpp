// LogWriter.cpp - Class designed for log writing.
// Version: 1.0.0.3
// Written by Xiaoxuan Hu.

#include <sstream>

#include <Windows.h>

#include "LogWriter.h"

std::string WORD2string(WORD x) {
	std::stringstream ss;
	std::string ans;
	ss << x;
	ss >> ans;
	return ans;
}

void File_Xiaoxuan_Hu::LogWriter::linkToLog(std::string npath) {
	File_Xiaoxuan_Hu::FileBase::linkToFile(npath);
	return;
}
void File_Xiaoxuan_Hu::LogWriter::linkToLog(const char* npath) {
	File_Xiaoxuan_Hu::FileBase::linkToFile(npath);
	return;
}
void File_Xiaoxuan_Hu::LogWriter::unlinkToLog() {
	File_Xiaoxuan_Hu::FileBase::unlinkToFile();
	return;
}

void File_Xiaoxuan_Hu::LogWriter::writeLog(std::string log) {
	SYSTEMTIME t;
	GetLocalTime(&t);
	std::string tmp = '[' + WORD2string(t.wYear) + '/' + WORD2string(t.wMonth) + '/' + WORD2string(t.wDay) + ' '
		+ WORD2string(t.wHour) + ':' + WORD2string(t.wMinute) + ':' + WORD2string(t.wSecond) + '.'
		+ WORD2string(t.wMilliseconds) + ']' + log + "\r\n";
	File_Xiaoxuan_Hu::FileBase::appendFile(tmp);
	return;
}