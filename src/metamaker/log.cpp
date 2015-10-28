#include "log.h"
#include "paths.h"

#include <fstream>

using std::ofstream;

namespace darkomen_log
{
	std::ostream& darkomen_log::OpenLog()
	{
		ofstream out(darkomen_paths::GetPathToLogFile(), ofstream::out | ofstream::app);

		return out;
	}
}