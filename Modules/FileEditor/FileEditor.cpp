// FileEditor.cpp - Class designed for file editing.
// Version: 1.0.0.6
// Written by Xiaoxuan Hu.

#include <cstdio>

#include "FileEditor.h"

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
void File_Xiaoxuan_Hu::FileEditor::unlinkToFile(bool unlinkToLog) {
	File_Xiaoxuan_Hu::FileBase::unlinkToFile();
	log.writeLog("FileEditor FileEditor: Unlinked to file. File editing ends.");

	if (unlinkToLog) {
		log.writeLog("LogWriter FileEditor.log: Unlinked to log. Log writing ends.");
		log.unlinkToLog();
	}

	return;
}

void File_Xiaoxuan_Hu::FileEditor::createFile(std::string path, std::string lpath = "FileEditorLog.log") {
	linkToFile(path, lpath);
	rewrite("");
	return;
}
void File_Xiaoxuan_Hu::FileEditor::createFile(const char* path, const char* lpath = "FileEditorLog.log") {
	linkToFile(path, lpath);
	rewrite("");
	return;
}
void File_Xiaoxuan_Hu::FileEditor::removeFile(bool unlinkToLog) {
	File_Xiaoxuan_Hu::FileBase::removeFile();
	log.writeLog("FileEditor FileEditor: Removed file.");
	unlinkToFile(unlinkToLog);
	return;
}

void File_Xiaoxuan_Hu::FileEditor::rewrite(std::string str) {
	File_Xiaoxuan_Hu::FileBase::rewriteFile(str);
	log.writeLog(File_Xiaoxuan_Hu::FileBase::ready() ? "FileEditor FileEditor: Rewrite file successfully." : "FileEditor FileEditor: Fail to rewrite file.");
	return;
}
void File_Xiaoxuan_Hu::FileEditor::rewrite(const char* str) {
	std::string tmp = str;
	rewriteFile(tmp);
	return;
}
void File_Xiaoxuan_Hu::FileEditor::append(std::string str) {
	File_Xiaoxuan_Hu::FileBase::appendFile(str);
	log.writeLog(File_Xiaoxuan_Hu::FileBase::ready() ? "FileEditor FileEditor: Append to file successfully." : "FileEditor FileEditor: Fail to append to file.");
	return;
}
void File_Xiaoxuan_Hu::FileEditor::append(const char* str) {
	std::string tmp = str;
	append(tmp);
	return;
}
std::string File_Xiaoxuan_Hu::FileEditor::read() {
	std::string str = File_Xiaoxuan_Hu::FileBase::readFile();
	log.writeLog(File_Xiaoxuan_Hu::FileBase::ready() ? "FileEditor FileEditor: Read file successfully." : "FileEditor FileEditor: Fail to read file.");
	return str;
}