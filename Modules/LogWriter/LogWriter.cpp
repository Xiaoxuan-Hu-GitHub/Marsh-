// LogWriter.cpp - Class designed for log writing.
// Version: 1.0.0.1
// Written by Xiaoxuan Hu.

#include "LogWriter.h"

#include <Windows.h>
#include <sstream>

std::string WORD2string(WORD x) {
	std::stringstream ss;
	std::string ans;
	ss << x;
	ss >> ans;
	return ans;
}

void File::LogWriter::linkToLog(std::string npath) {
	linkToFile(npath);
	return;
}
void File::LogWriter::linkToLog(const char* npath) {
	linkToFile(npath);
	return;
}
void File::LogWriter::unlinkToLog() {
	unlinkToFile();
	return;
}

void File::LogWriter::writeLog(std::string log) {
	SYSTEMTIME t;
	std::string tmp = '[' + WORD2string(t.wYear) + '/' + WORD2string(t.wMonth) + '/' + WORD2string(t.wDay) + ' '
		+ WORD2string(t.wHour) + ':' + WORD2string(t.wMinute) + ':' + WORD2string(t.wSecond) + '.'
		+ WORD2string(t.wMilliseconds) + ']' + log;
	append(tmp);
	return;
}