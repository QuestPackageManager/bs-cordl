#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/OculusPlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusPlatform)
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace OculusStudios::Platform::Core {
class IPlatformEntitlements;
}
namespace OculusStudios::Platform::Core {
class IPlatformInternal;
}
namespace OculusStudios::Platform::Core {
class IPlatformLogger;
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
class PlatformInitParams;
}
namespace OculusStudios::Platform::Core {
struct RichPresenceRuntimeInstance;
}
namespace OculusStudios::Platform::Core {
struct Vendor;
}
namespace OculusStudios::Platform::Oculus {
class Entitlements;
}
namespace OculusStudios::Platform::Oculus {
struct OculusPlatform__InitializeUserAsync_d__26;
}
namespace OculusStudios::Platform::Oculus {
struct OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19;
}
namespace OculusStudios::Platform::Oculus {
class PlatformUser;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
namespace OculusStudios::Platform::Oculus {
class OculusPlatform;
}
namespace OculusStudios::Platform::Oculus {
struct OculusPlatform__InitializeUserAsync_d__26;
}
namespace OculusStudios::Platform::Oculus {
struct OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Oculus::OculusPlatform);
MARK_VAL_T(::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26);
MARK_VAL_T(::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::Platform::Oculus {
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.OculusPlatform/<InitializeUserAsync>d__26
struct CORDL_TYPE OculusPlatform__InitializeUserAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d1e464, size 0x430, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d1e954, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatform__InitializeUserAsync_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::Platform::Oculus::OculusPlatform*", modifiers:
  // "", def_value: None }, CppParam { name: "initParams", ty: "::OculusStudios::Platform::Core::PlatformInitParams*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*>", modifiers: "", def_value: None }]
  constexpr OculusPlatform__InitializeUserAsync_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                      ::OculusStudios::Platform::Oculus::OculusPlatform* __4__this, ::OculusStudios::Platform::Core::PlatformInitParams* initParams,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21887 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::OculusPlatform* __4__this;

  /// @brief Field initParams, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::PlatformInitParams* initParams;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::User*>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26, initParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26, 0x38>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace OculusStudios::Platform::Oculus {
// Is value type: true
// CS Name: OculusStudios.Platform.Oculus.OculusPlatform/<OculusStudios-Platform-Core-IPlatformInternal-InitializeAsync>d__19
struct CORDL_TYPE OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5d1e9c0, size 0x94c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5d1f30c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::OculusStudios::Platform::Oculus::OculusPlatform*", modifiers:
  // "", def_value: None }, CppParam { name: "initParams", ty: "::OculusStudios::Platform::Core::PlatformInitParams*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>", modifiers: "", def_value: None }, CppParam { name: "__u__2",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*>", modifiers: "", def_value: None }]
  constexpr OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::OculusStudios::Platform::Oculus::OculusPlatform* __4__this,
      ::OculusStudios::Platform::Core::PlatformInitParams* initParams,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*> __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> __u__3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21888 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::OculusPlatform* __4__this;

  /// @brief Field initParams, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::PlatformInitParams* initParams;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  /// @brief Field <>u__3, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> __u__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19, initParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19, __u__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19, __u__3) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19, 0x48>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
// Dependencies System.Object
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.OculusPlatform
class CORDL_TYPE OculusPlatform : public ::System::Object {
public:
  // Declarations
  using _InitializeUserAsync_d__26 = ::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26;

  using _OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19 = ::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19;

  /// @brief Field _entitlements, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlements, put = __cordl_internal_set__entitlements)) ::OculusStudios::Platform::Oculus::Entitlements* _entitlements;

  /// @brief Field _user, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__user, put = __cordl_internal_set__user)) ::OculusStudios::Platform::Oculus::PlatformUser* _user;

  /// @brief Field destinationRequestedEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_destinationRequestedEvent,
                      put = __cordl_internal_set_destinationRequestedEvent)) ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* destinationRequestedEvent;

  /// @brief Field destinations, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_destinations,
                      put = __cordl_internal_set_destinations)) ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* destinations;

  __declspec(property(get = get_displayName)) ::StringW displayName;

  __declspec(property(get = get_entitlements)) ::OculusStudios::Platform::Core::IPlatformEntitlements* entitlements;

  __declspec(property(get = get_key)) ::StringW key;

  /// @brief Field lastKnownDestinationId, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_lastKnownDestinationId, put = __cordl_internal_set_lastKnownDestinationId)) ::StringW lastKnownDestinationId;

  /// @brief Field lastKnownJoinKey, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lastKnownJoinKey, put = __cordl_internal_set_lastKnownJoinKey)) ::StringW lastKnownJoinKey;

  /// @brief Field logger, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger)) ::OculusStudios::Platform::Core::IPlatformLogger* logger;

  __declspec(property(get = get_user)) ::OculusStudios::Platform::Core::IPlatformUser* user;

  __declspec(property(get = get_vendor)) ::OculusStudios::Platform::Core::Vendor vendor;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatform"
  constexpr operator ::OculusStudios::Platform::Core::IPlatform*() noexcept;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformInternal"
  constexpr operator ::OculusStudios::Platform::Core::IPlatformInternal*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ClearRichPresenceStatus, addr 0x5d1dde4, size 0x8, virtual true, abstract: false, final true
  inline void ClearRichPresenceStatus();

  /// @brief Method Dispose, addr 0x5d1dddc, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetAppVersion, addr 0x5d1ddf0, size 0x14, virtual true, abstract: false, final true
  inline ::StringW GetAppVersion();

  /// @brief Method GetDestination, addr 0x5d1e09c, size 0xe4, virtual true, abstract: false, final true
  inline ::System::ValueTuple_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW> GetDestination();

  /// @brief Method InitializeUserAsync, addr 0x5d1e180, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeUserAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  static inline ::OculusStudios::Platform::Oculus::OculusPlatform* New_ctor();

  /// @brief Method OculusStudios.Platform.Core.IPlatformInternal.InitializeAsync, addr 0x5d1dd18, size 0xc4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  /// @brief Method OnJoinIntent, addr 0x5d1e244, size 0x154, virtual false, abstract: false, final false
  inline void OnJoinIntent(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message);

  /// @brief Method SetRichPresenceStatus, addr 0x5d1de04, size 0x298, virtual true, abstract: false, final true
  inline void SetRichPresenceStatus(::OculusStudios::Platform::Core::RichPresenceRuntimeInstance status);

  /// @brief Method Tick, addr 0x5d1ddec, size 0x4, virtual true, abstract: false, final true
  inline void Tick(float_t deltaTime);

  /// @brief Method <GetDestination>b__25_0, addr 0x5d1e3b0, size 0xb4, virtual false, abstract: false, final false
  inline bool _GetDestination_b__25_0(::OculusStudios::Platform::Core::IRichPresenceDefinition* x);

  constexpr ::OculusStudios::Platform::Oculus::Entitlements* const& __cordl_internal_get__entitlements() const;

  constexpr ::OculusStudios::Platform::Oculus::Entitlements*& __cordl_internal_get__entitlements();

  constexpr ::OculusStudios::Platform::Oculus::PlatformUser* const& __cordl_internal_get__user() const;

  constexpr ::OculusStudios::Platform::Oculus::PlatformUser*& __cordl_internal_get__user();

  constexpr ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* const& __cordl_internal_get_destinationRequestedEvent() const;

  constexpr ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>*& __cordl_internal_get_destinationRequestedEvent();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* const& __cordl_internal_get_destinations() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>*& __cordl_internal_get_destinations();

  constexpr ::StringW const& __cordl_internal_get_lastKnownDestinationId() const;

  constexpr ::StringW& __cordl_internal_get_lastKnownDestinationId();

  constexpr ::StringW const& __cordl_internal_get_lastKnownJoinKey() const;

  constexpr ::StringW& __cordl_internal_get_lastKnownJoinKey();

  constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& __cordl_internal_get_logger() const;

  constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& __cordl_internal_get_logger();

  constexpr void __cordl_internal_set__entitlements(::OculusStudios::Platform::Oculus::Entitlements* value);

  constexpr void __cordl_internal_set__user(::OculusStudios::Platform::Oculus::PlatformUser* value);

  constexpr void __cordl_internal_set_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value);

  constexpr void __cordl_internal_set_destinations(::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* value);

  constexpr void __cordl_internal_set_lastKnownDestinationId(::StringW value);

  constexpr void __cordl_internal_set_lastKnownJoinKey(::StringW value);

  constexpr void __cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value);

  /// @brief Method .ctor, addr 0x5d1e398, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_destinationRequestedEvent, addr 0x5d1db98, size 0xc0, virtual true, abstract: false, final true
  inline void add_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value);

  /// @brief Method get_displayName, addr 0x5d1daf8, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_displayName();

  /// @brief Method get_entitlements, addr 0x5d1db90, size 0x8, virtual true, abstract: false, final true
  inline ::OculusStudios::Platform::Core::IPlatformEntitlements* get_entitlements();

  /// @brief Method get_key, addr 0x5d1db3c, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_key();

  /// @brief Method get_user, addr 0x5d1db88, size 0x8, virtual true, abstract: false, final true
  inline ::OculusStudios::Platform::Core::IPlatformUser* get_user();

  /// @brief Method get_vendor, addr 0x5d1db80, size 0x8, virtual true, abstract: false, final true
  inline ::OculusStudios::Platform::Core::Vendor get_vendor();

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatform"
  constexpr ::OculusStudios::Platform::Core::IPlatform* i___OculusStudios__Platform__Core__IPlatform() noexcept;

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatformInternal"
  constexpr ::OculusStudios::Platform::Core::IPlatformInternal* i___OculusStudios__Platform__Core__IPlatformInternal() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_destinationRequestedEvent, addr 0x5d1dc58, size 0xc0, virtual true, abstract: false, final true
  inline void remove_destinationRequestedEvent(::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatform(OculusPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatform(OculusPlatform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21889 };

  /// @brief Field destinationRequestedEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_2<::OculusStudios::Platform::Core::IRichPresenceDefinition*, ::StringW>* ___destinationRequestedEvent;

  /// @brief Field logger, offset: 0x18, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatformLogger* ___logger;

  /// @brief Field _user, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::PlatformUser* ____user;

  /// @brief Field _entitlements, offset: 0x28, size: 0x8, def value: None
  ::OculusStudios::Platform::Oculus::Entitlements* ____entitlements;

  /// @brief Field destinations, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::OculusStudios::Platform::Core::IRichPresenceDefinition*>* ___destinations;

  /// @brief Field lastKnownDestinationId, offset: 0x38, size: 0x8, def value: None
  ::StringW ___lastKnownDestinationId;

  /// @brief Field lastKnownJoinKey, offset: 0x40, size: 0x8, def value: None
  ::StringW ___lastKnownJoinKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform, ___destinationRequestedEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform, ___logger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform, ____user) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform, ____entitlements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform, ___destinations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform, ___lastKnownDestinationId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::OculusPlatform, ___lastKnownJoinKey) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::OculusPlatform, 0x48>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
NEED_NO_BOX(::OculusStudios::Platform::Oculus::OculusPlatform);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::OculusPlatform*, "OculusStudios.Platform.Oculus", "OculusPlatform");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::OculusPlatform__InitializeUserAsync_d__26, "OculusStudios.Platform.Oculus", "OculusPlatform/<InitializeUserAsync>d__26");
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::OculusPlatform__OculusStudios_Platform_Core_IPlatformInternal_InitializeAsync_d__19, "OculusStudios.Platform.Oculus",
                       "OculusPlatform/<OculusStudios-Platform-Core-IPlatformInternal-InitializeAsync>d__19");
