#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Security/AccessControl/AccessControlSections.hpp"
#include "System/Security/AccessControl/AccessControlType.hpp"
#include "System/Security/AccessControl/AccessRule.hpp"
#include "System/Security/AccessControl/AceEnumerator.hpp"
#include "System/Security/AccessControl/AceFlags.hpp"
#include "System/Security/AccessControl/AceQualifier.hpp"
#include "System/Security/AccessControl/AceType.hpp"
#include "System/Security/AccessControl/AuditFlags.hpp"
#include "System/Security/AccessControl/AuthorizationRule.hpp"
#include "System/Security/AccessControl/AuthorizationRuleCollection.hpp"
#include "System/Security/AccessControl/CommonAce.hpp"
#include "System/Security/AccessControl/CommonAcl.hpp"
#include "System/Security/AccessControl/CommonObjectSecurity.hpp"
#include "System/Security/AccessControl/CommonSecurityDescriptor.hpp"
#include "System/Security/AccessControl/ControlFlags.hpp"
#include "System/Security/AccessControl/DirectorySecurity.hpp"
#include "System/Security/AccessControl/DiscretionaryAcl.hpp"
#include "System/Security/AccessControl/FileSecurity.hpp"
#include "System/Security/AccessControl/FileSystemAccessRule.hpp"
#include "System/Security/AccessControl/FileSystemRights.hpp"
#include "System/Security/AccessControl/FileSystemSecurity.hpp"
#include "System/Security/AccessControl/GenericAce.hpp"
#include "System/Security/AccessControl/GenericAcl.hpp"
#include "System/Security/AccessControl/GenericSecurityDescriptor.hpp"
#include "System/Security/AccessControl/InheritanceFlags.hpp"
#include "System/Security/AccessControl/KnownAce.hpp"
#include "System/Security/AccessControl/NativeObjectSecurity.hpp"
#include "System/Security/AccessControl/ObjectAce.hpp"
#include "System/Security/AccessControl/ObjectAceFlags.hpp"
#include "System/Security/AccessControl/ObjectSecurity.hpp"
#include "System/Security/AccessControl/PrivilegeNotHeldException.hpp"
#include "System/Security/AccessControl/PropagationFlags.hpp"
#include "System/Security/AccessControl/QualifiedAce.hpp"
#include "System/Security/AccessControl/RawAcl.hpp"
#include "System/Security/AccessControl/ResourceType.hpp"
#include "System/Security/AccessControl/SystemAcl.hpp"
#ifdef __cpp_modules
export module AccessControl;
#endif
