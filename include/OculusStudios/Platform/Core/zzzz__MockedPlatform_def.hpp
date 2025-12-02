#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/MockedPlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MockedPlatform)
namespace OculusStudios::Platform::Core {
class IPlatformEntitlements;
}
namespace OculusStudios::Platform::Core {
class IPlatformInternal;
}
namespace OculusStudios::Platform::Core {
class IPlatformUser;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace OculusStudios::Platform::Core {
class IRichPresenceDefinition;
}
namespace OculusStudios::Platform::Core {
class MockedEntitlements;
}
namespace OculusStudios::Platform::Core {
class MockedPlatformUser;
}
namespace OculusStudios::Platform::Core {
class PlatformInitParams;
}
namespace OculusStudios::Platform::Core {
struct RichPresenceRuntimeInstance;
}
namespace OculusStudios::Platform::Core {
struct Vendor;
}
namespace System::Threading::Tasks {
class Task;
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
class MockedPlatform;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::MockedPlatform);
// Dependencies System.Object
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.MockedPlatform
class CORDL_TYPE MockedPlatform : public ::System::Object {
public:
  // Declarations
  /// @brief Field _entitlements, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlements, put = __cordl_internal_set__entitlements)) ::OculusStudios::Platform::Core::MockedEntitlements* _entitlements;

  /// @brief Field _user, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__user, put = __cordl_internal_set__user)) ::OculusStudios::Platform::Core::MockedPlatformUser* _user;

  /// @brief Field destinationRequestedEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationRequestedEvent,
                      put = __cordl_internal_set_destinationRequestedEvent)) ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* destinationRequestedEvent;

  __declspec(property(get = get_displayName)) ::StringW displayName;

  __declspec(property(get = get_entitlements)) ::OculusStudios::Platform::Core::IPlatformEntitlements* entitlements;

  __declspec(property(get = get_key)) ::StringW key;

  __declspec(property(get = get_user)) ::OculusStudios::Platform::Core::IPlatformUser* user;

  __declspec(property(get = get_vendor)) ::OculusStudios::Platform::Core::Vendor vendor;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatform"
  constexpr operator ::OculusStudios::Platform::Core::IPlatform*() noexcept;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformInternal"
  constexpr operator ::OculusStudios::Platform::Core::IPlatformInternal*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ClearRichPresenceStatus, addr 0x5d1b554, size 0x4, virtual true, abstract: false, final true
  inline void ClearRichPresenceStatus();

  /// @brief Method Dispose, addr 0x5d1b534, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetAppVersion, addr 0x5d1b53c, size 0x14, virtual true, abstract: false, final true
  inline ::StringW GetAppVersion();

  /// @brief Method GetDestination, addr 0x5d1b558, size 0x44, virtual true, abstract: false, final true
  inline ::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> GetDestination();

  static inline ::OculusStudios::Platform::Core::MockedPlatform* New_ctor();

  /// @brief Method OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync, addr 0x5d1b378, size 0x104, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  /// @brief Method SetRichPresenceStatus, addr 0x5d1b550, size 0x4, virtual true, abstract: false, final true
  inline void SetRichPresenceStatus(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance status);

  /// @brief Method Tick, addr 0x5d1b538, size 0x4, virtual true, abstract: false, final true
  inline void Tick(float_t deltaTime);

  constexpr ::OculusStudios::Platform::Core::MockedEntitlements* const& __cordl_internal_get__entitlements() const;

  constexpr ::OculusStudios::Platform::Core::MockedEntitlements*& __cordl_internal_get__entitlements();

  constexpr ::OculusStudios::Platform::Core::MockedPlatformUser* const& __cordl_internal_get__user() const;

  constexpr ::OculusStudios::Platform::Core::MockedPlatformUser*& __cordl_internal_get__user();

  constexpr ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* const& __cordl_internal_get_destinationRequestedEvent() const;

  constexpr ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*& __cordl_internal_get_destinationRequestedEvent();

  constexpr void __cordl_internal_set__entitlements(::OculusStudios::Platform::Core::MockedEntitlements* value);

  constexpr void __cordl_internal_set__user(::OculusStudios::Platform::Core::MockedPlatformUser* value);

  constexpr void __cordl_internal_set_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value);

  /// @brief Method .ctor, addr 0x5d1b59c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_destinationRequestedEvent, addr 0x5d1b1f8, size 0xc0, virtual true, abstract: false, final true
  inline void add_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value);

  /// @brief Method get_displayName, addr 0x5d1b158, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_entitlements, addr 0x5d1b1f0, size 0x8, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::IPlatformEntitlements* get_entitlements();

  /// @brief Method get_key, addr 0x5d1b19c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_key();

  /// @brief Method get_user, addr 0x5d1b1e8, size 0x8, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::IPlatformUser* get_user();

  /// @brief Method get_vendor, addr 0x5d1b1e0, size 0x8, virtual true, abstract: false, final false
  inline ::OculusStudios::Platform::Core::Vendor get_vendor();

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatform"
  constexpr ::OculusStudios::Platform::Core::IPlatform* i___OculusStudios__Platform__Core__IPlatform() noexcept;

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatformInternal"
  constexpr ::OculusStudios::Platform::Core::IPlatformInternal* i___OculusStudios__Platform__Core__IPlatformInternal() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_destinationRequestedEvent, addr 0x5d1b2b8, size 0xc0, virtual true, abstract: false, final true
  inline void remove_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockedPlatform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockedPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockedPlatform(MockedPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockedPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockedPlatform(MockedPlatform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22173 };

  /// @brief Field destinationRequestedEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* ___destinationRequestedEvent;

  /// @brief Field _user, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::MockedPlatformUser* ____user;

  /// @brief Field _entitlements, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::MockedEntitlements* ____entitlements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Core::MockedPlatform, ___destinationRequestedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::MockedPlatform, ____user) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Core::MockedPlatform, ____entitlements) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Core::MockedPlatform, 0x28>, "Size mismatch!");

} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::MockedPlatform);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::MockedPlatform*, "OculusStudios.Platform.Core", "MockedPlatform");
