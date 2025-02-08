#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DefaultInputActions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultInputActions)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class DefaultInputActions_IPlayerActions;
}
namespace UnityEngine::InputSystem {
class DefaultInputActions_IUIActions;
}
namespace UnityEngine::InputSystem {
struct DefaultInputActions_PlayerActions;
}
namespace UnityEngine::InputSystem {
struct DefaultInputActions_UIActions;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class DefaultInputActions;
}
namespace UnityEngine::InputSystem {
class DefaultInputActions_IPlayerActions;
}
namespace UnityEngine::InputSystem {
class DefaultInputActions_IUIActions;
}
namespace UnityEngine::InputSystem {
struct DefaultInputActions_PlayerActions;
}
namespace UnityEngine::InputSystem {
struct DefaultInputActions_UIActions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::DefaultInputActions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::DefaultInputActions_IUIActions);
MARK_VAL_T(::UnityEngine::InputSystem::DefaultInputActions_PlayerActions);
MARK_VAL_T(::UnityEngine::InputSystem::DefaultInputActions_UIActions);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.DefaultInputActions/PlayerActions
struct CORDL_TYPE DefaultInputActions_PlayerActions {
public:
  // Declarations
  __declspec(property(get = get_Fire)) ::UnityEngine::InputSystem::InputAction* Fire;

  __declspec(property(get = get_Look)) ::UnityEngine::InputSystem::InputAction* Look;

  __declspec(property(get = get_Move)) ::UnityEngine::InputSystem::InputAction* Move;

  __declspec(property(get = get_enabled)) bool enabled;

  /// @brief Method Disable, addr 0x45dc270, size 0x24, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Enable, addr 0x45dc24c, size 0x24, virtual false, abstract: false, final false
  inline void Enable();

  /// @brief Method Get, addr 0x45dc230, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* Get();

  /// @brief Method SetCallbacks, addr 0x45dc2d0, size 0xacc, virtual false, abstract: false, final false
  inline void SetCallbacks(::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions* instance);

  /// @brief Method .ctor, addr 0x45dc1d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::DefaultInputActions* wrapper);

  /// @brief Method get_Fire, addr 0x45dc214, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Fire();

  /// @brief Method get_Look, addr 0x45dc1f8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Look();

  /// @brief Method get_Move, addr 0x45dc1dc, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Move();

  /// @brief Method get_enabled, addr 0x45dc294, size 0x24, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method op_Implicit, addr 0x45dc2b8, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap* op_Implicit___UnityEngine__InputSystem__InputActionMap_(::UnityEngine::InputSystem::DefaultInputActions_PlayerActions set);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultInputActions_PlayerActions();

  // Ctor Parameters [CppParam { name: "m_Wrapper", ty: "::UnityEngine::InputSystem::DefaultInputActions*", modifiers: "", def_value: None }]
  constexpr DefaultInputActions_PlayerActions(::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6712 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Wrapper, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions_PlayerActions, m_Wrapper) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DefaultInputActions_PlayerActions, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.DefaultInputActions/UIActions
struct CORDL_TYPE DefaultInputActions_UIActions {
public:
  // Declarations
  __declspec(property(get = get_Cancel)) ::UnityEngine::InputSystem::InputAction* Cancel;

  __declspec(property(get = get_Click)) ::UnityEngine::InputSystem::InputAction* Click;

  __declspec(property(get = get_MiddleClick)) ::UnityEngine::InputSystem::InputAction* MiddleClick;

  __declspec(property(get = get_Navigate)) ::UnityEngine::InputSystem::InputAction* Navigate;

  __declspec(property(get = get_Point)) ::UnityEngine::InputSystem::InputAction* Point;

  __declspec(property(get = get_RightClick)) ::UnityEngine::InputSystem::InputAction* RightClick;

  __declspec(property(get = get_ScrollWheel)) ::UnityEngine::InputSystem::InputAction* ScrollWheel;

  __declspec(property(get = get_Submit)) ::UnityEngine::InputSystem::InputAction* Submit;

  __declspec(property(get = get_TrackedDeviceOrientation)) ::UnityEngine::InputSystem::InputAction* TrackedDeviceOrientation;

  __declspec(property(get = get_TrackedDevicePosition)) ::UnityEngine::InputSystem::InputAction* TrackedDevicePosition;

  __declspec(property(get = get_enabled)) bool enabled;

  /// @brief Method Disable, addr 0x45dcefc, size 0x24, virtual false, abstract: false, final false
  inline void Disable();

  /// @brief Method Enable, addr 0x45dced8, size 0x24, virtual false, abstract: false, final false
  inline void Enable();

  /// @brief Method Get, addr 0x45dcebc, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionMap* Get();

  /// @brief Method SetCallbacks, addr 0x45dcf5c, size 0x2314, virtual false, abstract: false, final false
  inline void SetCallbacks(::UnityEngine::InputSystem::DefaultInputActions_IUIActions* instance);

  /// @brief Method .ctor, addr 0x45dcd9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::DefaultInputActions* wrapper);

  /// @brief Method get_Cancel, addr 0x45dcddc, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Cancel();

  /// @brief Method get_Click, addr 0x45dce14, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Click();

  /// @brief Method get_MiddleClick, addr 0x45dce4c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_MiddleClick();

  /// @brief Method get_Navigate, addr 0x45dcda4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Navigate();

  /// @brief Method get_Point, addr 0x45dcdf8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Point();

  /// @brief Method get_RightClick, addr 0x45dce68, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_RightClick();

  /// @brief Method get_ScrollWheel, addr 0x45dce30, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_ScrollWheel();

  /// @brief Method get_Submit, addr 0x45dcdc0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_Submit();

  /// @brief Method get_TrackedDeviceOrientation, addr 0x45dcea0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_TrackedDeviceOrientation();

  /// @brief Method get_TrackedDevicePosition, addr 0x45dce84, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputAction* get_TrackedDevicePosition();

  /// @brief Method get_enabled, addr 0x45dcf20, size 0x24, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method op_Implicit, addr 0x45dcf44, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::InputActionMap* op_Implicit___UnityEngine__InputSystem__InputActionMap_(::UnityEngine::InputSystem::DefaultInputActions_UIActions set);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultInputActions_UIActions();

  // Ctor Parameters [CppParam { name: "m_Wrapper", ty: "::UnityEngine::InputSystem::DefaultInputActions*", modifiers: "", def_value: None }]
  constexpr DefaultInputActions_UIActions(::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6713 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Wrapper, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions_UIActions, m_Wrapper) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DefaultInputActions_UIActions, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.DefaultInputActions/IPlayerActions
class CORDL_TYPE DefaultInputActions_IPlayerActions {
public:
  // Declarations
  /// @brief Method OnFire, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnFire(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnLook, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnLook(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnMove, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnMove(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultInputActions_IPlayerActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultInputActions_IPlayerActions(DefaultInputActions_IPlayerActions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.DefaultInputActions/IUIActions
class CORDL_TYPE DefaultInputActions_IUIActions {
public:
  // Declarations
  /// @brief Method OnCancel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnCancel(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnClick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnClick(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnMiddleClick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnMiddleClick(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnNavigate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnNavigate(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnPoint(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnRightClick, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnRightClick(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnScrollWheel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnScrollWheel(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnSubmit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnTrackedDeviceOrientation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnTrackedDeviceOrientation(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnTrackedDevicePosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnTrackedDevicePosition(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultInputActions_IUIActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultInputActions_IUIActions(DefaultInputActions_IUIActions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6715 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable, System.IDisposable, System.Object, UnityEngine.InputSystem.IInputActionCollection,
// UnityEngine.InputSystem.IInputActionCollection2
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.DefaultInputActions
class CORDL_TYPE DefaultInputActions : public ::System::Object {
public:
  // Declarations
  using IPlayerActions = ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions;

  using IUIActions = ::UnityEngine::InputSystem::DefaultInputActions_IUIActions;

  using PlayerActions = ::UnityEngine::InputSystem::DefaultInputActions_PlayerActions;

  using UIActions = ::UnityEngine::InputSystem::DefaultInputActions_UIActions;

  __declspec(property(get = get_GamepadScheme)) ::UnityEngine::InputSystem::InputControlScheme GamepadScheme;

  __declspec(property(get = get_JoystickScheme)) ::UnityEngine::InputSystem::InputControlScheme JoystickScheme;

  __declspec(property(get = get_KeyboardMouseScheme)) ::UnityEngine::InputSystem::InputControlScheme KeyboardMouseScheme;

  __declspec(property(get = get_Player)) ::UnityEngine::InputSystem::DefaultInputActions_PlayerActions Player;

  __declspec(property(get = get_TouchScheme)) ::UnityEngine::InputSystem::InputControlScheme TouchScheme;

  __declspec(property(get = get_UI)) ::UnityEngine::InputSystem::DefaultInputActions_UIActions UI;

  __declspec(property(get = get_XRScheme)) ::UnityEngine::InputSystem::InputControlScheme XRScheme;

  /// @brief Field <asset>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__asset_k__BackingField, put = __cordl_internal_set__asset_k__BackingField)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>
      _asset_k__BackingField;

  __declspec(property(get = get_asset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset> asset;

  __declspec(property(get = get_bindingMask, put = set_bindingMask)) ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask;

  __declspec(property(get = get_bindings)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* bindings;

  __declspec(property(get = get_controlSchemes)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> controlSchemes;

  __declspec(property(get = get_devices, put = set_devices)) ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices;

  /// @brief Field m_GamepadSchemeIndex, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GamepadSchemeIndex, put = __cordl_internal_set_m_GamepadSchemeIndex)) int32_t m_GamepadSchemeIndex;

  /// @brief Field m_JoystickSchemeIndex, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_JoystickSchemeIndex, put = __cordl_internal_set_m_JoystickSchemeIndex)) int32_t m_JoystickSchemeIndex;

  /// @brief Field m_KeyboardMouseSchemeIndex, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardMouseSchemeIndex, put = __cordl_internal_set_m_KeyboardMouseSchemeIndex)) int32_t m_KeyboardMouseSchemeIndex;

  /// @brief Field m_Player, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Player, put = __cordl_internal_set_m_Player)) ::UnityEngine::InputSystem::InputActionMap* m_Player;

  /// @brief Field m_PlayerActionsCallbackInterface, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PlayerActionsCallbackInterface,
                      put = __cordl_internal_set_m_PlayerActionsCallbackInterface)) ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions* m_PlayerActionsCallbackInterface;

  /// @brief Field m_Player_Fire, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Player_Fire, put = __cordl_internal_set_m_Player_Fire)) ::UnityEngine::InputSystem::InputAction* m_Player_Fire;

  /// @brief Field m_Player_Look, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Player_Look, put = __cordl_internal_set_m_Player_Look)) ::UnityEngine::InputSystem::InputAction* m_Player_Look;

  /// @brief Field m_Player_Move, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Player_Move, put = __cordl_internal_set_m_Player_Move)) ::UnityEngine::InputSystem::InputAction* m_Player_Move;

  /// @brief Field m_TouchSchemeIndex, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TouchSchemeIndex, put = __cordl_internal_set_m_TouchSchemeIndex)) int32_t m_TouchSchemeIndex;

  /// @brief Field m_UI, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI, put = __cordl_internal_set_m_UI)) ::UnityEngine::InputSystem::InputActionMap* m_UI;

  /// @brief Field m_UIActionsCallbackInterface, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UIActionsCallbackInterface,
                      put = __cordl_internal_set_m_UIActionsCallbackInterface)) ::UnityEngine::InputSystem::DefaultInputActions_IUIActions* m_UIActionsCallbackInterface;

  /// @brief Field m_UI_Cancel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI_Cancel, put = __cordl_internal_set_m_UI_Cancel)) ::UnityEngine::InputSystem::InputAction* m_UI_Cancel;

  /// @brief Field m_UI_Click, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI_Click, put = __cordl_internal_set_m_UI_Click)) ::UnityEngine::InputSystem::InputAction* m_UI_Click;

  /// @brief Field m_UI_MiddleClick, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI_MiddleClick, put = __cordl_internal_set_m_UI_MiddleClick)) ::UnityEngine::InputSystem::InputAction* m_UI_MiddleClick;

  /// @brief Field m_UI_Navigate, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI_Navigate, put = __cordl_internal_set_m_UI_Navigate)) ::UnityEngine::InputSystem::InputAction* m_UI_Navigate;

  /// @brief Field m_UI_Point, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI_Point, put = __cordl_internal_set_m_UI_Point)) ::UnityEngine::InputSystem::InputAction* m_UI_Point;

  /// @brief Field m_UI_RightClick, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI_RightClick, put = __cordl_internal_set_m_UI_RightClick)) ::UnityEngine::InputSystem::InputAction* m_UI_RightClick;

  /// @brief Field m_UI_ScrollWheel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI_ScrollWheel, put = __cordl_internal_set_m_UI_ScrollWheel)) ::UnityEngine::InputSystem::InputAction* m_UI_ScrollWheel;

  /// @brief Field m_UI_Submit, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI_Submit, put = __cordl_internal_set_m_UI_Submit)) ::UnityEngine::InputSystem::InputAction* m_UI_Submit;

  /// @brief Field m_UI_TrackedDeviceOrientation, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI_TrackedDeviceOrientation,
                      put = __cordl_internal_set_m_UI_TrackedDeviceOrientation)) ::UnityEngine::InputSystem::InputAction* m_UI_TrackedDeviceOrientation;

  /// @brief Field m_UI_TrackedDevicePosition, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UI_TrackedDevicePosition,
                      put = __cordl_internal_set_m_UI_TrackedDevicePosition)) ::UnityEngine::InputSystem::InputAction* m_UI_TrackedDevicePosition;

  /// @brief Field m_XRSchemeIndex, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_XRSchemeIndex, put = __cordl_internal_set_m_XRSchemeIndex)) int32_t m_XRSchemeIndex;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept;

  /// @brief Method Contains, addr 0x45dbce8, size 0x1c, virtual true, abstract: false, final true
  inline bool Contains(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method Disable, addr 0x45dbd58, size 0x1c, virtual true, abstract: false, final true
  inline void Disable();

  /// @brief Method Dispose, addr 0x45dbb70, size 0x5c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Enable, addr 0x45dbd3c, size 0x1c, virtual true, abstract: false, final true
  inline void Enable();

  /// @brief Method FindAction, addr 0x45dbd90, size 0x20, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW actionNameOrId, bool throwIfNotFound);

  /// @brief Method FindBinding, addr 0x45dbdb0, size 0x5c, virtual true, abstract: false, final true
  inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding bindingMask, ::ByRef<::UnityEngine::InputSystem::InputAction*> action);

  /// @brief Method GetEnumerator, addr 0x45dbd04, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator();

  static inline ::UnityEngine::InputSystem::DefaultInputActions* New_ctor();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x45dbd20, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get__asset_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get__asset_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_GamepadSchemeIndex() const;

  constexpr int32_t& __cordl_internal_get_m_GamepadSchemeIndex();

  constexpr int32_t const& __cordl_internal_get_m_JoystickSchemeIndex() const;

  constexpr int32_t& __cordl_internal_get_m_JoystickSchemeIndex();

  constexpr int32_t const& __cordl_internal_get_m_KeyboardMouseSchemeIndex() const;

  constexpr int32_t& __cordl_internal_get_m_KeyboardMouseSchemeIndex();

  constexpr ::UnityEngine::InputSystem::InputActionMap* const& __cordl_internal_get_m_Player() const;

  constexpr ::UnityEngine::InputSystem::InputActionMap*& __cordl_internal_get_m_Player();

  constexpr ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions* const& __cordl_internal_get_m_PlayerActionsCallbackInterface() const;

  constexpr ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*& __cordl_internal_get_m_PlayerActionsCallbackInterface();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_Player_Fire() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_Player_Fire();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_Player_Look() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_Player_Look();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_Player_Move() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_Player_Move();

  constexpr int32_t const& __cordl_internal_get_m_TouchSchemeIndex() const;

  constexpr int32_t& __cordl_internal_get_m_TouchSchemeIndex();

  constexpr ::UnityEngine::InputSystem::InputActionMap* const& __cordl_internal_get_m_UI() const;

  constexpr ::UnityEngine::InputSystem::InputActionMap*& __cordl_internal_get_m_UI();

  constexpr ::UnityEngine::InputSystem::DefaultInputActions_IUIActions* const& __cordl_internal_get_m_UIActionsCallbackInterface() const;

  constexpr ::UnityEngine::InputSystem::DefaultInputActions_IUIActions*& __cordl_internal_get_m_UIActionsCallbackInterface();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_UI_Cancel() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_UI_Cancel();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_UI_Click() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_UI_Click();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_UI_MiddleClick() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_UI_MiddleClick();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_UI_Navigate() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_UI_Navigate();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_UI_Point() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_UI_Point();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_UI_RightClick() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_UI_RightClick();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_UI_ScrollWheel() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_UI_ScrollWheel();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_UI_Submit() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_UI_Submit();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_UI_TrackedDeviceOrientation() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_UI_TrackedDeviceOrientation();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_UI_TrackedDevicePosition() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_UI_TrackedDevicePosition();

  constexpr int32_t const& __cordl_internal_get_m_XRSchemeIndex() const;

  constexpr int32_t& __cordl_internal_get_m_XRSchemeIndex();

  constexpr void __cordl_internal_set__asset_k__BackingField(::UnityW<::UnityEngine::InputSystem::InputActionAsset> value);

  constexpr void __cordl_internal_set_m_GamepadSchemeIndex(int32_t value);

  constexpr void __cordl_internal_set_m_JoystickSchemeIndex(int32_t value);

  constexpr void __cordl_internal_set_m_KeyboardMouseSchemeIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Player(::UnityEngine::InputSystem::InputActionMap* value);

  constexpr void __cordl_internal_set_m_PlayerActionsCallbackInterface(::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions* value);

  constexpr void __cordl_internal_set_m_Player_Fire(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_Player_Look(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_Player_Move(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_TouchSchemeIndex(int32_t value);

  constexpr void __cordl_internal_set_m_UI(::UnityEngine::InputSystem::InputActionMap* value);

  constexpr void __cordl_internal_set_m_UIActionsCallbackInterface(::UnityEngine::InputSystem::DefaultInputActions_IUIActions* value);

  constexpr void __cordl_internal_set_m_UI_Cancel(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_UI_Click(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_UI_MiddleClick(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_UI_Navigate(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_UI_Point(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_UI_RightClick(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_UI_ScrollWheel(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_UI_Submit(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_UI_TrackedDeviceOrientation(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_UI_TrackedDevicePosition(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_m_XRSchemeIndex(int32_t value);

  /// @brief Method .ctor, addr 0x45db810, size 0x360, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_GamepadScheme, addr 0x45dbed4, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme get_GamepadScheme();

  /// @brief Method get_JoystickScheme, addr 0x45dc054, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme get_JoystickScheme();

  /// @brief Method get_KeyboardMouseScheme, addr 0x45dbe14, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme get_KeyboardMouseScheme();

  /// @brief Method get_Player, addr 0x45dbe0c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::DefaultInputActions_PlayerActions get_Player();

  /// @brief Method get_TouchScheme, addr 0x45dbf94, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme get_TouchScheme();

  /// @brief Method get_UI, addr 0x45dbe10, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::DefaultInputActions_UIActions get_UI();

  /// @brief Method get_XRScheme, addr 0x45dc114, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControlScheme get_XRScheme();

  /// @brief Method get_asset, addr 0x45db808, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_asset();

  /// @brief Method get_bindingMask, addr 0x45dbbcc, size 0x28, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();

  /// @brief Method get_bindings, addr 0x45dbd74, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings();

  /// @brief Method get_controlSchemes, addr 0x45dbccc, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes();

  /// @brief Method get_devices, addr 0x45dbc40, size 0x40, virtual true, abstract: false, final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__InputAction__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr ::UnityEngine::InputSystem::IInputActionCollection* i___UnityEngine__InputSystem__IInputActionCollection() noexcept;

  /// @brief Convert to "::UnityEngine::InputSystem::IInputActionCollection2"
  constexpr ::UnityEngine::InputSystem::IInputActionCollection2* i___UnityEngine__InputSystem__IInputActionCollection2() noexcept;

  /// @brief Method set_bindingMask, addr 0x45dbbf4, size 0x4c, virtual true, abstract: false, final true
  inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  /// @brief Method set_devices, addr 0x45dbc80, size 0x4c, virtual true, abstract: false, final true
  inline void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultInputActions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultInputActions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultInputActions(DefaultInputActions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultInputActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultInputActions(DefaultInputActions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6716 };

  /// @brief Field <asset>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionAsset> ____asset_k__BackingField;

  /// @brief Field m_Player, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* ___m_Player;

  /// @brief Field m_PlayerActionsCallbackInterface, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions* ___m_PlayerActionsCallbackInterface;

  /// @brief Field m_Player_Move, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_Player_Move;

  /// @brief Field m_Player_Look, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_Player_Look;

  /// @brief Field m_Player_Fire, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_Player_Fire;

  /// @brief Field m_UI, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* ___m_UI;

  /// @brief Field m_UIActionsCallbackInterface, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::InputSystem::DefaultInputActions_IUIActions* ___m_UIActionsCallbackInterface;

  /// @brief Field m_UI_Navigate, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_UI_Navigate;

  /// @brief Field m_UI_Submit, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_UI_Submit;

  /// @brief Field m_UI_Cancel, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_UI_Cancel;

  /// @brief Field m_UI_Point, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_UI_Point;

  /// @brief Field m_UI_Click, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_UI_Click;

  /// @brief Field m_UI_ScrollWheel, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_UI_ScrollWheel;

  /// @brief Field m_UI_MiddleClick, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_UI_MiddleClick;

  /// @brief Field m_UI_RightClick, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_UI_RightClick;

  /// @brief Field m_UI_TrackedDevicePosition, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_UI_TrackedDevicePosition;

  /// @brief Field m_UI_TrackedDeviceOrientation, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_UI_TrackedDeviceOrientation;

  /// @brief Field m_KeyboardMouseSchemeIndex, offset: 0xa0, size: 0x4, def value: None
  int32_t ___m_KeyboardMouseSchemeIndex;

  /// @brief Field m_GamepadSchemeIndex, offset: 0xa4, size: 0x4, def value: None
  int32_t ___m_GamepadSchemeIndex;

  /// @brief Field m_TouchSchemeIndex, offset: 0xa8, size: 0x4, def value: None
  int32_t ___m_TouchSchemeIndex;

  /// @brief Field m_JoystickSchemeIndex, offset: 0xac, size: 0x4, def value: None
  int32_t ___m_JoystickSchemeIndex;

  /// @brief Field m_XRSchemeIndex, offset: 0xb0, size: 0x4, def value: None
  int32_t ___m_XRSchemeIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ____asset_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_Player) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_PlayerActionsCallbackInterface) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_Player_Move) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_Player_Look) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_Player_Fire) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UIActionsCallbackInterface) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI_Navigate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI_Submit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI_Cancel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI_Point) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI_Click) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI_ScrollWheel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI_MiddleClick) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI_RightClick) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI_TrackedDevicePosition) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_UI_TrackedDeviceOrientation) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_KeyboardMouseSchemeIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_GamepadSchemeIndex) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_TouchSchemeIndex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_JoystickSchemeIndex) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::DefaultInputActions, ___m_XRSchemeIndex) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DefaultInputActions, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::DefaultInputActions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DefaultInputActions*, "UnityEngine.InputSystem", "DefaultInputActions");
NEED_NO_BOX(::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DefaultInputActions_IPlayerActions*, "UnityEngine.InputSystem", "DefaultInputActions/IPlayerActions");
NEED_NO_BOX(::UnityEngine::InputSystem::DefaultInputActions_IUIActions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DefaultInputActions_IUIActions*, "UnityEngine.InputSystem", "DefaultInputActions/IUIActions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DefaultInputActions_PlayerActions, "UnityEngine.InputSystem", "DefaultInputActions/PlayerActions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DefaultInputActions_UIActions, "UnityEngine.InputSystem", "DefaultInputActions/UIActions");
