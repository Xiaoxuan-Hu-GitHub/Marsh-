// Filebase.h - Basic file operations.
// Version: 0.0.0.14
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
		void rewrite(std::string str);
		void rewrite(const char* str);
		void append(std::string str);
		void append(const char* str);
		std::string read();
		void remove();
	};
}