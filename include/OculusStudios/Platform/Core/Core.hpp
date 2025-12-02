#ifdef __cpp_modules
module;
#endif

#pragma once
#include "OculusStudios/Platform/Core/AssignableOf_1.hpp"
#include "OculusStudios/Platform/Core/AssignableOf_2.hpp"
#include "OculusStudios/Platform/Core/Defines.hpp"
#include "OculusStudios/Platform/Core/IPlatform.hpp"
#include "OculusStudios/Platform/Core/IPlatformEntitlements.hpp"
#include "OculusStudios/Platform/Core/IPlatformFactory.hpp"
#include "OculusStudios/Platform/Core/IPlatformInternal.hpp"
#include "OculusStudios/Platform/Core/IPlatformLogger.hpp"
#include "OculusStudios/Platform/Core/IPlatformUser.hpp"
#include "OculusStudios/Platform/Core/IProductDefinition.hpp"
#include "OculusStudios/Platform/Core/IRichPresenceDefinition.hpp"
#include "OculusStudios/Platform/Core/InstallStatus.hpp"
#include "OculusStudios/Platform/Core/LocaleHelper.hpp"
#include "OculusStudios/Platform/Core/MockedEntitlements.hpp"
#include "OculusStudios/Platform/Core/MockedPlatform.hpp"
#include "OculusStudios/Platform/Core/MockedPlatformFactory.hpp"
#include "OculusStudios/Platform/Core/MockedPlatformUser.hpp"
#include "OculusStudios/Platform/Core/OwnershipRequirement.hpp"
#include "OculusStudios/Platform/Core/PartyInfo.hpp"
#include "OculusStudios/Platform/Core/PlatformExtensions.hpp"
#include "OculusStudios/Platform/Core/PlatformInitFailedException.hpp"
#include "OculusStudios/Platform/Core/PlatformInitParams.hpp"
#include "OculusStudios/Platform/Core/PlatformMissingDependenciesException.hpp"
#include "OculusStudios/Platform/Core/PlatformPotentialPiracyException.hpp"
#include "OculusStudios/Platform/Core/PlatformRequiresAppRestartException.hpp"
#include "OculusStudios/Platform/Core/Product.hpp"
#include "OculusStudios/Platform/Core/ProductDefinition.hpp"
#include "OculusStudios/Platform/Core/ProductDefinitionSO.hpp"
#include "OculusStudios/Platform/Core/RichPresenceDefinitionSO.hpp"
#include "OculusStudios/Platform/Core/RichPresenceRuntimeInstance.hpp"
#include "OculusStudios/Platform/Core/RichPresenceTimestamp.hpp"
#include "OculusStudios/Platform/Core/RichPresenceTimestampType.hpp"
#include "OculusStudios/Platform/Core/UserAgeCategory.hpp"
#include "OculusStudios/Platform/Core/Vendor.hpp"
#ifdef __cpp_modules
export module Core;
#endif
