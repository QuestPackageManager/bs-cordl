#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Security/CodeAccessPermission.hpp"
#include "System/Security/IPermission.hpp"
#include "System/Security/ISecurityEncodable.hpp"
#include "System/Security/NamedPermissionSet.hpp"
#include "System/Security/PermissionSet.hpp"
#include "System/Security/SecureString.hpp"
#include "System/Security/SecurityDocument.hpp"
#include "System/Security/SecurityElement.hpp"
#include "System/Security/SecurityElementType.hpp"
#include "System/Security/SecurityException.hpp"
#include "System/Security/SecurityManager.hpp"
#include "System/Security/XmlSyntaxException.hpp"
#ifdef __cpp_modules
export module Security;
#endif
