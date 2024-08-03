// LogWriter.cpp - Class designed for log writing.
// Version: 0.0.0.4
// Written by Xiaoxuan Hu.

#include <sstream>

#include <Windows.h>

#include "LogWriter.h"
#include "../Basic/StringUtility/StringUtility.h"

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
	std::string tmp = '[' + StringUtility_Xiaoxuan_Hu::numberToString(t.wYear) + '/' + StringUtility_Xiaoxuan_Hu::numberToString(t.wMonth) + '/' + StringUtility_Xiaoxuan_Hu::numberToString(t.wDay) + ' ' + StringUtility_Xiaoxuan_Hu::numberToString(t.wHour) + ':' + StringUtility_Xiaoxuan_Hu::numberToString(t.wMinute) + ':' + StringUtility_Xiaoxuan_Hu::numberToString(t.wSecond) + '.' + StringUtility_Xiaoxuan_Hu::numberToString(t.wMilliseconds) + ']' + log + "\r\n";
	File_Xiaoxuan_Hu::FileBase::append(tmp);
	return;
}