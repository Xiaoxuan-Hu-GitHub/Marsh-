// FileEditor.h - Class designed for file editing.
// Version: 1.0.0.1
// Written by Xiaoxuan Hu.

#pragma once

#include "../Basic/FileBase/FileBase.h"
#include "../LogWriter/LogWriter.h"

namespace File {
	class FileEditor : public FileBase {
	private:
		LogWriter log;
	public:
		void link(std::string fpath, std::string lpath = "");
		void link(const char* fpath, const char* lpath = "");
		void unlink(bool unlinkToLog = false);

		void rewrite(std::string str);
		void rewrite(const char* str);
		void append(std::string str);
		void append(const char* str);
		std::string read();
	};
}