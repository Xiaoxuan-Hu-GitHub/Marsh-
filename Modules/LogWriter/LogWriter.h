// LogWriter.h - Class designed for log writing.
// Version: 1.0.0.1
// Written by Xiaoxuan Hu.

#pragma once

#include "../Basic/FileBase/Filebase.h"

namespace File {
	class LogWriter : public FileBase {
	public:
		void linkToLog(std::string path);
		void linkToLog(const char* path);
		void unlinkToLog();

		void writeLog(std::string log);
	};
}