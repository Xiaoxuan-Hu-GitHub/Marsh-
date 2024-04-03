#include <map>
#include <string>

#include "../FileEditor/FileEditor.h"

namespace Language {
	class LanguageBase {
	private:
		std::map<std::string, std::string> dictionary;
		File::FileEditor file;
	public:
		void readFromFile(const char* languageFilePath) {

		}
	};
}