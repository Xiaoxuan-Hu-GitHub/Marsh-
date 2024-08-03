// FileEditor.h - Class designed for file editing.
// Version: 0.0.0.6
// Written by Xiaoxuan Hu.

#pragma once

#include <string>

#include "../Basic/FileBase/FileBase.h"

namespace File_Xiaoxuan_Hu {
	class FileEditor : public FileBase {
	private:
		std::string path;
	public:
		void linkToFile(std::string path);
		void linkToFile(const char* path);
		void unlinkToFile();

		void createFile(std::string path);
		void createFile(const char* path);
		void removeFile();

		void rewrite(std::string str);
		void rewrite(const char* str);
		void append(std::string str);
		void append(const char* str);
		std::string read();
	};
}