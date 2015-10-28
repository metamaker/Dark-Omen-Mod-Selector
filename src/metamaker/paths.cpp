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

	const char* GetPathToXSlotsFile()
	{
		static string path;

		if (path.empty()) {
			path = GetAbsolutePathToFolderWithEXE() + "\\xslots.txt";
		}

		return path.c_str();
	}

	const char* GetPathToLogFile()
	{
		static string path;

		if (path.empty()) {
			path = GetAbsolutePathToFolderWithEXE() + "\\..\\gamelog.txt";
		}

		return path.c_str();
	}
}
