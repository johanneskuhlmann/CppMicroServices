/*=============================================================================

  Library: CppMicroServices

  Copyright (c) The CppMicroServices developers. See the COPYRIGHT
  file at the top-level directory of this distribution and at
  https://github.com/saschazelzer/CppMicroServices/COPYRIGHT .

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=============================================================================*/


#ifndef USUTILS_H
#define USUTILS_H

#include <usCoreConfig.h>

#include <string>
#include <vector>

//-------------------------------------------------------------------
// Bundle name and location parsing
//-------------------------------------------------------------------

namespace us {

std::string GetBundleNameFromLocation(const std::string& location);

std::string GetBundleLocation(const std::string& location);

bool IsSharedLibrary(const std::string& location);

}

//-------------------------------------------------------------------
// Module auto-loading
//-------------------------------------------------------------------

namespace us {

struct ModuleInfo;
class CoreModuleContext;

std::vector<std::string> AutoLoadModules(const ModuleInfo& moduleInfo, CoreModuleContext* coreCtx);

}

//-------------------------------------------------------------------
// Error handling
//-------------------------------------------------------------------

namespace us {

US_Core_EXPORT std::string GetLastErrorStr();

}

#endif // USUTILS_H
