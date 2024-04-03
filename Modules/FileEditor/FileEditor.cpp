// FileEditor.cpp - Class designed for file editing.
// Version: 1.0.0.5
// Written by Xiaoxuan Hu.

#include "FileEditor.h"

#include <cstdio>

void File_Xiaoxuan_Hu::FileEditor::linkToFile(std::string fpath, std::string lpath = "FileEditorLog.log") {
	File_Xiaoxuan_Hu::FileBase::linkToFile(fpath);
	log.linkToLog(lpath);

	// Write log.
	std::string tmplog = "LogWriter FileEditor.log: Linked to log " + lpath + " . Log writing starts.";
	log.writeLog(tmplog);
	tmplog = "FileEditor FileEditor: Linked to file " + fpath + " . File editing starts.";
	log.writeLog(tmplog);

	return;
}
void File_Xiaoxuan_Hu::FileEditor::linkToFile(const char* fpath, const char* lpath = "FileEditorLog.log") {
	std::string tfpath = fpath, tlpath = lpath;
	linkToFile(tfpath, tlpath);
	return;
}
void File_Xiaoxuan_Hu::FileEditor::unlinkToFile(bool unlinkToLog = false) {
	File_Xiaoxuan_Hu::FileBase::unlinkToFile();
	log.writeLog("FileEditor FileEditor: Unlinked to file. File editing ends.");

	if (unlinkToLog) {
		log.writeLog("LogWriter FileEditor.log: Unlinked to log. Log writing ends.");
		log.unlinkToLog();
	}

	return;
}

void File_Xiaoxuan_Hu::FileEditor::removeFile(bool unlinkToLog) {
	remove(path.c_str());
	log.writeLog("FileEditor FileEditor: Removed file. File editing ends.");
	unlinkToFile(unlinkToLog);
	return;
}

void File_Xiaoxuan_Hu::FileEditor::rewrite(std::string str) {
	File_Xiaoxuan_Hu::FileBase::rewriteFile(str);
	log.writeLog("FileEditor FileEditor: Rewrite file.");
	return;
}
void File_Xiaoxuan_Hu::FileEditor::rewrite(const char* str) {
	std::string tmp = str;
	rewriteFile(tmp);
	return;
}
void File_Xiaoxuan_Hu::FileEditor::append(std::string str) {
	File_Xiaoxuan_Hu::FileBase::appendFile(str);
	log.writeLog("FileEditor FileEditor: Append to file.");
	return;
}
void File_Xiaoxuan_Hu::FileEditor::append(const char* str) {
	std::string tmp = str;
	append(tmp);
	return;
}
std::string File_Xiaoxuan_Hu::FileEditor::read() {
	std::string str = File_Xiaoxuan_Hu::FileBase::readFile();
	log.writeLog("FileEditor FileEditor: Read file.");
	return str;
}