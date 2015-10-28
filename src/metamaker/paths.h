/********************************************************************************************
Author of this file is
    __________ _______   __   _____ __ __________ _____ __ __ _____ ______   __ ____
   / _   _   // ___  /__/ /_ / ___ / // _   _   // ___ / // //____// ____ \ / //___ \
  / / / / / // /__/_//_  __// /  /  // / / / / // /  /  //   /    / /___/_//   /__/_/
 / / / / / // /_____  / /_ / /__/  // / / / / // /__/  // /\ \__ / /_____ / /\ \__
/_/ /_/ /_/ \______/  \__/ \____/_//_/ /_/ /_/ \____/_//_/  \___/\______//_/  \___/

metamaker's personal webpage: http://www.goblinov.net

This file contains functions which return paths to modification files (like xslots.txt).

********************************************************************************************/

#ifndef METAMAKER_DARKOMEN_PATHS
#define METAMAKER_DARKOMEN_PATHS

#include <string>

namespace darkomen_paths
{
	// absolute path to xslots.txt
	std::string GetPathToXSlotsFile();

	// absolute path to log file
	const char* GetPathToLogFile();
}

#endif // METAMAKER_DARKOMEN_PATHS
