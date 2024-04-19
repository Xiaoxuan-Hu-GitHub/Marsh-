// LogWriter.h - Class designed for log writing.
// Version: 1.0.0.3
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
	};
}