#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusDeeplinkManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IDeeplinkManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusDeeplinkManager)
namespace GlobalNamespace {
class Deeplink;
}
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace Oculus::Platform::Models {
class LaunchDetails;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusDeeplinkManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusDeeplinkManager);
// Dependencies IDeeplinkManager, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusDeeplinkManager
class CORDL_TYPE OculusDeeplinkManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _currentDeeplink, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__currentDeeplink, put = __cordl_internal_set__currentDeeplink)) ::GlobalNamespace::Deeplink* _currentDeeplink;

  /// @brief Field _oculusPlatformWasInitialized, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__oculusPlatformWasInitialized, put = __cordl_internal_set__oculusPlatformWasInitialized)) bool _oculusPlatformWasInitialized;

  __declspec(property(get = get_currentDeeplink)) ::GlobalNamespace::Deeplink* currentDeeplink;

  /// @brief Field didReceiveDeeplinkEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didReceiveDeeplinkEvent,
                      put = __cordl_internal_set_didReceiveDeeplinkEvent)) ::System::Action_1<::GlobalNamespace::Deeplink*>* didReceiveDeeplinkEvent;

  /// @brief Convert operator to "::GlobalNamespace::IDeeplinkManager"
  constexpr operator ::GlobalNamespace::IDeeplinkManager*() noexcept;

  /// @brief Method Init, addr 0x26af50c, size 0x80, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method IsAtLeastOneFieldPopulated, addr 0x26af8c8, size 0x74, virtual false, abstract: false, final false
  inline bool IsAtLeastOneFieldPopulated(::GlobalNamespace::Deeplink* deeplink);

  /// @brief Method Log, addr 0x26af650, size 0x58, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  static inline ::GlobalNamespace::OculusDeeplinkManager* New_ctor();

  /// @brief Method OculusPlatformWasInitialized, addr 0x26af58c, size 0x18, virtual false, abstract: false, final false
  inline void OculusPlatformWasInitialized();

  /// @brief Method SetJoinIntentReceivedNotificationCallback, addr 0x26af5a4, size 0xac, virtual false, abstract: false, final false
  inline void SetJoinIntentReceivedNotificationCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message);

  /// @brief Method UpdateDeeplinkMessage, addr 0x26af6a8, size 0x220, virtual false, abstract: false, final false
  inline void UpdateDeeplinkMessage(::Oculus::Platform::Models::GroupPresenceJoinIntent* joinIntent, ::Oculus::Platform::Models::LaunchDetails* launchDetails);

  constexpr ::GlobalNamespace::Deeplink* const& __cordl_internal_get__currentDeeplink() const;

  constexpr ::GlobalNamespace::Deeplink*& __cordl_internal_get__currentDeeplink();

  constexpr bool const& __cordl_internal_get__oculusPlatformWasInitialized() const;

  constexpr bool& __cordl_internal_get__oculusPlatformWasInitialized();

  constexpr ::System::Action_1<::GlobalNamespace::Deeplink*>* const& __cordl_internal_get_didReceiveDeeplinkEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::Deeplink*>*& __cordl_internal_get_didReceiveDeeplinkEvent();

  constexpr void __cordl_internal_set__currentDeeplink(::GlobalNamespace::Deeplink* value);

  constexpr void __cordl_internal_set__oculusPlatformWasInitialized(bool value);

  constexpr void __cordl_internal_set_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value);

  /// @brief Method .ctor, addr 0x26af93c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didReceiveDeeplinkEvent, addr 0x26af3a4, size 0xb0, virtual true, abstract: false, final true
  inline void add_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value);

  /// @brief Method get_currentDeeplink, addr 0x26af504, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::Deeplink* get_currentDeeplink();

  /// @brief Convert to "::GlobalNamespace::IDeeplinkManager"
  constexpr ::GlobalNamespace::IDeeplinkManager* i___GlobalNamespace__IDeeplinkManager() noexcept;

  /// @brief Method remove_didReceiveDeeplinkEvent, addr 0x26af454, size 0xb0, virtual true, abstract: false, final true
  inline void remove_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusDeeplinkManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusDeeplinkManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusDeeplinkManager(OculusDeeplinkManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusDeeplinkManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusDeeplinkManager(OculusDeeplinkManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12825 };

  /// @brief Field didReceiveDeeplinkEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::Deeplink*>* ___didReceiveDeeplinkEvent;

  /// @brief Field _currentDeeplink, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::Deeplink* ____currentDeeplink;

  /// @brief Field _oculusPlatformWasInitialized, offset: 0x20, size: 0x1, def value: None
  bool ____oculusPlatformWasInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusDeeplinkManager, ___didReceiveDeeplinkEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusDeeplinkManager, ____currentDeeplink) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusDeeplinkManager, ____oculusPlatformWasInitialized) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusDeeplinkManager, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusDeeplinkManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusDeeplinkManager*, "", "OculusDeeplinkManager");
