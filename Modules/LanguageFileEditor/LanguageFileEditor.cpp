#include <map>
#include <string>

namespace Modules {
	class LanguageBase {
	private:
		std::map<std::string, std::string> dictionary;
	public:
		void readFromFile(const char* languageFilePath) {

		}
	};
}