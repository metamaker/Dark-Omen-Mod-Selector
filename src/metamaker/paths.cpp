#include "paths.h"

#include <string>
#include <windows.h>

namespace darkomen_paths
{
	using std::string;

	string GetAbsolutePathToFolderWithEXE()
	{
		char darkomenExePath_buffer[MAX_PATH + 1] = { 0 };

		GetModuleFileNameA(NULL, darkomenExePath_buffer, MAX_PATH);
		string darkomenExePath = darkomenExePath_buffer;

		string darkomenFolderWithExe = darkomenExePath.substr(0, darkomenExePath.find_last_of("\\/"));

		return darkomenFolderWithExe;
	}

	std::string GetPathToXSlotsFile()
	{
		return GetAbsolutePathToFolderWithEXE() + "\\xslots.txt";
	}

	const char* GetPathToLogFile()
	{
		return "G:\\Dark Omen\\PRG_ENG\\gamelog.txt";
	}
}
