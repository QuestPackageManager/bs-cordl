#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System\Security\Principal\GenericIdentity.hpp"
#include "System\Security\Principal\GenericPrincipal.hpp"
#include "System\Security\Principal\IIdentity.hpp"
#include "System\Security\Principal\IPrincipal.hpp"
#include "System\Security\Principal\IdentityNotMappedException.hpp"
#include "System\Security\Principal\IdentityReference.hpp"
#include "System\Security\Principal\NTAccount.hpp"
#include "System\Security\Principal\SecurityIdentifier.hpp"
#include "System\Security\Principal\TokenImpersonationLevel.hpp"
#include "System\Security\Principal\WellKnownAccount.hpp"
#include "System\Security\Principal\WellKnownSidType.hpp"
#include "System\Security\Principal\WindowsAccountType.hpp"
#include "System\Security\Principal\WindowsIdentity.hpp"
#include "System\Security\Principal\WindowsImpersonationContext.hpp"
#ifdef __cpp_modules
export module Principal;
#endif
