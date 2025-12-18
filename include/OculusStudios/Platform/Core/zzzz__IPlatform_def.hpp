#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IPlatform)
namespace OculusStudios::Platform::Core {
class IPlatformEntitlements;
}
namespace OculusStudios::Platform::Core {
class IPlatformUser;
}
namespace OculusStudios::Platform::Core {
class IRichPresenceDefinition;
}
namespace OculusStudios::Platform::Core {
struct RichPresenceRuntimeInstance;
}
namespace OculusStudios::Platform::Core {
struct Vendor;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
class IPlatform;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::IPlatform);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.IPlatform
class CORDL_TYPE IPlatform {
public:
  // Declarations
  __declspec(property(get = get_displayName)) ::StringW displayName;

  __declspec(property(get = get_entitlements)) ::OculusStudios::Platform::Core::IPlatformEntitlements* entitlements;

  __declspec(property(get = get_key)) ::StringW key;

  __declspec(property(get = get_user)) ::OculusStudios::Platform::Core::IPlatformUser* user;

  __declspec(property(get = get_vendor)) ::OculusStudios::Platform::Core::Vendor vendor;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ClearRichPresenceStatus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ClearRichPresenceStatus();

  /// @brief Method GetAppVersion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetAppVersion();

  /// @brief Method GetDestination, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> GetDestination();

  /// @brief Method SetRichPresenceStatus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetRichPresenceStatus(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance status);

  /// @brief Method Tick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Tick(float_t deltaTime);

  /// @brief Method add_destinationRequestedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value);

  /// @brief Method get_displayName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_entitlements, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::IPlatformEntitlements* get_entitlements();

  /// @brief Method get_key, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_user, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::IPlatformUser* get_user();

  /// @brief Method get_vendor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::Vendor get_vendor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_destinationRequestedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value);

  // Ctor Parameters [CppParam { name: "", ty: "IPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatform(IPlatform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22188 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::IPlatform);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::IPlatform*, "OculusStudios.Platform.Core", "IPlatform");
