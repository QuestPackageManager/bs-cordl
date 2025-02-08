#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/PlayerInputManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerJoinBehavior_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerNotifications_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerInputManager)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class PlayerInputManager_PlayerJoinedEvent;
}
namespace UnityEngine::InputSystem {
class PlayerInputManager_PlayerLeftEvent;
}
namespace UnityEngine::InputSystem {
class PlayerInput;
}
namespace UnityEngine::InputSystem {
struct PlayerJoinBehavior;
}
namespace UnityEngine::InputSystem {
struct PlayerNotifications;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class PlayerInputManager;
}
namespace UnityEngine::InputSystem {
class PlayerInputManager_PlayerJoinedEvent;
}
namespace UnityEngine::InputSystem {
class PlayerInputManager_PlayerLeftEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::PlayerInputManager);
MARK_REF_PTR_T(::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent);
MARK_REF_PTR_T(::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent);
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.PlayerInputManager/PlayerJoinedEvent
class CORDL_TYPE PlayerInputManager_PlayerJoinedEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x45e6de4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerInputManager_PlayerJoinedEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerInputManager_PlayerJoinedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerInputManager_PlayerJoinedEvent(PlayerInputManager_PlayerJoinedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerInputManager_PlayerJoinedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerInputManager_PlayerJoinedEvent(PlayerInputManager_PlayerJoinedEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6723 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.PlayerInputManager/PlayerLeftEvent
class CORDL_TYPE PlayerInputManager_PlayerLeftEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* New_ctor();

  /// @brief Method .ctor, addr 0x45e6e8c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerInputManager_PlayerLeftEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerInputManager_PlayerLeftEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerInputManager_PlayerLeftEvent(PlayerInputManager_PlayerLeftEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerInputManager_PlayerLeftEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerInputManager_PlayerLeftEvent(PlayerInputManager_PlayerLeftEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6724 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies UnityEngine.InputSystem.InputActionProperty, UnityEngine.InputSystem.PlayerJoinBehavior, UnityEngine.InputSystem.PlayerNotifications,
// UnityEngine.InputSystem.Utilities.CallbackArray`1<TDelegate>, UnityEngine.MonoBehaviour, UnityEngine.Rect
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.PlayerInputManager
class CORDL_TYPE PlayerInputManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PlayerJoinedEvent = ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent;

  using PlayerLeftEvent = ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent;

  /// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance_k__BackingField, put = setStaticF__instance_k__BackingField)) ::UnityW<::UnityEngine::InputSystem::PlayerInputManager> _instance_k__BackingField;

  __declspec(property(get = get_fixedNumberOfSplitScreens)) int32_t fixedNumberOfSplitScreens;

  __declspec(property(get = get_joinAction, put = set_joinAction)) ::UnityEngine::InputSystem::InputActionProperty joinAction;

  __declspec(property(get = get_joinBehavior, put = set_joinBehavior)) ::UnityEngine::InputSystem::PlayerJoinBehavior joinBehavior;

  __declspec(property(get = get_joiningEnabled)) bool joiningEnabled;

  /// @brief Field m_AllowJoining, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowJoining, put = __cordl_internal_set_m_AllowJoining)) bool m_AllowJoining;

  /// @brief Field m_FixedNumberOfSplitScreens, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FixedNumberOfSplitScreens, put = __cordl_internal_set_m_FixedNumberOfSplitScreens)) int32_t m_FixedNumberOfSplitScreens;

  /// @brief Field m_JoinAction, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get_m_JoinAction, put = __cordl_internal_set_m_JoinAction)) ::UnityEngine::InputSystem::InputActionProperty m_JoinAction;

  /// @brief Field m_JoinActionDelegate, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_JoinActionDelegate,
                      put = __cordl_internal_set_m_JoinActionDelegate)) ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_JoinActionDelegate;

  /// @brief Field m_JoinActionDelegateHooked, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_m_JoinActionDelegateHooked, put = __cordl_internal_set_m_JoinActionDelegateHooked)) bool m_JoinActionDelegateHooked;

  /// @brief Field m_JoinBehavior, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_JoinBehavior, put = __cordl_internal_set_m_JoinBehavior)) ::UnityEngine::InputSystem::PlayerJoinBehavior m_JoinBehavior;

  /// @brief Field m_MaintainAspectRatioInSplitScreen, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MaintainAspectRatioInSplitScreen, put = __cordl_internal_set_m_MaintainAspectRatioInSplitScreen)) bool m_MaintainAspectRatioInSplitScreen;

  /// @brief Field m_MaxPlayerCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxPlayerCount, put = __cordl_internal_set_m_MaxPlayerCount)) int32_t m_MaxPlayerCount;

  /// @brief Field m_NotificationBehavior, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NotificationBehavior, put = __cordl_internal_set_m_NotificationBehavior)) ::UnityEngine::InputSystem::PlayerNotifications m_NotificationBehavior;

  /// @brief Field m_PlayerJoinedCallbacks, offset 0x90, size 0x50
  __declspec(property(get = __cordl_internal_get_m_PlayerJoinedCallbacks,
                      put =
                          __cordl_internal_set_m_PlayerJoinedCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>
      m_PlayerJoinedCallbacks;

  /// @brief Field m_PlayerJoinedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PlayerJoinedEvent,
                      put = __cordl_internal_set_m_PlayerJoinedEvent)) ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* m_PlayerJoinedEvent;

  /// @brief Field m_PlayerLeftCallbacks, offset 0xe0, size 0x50
  __declspec(property(get = __cordl_internal_get_m_PlayerLeftCallbacks,
                      put = __cordl_internal_set_m_PlayerLeftCallbacks)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>
      m_PlayerLeftCallbacks;

  /// @brief Field m_PlayerLeftEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PlayerLeftEvent, put = __cordl_internal_set_m_PlayerLeftEvent)) ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* m_PlayerLeftEvent;

  /// @brief Field m_PlayerPrefab, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PlayerPrefab, put = __cordl_internal_set_m_PlayerPrefab)) ::UnityW<::UnityEngine::GameObject> m_PlayerPrefab;

  /// @brief Field m_SplitScreen, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SplitScreen, put = __cordl_internal_set_m_SplitScreen)) bool m_SplitScreen;

  /// @brief Field m_SplitScreenRect, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_m_SplitScreenRect, put = __cordl_internal_set_m_SplitScreenRect)) ::UnityEngine::Rect m_SplitScreenRect;

  /// @brief Field m_UnpairedDeviceUsedDelegate, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnpairedDeviceUsedDelegate,
                      put = __cordl_internal_set_m_UnpairedDeviceUsedDelegate)) ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*
      m_UnpairedDeviceUsedDelegate;

  /// @brief Field m_UnpairedDeviceUsedDelegateHooked, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UnpairedDeviceUsedDelegateHooked, put = __cordl_internal_set_m_UnpairedDeviceUsedDelegateHooked)) bool m_UnpairedDeviceUsedDelegateHooked;

  __declspec(property(get = get_maintainAspectRatioInSplitScreen)) bool maintainAspectRatioInSplitScreen;

  __declspec(property(get = get_maxPlayerCount)) int32_t maxPlayerCount;

  __declspec(property(get = get_notificationBehavior, put = set_notificationBehavior)) ::UnityEngine::InputSystem::PlayerNotifications notificationBehavior;

  __declspec(property(get = get_playerCount)) int32_t playerCount;

  __declspec(property(get = get_playerJoinedEvent)) ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* playerJoinedEvent;

  __declspec(property(get = get_playerLeftEvent)) ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* playerLeftEvent;

  __declspec(property(get = get_playerPrefab, put = set_playerPrefab)) ::UnityW<::UnityEngine::GameObject> playerPrefab;

  __declspec(property(get = get_splitScreen, put = set_splitScreen)) bool splitScreen;

  __declspec(property(get = get_splitScreenArea)) ::UnityEngine::Rect splitScreenArea;

  /// @brief Method CheckIfPlayerCanJoin, addr 0x45e7238, size 0x2d8, virtual false, abstract: false, final false
  inline bool CheckIfPlayerCanJoin(int32_t playerIndex);

  /// @brief Method DisableJoining, addr 0x45e69fc, size 0xd8, virtual false, abstract: false, final false
  inline void DisableJoining();

  /// @brief Method EnableJoining, addr 0x45e6ad4, size 0x1e8, virtual false, abstract: false, final false
  inline void EnableJoining();

  /// @brief Method IsDeviceUsableWithPlayerActions, addr 0x45e7914, size 0x3a0, virtual false, abstract: false, final false
  inline bool IsDeviceUsableWithPlayerActions(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method JoinPlayer, addr 0x45e7564, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> JoinPlayer(int32_t playerIndex, int32_t splitScreenIndex, ::StringW controlScheme, ::UnityEngine::InputSystem::InputDevice* pairWithDevice);

  /// @brief Method JoinPlayer, addr 0x45e7708, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> JoinPlayer(int32_t playerIndex, int32_t splitScreenIndex, ::StringW controlScheme,
                                                                      ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> pairWithDevices);

  /// @brief Method JoinPlayerFromAction, addr 0x45e7510, size 0x54, virtual false, abstract: false, final false
  inline void JoinPlayerFromAction(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method JoinPlayerFromActionIfNotAlreadyJoined, addr 0x45e7620, size 0xe8, virtual false, abstract: false, final false
  inline void JoinPlayerFromActionIfNotAlreadyJoined(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method JoinPlayerFromUI, addr 0x45e71ec, size 0x4c, virtual false, abstract: false, final false
  inline void JoinPlayerFromUI();

  static inline ::UnityEngine::InputSystem::PlayerInputManager* New_ctor();

  /// @brief Method NotifyPlayerJoined, addr 0x45e46ac, size 0x130, virtual false, abstract: false, final false
  inline void NotifyPlayerJoined(::UnityEngine::InputSystem::PlayerInput* player);

  /// @brief Method NotifyPlayerLeft, addr 0x45e5050, size 0x130, virtual false, abstract: false, final false
  inline void NotifyPlayerLeft(::UnityEngine::InputSystem::PlayerInput* player);

  /// @brief Method OnDisable, addr 0x45e7ff4, size 0xdc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x45e7cb4, size 0x340, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnUnpairedDeviceUsed, addr 0x45e7860, size 0xb4, virtual false, abstract: false, final false
  inline void OnUnpairedDeviceUsed(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method UpdateSplitScreen, addr 0x45e63bc, size 0x564, virtual false, abstract: false, final false
  inline void UpdateSplitScreen();

  /// @brief Method ValidateInputActionAsset, addr 0x45e71e8, size 0x4, virtual false, abstract: false, final false
  inline void ValidateInputActionAsset();

  constexpr bool const& __cordl_internal_get_m_AllowJoining() const;

  constexpr bool& __cordl_internal_get_m_AllowJoining();

  constexpr int32_t const& __cordl_internal_get_m_FixedNumberOfSplitScreens() const;

  constexpr int32_t& __cordl_internal_get_m_FixedNumberOfSplitScreens();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_JoinAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_JoinAction();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& __cordl_internal_get_m_JoinActionDelegate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& __cordl_internal_get_m_JoinActionDelegate();

  constexpr bool const& __cordl_internal_get_m_JoinActionDelegateHooked() const;

  constexpr bool& __cordl_internal_get_m_JoinActionDelegateHooked();

  constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior const& __cordl_internal_get_m_JoinBehavior() const;

  constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior& __cordl_internal_get_m_JoinBehavior();

  constexpr bool const& __cordl_internal_get_m_MaintainAspectRatioInSplitScreen() const;

  constexpr bool& __cordl_internal_get_m_MaintainAspectRatioInSplitScreen();

  constexpr int32_t const& __cordl_internal_get_m_MaxPlayerCount() const;

  constexpr int32_t& __cordl_internal_get_m_MaxPlayerCount();

  constexpr ::UnityEngine::InputSystem::PlayerNotifications const& __cordl_internal_get_m_NotificationBehavior() const;

  constexpr ::UnityEngine::InputSystem::PlayerNotifications& __cordl_internal_get_m_NotificationBehavior();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> const& __cordl_internal_get_m_PlayerJoinedCallbacks() const;

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>& __cordl_internal_get_m_PlayerJoinedCallbacks();

  constexpr ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* const& __cordl_internal_get_m_PlayerJoinedEvent() const;

  constexpr ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent*& __cordl_internal_get_m_PlayerJoinedEvent();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> const& __cordl_internal_get_m_PlayerLeftCallbacks() const;

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>& __cordl_internal_get_m_PlayerLeftCallbacks();

  constexpr ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* const& __cordl_internal_get_m_PlayerLeftEvent() const;

  constexpr ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent*& __cordl_internal_get_m_PlayerLeftEvent();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_PlayerPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_PlayerPrefab();

  constexpr bool const& __cordl_internal_get_m_SplitScreen() const;

  constexpr bool& __cordl_internal_get_m_SplitScreen();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_SplitScreenRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_SplitScreenRect();

  constexpr ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* const& __cordl_internal_get_m_UnpairedDeviceUsedDelegate() const;

  constexpr ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __cordl_internal_get_m_UnpairedDeviceUsedDelegate();

  constexpr bool const& __cordl_internal_get_m_UnpairedDeviceUsedDelegateHooked() const;

  constexpr bool& __cordl_internal_get_m_UnpairedDeviceUsedDelegateHooked();

  constexpr void __cordl_internal_set_m_AllowJoining(bool value);

  constexpr void __cordl_internal_set_m_FixedNumberOfSplitScreens(int32_t value);

  constexpr void __cordl_internal_set_m_JoinAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_JoinActionDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  constexpr void __cordl_internal_set_m_JoinActionDelegateHooked(bool value);

  constexpr void __cordl_internal_set_m_JoinBehavior(::UnityEngine::InputSystem::PlayerJoinBehavior value);

  constexpr void __cordl_internal_set_m_MaintainAspectRatioInSplitScreen(bool value);

  constexpr void __cordl_internal_set_m_MaxPlayerCount(int32_t value);

  constexpr void __cordl_internal_set_m_NotificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value);

  constexpr void __cordl_internal_set_m_PlayerJoinedCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value);

  constexpr void __cordl_internal_set_m_PlayerJoinedEvent(::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* value);

  constexpr void __cordl_internal_set_m_PlayerLeftCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value);

  constexpr void __cordl_internal_set_m_PlayerLeftEvent(::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* value);

  constexpr void __cordl_internal_set_m_PlayerPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_SplitScreen(bool value);

  constexpr void __cordl_internal_set_m_SplitScreenRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_UnpairedDeviceUsedDelegate(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  constexpr void __cordl_internal_set_m_UnpairedDeviceUsedDelegateHooked(bool value);

  /// @brief Method .ctor, addr 0x45e80d0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onPlayerJoined, addr 0x45e6ed4, size 0x9c, virtual false, abstract: false, final false
  inline void add_onPlayerJoined(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value);

  /// @brief Method add_onPlayerLeft, addr 0x45e700c, size 0x9c, virtual false, abstract: false, final false
  inline void add_onPlayerLeft(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value);

  static inline ::UnityW<::UnityEngine::InputSystem::PlayerInputManager> getStaticF__instance_k__BackingField();

  /// @brief Method get_fixedNumberOfSplitScreens, addr 0x45e6928, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fixedNumberOfSplitScreens();

  /// @brief Method get_instance, addr 0x45e7154, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::InputSystem::PlayerInputManager> get_instance();

  /// @brief Method get_joinAction, addr 0x45e6cbc, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_joinAction();

  /// @brief Method get_joinBehavior, addr 0x45e69a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::PlayerJoinBehavior get_joinBehavior();

  /// @brief Method get_joiningEnabled, addr 0x45e699c, size 0x8, virtual false, abstract: false, final false
  inline bool get_joiningEnabled();

  /// @brief Method get_maintainAspectRatioInSplitScreen, addr 0x45e6920, size 0x8, virtual false, abstract: false, final false
  inline bool get_maintainAspectRatioInSplitScreen();

  /// @brief Method get_maxPlayerCount, addr 0x45e6994, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxPlayerCount();

  /// @brief Method get_messages, addr 0x45e77c4, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> get_messages();

  /// @brief Method get_notificationBehavior, addr 0x45e6d74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::PlayerNotifications get_notificationBehavior();

  /// @brief Method get_playerCount, addr 0x45e693c, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_playerCount();

  /// @brief Method get_playerJoinedEvent, addr 0x45e6d84, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* get_playerJoinedEvent();

  /// @brief Method get_playerLeftEvent, addr 0x45e6e2c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* get_playerLeftEvent();

  /// @brief Method get_playerPrefab, addr 0x45e7144, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_playerPrefab();

  /// @brief Method get_splitScreen, addr 0x45e6180, size 0x8, virtual false, abstract: false, final false
  inline bool get_splitScreen();

  /// @brief Method get_splitScreenArea, addr 0x45e6930, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect get_splitScreenArea();

  /// @brief Method remove_onPlayerJoined, addr 0x45e6f70, size 0x9c, virtual false, abstract: false, final false
  inline void remove_onPlayerJoined(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value);

  /// @brief Method remove_onPlayerLeft, addr 0x45e70a8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_onPlayerLeft(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value);

  static inline void setStaticF__instance_k__BackingField(::UnityW<::UnityEngine::InputSystem::PlayerInputManager> value);

  /// @brief Method set_instance, addr 0x45e719c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_instance(::UnityEngine::InputSystem::PlayerInputManager* value);

  /// @brief Method set_joinAction, addr 0x45e6cd0, size 0xa4, virtual false, abstract: false, final false
  inline void set_joinAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_joinBehavior, addr 0x45e69ac, size 0x50, virtual false, abstract: false, final false
  inline void set_joinBehavior(::UnityEngine::InputSystem::PlayerJoinBehavior value);

  /// @brief Method set_notificationBehavior, addr 0x45e6d7c, size 0x8, virtual false, abstract: false, final false
  inline void set_notificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value);

  /// @brief Method set_playerPrefab, addr 0x45e714c, size 0x8, virtual false, abstract: false, final false
  inline void set_playerPrefab(::UnityEngine::GameObject* value);

  /// @brief Method set_splitScreen, addr 0x45e6188, size 0x234, virtual false, abstract: false, final false
  inline void set_splitScreen(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerInputManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerInputManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerInputManager(PlayerInputManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerInputManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerInputManager(PlayerInputManager const&) = delete;

  /// @brief Field PlayerJoinedMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString PlayerJoinedMessage{ u"OnPlayerJoined" };

  /// @brief Field PlayerLeftMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString PlayerLeftMessage{ u"OnPlayerLeft" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6725 };

  /// @brief Field m_NotificationBehavior, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::PlayerNotifications ___m_NotificationBehavior;

  /// @brief Field m_MaxPlayerCount, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_MaxPlayerCount;

  /// @brief Field m_AllowJoining, offset: 0x28, size: 0x1, def value: None
  bool ___m_AllowJoining;

  /// @brief Field m_JoinBehavior, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::InputSystem::PlayerJoinBehavior ___m_JoinBehavior;

  /// @brief Field m_PlayerJoinedEvent, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent* ___m_PlayerJoinedEvent;

  /// @brief Field m_PlayerLeftEvent, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent* ___m_PlayerLeftEvent;

  /// @brief Field m_JoinAction, offset: 0x40, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_JoinAction;

  /// @brief Field m_PlayerPrefab, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_PlayerPrefab;

  /// @brief Field m_SplitScreen, offset: 0x60, size: 0x1, def value: None
  bool ___m_SplitScreen;

  /// @brief Field m_MaintainAspectRatioInSplitScreen, offset: 0x61, size: 0x1, def value: None
  bool ___m_MaintainAspectRatioInSplitScreen;

  /// @brief Field m_FixedNumberOfSplitScreens, offset: 0x64, size: 0x4, def value: None
  int32_t ___m_FixedNumberOfSplitScreens;

  /// @brief Field m_SplitScreenRect, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_SplitScreenRect;

  /// @brief Field m_JoinActionDelegateHooked, offset: 0x78, size: 0x1, def value: None
  bool ___m_JoinActionDelegateHooked;

  /// @brief Field m_UnpairedDeviceUsedDelegateHooked, offset: 0x79, size: 0x1, def value: None
  bool ___m_UnpairedDeviceUsedDelegateHooked;

  /// @brief Field m_JoinActionDelegate, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* ___m_JoinActionDelegate;

  /// @brief Field m_UnpairedDeviceUsedDelegate, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* ___m_UnpairedDeviceUsedDelegate;

  /// @brief Field m_PlayerJoinedCallbacks, offset: 0x90, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> ___m_PlayerJoinedCallbacks;

  /// @brief Field m_PlayerLeftCallbacks, offset: 0xe0, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> ___m_PlayerLeftCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_NotificationBehavior) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_MaxPlayerCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_AllowJoining) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_JoinBehavior) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_PlayerJoinedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_PlayerLeftEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_JoinAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_PlayerPrefab) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_SplitScreen) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_MaintainAspectRatioInSplitScreen) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_FixedNumberOfSplitScreens) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_SplitScreenRect) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_JoinActionDelegateHooked) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_UnpairedDeviceUsedDelegateHooked) == 0x79, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_JoinActionDelegate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_UnpairedDeviceUsedDelegate) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_PlayerJoinedCallbacks) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_PlayerLeftCallbacks) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PlayerInputManager, 0x130>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::PlayerInputManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerInputManager*, "UnityEngine.InputSystem", "PlayerInputManager");
NEED_NO_BOX(::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerInputManager_PlayerJoinedEvent*, "UnityEngine.InputSystem", "PlayerInputManager/PlayerJoinedEvent");
NEED_NO_BOX(::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerInputManager_PlayerLeftEvent*, "UnityEngine.InputSystem", "PlayerInputManager/PlayerLeftEvent");
