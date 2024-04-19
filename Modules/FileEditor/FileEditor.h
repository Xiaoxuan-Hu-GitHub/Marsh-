// FileEditor.h - Class designed for file editing.
// Version: 1.0.0.6
// Written by Xiaoxuan Hu.

#pragma once

#include <string>

#include "../Basic/FileBase/FileBase.h"
#include "../LogWriter/LogWriter.h"

namespace File_Xiaoxuan_Hu {
	class FileEditor : public FileBase {
	private:
		LogWriter log;
		std::string path;
	public:
		void linkToFile(std::string fpath, std::string lpath);
		void linkToFile(const char* fpath, const char* lpath);
		void unlinkToFile(bool unlinkToLog = false);

		void createFile(std::string path, std::string lpath);
		void createFile(const char* path, const char* lpath);
		void removeFile(bool unlinkToLog = false);

		void rewrite(std::string str);
		void rewrite(const char* str);
		void append(std::string str);
		void append(const char* str);
		std::string read();
	};
}