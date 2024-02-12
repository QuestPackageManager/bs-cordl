#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/InputSystem/Users/zzzz__InputUser_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerNotifications_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerInput)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
struct Guid;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::UI {
class InputSystemUIInputModule;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserChange;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class InputValue;
}
namespace UnityEngine::InputSystem {
struct PlayerNotifications;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine::InputSystem {
class __PlayerInput__ActionEvent;
}
namespace UnityEngine::InputSystem {
class __PlayerInput__ControlsChangedEvent;
}
namespace UnityEngine::InputSystem {
class __PlayerInput__DeviceLostEvent;
}
namespace UnityEngine::InputSystem {
class __PlayerInput__DeviceRegainedEvent;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class PlayerInput;
}
namespace UnityEngine::InputSystem {
class __PlayerInput__ActionEvent;
}
namespace UnityEngine::InputSystem {
class __PlayerInput__ControlsChangedEvent;
}
namespace UnityEngine::InputSystem {
class __PlayerInput__DeviceLostEvent;
}
namespace UnityEngine::InputSystem {
class __PlayerInput__DeviceRegainedEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::PlayerInput);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__PlayerInput__ActionEvent);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent);
// Type: ::ActionEvent
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5392)), TypeDefinitionIndex(TypeDefinitionIndex(9234)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9234), inst: 427
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5570)) CS Name: ::PlayerInput::ActionEvent*
class CORDL_TYPE __PlayerInput__ActionEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::__InputAction__CallbackContext> {
public:
  // Declarations
  /// @brief Field m_ActionId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionId, put = __cordl_internal_set_m_ActionId))::StringW m_ActionId;

  /// @brief Field m_ActionName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionName, put = __cordl_internal_set_m_ActionName))::StringW m_ActionName;

  __declspec(property(get = get_actionId))::StringW actionId;

  __declspec(property(get = get_actionName))::StringW actionName;

  constexpr ::StringW& __cordl_internal_get_m_ActionId();

  constexpr ::StringW const& __cordl_internal_get_m_ActionId() const;

  constexpr void __cordl_internal_set_m_ActionId(::StringW value);

  constexpr ::StringW& __cordl_internal_get_m_ActionName();

  constexpr ::StringW const& __cordl_internal_get_m_ActionName() const;

  constexpr void __cordl_internal_set_m_ActionName(::StringW value);

  /// @brief Method get_actionId, addr 0x2ac38f4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_actionId();

  /// @brief Method get_actionName, addr 0x2ac38fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_actionName();

  static inline ::UnityEngine::InputSystem::__PlayerInput__ActionEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2ac3904, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::__PlayerInput__ActionEvent* New_ctor(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method .ctor, addr 0x2ac394c, size 0x1dc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::InputAction* action);

  static inline ::UnityEngine::InputSystem::__PlayerInput__ActionEvent* New_ctor(::System::Guid actionGUID, ::StringW name);

  /// @brief Method .ctor, addr 0x2ac3b28, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Guid actionGUID, ::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInput__ActionEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerInput__ActionEvent(__PlayerInput__ActionEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInput__ActionEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerInput__ActionEvent(__PlayerInput__ActionEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerInput__ActionEvent();

public:
  /// @brief Field m_ActionId, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_ActionId;

  /// @brief Field m_ActionName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_ActionName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__PlayerInput__ActionEvent, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__PlayerInput__ActionEvent, ___m_ActionId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__PlayerInput__ActionEvent, ___m_ActionName) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::PlayerInput
// SizeInfo { instance_size: 528, native_size: -1, calculated_instance_size: 528, calculated_native_size: 521, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2323)), TypeDefinitionIndex(TypeDefinitionIndex(5392)), TypeDefinitionIndex(TypeDefinitionIndex(5579)),
// TypeDefinitionIndex(TypeDefinitionIndex(5623)), TypeDefinitionIndex(TypeDefinitionIndex(5919)), TypeDefinitionIndex(TypeDefinitionIndex(8969)), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(2323), inst: 379 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2323), inst: 427 }), GenericInstantiation(GenericInstantiation { tdi:
// TypeDefinitionIndex(5919), inst: 987 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5919), inst: 988 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5574)) CS Name:
// ::UnityEngine.InputSystem::PlayerInput*
class CORDL_TYPE PlayerInput : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ControlsChangedEvent = ::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent;

  using DeviceRegainedEvent = ::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent;

  using DeviceLostEvent = ::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent;

  using ActionEvent = ::UnityEngine::InputSystem::__PlayerInput__ActionEvent;

  /// @brief Field m_Actions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Actions, put = __cordl_internal_set_m_Actions))::UnityW<::UnityEngine::InputSystem::InputActionAsset> m_Actions;

  /// @brief Field m_NotificationBehavior, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NotificationBehavior, put = __cordl_internal_set_m_NotificationBehavior))::UnityEngine::InputSystem::PlayerNotifications m_NotificationBehavior;

  /// @brief Field m_UIInputModule, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UIInputModule, put = __cordl_internal_set_m_UIInputModule))::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule> m_UIInputModule;

  /// @brief Field m_DeviceLostEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeviceLostEvent, put = __cordl_internal_set_m_DeviceLostEvent))::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent* m_DeviceLostEvent;

  /// @brief Field m_DeviceRegainedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeviceRegainedEvent,
                      put = __cordl_internal_set_m_DeviceRegainedEvent))::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent* m_DeviceRegainedEvent;

  /// @brief Field m_ControlsChangedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlsChangedEvent,
                      put = __cordl_internal_set_m_ControlsChangedEvent))::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent* m_ControlsChangedEvent;

  /// @brief Field m_ActionEvents, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ActionEvents,
      put = __cordl_internal_set_m_ActionEvents))::ArrayW<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*, ::Array<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*>*> m_ActionEvents;

  /// @brief Field m_NeverAutoSwitchControlSchemes, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeverAutoSwitchControlSchemes, put = __cordl_internal_set_m_NeverAutoSwitchControlSchemes)) bool m_NeverAutoSwitchControlSchemes;

  /// @brief Field m_DefaultControlScheme, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultControlScheme, put = __cordl_internal_set_m_DefaultControlScheme))::StringW m_DefaultControlScheme;

  /// @brief Field m_DefaultActionMap, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultActionMap, put = __cordl_internal_set_m_DefaultActionMap))::StringW m_DefaultActionMap;

  /// @brief Field m_SplitScreenIndex, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SplitScreenIndex, put = __cordl_internal_set_m_SplitScreenIndex)) int32_t m_SplitScreenIndex;

  /// @brief Field m_Camera, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Camera, put = __cordl_internal_set_m_Camera))::UnityW<::UnityEngine::Camera> m_Camera;

  /// @brief Field m_InputValueObject, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputValueObject, put = __cordl_internal_set_m_InputValueObject))::UnityEngine::InputSystem::InputValue* m_InputValueObject;

  /// @brief Field m_CurrentActionMap, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentActionMap, put = __cordl_internal_set_m_CurrentActionMap))::UnityEngine::InputSystem::InputActionMap* m_CurrentActionMap;

  /// @brief Field m_PlayerIndex, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PlayerIndex, put = __cordl_internal_set_m_PlayerIndex)) int32_t m_PlayerIndex;

  /// @brief Field m_InputActive, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InputActive, put = __cordl_internal_set_m_InputActive)) bool m_InputActive;

  /// @brief Field m_Enabled, offset 0x8d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Enabled, put = __cordl_internal_set_m_Enabled)) bool m_Enabled;

  /// @brief Field m_ActionsInitialized, offset 0x8e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ActionsInitialized, put = __cordl_internal_set_m_ActionsInitialized)) bool m_ActionsInitialized;

  /// @brief Field m_ActionMessageNames, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionMessageNames,
                      put = __cordl_internal_set_m_ActionMessageNames))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* m_ActionMessageNames;

  /// @brief Field m_InputUser, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InputUser, put = __cordl_internal_set_m_InputUser))::UnityEngine::InputSystem::Users::InputUser m_InputUser;

  /// @brief Field m_ActionTriggeredDelegate, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActionTriggeredDelegate,
                      put = __cordl_internal_set_m_ActionTriggeredDelegate))::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* m_ActionTriggeredDelegate;

  /// @brief Field m_DeviceLostCallbacks, offset 0xa8, size 0x50
  __declspec(property(get = __cordl_internal_get_m_DeviceLostCallbacks, put = __cordl_internal_set_m_DeviceLostCallbacks))::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> m_DeviceLostCallbacks;

  /// @brief Field m_DeviceRegainedCallbacks, offset 0xf8, size 0x50
  __declspec(property(get = __cordl_internal_get_m_DeviceRegainedCallbacks, put = __cordl_internal_set_m_DeviceRegainedCallbacks))::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> m_DeviceRegainedCallbacks;

  /// @brief Field m_ControlsChangedCallbacks, offset 0x148, size 0x50
  __declspec(property(get = __cordl_internal_get_m_ControlsChangedCallbacks, put = __cordl_internal_set_m_ControlsChangedCallbacks))::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> m_ControlsChangedCallbacks;

  /// @brief Field m_ActionTriggeredCallbacks, offset 0x198, size 0x50
  __declspec(property(get = __cordl_internal_get_m_ActionTriggeredCallbacks, put = __cordl_internal_set_m_ActionTriggeredCallbacks))::UnityEngine::InputSystem::Utilities::CallbackArray_1<
      ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> m_ActionTriggeredCallbacks;

  /// @brief Field m_UnpairedDeviceUsedDelegate, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnpairedDeviceUsedDelegate,
                      put = __cordl_internal_set_m_UnpairedDeviceUsedDelegate))::System::Action_2<::UnityEngine::InputSystem::InputControl*,
                                                                                                  ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_UnpairedDeviceUsedDelegate;

  /// @brief Field m_PreFilterUnpairedDeviceUsedDelegate, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreFilterUnpairedDeviceUsedDelegate,
                      put = __cordl_internal_set_m_PreFilterUnpairedDeviceUsedDelegate))::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr,
                                                                                                         bool>* m_PreFilterUnpairedDeviceUsedDelegate;

  /// @brief Field m_OnUnpairedDeviceUsedHooked, offset 0x1f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OnUnpairedDeviceUsedHooked, put = __cordl_internal_set_m_OnUnpairedDeviceUsedHooked)) bool m_OnUnpairedDeviceUsedHooked;

  /// @brief Field m_DeviceChangeDelegate, offset 0x200, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_DeviceChangeDelegate,
               put = __cordl_internal_set_m_DeviceChangeDelegate))::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* m_DeviceChangeDelegate;

  /// @brief Field m_OnDeviceChangeHooked, offset 0x208, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OnDeviceChangeHooked, put = __cordl_internal_set_m_OnDeviceChangeHooked)) bool m_OnDeviceChangeHooked;

  /// @brief Field s_AllActivePlayersCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_AllActivePlayersCount, put = setStaticF_s_AllActivePlayersCount)) int32_t s_AllActivePlayersCount;

  /// @brief Field s_AllActivePlayers, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_AllActivePlayers,
               put = setStaticF_s_AllActivePlayers))::ArrayW<::UnityW<::UnityEngine::InputSystem::PlayerInput>, ::Array<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> s_AllActivePlayers;

  /// @brief Field s_UserChangeDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UserChangeDelegate,
                             put = setStaticF_s_UserChangeDelegate))::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange,
                                                                                       ::UnityEngine::InputSystem::InputDevice*>* s_UserChangeDelegate;

  /// @brief Field s_InitPairWithDevicesCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_InitPairWithDevicesCount, put = setStaticF_s_InitPairWithDevicesCount)) int32_t s_InitPairWithDevicesCount;

  /// @brief Field s_InitPairWithDevices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InitPairWithDevices,
                             put = setStaticF_s_InitPairWithDevices))::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> s_InitPairWithDevices;

  /// @brief Field s_InitPlayerIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_InitPlayerIndex, put = setStaticF_s_InitPlayerIndex)) int32_t s_InitPlayerIndex;

  /// @brief Field s_InitSplitScreenIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_InitSplitScreenIndex, put = setStaticF_s_InitSplitScreenIndex)) int32_t s_InitSplitScreenIndex;

  /// @brief Field s_InitControlScheme, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InitControlScheme, put = setStaticF_s_InitControlScheme))::StringW s_InitControlScheme;

  /// @brief Field s_DestroyIfDeviceSetupUnsuccessful, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_DestroyIfDeviceSetupUnsuccessful, put = setStaticF_s_DestroyIfDeviceSetupUnsuccessful)) bool s_DestroyIfDeviceSetupUnsuccessful;

  __declspec(property(get = get_inputIsActive)) bool inputIsActive;

  __declspec(property(get = get_active)) bool active;

  __declspec(property(get = get_playerIndex)) int32_t playerIndex;

  __declspec(property(get = get_splitScreenIndex)) int32_t splitScreenIndex;

  __declspec(property(get = get_actions, put = set_actions))::UnityW<::UnityEngine::InputSystem::InputActionAsset> actions;

  __declspec(property(get = get_currentControlScheme))::StringW currentControlScheme;

  __declspec(property(get = get_defaultControlScheme, put = set_defaultControlScheme))::StringW defaultControlScheme;

  __declspec(property(get = get_neverAutoSwitchControlSchemes, put = set_neverAutoSwitchControlSchemes)) bool neverAutoSwitchControlSchemes;

  __declspec(property(get = get_currentActionMap, put = set_currentActionMap))::UnityEngine::InputSystem::InputActionMap* currentActionMap;

  __declspec(property(get = get_defaultActionMap, put = set_defaultActionMap))::StringW defaultActionMap;

  __declspec(property(get = get_notificationBehavior, put = set_notificationBehavior))::UnityEngine::InputSystem::PlayerNotifications notificationBehavior;

  __declspec(property(get = get_actionEvents, put = set_actionEvents))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*> actionEvents;

  __declspec(property(get = get_deviceLostEvent))::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent* deviceLostEvent;

  __declspec(property(get = get_deviceRegainedEvent))::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent* deviceRegainedEvent;

  __declspec(property(get = get_controlsChangedEvent))::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent* controlsChangedEvent;

  __declspec(property(get = get_camera, put = set_camera))::UnityW<::UnityEngine::Camera> camera;

  __declspec(property(get = get_uiInputModule, put = set_uiInputModule))::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule> uiInputModule;

  __declspec(property(get = get_user))::UnityEngine::InputSystem::Users::InputUser user;

  __declspec(property(get = get_devices))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> devices;

  __declspec(property(get = get_hasMissingRequiredDevices)) bool hasMissingRequiredDevices;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_Actions();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_Actions() const;

  constexpr void __cordl_internal_set_m_Actions(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  constexpr ::UnityEngine::InputSystem::PlayerNotifications& __cordl_internal_get_m_NotificationBehavior();

  constexpr ::UnityEngine::InputSystem::PlayerNotifications const& __cordl_internal_get_m_NotificationBehavior() const;

  constexpr void __cordl_internal_set_m_NotificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value);

  constexpr ::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule>& __cordl_internal_get_m_UIInputModule();

  constexpr ::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule> const& __cordl_internal_get_m_UIInputModule() const;

  constexpr void __cordl_internal_set_m_UIInputModule(::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule> value);

  constexpr ::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent*& __cordl_internal_get_m_DeviceLostEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent*> const& __cordl_internal_get_m_DeviceLostEvent() const;

  constexpr void __cordl_internal_set_m_DeviceLostEvent(::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent* value);

  constexpr ::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent*& __cordl_internal_get_m_DeviceRegainedEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent*> const& __cordl_internal_get_m_DeviceRegainedEvent() const;

  constexpr void __cordl_internal_set_m_DeviceRegainedEvent(::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent* value);

  constexpr ::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent*& __cordl_internal_get_m_ControlsChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent*> const& __cordl_internal_get_m_ControlsChangedEvent() const;

  constexpr void __cordl_internal_set_m_ControlsChangedEvent(::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent* value);

  constexpr ::ArrayW<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*, ::Array<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*>*>& __cordl_internal_get_m_ActionEvents();

  constexpr ::ArrayW<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*, ::Array<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*>*> const& __cordl_internal_get_m_ActionEvents() const;

  constexpr void __cordl_internal_set_m_ActionEvents(::ArrayW<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*, ::Array<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*>*> value);

  constexpr bool& __cordl_internal_get_m_NeverAutoSwitchControlSchemes();

  constexpr bool const& __cordl_internal_get_m_NeverAutoSwitchControlSchemes() const;

  constexpr void __cordl_internal_set_m_NeverAutoSwitchControlSchemes(bool value);

  constexpr ::StringW& __cordl_internal_get_m_DefaultControlScheme();

  constexpr ::StringW const& __cordl_internal_get_m_DefaultControlScheme() const;

  constexpr void __cordl_internal_set_m_DefaultControlScheme(::StringW value);

  constexpr ::StringW& __cordl_internal_get_m_DefaultActionMap();

  constexpr ::StringW const& __cordl_internal_get_m_DefaultActionMap() const;

  constexpr void __cordl_internal_set_m_DefaultActionMap(::StringW value);

  constexpr int32_t& __cordl_internal_get_m_SplitScreenIndex();

  constexpr int32_t const& __cordl_internal_get_m_SplitScreenIndex() const;

  constexpr void __cordl_internal_set_m_SplitScreenIndex(int32_t value);

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

  constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value);

  constexpr ::UnityEngine::InputSystem::InputValue*& __cordl_internal_get_m_InputValueObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputValue*> const& __cordl_internal_get_m_InputValueObject() const;

  constexpr void __cordl_internal_set_m_InputValueObject(::UnityEngine::InputSystem::InputValue* value);

  constexpr ::UnityEngine::InputSystem::InputActionMap*& __cordl_internal_get_m_CurrentActionMap();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionMap*> const& __cordl_internal_get_m_CurrentActionMap() const;

  constexpr void __cordl_internal_set_m_CurrentActionMap(::UnityEngine::InputSystem::InputActionMap* value);

  constexpr int32_t& __cordl_internal_get_m_PlayerIndex();

  constexpr int32_t const& __cordl_internal_get_m_PlayerIndex() const;

  constexpr void __cordl_internal_set_m_PlayerIndex(int32_t value);

  constexpr bool& __cordl_internal_get_m_InputActive();

  constexpr bool const& __cordl_internal_get_m_InputActive() const;

  constexpr void __cordl_internal_set_m_InputActive(bool value);

  constexpr bool& __cordl_internal_get_m_Enabled();

  constexpr bool const& __cordl_internal_get_m_Enabled() const;

  constexpr void __cordl_internal_set_m_Enabled(bool value);

  constexpr bool& __cordl_internal_get_m_ActionsInitialized();

  constexpr bool const& __cordl_internal_get_m_ActionsInitialized() const;

  constexpr void __cordl_internal_set_m_ActionsInitialized(bool value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get_m_ActionMessageNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_m_ActionMessageNames() const;

  constexpr void __cordl_internal_set_m_ActionMessageNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr ::UnityEngine::InputSystem::Users::InputUser& __cordl_internal_get_m_InputUser();

  constexpr ::UnityEngine::InputSystem::Users::InputUser const& __cordl_internal_get_m_InputUser() const;

  constexpr void __cordl_internal_set_m_InputUser(::UnityEngine::InputSystem::Users::InputUser value);

  constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& __cordl_internal_get_m_ActionTriggeredDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const& __cordl_internal_get_m_ActionTriggeredDelegate() const;

  constexpr void __cordl_internal_set_m_ActionTriggeredDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>& __cordl_internal_get_m_DeviceLostCallbacks();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> const& __cordl_internal_get_m_DeviceLostCallbacks() const;

  constexpr void __cordl_internal_set_m_DeviceLostCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>& __cordl_internal_get_m_DeviceRegainedCallbacks();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> const&
  __cordl_internal_get_m_DeviceRegainedCallbacks() const;

  constexpr void __cordl_internal_set_m_DeviceRegainedCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*>& __cordl_internal_get_m_ControlsChangedCallbacks();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> const&
  __cordl_internal_get_m_ControlsChangedCallbacks() const;

  constexpr void __cordl_internal_set_m_ControlsChangedCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value);

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>& __cordl_internal_get_m_ActionTriggeredCallbacks();

  constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const&
  __cordl_internal_get_m_ActionTriggeredCallbacks() const;

  constexpr void
  __cordl_internal_set_m_ActionTriggeredCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> value);

  constexpr ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& __cordl_internal_get_m_UnpairedDeviceUsedDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const&
  __cordl_internal_get_m_UnpairedDeviceUsedDelegate() const;

  constexpr void __cordl_internal_set_m_UnpairedDeviceUsedDelegate(::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value);

  constexpr ::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*& __cordl_internal_get_m_PreFilterUnpairedDeviceUsedDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>*> const&
  __cordl_internal_get_m_PreFilterUnpairedDeviceUsedDelegate() const;

  constexpr void
  __cordl_internal_set_m_PreFilterUnpairedDeviceUsedDelegate(::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* value);

  constexpr bool& __cordl_internal_get_m_OnUnpairedDeviceUsedHooked();

  constexpr bool const& __cordl_internal_get_m_OnUnpairedDeviceUsedHooked() const;

  constexpr void __cordl_internal_set_m_OnUnpairedDeviceUsedHooked(bool value);

  constexpr ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*& __cordl_internal_get_m_DeviceChangeDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*> const&
  __cordl_internal_get_m_DeviceChangeDelegate() const;

  constexpr void __cordl_internal_set_m_DeviceChangeDelegate(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value);

  constexpr bool& __cordl_internal_get_m_OnDeviceChangeHooked();

  constexpr bool const& __cordl_internal_get_m_OnDeviceChangeHooked() const;

  constexpr void __cordl_internal_set_m_OnDeviceChangeHooked(bool value);

  static inline void setStaticF_s_AllActivePlayersCount(int32_t value);

  static inline int32_t getStaticF_s_AllActivePlayersCount();

  static inline void setStaticF_s_AllActivePlayers(::ArrayW<::UnityW<::UnityEngine::InputSystem::PlayerInput>, ::Array<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> value);

  static inline ::ArrayW<::UnityW<::UnityEngine::InputSystem::PlayerInput>, ::Array<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> getStaticF_s_AllActivePlayers();

  static inline void setStaticF_s_UserChangeDelegate(
      ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>* value);

  static inline ::System::Action_3<::UnityEngine::InputSystem::Users::InputUser, ::UnityEngine::InputSystem::Users::InputUserChange, ::UnityEngine::InputSystem::InputDevice*>*
  getStaticF_s_UserChangeDelegate();

  static inline void setStaticF_s_InitPairWithDevicesCount(int32_t value);

  static inline int32_t getStaticF_s_InitPairWithDevicesCount();

  static inline void setStaticF_s_InitPairWithDevices(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> value);

  static inline ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> getStaticF_s_InitPairWithDevices();

  static inline void setStaticF_s_InitPlayerIndex(int32_t value);

  static inline int32_t getStaticF_s_InitPlayerIndex();

  static inline void setStaticF_s_InitSplitScreenIndex(int32_t value);

  static inline int32_t getStaticF_s_InitSplitScreenIndex();

  static inline void setStaticF_s_InitControlScheme(::StringW value);

  static inline ::StringW getStaticF_s_InitControlScheme();

  static inline void setStaticF_s_DestroyIfDeviceSetupUnsuccessful(bool value);

  static inline bool getStaticF_s_DestroyIfDeviceSetupUnsuccessful();

  /// @brief Method get_inputIsActive, addr 0x2abcc84, size 0x8, virtual false, abstract: false, final false
  inline bool get_inputIsActive();

  /// @brief Method get_active, addr 0x2abcc8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_playerIndex, addr 0x2abcc94, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_playerIndex();

  /// @brief Method get_splitScreenIndex, addr 0x2abcc9c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_splitScreenIndex();

  /// @brief Method get_actions, addr 0x2abcca4, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_actions();

  /// @brief Method set_actions, addr 0x2abd1f4, size 0xf8, virtual false, abstract: false, final false
  inline void set_actions(::UnityEngine::InputSystem::InputActionAsset* value);

  /// @brief Method get_currentControlScheme, addr 0x2abdd04, size 0x80, virtual false, abstract: false, final false
  inline ::StringW get_currentControlScheme();

  /// @brief Method get_defaultControlScheme, addr 0x2abdeb4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_defaultControlScheme();

  /// @brief Method set_defaultControlScheme, addr 0x2abdebc, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultControlScheme(::StringW value);

  /// @brief Method get_neverAutoSwitchControlSchemes, addr 0x2abdec4, size 0x8, virtual false, abstract: false, final false
  inline bool get_neverAutoSwitchControlSchemes();

  /// @brief Method set_neverAutoSwitchControlSchemes, addr 0x2abdecc, size 0x38, virtual false, abstract: false, final false
  inline void set_neverAutoSwitchControlSchemes(bool value);

  /// @brief Method get_currentActionMap, addr 0x2abe0ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* get_currentActionMap();

  /// @brief Method set_currentActionMap, addr 0x2abe0b4, size 0x4c, virtual false, abstract: false, final false
  inline void set_currentActionMap(::UnityEngine::InputSystem::InputActionMap* value);

  /// @brief Method get_defaultActionMap, addr 0x2abe100, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_defaultActionMap();

  /// @brief Method set_defaultActionMap, addr 0x2abe108, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultActionMap(::StringW value);

  /// @brief Method get_notificationBehavior, addr 0x2abe110, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::PlayerNotifications get_notificationBehavior();

  /// @brief Method set_notificationBehavior, addr 0x2abe118, size 0x58, virtual false, abstract: false, final false
  inline void set_notificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value);

  /// @brief Method get_actionEvents, addr 0x2abe170, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*> get_actionEvents();

  /// @brief Method set_actionEvents, addr 0x2abe1b8, size 0x7c, virtual false, abstract: false, final false
  inline void set_actionEvents(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*> value);

  /// @brief Method get_deviceLostEvent, addr 0x2abe234, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent* get_deviceLostEvent();

  /// @brief Method get_deviceRegainedEvent, addr 0x2abe2e4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent* get_deviceRegainedEvent();

  /// @brief Method get_controlsChangedEvent, addr 0x2abe394, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent* get_controlsChangedEvent();

  /// @brief Method add_onActionTriggered, addr 0x2abe444, size 0xa0, virtual false, abstract: false, final false
  inline void add_onActionTriggered(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value);

  /// @brief Method remove_onActionTriggered, addr 0x2abe4e4, size 0xa0, virtual false, abstract: false, final false
  inline void remove_onActionTriggered(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value);

  /// @brief Method add_onDeviceLost, addr 0x2abe584, size 0xa0, virtual false, abstract: false, final false
  inline void add_onDeviceLost(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value);

  /// @brief Method remove_onDeviceLost, addr 0x2abe624, size 0xa0, virtual false, abstract: false, final false
  inline void remove_onDeviceLost(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value);

  /// @brief Method add_onDeviceRegained, addr 0x2abe6c4, size 0xa0, virtual false, abstract: false, final false
  inline void add_onDeviceRegained(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value);

  /// @brief Method remove_onDeviceRegained, addr 0x2abe764, size 0xa0, virtual false, abstract: false, final false
  inline void remove_onDeviceRegained(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value);

  /// @brief Method add_onControlsChanged, addr 0x2abe804, size 0xa0, virtual false, abstract: false, final false
  inline void add_onControlsChanged(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value);

  /// @brief Method remove_onControlsChanged, addr 0x2abe8a4, size 0xa0, virtual false, abstract: false, final false
  inline void remove_onControlsChanged(::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>* value);

  /// @brief Method get_camera, addr 0x2abe944, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_camera();

  /// @brief Method set_camera, addr 0x2abe94c, size 0x8, virtual false, abstract: false, final false
  inline void set_camera(::UnityEngine::Camera* value);

  /// @brief Method get_uiInputModule, addr 0x2abe954, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule> get_uiInputModule();

  /// @brief Method set_uiInputModule, addr 0x2abe95c, size 0x158, virtual false, abstract: false, final false
  inline void set_uiInputModule(::UnityEngine::InputSystem::UI::InputSystemUIInputModule* value);

  /// @brief Method get_user, addr 0x2abeab4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Users::InputUser get_user();

  /// @brief Method get_devices, addr 0x2abeabc, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices();

  /// @brief Method get_hasMissingRequiredDevices, addr 0x2abeb98, size 0x48, virtual false, abstract: false, final false
  inline bool get_hasMissingRequiredDevices();

  /// @brief Method get_all, addr 0x2abec5c, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>> get_all();

  /// @brief Method get_isSinglePlayer, addr 0x2abecec, size 0x118, virtual false, abstract: false, final false
  static inline bool get_isSinglePlayer();

  /// @brief Method GetDevice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDevice> inline TDevice GetDevice();

  /// @brief Method ActivateInput, addr 0x2abdc50, size 0xb4, virtual false, abstract: false, final false
  inline void ActivateInput();

  /// @brief Method DeactivateInput, addr 0x2abef70, size 0x24, virtual false, abstract: false, final false
  inline void DeactivateInput();

  /// @brief Method PassivateInput, addr 0x2abef94, size 0x24, virtual false, abstract: false, final false
  inline void PassivateInput();

  /// @brief Method SwitchCurrentControlScheme, addr 0x2abefb8, size 0x1d8, virtual false, abstract: false, final false
  inline bool SwitchCurrentControlScheme(::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices);

  /// @brief Method SwitchCurrentControlScheme, addr 0x2abf584, size 0xe0, virtual false, abstract: false, final false
  inline void SwitchCurrentControlScheme(::StringW controlScheme, ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices);

  /// @brief Method SwitchCurrentActionMap, addr 0x2abee04, size 0x16c, virtual false, abstract: false, final false
  inline void SwitchCurrentActionMap(::StringW mapNameOrId);

  /// @brief Method GetPlayerByIndex, addr 0x2abf720, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> GetPlayerByIndex(int32_t playerIndex);

  /// @brief Method FindFirstPairedToDevice, addr 0x2abf81c, size 0x16c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> FindFirstPairedToDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Instantiate, addr 0x2abf988, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> Instantiate(::UnityEngine::GameObject* prefab, int32_t playerIndex, ::StringW controlScheme, int32_t splitScreenIndex,
                                                                              ::UnityEngine::InputSystem::InputDevice* pairWithDevice);

  /// @brief Method Instantiate, addr 0x2abfe24, size 0x194, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> Instantiate(::UnityEngine::GameObject* prefab, int32_t playerIndex, ::StringW controlScheme, int32_t splitScreenIndex,
                                                                              ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> pairWithDevices);

  /// @brief Method DoInstantiate, addr 0x2abfae4, size 0x340, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::InputSystem::PlayerInput> DoInstantiate(::UnityEngine::GameObject* prefab);

  /// @brief Method InitializeActions, addr 0x2abcce8, size 0x50c, virtual false, abstract: false, final false
  inline void InitializeActions();

  /// @brief Method UninitializeActions, addr 0x2abd2ec, size 0x1d4, virtual false, abstract: false, final false
  inline void UninitializeActions();

  /// @brief Method InstallOnActionTriggeredHook, addr 0x2abffb8, size 0x1d8, virtual false, abstract: false, final false
  inline void InstallOnActionTriggeredHook();

  /// @brief Method UninstallOnActionTriggeredHook, addr 0x2ac055c, size 0x18c, virtual false, abstract: false, final false
  inline void UninstallOnActionTriggeredHook();

  /// @brief Method OnActionTriggered, addr 0x2ac06e8, size 0x1f4, virtual false, abstract: false, final false
  inline void OnActionTriggered(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method CacheMessageNames, addr 0x2ac0190, size 0x3cc, virtual false, abstract: false, final false
  inline void CacheMessageNames();

  /// @brief Method ClearCaches, addr 0x2abd4c0, size 0x4, virtual false, abstract: false, final false
  inline void ClearCaches();

  /// @brief Method AssignUserAndDevices, addr 0x2abd4c4, size 0x78c, virtual false, abstract: false, final false
  inline void AssignUserAndDevices();

  /// @brief Method HaveBindingForDevice, addr 0x2ac0f6c, size 0x108, virtual false, abstract: false, final false
  inline bool HaveBindingForDevice(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method UnassignUserAndDevices, addr 0x2ac13ac, size 0xb8, virtual false, abstract: false, final false
  inline void UnassignUserAndDevices();

  /// @brief Method TryToActivateControlScheme, addr 0x2ac0d18, size 0x1e0, virtual false, abstract: false, final false
  inline bool TryToActivateControlScheme(::UnityEngine::InputSystem::InputControlScheme controlScheme);

  /// @brief Method AssignPlayerIndex, addr 0x2ac1740, size 0x208, virtual false, abstract: false, final false
  inline void AssignPlayerIndex();

  /// @brief Method OnEnable, addr 0x2ac1948, size 0x4c8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method StartListeningForUnpairedDeviceActivity, addr 0x2abdf04, size 0x138, virtual false, abstract: false, final false
  inline void StartListeningForUnpairedDeviceActivity();

  /// @brief Method StopListeningForUnpairedDeviceActivity, addr 0x2abe03c, size 0x70, virtual false, abstract: false, final false
  inline void StopListeningForUnpairedDeviceActivity();

  /// @brief Method StartListeningForDeviceChanges, addr 0x2ac1ec8, size 0xc4, virtual false, abstract: false, final false
  inline void StartListeningForDeviceChanges();

  /// @brief Method StopListeningForDeviceChanges, addr 0x2ac2648, size 0x6c, virtual false, abstract: false, final false
  inline void StopListeningForDeviceChanges();

  /// @brief Method OnDisable, addr 0x2ac26b4, size 0x2f4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method DebugLogAction, addr 0x2ac2b88, size 0x78, virtual false, abstract: false, final false
  inline void DebugLogAction(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method HandleDeviceLost, addr 0x2ac2c00, size 0x11c, virtual false, abstract: false, final false
  inline void HandleDeviceLost();

  /// @brief Method HandleDeviceRegained, addr 0x2ac2d1c, size 0x11c, virtual false, abstract: false, final false
  inline void HandleDeviceRegained();

  /// @brief Method HandleControlsChanged, addr 0x2ac1f8c, size 0x11c, virtual false, abstract: false, final false
  inline void HandleControlsChanged();

  /// @brief Method OnUserChange, addr 0x2ac2e38, size 0x168, virtual false, abstract: false, final false
  static inline void OnUserChange(::UnityEngine::InputSystem::Users::InputUser user, ::UnityEngine::InputSystem::Users::InputUserChange change, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnPreFilterUnpairedDeviceUsed, addr 0x2ac2fac, size 0xf4, virtual false, abstract: false, final false
  static inline bool OnPreFilterUnpairedDeviceUsed(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method OnUnpairedDeviceUsed, addr 0x2ac30a0, size 0x610, virtual false, abstract: false, final false
  inline void OnUnpairedDeviceUsed(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr);

  /// @brief Method OnDeviceChange, addr 0x2ac36b0, size 0x108, virtual false, abstract: false, final false
  inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::InputDeviceChange change);

  /// @brief Method SwitchControlSchemeInternal, addr 0x2abf190, size 0x3f4, virtual false, abstract: false, final false
  inline void SwitchControlSchemeInternal(ByRef<::UnityEngine::InputSystem::InputControlScheme> controlScheme,
                                          ::ArrayW<::UnityEngine::InputSystem::InputDevice*, ::Array<::UnityEngine::InputSystem::InputDevice*>*> devices);

  static inline ::UnityEngine::InputSystem::PlayerInput* New_ctor();

  /// @brief Method .ctor, addr 0x2ac3894, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerInput(PlayerInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerInput(PlayerInput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerInput();

public:
  /// @brief Field m_Actions, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> ___m_Actions;

  /// @brief Field m_NotificationBehavior, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::PlayerNotifications ___m_NotificationBehavior;

  /// @brief Field m_UIInputModule, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::UI::InputSystemUIInputModule> ___m_UIInputModule;

  /// @brief Field m_DeviceLostEvent, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent* ___m_DeviceLostEvent;

  /// @brief Field m_DeviceRegainedEvent, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent* ___m_DeviceRegainedEvent;

  /// @brief Field m_ControlsChangedEvent, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent* ___m_ControlsChangedEvent;

  /// @brief Field m_ActionEvents, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*, ::Array<::UnityEngine::InputSystem::__PlayerInput__ActionEvent*>*> ___m_ActionEvents;

  /// @brief Field m_NeverAutoSwitchControlSchemes, offset: 0x50, size: 0x1, def value: None
  bool ___m_NeverAutoSwitchControlSchemes;

  /// @brief Field m_DefaultControlScheme, offset: 0x58, size: 0x8, def value: None
  ::StringW ___m_DefaultControlScheme;

  /// @brief Field m_DefaultActionMap, offset: 0x60, size: 0x8, def value: None
  ::StringW ___m_DefaultActionMap;

  /// @brief Field m_SplitScreenIndex, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_SplitScreenIndex;

  /// @brief Field m_Camera, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_Camera;

  /// @brief Field m_InputValueObject, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputValue* ___m_InputValueObject;

  /// @brief Field m_CurrentActionMap, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* ___m_CurrentActionMap;

  /// @brief Field m_PlayerIndex, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_PlayerIndex;

  /// @brief Field m_InputActive, offset: 0x8c, size: 0x1, def value: None
  bool ___m_InputActive;

  /// @brief Field m_Enabled, offset: 0x8d, size: 0x1, def value: None
  bool ___m_Enabled;

  /// @brief Field m_ActionsInitialized, offset: 0x8e, size: 0x1, def value: None
  bool ___m_ActionsInitialized;

  /// @brief Field m_ActionMessageNames, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ___m_ActionMessageNames;

  /// @brief Field m_InputUser, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Users::InputUser ___m_InputUser;

  /// @brief Field m_ActionTriggeredDelegate, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* ___m_ActionTriggeredDelegate;

  /// @brief Field m_DeviceLostCallbacks, offset: 0xa8, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> ___m_DeviceLostCallbacks;

  /// @brief Field m_DeviceRegainedCallbacks, offset: 0xf8, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> ___m_DeviceRegainedCallbacks;

  /// @brief Field m_ControlsChangedCallbacks, offset: 0x148, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>>*> ___m_ControlsChangedCallbacks;

  /// @brief Field m_ActionTriggeredCallbacks, offset: 0x198, size: 0x50, def value: None
  ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> ___m_ActionTriggeredCallbacks;

  /// @brief Field m_UnpairedDeviceUsedDelegate, offset: 0x1e8, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* ___m_UnpairedDeviceUsedDelegate;

  /// @brief Field m_PreFilterUnpairedDeviceUsedDelegate, offset: 0x1f0, size: 0x8, def value: None
  ::System::Func_3<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, bool>* ___m_PreFilterUnpairedDeviceUsedDelegate;

  /// @brief Field m_OnUnpairedDeviceUsedHooked, offset: 0x1f8, size: 0x1, def value: None
  bool ___m_OnUnpairedDeviceUsedHooked;

  /// @brief Field m_DeviceChangeDelegate, offset: 0x200, size: 0x8, def value: None
  ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* ___m_DeviceChangeDelegate;

  /// @brief Field m_OnDeviceChangeHooked, offset: 0x208, size: 0x1, def value: None
  bool ___m_OnDeviceChangeHooked;

  /// @brief Field DeviceLostMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString DeviceLostMessage{ u"OnDeviceLost" };

  /// @brief Field DeviceRegainedMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString DeviceRegainedMessage{ u"OnDeviceRegained" };

  /// @brief Field ControlsChangedMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString ControlsChangedMessage{ u"OnControlsChanged" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::PlayerInput, 0x210>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_Actions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_NotificationBehavior) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_UIInputModule) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_DeviceLostEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_DeviceRegainedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_ControlsChangedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_ActionEvents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_NeverAutoSwitchControlSchemes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_DefaultControlScheme) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_DefaultActionMap) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_SplitScreenIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_Camera) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_InputValueObject) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_CurrentActionMap) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_PlayerIndex) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_InputActive) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_Enabled) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_ActionsInitialized) == 0x8e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_ActionMessageNames) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_InputUser) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_ActionTriggeredDelegate) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_DeviceLostCallbacks) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_DeviceRegainedCallbacks) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_ControlsChangedCallbacks) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_ActionTriggeredCallbacks) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_UnpairedDeviceUsedDelegate) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_PreFilterUnpairedDeviceUsedDelegate) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_OnUnpairedDeviceUsedHooked) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_DeviceChangeDelegate) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::PlayerInput, ___m_OnDeviceChangeHooked) == 0x208, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::DeviceLostEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5574)), TypeDefinitionIndex(TypeDefinitionIndex(9234)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9234), inst: 379
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5571)) CS Name: ::PlayerInput::DeviceLostEvent*
class CORDL_TYPE __PlayerInput__DeviceLostEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2abe29c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInput__DeviceLostEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerInput__DeviceLostEvent(__PlayerInput__DeviceLostEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInput__DeviceLostEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerInput__DeviceLostEvent(__PlayerInput__DeviceLostEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerInput__DeviceLostEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::DeviceRegainedEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5574)), TypeDefinitionIndex(TypeDefinitionIndex(9234)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9234), inst: 379
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5572)) CS Name: ::PlayerInput::DeviceRegainedEvent*
class CORDL_TYPE __PlayerInput__DeviceRegainedEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2abe34c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInput__DeviceRegainedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerInput__DeviceRegainedEvent(__PlayerInput__DeviceRegainedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInput__DeviceRegainedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerInput__DeviceRegainedEvent(__PlayerInput__DeviceRegainedEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerInput__DeviceRegainedEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::ControlsChangedEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5574)), TypeDefinitionIndex(TypeDefinitionIndex(9234)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9234), inst: 379
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(5573)) CS Name: ::PlayerInput::ControlsChangedEvent*
class CORDL_TYPE __PlayerInput__ControlsChangedEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::InputSystem::PlayerInput>> {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2abe3fc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInput__ControlsChangedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerInput__ControlsChangedEvent(__PlayerInput__ControlsChangedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerInput__ControlsChangedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerInput__ControlsChangedEvent(__PlayerInput__ControlsChangedEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerInput__ControlsChangedEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::PlayerInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerInput*, "UnityEngine.InputSystem", "PlayerInput");
NEED_NO_BOX(::UnityEngine::InputSystem::__PlayerInput__ActionEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__PlayerInput__ActionEvent*, "UnityEngine.InputSystem", "PlayerInput/ActionEvent");
NEED_NO_BOX(::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__PlayerInput__ControlsChangedEvent*, "UnityEngine.InputSystem", "PlayerInput/ControlsChangedEvent");
NEED_NO_BOX(::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__PlayerInput__DeviceLostEvent*, "UnityEngine.InputSystem", "PlayerInput/DeviceLostEvent");
NEED_NO_BOX(::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__PlayerInput__DeviceRegainedEvent*, "UnityEngine.InputSystem", "PlayerInput/DeviceRegainedEvent");
