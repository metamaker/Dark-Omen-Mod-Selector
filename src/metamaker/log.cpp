#include "log.h"
#include "paths.h"

#include <fstream>

using std::ofstream;

namespace darkomen_log
{
	log_ptr_type darkomen_log::OpenLog()
	{
		ofstream *log = new ofstream(darkomen_paths::GetPathToLogFile(),
			ofstream::out | ofstream::app);
	
		return log_ptr_type(log);
	}
}