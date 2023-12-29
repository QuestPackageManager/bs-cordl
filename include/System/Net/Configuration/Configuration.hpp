#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Net/Configuration/BypassElement.hpp"
#include "System/Net/Configuration/BypassElementCollection.hpp"
#include "System/Net/Configuration/ConnectionManagementElement.hpp"
#include "System/Net/Configuration/ConnectionManagementElementCollection.hpp"
#include "System/Net/Configuration/ConnectionManagementSection.hpp"
#include "System/Net/Configuration/DefaultProxySection.hpp"
#include "System/Net/Configuration/DefaultProxySectionInternal.hpp"
#include "System/Net/Configuration/HttpWebRequestElement.hpp"
#include "System/Net/Configuration/Ipv6Element.hpp"
#include "System/Net/Configuration/NetSectionGroup.hpp"
#include "System/Net/Configuration/PerformanceCountersElement.hpp"
#include "System/Net/Configuration/ProxyElement.hpp"
#include "System/Net/Configuration/ServicePointManagerElement.hpp"
#include "System/Net/Configuration/SettingsSection.hpp"
#include "System/Net/Configuration/SettingsSectionInternal.hpp"
#include "System/Net/Configuration/SocketElement.hpp"
#include "System/Net/Configuration/UnicodeDecodingConformance.hpp"
#include "System/Net/Configuration/UnicodeEncodingConformance.hpp"
#include "System/Net/Configuration/WebProxyScriptElement.hpp"
#include "System/Net/Configuration/WebRequestModuleElement.hpp"
#include "System/Net/Configuration/WebRequestModuleElementCollection.hpp"
#include "System/Net/Configuration/WebRequestModulesSection.hpp"
#ifdef __cpp_modules
export module Configuration;
#endif
