// Filebase.h - Basic file operations.
// Version: 1.0.0.11
// Written by Xiaoxuan Hu.

#pragma once

#include <fstream>
#include <string>

namespace File_Xiaoxuan_Hu {
	class FileBase {
	private:
		std::fstream file;
		std::string path = "";
	public:
		// Basic operation.
		void linkToFile(std::string path);
		void linkToFile(const char* path);
		void unlinkToFile();

		// File operation.
		void rewriteFile(std::string str);
		void rewriteFile(const char* str);
		void appendFile(std::string str);
		void appendFile(const char* str);
		std::string readFile();
	};
}