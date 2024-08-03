// LogWriter.h - Class designed for log writing.
// Version: 0.0.0.4
// Written by Xiaoxuan Hu.

#pragma once

#include <string>

#include "../Basic/FileBase/Filebase.h"

namespace File_Xiaoxuan_Hu {
	class LogWriter : public FileBase {
	private:
		std::string path;
	public:
		void linkToLog(std::string path);
		void linkToLog(const char* path);
		void unlinkToLog();

		void writeLog(std::string log);

		// You should not use these functions.
		void linkToFile(std::string path) = delete;
		void linkToFile(const char* path) = delete;
		void unlinkToFile() = delete;
		void rewriteFile(std::string str) = delete;
		void rewriteFile(const char* str) = delete;
		void appendFile(std::string str) = delete;
		void appendFile(const char* str) = delete;
		std::string readFile() = delete;
		void removeFile() = delete;
	};
}