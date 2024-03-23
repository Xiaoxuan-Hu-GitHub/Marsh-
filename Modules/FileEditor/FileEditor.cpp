// FileEditor.cpp - Class designed for file editing.
// Version: 1.0.0.1
// Written by Xiaoxuan Hu.

#include "FileEditor.h"

void File::FileEditor::link(std::string fpath, std::string lpath = "") {
	linkToFile(fpath);
	log.linkToLog(lpath);

	// Write log.
	std::string tmplog = "LogWriter FileEditor.log: Linked to log " + lpath + " successfully. Log writing starts.";
	log.writeLog(tmplog);
	tmplog = "FileEditor FileEditor: Linked to file" + fpath + " successfully. File editing starts.";
	log.writeLog(tmplog);

	return;
}
void File::FileEditor::link(const char* fpath, const char* lpath = "") {
	std::string tfpath = fpath, tlpath = lpath;
	link(tfpath, tlpath);
	return;
}
void File::FileEditor::unlink(bool unlinkToLog = false) {
	unlinkToFile();
	log.writeLog("FileEditor FileEditor: Unlinked to file successfully. File editing ends.");

	if (unlinkToLog) {
		log.writeLog("LogWriter FileEditor.log: Unlinked to log successfully. Log writing ends.");
		log.unlinkToLog();
	}

	return;
}


void File::FileEditor::rewrite(std::string str) {
	rewriteFile(str);
	log.writeLog("FileEditor FileEditor: Rewrite file successfully.");
	return;
}
void File::FileEditor::rewrite(const char* str) {
	std::string tmp = str;
	rewriteFile(tmp);
	return;
}
void File::FileEditor::append(std::string str) {
	appendFile(str);
	log.writeLog("FileEditor FileEditor: Append to file successfully.");
	return;
}
void File::FileEditor::append(const char* str) {
	std::string tmp = str;
	append(tmp);
	return;
}
std::string File::FileEditor::read() {
	std::string str = readFile();
	log.writeLog("FileEditor FileEditor: Read file successfully.");
	return str;
}