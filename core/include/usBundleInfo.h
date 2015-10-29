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


#ifndef USBUNDLEINFO_H
#define USBUNDLEINFO_H

#include <usCoreConfig.h>

#include <string>

#ifdef _MSC_VER
# pragma warning(push)
# pragma warning(disable: 4251)
#endif

namespace us {

struct BundleActivator;

/**
 * This class is not intended to be used directly. It is exported to support
 * the CppMicroServices bundle system.
 */
struct US_Core_EXPORT BundleInfo
{
  BundleInfo(const std::string& name);

  std::string name;
  std::string location;
  std::string autoLoadDir;
  long id;
};

}

#ifdef _MSC_VER
# pragma warning(pop)
#endif

#endif // USBUNDLEINFO_H