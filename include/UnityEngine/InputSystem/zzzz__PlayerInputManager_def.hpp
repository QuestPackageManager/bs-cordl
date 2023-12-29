#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerInput_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerJoinBehavior_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerNotifications_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerInputManager)
namespace UnityEngine::InputSystem {
struct PlayerJoinBehavior;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::InputSystem {
class PlayerInput;
}
namespace UnityEngine::InputSystem {
class __PlayerInputManager__PlayerLeftEvent;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine::InputSystem {
struct PlayerNotifications;
}
namespace UnityEngine::InputSystem {
class __PlayerInputManager__PlayerJoinedEvent;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class PlayerInputManager;
}
namespace UnityEngine::InputSystem {
class __PlayerInputManager__PlayerJoinedEvent;
}
namespace UnityEngine::InputSystem {
class __PlayerInputManager__PlayerLeftEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::PlayerInputManager);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent);
// Type: ::PlayerJoinedEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10387), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(10387)),
// TypeDefinitionIndex(TypeDefinitionIndex(6401))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6402)) CS Name: ::PlayerInputManager::PlayerJoinedEvent*
class CORDL_TYPE __PlayerInputManager__PlayerJoinedEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput*> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent* New_ctor();

  /// @brief Method .ctor addr 0x2945064 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInputManager__PlayerJoinedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerInputManager__PlayerJoinedEvent(__PlayerInputManager__PlayerJoinedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInputManager__PlayerJoinedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerInputManager__PlayerJoinedEvent(__PlayerInputManager__PlayerJoinedEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerInputManager__PlayerJoinedEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::PlayerLeftEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10387), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(6401)),
// TypeDefinitionIndex(TypeDefinitionIndex(10387))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6403)) CS Name: ::PlayerInputManager::PlayerLeftEvent*
class CORDL_TYPE __PlayerInputManager__PlayerLeftEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput*> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent* New_ctor();

  /// @brief Method .ctor addr 0x2945114 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInputManager__PlayerLeftEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerInputManager__PlayerLeftEvent(__PlayerInputManager__PlayerLeftEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInputManager__PlayerLeftEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerInputManager__PlayerLeftEvent(__PlayerInputManager__PlayerLeftEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerInputManager__PlayerLeftEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::PlayerInputManager
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6406)), TypeDefinitionIndex(TypeDefinitionIndex(6746)), TypeDefinitionIndex(TypeDefinitionIndex(6405)),
// TypeDefinitionIndex(TypeDefinitionIndex(6250)), TypeDefinitionIndex(TypeDefinitionIndex(2323)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6746), inst: 974 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10093)), TypeDefinitionIndex(TypeDefinitionIndex(6401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2323), inst: 374 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10152))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6404)) CS Name: ::UnityEngine.InputSystem::PlayerInputManager*
class CORDL_TYPE PlayerInputManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PlayerLeftEvent = ::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent;

  using PlayerJoinedEvent = ::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent;

  /// @brief Field m_NotificationBehavior, offset 0x18, size 0x4
  __declspec(property(get = __get_m_NotificationBehavior, put = __set_m_NotificationBehavior))::UnityEngine::InputSystem::PlayerNotifications m_NotificationBehavior;

  /// @brief Field m_MaxPlayerCount, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_MaxPlayerCount, put = __set_m_MaxPlayerCount)) int32_t m_MaxPlayerCount;

  /// @brief Field m_AllowJoining, offset 0x20, size 0x1
  __declspec(property(get = __get_m_AllowJoining, put = __set_m_AllowJoining)) bool m_AllowJoining;

  /// @brief Field m_JoinBehavior, offset 0x24, size 0x4
  __declspec(property(get = __get_m_JoinBehavior, put = __set_m_JoinBehavior))::UnityEngine::InputSystem::PlayerJoinBehavior m_JoinBehavior;

  /// @brief Field m_PlayerJoinedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_m_PlayerJoinedEvent, put = __set_m_PlayerJoinedEvent))::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent* m_PlayerJoinedEvent;

  /// @brief Field m_PlayerLeftEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_m_PlayerLeftEvent, put = __set_m_PlayerLeftEvent))::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent* m_PlayerLeftEvent;

  /// @brief Field m_JoinAction, offset 0x38, size 0x18
  __declspec(property(get = __get_m_JoinAction, put = __set_m_JoinAction))::UnityEngine::InputSystem::InputActionProperty m_JoinAction;

  /// @brief Field m_PlayerPrefab, offset 0x50, size 0x8
  __declspec(property(get = __get_m_PlayerPrefab, put = __set_m_PlayerPrefab))::UnityEngine::GameObject* m_PlayerPrefab;

  /// @brief Field m_SplitScreen, offset 0x58, size 0x1
  __declspec(property(get = __get_m_SplitScreen, put = __set_m_SplitScreen)) bool m_SplitScreen;

  /// @brief Field m_MaintainAspectRatioInSplitScreen, offset 0x59, size 0x1
  __declspec(property(get = __get_m_MaintainAspectRatioInSplitScreen, put = __set_m_MaintainAspectRatioInSplitScreen)) bool m_MaintainAspectRatioInSplitScreen;

  /// @brief Field m_FixedNumberOfSplitScreens, offset 0x5c, size 0x4
  __declspec(property(get = __get_m_FixedNumberOfSplitScreens, put = __set_m_FixedNumberOfSplitScreens)) int32_t m_FixedNumberOfSplitScreens;

  /// @brief Field m_SplitScreenRect, offset 0x60, size 0x10
  __declspec(property(get = __get_m_SplitScreenRect, put = __set_m_SplitScreenRect))::UnityEngine::Rect m_SplitScreenRect;

  /// @brief Field m_JoinActionDelegateHooked, offset 0x70, size 0x1
  __declspec(property(get = __get_m_JoinActionDelegateHooked, put = __set_m_JoinActionDelegateHooked)) bool m_JoinActionDelegateHooked;

  /// @brief Field m_UnpairedDeviceUsedDelegateHooked, offset 0x71, size 0x1
  __declspec(property(get = __get_m_UnpairedDeviceUsedDelegateHooked, put = __set_m_UnpairedDeviceUsedDelegateHooked)) bool m_UnpairedDeviceUsedDelegateHooked;

  /// @brief Field m_JoinActionDelegate, offset 0x78, size 0x8
  __declspec(property(get = __get_m_JoinActionDelegate, put = __set_m_JoinActionDelegate))::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* m_JoinActionDelegate;

  /// @brief Field m_UnpairedDeviceUsedDelegate, offset 0x80, size 0x8
  __declspec(property(
      get = __get_m_UnpairedDeviceUsedDelegate,
      put = __set_m_UnpairedDeviceUsedDelegate))::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_UnpairedDeviceUsedDelegate;

  /// @brief Field m_PlayerJoinedCallbacks, offset 0x88, size 0x50
  __declspec(
      property(get = __get_m_PlayerJoinedCallbacks,
               put = __set_m_PlayerJoinedCallbacks))::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> m_PlayerJoinedCallbacks;

  /// @brief Field m_PlayerLeftCallbacks, offset 0xd8, size 0x50
  __declspec(property(get = __get_m_PlayerLeftCallbacks,
                      put = __set_m_PlayerLeftCallbacks))::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> m_PlayerLeftCallbacks;

  /// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance_k__BackingField, put = setStaticF__instance_k__BackingField))::UnityEngine::InputSystem::PlayerInputManager* _instance_k__BackingField;

  __declspec(property(get = get_splitScreen, put = set_splitScreen)) bool splitScreen;

  __declspec(property(get = get_maintainAspectRatioInSplitScreen)) bool maintainAspectRatioInSplitScreen;

  __declspec(property(get = get_fixedNumberOfSplitScreens)) int32_t fixedNumberOfSplitScreens;

  __declspec(property(get = get_splitScreenArea))::UnityEngine::Rect splitScreenArea;

  __declspec(property(get = get_playerCount)) int32_t playerCount;

  __declspec(property(get = get_maxPlayerCount)) int32_t maxPlayerCount;

  __declspec(property(get = get_joiningEnabled)) bool joiningEnabled;

  __declspec(property(get = get_joinBehavior, put = set_joinBehavior))::UnityEngine::InputSystem::PlayerJoinBehavior joinBehavior;

  __declspec(property(get = get_joinAction, put = set_joinAction))::UnityEngine::InputSystem::InputActionProperty joinAction;

  __declspec(property(get = get_notificationBehavior, put = set_notificationBehavior))::UnityEngine::InputSystem::PlayerNotifications notificationBehavior;

  __declspec(property(get = get_playerJoinedEvent))::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent* playerJoinedEvent;

  __declspec(property(get = get_playerLeftEvent))::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent* playerLeftEvent;

  __declspec(property(get = get_playerPrefab, put = set_playerPrefab))::UnityEngine::GameObject* playerPrefab;

  constexpr ::UnityEngine::InputSystem::PlayerNotifications& __get_m_NotificationBehavior();

  constexpr ::UnityEngine::InputSystem::PlayerNotifications const& __get_m_NotificationBehavior() const;

  constexpr void __set_m_NotificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value);

  constexpr int32_t& __get_m_MaxPlayerCount();

  constexpr int32_t const& __get_m_MaxPlayerCount() const;

  constexpr void __set_m_MaxPlayerCount(int32_t value);

  constexpr bool& __get_m_AllowJoining();

  constexpr bool const& __get_m_AllowJoining() const;

  constexpr void __set_m_AllowJoining(bool value);

  constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior& __get_m_JoinBehavior();

  constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior const& __get_m_JoinBehavior() const;

  constexpr void __set_m_JoinBehavior(::UnityEngine::InputSystem::PlayerJoinBehavior value);

  constexpr ::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent*& __get_m_PlayerJoinedEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent*> const& __get_m_PlayerJoinedEvent() const;

  constexpr void __set_m_PlayerJoinedEvent(::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent* value);

  constexpr ::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent*& __get_m_PlayerLeftEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent*> const& __get_m_PlayerLeftEvent() const;

  constexpr void __set_m_PlayerLeftEvent(::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent* value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __get_m_JoinAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __get_m_JoinAction() const;

  constexpr void __set_m_JoinAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::GameObject*& __get_m_PlayerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_PlayerPrefab() const;

  constexpr void __set_m_PlayerPrefab(::UnityEngine::GameObject* value);

  constexpr bool& __get_m_SplitScreen();

  constexpr bool const& __get_m_SplitScreen() const;

  constexpr void __set_m_SplitScreen(bool value);

  constexpr bool& __get_m_MaintainAspectRatioInSplitScreen();

  constexpr bool const& __get_m_MaintainAspectRatioInSplitScreen() const;

  constexpr void __set_m_MaintainAspectRatioInSplitScreen(bool value);

  constexpr int32_t& __get_m_FixedNumberOfSplitScreens();

  constexpr int32_t const& __get_m_FixedNumberOfSplitScreens() const;

  constexpr void __set_m_FixedNumberOfSplitScreens(int32_t value);

  constexpr ::UnityEngine::Rect& __get_m_SplitScreenRect();

  constexpr ::UnityEngine::Rect const& __get_m_SplitScreenRect() const;

  constexpr void __set_m_SplitScreenRect(::UnityEngine::Rect value);

  constexpr bool& __get_m_JoinActionDelegateHooked();

  constexpr bool const& __get_m_JoinActionDelegateHooked() const;

  constexpr void __set_m_JoinActionDelegateHooked(bool value);

  constexpr bool& __get_m_UnpairedDeviceUsedDelegateHooked();

  constexpr bool const& __get_m_UnpairedDeviceUsedDelegateHooked() const;

  constexpr void __set_m_UnpairedDeviceUsedDelegateHooked(bool value);

  constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& __get_m_JoinActionDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const& __get_m_JoinActionDelegate() const;

  constexpr void __set_m_JoinActionDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value);

  constexpr ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __get_m_UnpairedDeviceUsedDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const&
  __get_m_UnpairedDeviceUsedDelegate() const;

  constexpr void __set_m_UnpairedDeviceUsedDelegate(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*>& __get_m_PlayerJoinedCallbacks();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> const& __get_m_PlayerJoinedCallbacks() const;

  constexpr void __set_m_PlayerJoinedCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*>& __get_m_PlayerLeftCallbacks();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> const& __get_m_PlayerLeftCallbacks() const;

  constexpr void __set_m_PlayerLeftCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> value);

  static inline void setStaticF__instance_k__BackingField(::UnityEngine::InputSystem::PlayerInputManager* value);

  static inline ::UnityEngine::InputSystem::PlayerInputManager* getStaticF__instance_k__BackingField();

  /// @brief Method get_splitScreen addr 0x29442e8 size 0x8 virtual false final false
  inline bool get_splitScreen();

  /// @brief Method set_splitScreen addr 0x29442f0 size 0x260 virtual false final false
  inline void set_splitScreen(bool value);

  /// @brief Method get_maintainAspectRatioInSplitScreen addr 0x2944b90 size 0x8 virtual false final false
  inline bool get_maintainAspectRatioInSplitScreen();

  /// @brief Method get_fixedNumberOfSplitScreens addr 0x2944b98 size 0x8 virtual false final false
  inline int32_t get_fixedNumberOfSplitScreens();

  /// @brief Method get_splitScreenArea addr 0x2944ba0 size 0xc virtual false final false
  inline ::UnityEngine::Rect get_splitScreenArea();

  /// @brief Method get_playerCount addr 0x2944bac size 0x58 virtual false final false
  inline int32_t get_playerCount();

  /// @brief Method get_maxPlayerCount addr 0x2944c04 size 0x8 virtual false final false
  inline int32_t get_maxPlayerCount();

  /// @brief Method get_joiningEnabled addr 0x2944c0c size 0x8 virtual false final false
  inline bool get_joiningEnabled();

  /// @brief Method get_joinBehavior addr 0x2944c14 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::PlayerJoinBehavior get_joinBehavior();

  /// @brief Method set_joinBehavior addr 0x2944c1c size 0x50 virtual false final false
  inline void set_joinBehavior(::UnityEngine::InputSystem::PlayerJoinBehavior value);

  /// @brief Method get_joinAction addr 0x2944f34 size 0x14 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_joinAction();

  /// @brief Method set_joinAction addr 0x2944f48 size 0xa4 virtual false final false
  inline void set_joinAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method get_notificationBehavior addr 0x2944fec size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::PlayerNotifications get_notificationBehavior();

  /// @brief Method set_notificationBehavior addr 0x2944ff4 size 0x8 virtual false final false
  inline void set_notificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value);

  /// @brief Method get_playerJoinedEvent addr 0x2944ffc size 0x68 virtual false final false
  inline ::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent* get_playerJoinedEvent();

  /// @brief Method get_playerLeftEvent addr 0x29450ac size 0x68 virtual false final false
  inline ::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent* get_playerLeftEvent();

  /// @brief Method add_onPlayerJoined addr 0x294515c size 0xa0 virtual false final false
  inline void add_onPlayerJoined(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value);

  /// @brief Method remove_onPlayerJoined addr 0x29451fc size 0xa0 virtual false final false
  inline void remove_onPlayerJoined(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value);

  /// @brief Method add_onPlayerLeft addr 0x294529c size 0xa0 virtual false final false
  inline void add_onPlayerLeft(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value);

  /// @brief Method remove_onPlayerLeft addr 0x294533c size 0xa0 virtual false final false
  inline void remove_onPlayerLeft(::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>* value);

  /// @brief Method get_playerPrefab addr 0x29453dc size 0x8 virtual false final false
  inline ::UnityEngine::GameObject* get_playerPrefab();

  /// @brief Method set_playerPrefab addr 0x29453e4 size 0x8 virtual false final false
  inline void set_playerPrefab(::UnityEngine::GameObject* value);

  /// @brief Method get_instance addr 0x29453ec size 0x48 virtual false final false
  static inline ::UnityEngine::InputSystem::PlayerInputManager* get_instance();

  /// @brief Method set_instance addr 0x2945434 size 0x4c virtual false final false
  static inline void set_instance(::UnityEngine::InputSystem::PlayerInputManager* value);

  /// @brief Method EnableJoining addr 0x2944d44 size 0x1f0 virtual false final false
  inline void EnableJoining();

  /// @brief Method DisableJoining addr 0x2944c6c size 0xd8 virtual false final false
  inline void DisableJoining();

  /// @brief Method JoinPlayerFromUI addr 0x2945484 size 0x54 virtual false final false
  inline void JoinPlayerFromUI();

  /// @brief Method JoinPlayerFromAction addr 0x29457b0 size 0x54 virtual false final false
  inline void JoinPlayerFromAction(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method JoinPlayerFromActionIfNotAlreadyJoined addr 0x29458c0 size 0xe8 virtual false final false
  inline void JoinPlayerFromActionIfNotAlreadyJoined(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method JoinPlayer addr 0x2945804 size 0xbc virtual false final false
  inline ::UnityEngine::InputSystem::PlayerInput* JoinPlayer(int32_t playerIndex, int32_t splitScreenIndex, ::StringW controlScheme, ::UnityEngine::InputSystem::InputDevice* pairWithDevice);

  /// @brief Method JoinPlayer addr 0x29459a8 size 0xbc virtual false final false
  inline ::UnityEngine::InputSystem::PlayerInput* JoinPlayer(int32_t playerIndex, int32_t splitScreenIndex, ::StringW controlScheme,
                                                             ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> pairWithDevices);

  /// @brief Method get_messages addr 0x2945a64 size 0xe4 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> get_messages();

  /// @brief Method CheckIfPlayerCanJoin addr 0x29454d8 size 0x2d8 virtual false final false
  inline bool CheckIfPlayerCanJoin(int32_t playerIndex);

  /// @brief Method OnUnpairedDeviceUsed addr 0x2945b48 size 0xb4 virtual false final false
  inline void OnUnpairedDeviceUsed(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method OnEnable addr 0x2945f78 size 0x340 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x29462b8 size 0xdc virtual false final false
  inline void OnDisable();

  /// @brief Method UpdateSplitScreen addr 0x2944550 size 0x640 virtual false final false
  inline void UpdateSplitScreen();

  /// @brief Method IsDeviceUsableWithPlayerActions addr 0x2945bfc size 0x37c virtual false final false
  inline bool IsDeviceUsableWithPlayerActions(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method ValidateInputActionAsset addr 0x2945480 size 0x4 virtual false final false
  inline void ValidateInputActionAsset();

  /// @brief Method NotifyPlayerJoined addr 0x29427f4 size 0x128 virtual false final false
  inline void NotifyPlayerJoined(::UnityEngine::InputSystem::PlayerInput* player);

  /// @brief Method NotifyPlayerLeft addr 0x29431ac size 0x128 virtual false final false
  inline void NotifyPlayerLeft(::UnityEngine::InputSystem::PlayerInput* player);

  static inline ::UnityEngine::InputSystem::PlayerInputManager* New_ctor();

  /// @brief Method .ctor addr 0x2946394 size 0x60 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerInputManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerInputManager(PlayerInputManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerInputManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerInputManager(PlayerInputManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerInputManager();

public:
  /// @brief Field m_NotificationBehavior, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::InputSystem::PlayerNotifications ___m_NotificationBehavior;

  /// @brief Field m_MaxPlayerCount, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_MaxPlayerCount;

  /// @brief Field m_AllowJoining, offset: 0x20, size: 0x1, def value: None
  bool ___m_AllowJoining;

  /// @brief Field m_JoinBehavior, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::InputSystem::PlayerJoinBehavior ___m_JoinBehavior;

  /// @brief Field m_PlayerJoinedEvent, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent* ___m_PlayerJoinedEvent;

  /// @brief Field m_PlayerLeftEvent, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent* ___m_PlayerLeftEvent;

  /// @brief Field m_JoinAction, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_JoinAction;

  /// @brief Field m_PlayerPrefab, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_PlayerPrefab;

  /// @brief Field m_SplitScreen, offset: 0x58, size: 0x1, def value: None
  bool ___m_SplitScreen;

  /// @brief Field m_MaintainAspectRatioInSplitScreen, offset: 0x59, size: 0x1, def value: None
  bool ___m_MaintainAspectRatioInSplitScreen;

  /// @brief Field m_FixedNumberOfSplitScreens, offset: 0x5c, size: 0x4, def value: None
  int32_t ___m_FixedNumberOfSplitScreens;

  /// @brief Field m_SplitScreenRect, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_SplitScreenRect;

  /// @brief Field m_JoinActionDelegateHooked, offset: 0x70, size: 0x1, def value: None
  bool ___m_JoinActionDelegateHooked;

  /// @brief Field m_UnpairedDeviceUsedDelegateHooked, offset: 0x71, size: 0x1, def value: None
  bool ___m_UnpairedDeviceUsedDelegateHooked;

  /// @brief Field m_JoinActionDelegate, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* ___m_JoinActionDelegate;

  /// @brief Field m_UnpairedDeviceUsedDelegate, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* ___m_UnpairedDeviceUsedDelegate;

  /// @brief Field m_PlayerJoinedCallbacks, offset: 0x88, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> ___m_PlayerJoinedCallbacks;

  /// @brief Field m_PlayerLeftCallbacks, offset: 0xd8, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput*>*> ___m_PlayerLeftCallbacks;

  /// @brief Field PlayerJoinedMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString PlayerJoinedMessage{ u"OnPlayerJoined" };

  /// @brief Field PlayerLeftMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString PlayerLeftMessage{ u"OnPlayerLeft" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PlayerInputManager, 0x128>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_NotificationBehavior) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_MaxPlayerCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_AllowJoining) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_JoinBehavior) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_PlayerJoinedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_PlayerLeftEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_JoinAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_PlayerPrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_SplitScreen) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_MaintainAspectRatioInSplitScreen) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_FixedNumberOfSplitScreens) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_SplitScreenRect) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_JoinActionDelegateHooked) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_UnpairedDeviceUsedDelegateHooked) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_JoinActionDelegate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_UnpairedDeviceUsedDelegate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_PlayerJoinedCallbacks) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInputManager, ___m_PlayerLeftCallbacks) == 0xd8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::PlayerInputManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerInputManager*, "UnityEngine.InputSystem", "PlayerInputManager");
NEED_NO_BOX(::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__PlayerInputManager__PlayerJoinedEvent*, "UnityEngine.InputSystem", "PlayerInputManager/PlayerJoinedEvent");
NEED_NO_BOX(::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__PlayerInputManager__PlayerLeftEvent*, "UnityEngine.InputSystem", "PlayerInputManager/PlayerLeftEvent");
