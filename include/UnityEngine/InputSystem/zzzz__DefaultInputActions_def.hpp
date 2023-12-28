#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultInputActions)
namespace UnityEngine::InputSystem {
struct __DefaultInputActions__PlayerActions;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection2;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::InputSystem {
class IInputActionCollection;
}
namespace UnityEngine::InputSystem {
class __DefaultInputActions__IUIActions;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class __DefaultInputActions__IPlayerActions;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem {
struct __DefaultInputActions__UIActions;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class DefaultInputActions;
}
namespace UnityEngine::InputSystem {
class __DefaultInputActions__IPlayerActions;
}
namespace UnityEngine::InputSystem {
class __DefaultInputActions__IUIActions;
}
namespace UnityEngine::InputSystem {
struct __DefaultInputActions__PlayerActions;
}
namespace UnityEngine::InputSystem {
struct __DefaultInputActions__UIActions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::DefaultInputActions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__DefaultInputActions__IPlayerActions);
MARK_REF_PTR_T(::UnityEngine::InputSystem::__DefaultInputActions__IUIActions);
MARK_VAL_T(::UnityEngine::InputSystem::__DefaultInputActions__PlayerActions);
MARK_VAL_T(::UnityEngine::InputSystem::__DefaultInputActions__UIActions);
// Type: ::PlayerActions
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6305))
// CS Name: ::DefaultInputActions::PlayerActions
struct CORDL_TYPE __DefaultInputActions__PlayerActions {
public:
  // Declarations
  __declspec(property(get = get_Move))::UnityEngine::InputSystem::InputAction* Move;

  __declspec(property(get = get_Look))::UnityEngine::InputSystem::InputAction* Look;

  __declspec(property(get = get_Fire))::UnityEngine::InputSystem::InputAction* Fire;

  __declspec(property(get = get_enabled)) bool enabled;

  /// @brief Method .ctor addr 0x2ab8e5c size 0x8 virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::DefaultInputActions* wrapper);

  /// @brief Method get_Move addr 0x2ab8e64 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_Move();

  /// @brief Method get_Look addr 0x2ab8e80 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_Look();

  /// @brief Method get_Fire addr 0x2ab8e9c size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_Fire();

  /// @brief Method Get addr 0x2ab8eb8 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputActionMap* Get();

  /// @brief Method Enable addr 0x2ab8ed4 size 0x24 virtual false final false
  inline void Enable();

  /// @brief Method Disable addr 0x2ab8ef8 size 0x24 virtual false final false
  inline void Disable();

  /// @brief Method get_enabled addr 0x2ab8f1c size 0x24 virtual false final false
  inline bool get_enabled();

  /// @brief Method op_Implicit addr 0x2ab8f40 size 0x18 virtual false final false
  static inline ::UnityEngine::InputSystem::InputActionMap* op_Implicit___UnityEngine__InputSystem__InputActionMap_(::UnityEngine::InputSystem::__DefaultInputActions__PlayerActions set);

  /// @brief Method SetCallbacks addr 0x2ab8f58 size 0xb14 virtual false final false
  inline void SetCallbacks(::UnityEngine::InputSystem::__DefaultInputActions__IPlayerActions* instance);

  // Ctor Parameters [CppParam { name: "m_Wrapper", ty: "::UnityEngine::InputSystem::DefaultInputActions*", modifiers: "", def_value: None }]
  constexpr __DefaultInputActions__PlayerActions(::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultInputActions__PlayerActions();

  /// @brief Field m_Wrapper, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__DefaultInputActions__PlayerActions, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::UIActions
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6306))
// CS Name: ::DefaultInputActions::UIActions
struct CORDL_TYPE __DefaultInputActions__UIActions {
public:
  // Declarations
  __declspec(property(get = get_Navigate))::UnityEngine::InputSystem::InputAction* Navigate;

  __declspec(property(get = get_Submit))::UnityEngine::InputSystem::InputAction* Submit;

  __declspec(property(get = get_Cancel))::UnityEngine::InputSystem::InputAction* Cancel;

  __declspec(property(get = get_Point))::UnityEngine::InputSystem::InputAction* Point;

  __declspec(property(get = get_Click))::UnityEngine::InputSystem::InputAction* Click;

  __declspec(property(get = get_ScrollWheel))::UnityEngine::InputSystem::InputAction* ScrollWheel;

  __declspec(property(get = get_MiddleClick))::UnityEngine::InputSystem::InputAction* MiddleClick;

  __declspec(property(get = get_RightClick))::UnityEngine::InputSystem::InputAction* RightClick;

  __declspec(property(get = get_TrackedDevicePosition))::UnityEngine::InputSystem::InputAction* TrackedDevicePosition;

  __declspec(property(get = get_TrackedDeviceOrientation))::UnityEngine::InputSystem::InputAction* TrackedDeviceOrientation;

  __declspec(property(get = get_enabled)) bool enabled;

  /// @brief Method .ctor addr 0x2ab9a6c size 0x8 virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::DefaultInputActions* wrapper);

  /// @brief Method get_Navigate addr 0x2ab9a74 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_Navigate();

  /// @brief Method get_Submit addr 0x2ab9a90 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_Submit();

  /// @brief Method get_Cancel addr 0x2ab9aac size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_Cancel();

  /// @brief Method get_Point addr 0x2ab9ac8 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_Point();

  /// @brief Method get_Click addr 0x2ab9ae4 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_Click();

  /// @brief Method get_ScrollWheel addr 0x2ab9b00 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_ScrollWheel();

  /// @brief Method get_MiddleClick addr 0x2ab9b1c size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_MiddleClick();

  /// @brief Method get_RightClick addr 0x2ab9b38 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_RightClick();

  /// @brief Method get_TrackedDevicePosition addr 0x2ab9b54 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_TrackedDevicePosition();

  /// @brief Method get_TrackedDeviceOrientation addr 0x2ab9b70 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputAction* get_TrackedDeviceOrientation();

  /// @brief Method Get addr 0x2ab9b8c size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::InputActionMap* Get();

  /// @brief Method Enable addr 0x2ab9ba8 size 0x24 virtual false final false
  inline void Enable();

  /// @brief Method Disable addr 0x2ab9bcc size 0x24 virtual false final false
  inline void Disable();

  /// @brief Method get_enabled addr 0x2ab9bf0 size 0x24 virtual false final false
  inline bool get_enabled();

  /// @brief Method op_Implicit addr 0x2ab9c14 size 0x18 virtual false final false
  static inline ::UnityEngine::InputSystem::InputActionMap* op_Implicit___UnityEngine__InputSystem__InputActionMap_(::UnityEngine::InputSystem::__DefaultInputActions__UIActions set);

  /// @brief Method SetCallbacks addr 0x2ab9c2c size 0x2404 virtual false final false
  inline void SetCallbacks(::UnityEngine::InputSystem::__DefaultInputActions__IUIActions* instance);

  // Ctor Parameters [CppParam { name: "m_Wrapper", ty: "::UnityEngine::InputSystem::DefaultInputActions*", modifiers: "", def_value: None }]
  constexpr __DefaultInputActions__UIActions(::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultInputActions__UIActions();

  /// @brief Field m_Wrapper, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::DefaultInputActions* m_Wrapper;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__DefaultInputActions__UIActions, 0x8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
// Type: ::IPlayerActions
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6307))
// CS Name: ::DefaultInputActions::IPlayerActions*
class CORDL_TYPE __DefaultInputActions__IPlayerActions {
public:
  // Declarations
  /// @brief Method OnMove addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnMove(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnLook addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnLook(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnFire addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnFire(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultInputActions__IPlayerActions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultInputActions__IPlayerActions(__DefaultInputActions__IPlayerActions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultInputActions__IPlayerActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultInputActions__IPlayerActions(__DefaultInputActions__IPlayerActions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
// Type: ::IUIActions
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6308))
// CS Name: ::DefaultInputActions::IUIActions*
class CORDL_TYPE __DefaultInputActions__IUIActions {
public:
  // Declarations
  /// @brief Method OnNavigate addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnNavigate(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnSubmit addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnSubmit(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnCancel addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnCancel(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPoint addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnPoint(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnClick addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnClick(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnScrollWheel addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnScrollWheel(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnMiddleClick addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnMiddleClick(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnRightClick addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnRightClick(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnTrackedDevicePosition addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnTrackedDevicePosition(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnTrackedDeviceOrientation addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnTrackedDeviceOrientation(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultInputActions__IUIActions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DefaultInputActions__IUIActions(__DefaultInputActions__IUIActions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DefaultInputActions__IUIActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DefaultInputActions__IUIActions(__DefaultInputActions__IUIActions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::DefaultInputActions
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 180, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6309))
// CS Name: ::UnityEngine.InputSystem::DefaultInputActions*
class CORDL_TYPE DefaultInputActions : public ::System::Object {
public:
  // Declarations
  using IUIActions = ::UnityEngine::InputSystem::__DefaultInputActions__IUIActions;

  using IPlayerActions = ::UnityEngine::InputSystem::__DefaultInputActions__IPlayerActions;

  using UIActions = ::UnityEngine::InputSystem::__DefaultInputActions__UIActions;

  using PlayerActions = ::UnityEngine::InputSystem::__DefaultInputActions__PlayerActions;

  /// @brief Field <asset>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__asset_k__BackingField, put = __set__asset_k__BackingField))::UnityEngine::InputSystem::InputActionAsset* _asset_k__BackingField;

  /// @brief Field m_Player, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Player, put = __set_m_Player))::UnityEngine::InputSystem::InputActionMap* m_Player;

  /// @brief Field m_PlayerActionsCallbackInterface, offset 0x20, size 0x8
  __declspec(property(get = __get_m_PlayerActionsCallbackInterface,
                      put = __set_m_PlayerActionsCallbackInterface))::UnityEngine::InputSystem::__DefaultInputActions__IPlayerActions* m_PlayerActionsCallbackInterface;

  /// @brief Field m_Player_Move, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Player_Move, put = __set_m_Player_Move))::UnityEngine::InputSystem::InputAction* m_Player_Move;

  /// @brief Field m_Player_Look, offset 0x30, size 0x8
  __declspec(property(get = __get_m_Player_Look, put = __set_m_Player_Look))::UnityEngine::InputSystem::InputAction* m_Player_Look;

  /// @brief Field m_Player_Fire, offset 0x38, size 0x8
  __declspec(property(get = __get_m_Player_Fire, put = __set_m_Player_Fire))::UnityEngine::InputSystem::InputAction* m_Player_Fire;

  /// @brief Field m_UI, offset 0x40, size 0x8
  __declspec(property(get = __get_m_UI, put = __set_m_UI))::UnityEngine::InputSystem::InputActionMap* m_UI;

  /// @brief Field m_UIActionsCallbackInterface, offset 0x48, size 0x8
  __declspec(property(get = __get_m_UIActionsCallbackInterface, put = __set_m_UIActionsCallbackInterface))::UnityEngine::InputSystem::__DefaultInputActions__IUIActions* m_UIActionsCallbackInterface;

  /// @brief Field m_UI_Navigate, offset 0x50, size 0x8
  __declspec(property(get = __get_m_UI_Navigate, put = __set_m_UI_Navigate))::UnityEngine::InputSystem::InputAction* m_UI_Navigate;

  /// @brief Field m_UI_Submit, offset 0x58, size 0x8
  __declspec(property(get = __get_m_UI_Submit, put = __set_m_UI_Submit))::UnityEngine::InputSystem::InputAction* m_UI_Submit;

  /// @brief Field m_UI_Cancel, offset 0x60, size 0x8
  __declspec(property(get = __get_m_UI_Cancel, put = __set_m_UI_Cancel))::UnityEngine::InputSystem::InputAction* m_UI_Cancel;

  /// @brief Field m_UI_Point, offset 0x68, size 0x8
  __declspec(property(get = __get_m_UI_Point, put = __set_m_UI_Point))::UnityEngine::InputSystem::InputAction* m_UI_Point;

  /// @brief Field m_UI_Click, offset 0x70, size 0x8
  __declspec(property(get = __get_m_UI_Click, put = __set_m_UI_Click))::UnityEngine::InputSystem::InputAction* m_UI_Click;

  /// @brief Field m_UI_ScrollWheel, offset 0x78, size 0x8
  __declspec(property(get = __get_m_UI_ScrollWheel, put = __set_m_UI_ScrollWheel))::UnityEngine::InputSystem::InputAction* m_UI_ScrollWheel;

  /// @brief Field m_UI_MiddleClick, offset 0x80, size 0x8
  __declspec(property(get = __get_m_UI_MiddleClick, put = __set_m_UI_MiddleClick))::UnityEngine::InputSystem::InputAction* m_UI_MiddleClick;

  /// @brief Field m_UI_RightClick, offset 0x88, size 0x8
  __declspec(property(get = __get_m_UI_RightClick, put = __set_m_UI_RightClick))::UnityEngine::InputSystem::InputAction* m_UI_RightClick;

  /// @brief Field m_UI_TrackedDevicePosition, offset 0x90, size 0x8
  __declspec(property(get = __get_m_UI_TrackedDevicePosition, put = __set_m_UI_TrackedDevicePosition))::UnityEngine::InputSystem::InputAction* m_UI_TrackedDevicePosition;

  /// @brief Field m_UI_TrackedDeviceOrientation, offset 0x98, size 0x8
  __declspec(property(get = __get_m_UI_TrackedDeviceOrientation, put = __set_m_UI_TrackedDeviceOrientation))::UnityEngine::InputSystem::InputAction* m_UI_TrackedDeviceOrientation;

  /// @brief Field m_KeyboardMouseSchemeIndex, offset 0xa0, size 0x4
  __declspec(property(get = __get_m_KeyboardMouseSchemeIndex, put = __set_m_KeyboardMouseSchemeIndex)) int32_t m_KeyboardMouseSchemeIndex;

  /// @brief Field m_GamepadSchemeIndex, offset 0xa4, size 0x4
  __declspec(property(get = __get_m_GamepadSchemeIndex, put = __set_m_GamepadSchemeIndex)) int32_t m_GamepadSchemeIndex;

  /// @brief Field m_TouchSchemeIndex, offset 0xa8, size 0x4
  __declspec(property(get = __get_m_TouchSchemeIndex, put = __set_m_TouchSchemeIndex)) int32_t m_TouchSchemeIndex;

  /// @brief Field m_JoystickSchemeIndex, offset 0xac, size 0x4
  __declspec(property(get = __get_m_JoystickSchemeIndex, put = __set_m_JoystickSchemeIndex)) int32_t m_JoystickSchemeIndex;

  /// @brief Field m_XRSchemeIndex, offset 0xb0, size 0x4
  __declspec(property(get = __get_m_XRSchemeIndex, put = __set_m_XRSchemeIndex)) int32_t m_XRSchemeIndex;

  __declspec(property(get = get_asset))::UnityEngine::InputSystem::InputActionAsset* asset;

  __declspec(property(get = get_bindingMask, put = set_bindingMask))::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> bindingMask;

  __declspec(property(get = get_devices, put = set_devices))::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> devices;

  __declspec(property(get = get_controlSchemes))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> controlSchemes;

  __declspec(property(get = get_bindings))::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* bindings;

  __declspec(property(get = get_Player))::UnityEngine::InputSystem::__DefaultInputActions__PlayerActions Player;

  __declspec(property(get = get_UI))::UnityEngine::InputSystem::__DefaultInputActions__UIActions UI;

  __declspec(property(get = get_KeyboardMouseScheme))::UnityEngine::InputSystem::InputControlScheme KeyboardMouseScheme;

  __declspec(property(get = get_GamepadScheme))::UnityEngine::InputSystem::InputControlScheme GamepadScheme;

  __declspec(property(get = get_TouchScheme))::UnityEngine::InputSystem::InputControlScheme TouchScheme;

  __declspec(property(get = get_JoystickScheme))::UnityEngine::InputSystem::InputControlScheme JoystickScheme;

  __declspec(property(get = get_XRScheme))::UnityEngine::InputSystem::InputControlScheme XRScheme;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept;

  /// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
  constexpr operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::UnityEngine::InputSystem::InputActionAsset*& __get__asset_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionAsset*> const& __get__asset_k__BackingField() const;

  constexpr void __set__asset_k__BackingField(::UnityEngine::InputSystem::InputActionAsset* value);

  constexpr ::UnityEngine::InputSystem::InputActionMap*& __get_m_Player();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionMap*> const& __get_m_Player() const;

  constexpr void __set_m_Player(::UnityEngine::InputSystem::InputActionMap* value);

  constexpr ::UnityEngine::InputSystem::__DefaultInputActions__IPlayerActions*& __get_m_PlayerActionsCallbackInterface();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::__DefaultInputActions__IPlayerActions*> const& __get_m_PlayerActionsCallbackInterface() const;

  constexpr void __set_m_PlayerActionsCallbackInterface(::UnityEngine::InputSystem::__DefaultInputActions__IPlayerActions* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_Player_Move();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_Player_Move() const;

  constexpr void __set_m_Player_Move(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_Player_Look();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_Player_Look() const;

  constexpr void __set_m_Player_Look(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_Player_Fire();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_Player_Fire() const;

  constexpr void __set_m_Player_Fire(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputActionMap*& __get_m_UI();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionMap*> const& __get_m_UI() const;

  constexpr void __set_m_UI(::UnityEngine::InputSystem::InputActionMap* value);

  constexpr ::UnityEngine::InputSystem::__DefaultInputActions__IUIActions*& __get_m_UIActionsCallbackInterface();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::__DefaultInputActions__IUIActions*> const& __get_m_UIActionsCallbackInterface() const;

  constexpr void __set_m_UIActionsCallbackInterface(::UnityEngine::InputSystem::__DefaultInputActions__IUIActions* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_UI_Navigate();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_UI_Navigate() const;

  constexpr void __set_m_UI_Navigate(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_UI_Submit();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_UI_Submit() const;

  constexpr void __set_m_UI_Submit(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_UI_Cancel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_UI_Cancel() const;

  constexpr void __set_m_UI_Cancel(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_UI_Point();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_UI_Point() const;

  constexpr void __set_m_UI_Point(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_UI_Click();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_UI_Click() const;

  constexpr void __set_m_UI_Click(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_UI_ScrollWheel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_UI_ScrollWheel() const;

  constexpr void __set_m_UI_ScrollWheel(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_UI_MiddleClick();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_UI_MiddleClick() const;

  constexpr void __set_m_UI_MiddleClick(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_UI_RightClick();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_UI_RightClick() const;

  constexpr void __set_m_UI_RightClick(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_UI_TrackedDevicePosition();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_UI_TrackedDevicePosition() const;

  constexpr void __set_m_UI_TrackedDevicePosition(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get_m_UI_TrackedDeviceOrientation();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get_m_UI_TrackedDeviceOrientation() const;

  constexpr void __set_m_UI_TrackedDeviceOrientation(::UnityEngine::InputSystem::InputAction* value);

  constexpr int32_t& __get_m_KeyboardMouseSchemeIndex();

  constexpr int32_t const& __get_m_KeyboardMouseSchemeIndex() const;

  constexpr void __set_m_KeyboardMouseSchemeIndex(int32_t value);

  constexpr int32_t& __get_m_GamepadSchemeIndex();

  constexpr int32_t const& __get_m_GamepadSchemeIndex() const;

  constexpr void __set_m_GamepadSchemeIndex(int32_t value);

  constexpr int32_t& __get_m_TouchSchemeIndex();

  constexpr int32_t const& __get_m_TouchSchemeIndex() const;

  constexpr void __set_m_TouchSchemeIndex(int32_t value);

  constexpr int32_t& __get_m_JoystickSchemeIndex();

  constexpr int32_t const& __get_m_JoystickSchemeIndex() const;

  constexpr void __set_m_JoystickSchemeIndex(int32_t value);

  constexpr int32_t& __get_m_XRSchemeIndex();

  constexpr int32_t const& __get_m_XRSchemeIndex() const;

  constexpr void __set_m_XRSchemeIndex(int32_t value);

  /// @brief Method get_asset addr 0x2ab847c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionAsset* get_asset();

  static inline ::UnityEngine::InputSystem::DefaultInputActions* New_ctor();

  /// @brief Method .ctor addr 0x2ab8484 size 0x360 virtual false final false
  inline void _ctor();

  /// @brief Method Dispose addr 0x2ab87e4 size 0x5c virtual true final true
  inline void Dispose();

  /// @brief Method get_bindingMask addr 0x2ab8840 size 0x28 virtual true final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> get_bindingMask();

  /// @brief Method set_bindingMask addr 0x2ab8868 size 0x4c virtual true final true
  inline void set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> value);

  /// @brief Method get_devices addr 0x2ab88b4 size 0x40 virtual true final true
  inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> get_devices();

  /// @brief Method set_devices addr 0x2ab88f4 size 0x4c virtual true final true
  inline void set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> value);

  /// @brief Method get_controlSchemes addr 0x2ab8940 size 0x1c virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> get_controlSchemes();

  /// @brief Method Contains addr 0x2ab895c size 0x1c virtual true final true
  inline bool Contains(::UnityEngine::InputSystem::InputAction* action);

  /// @brief Method GetEnumerator addr 0x2ab8978 size 0x1c virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ab8994 size 0x1c virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Enable addr 0x2ab89b0 size 0x1c virtual true final true
  inline void Enable();

  /// @brief Method Disable addr 0x2ab89cc size 0x1c virtual true final true
  inline void Disable();

  /// @brief Method get_bindings addr 0x2ab89e8 size 0x1c virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* get_bindings();

  /// @brief Method FindAction addr 0x2ab8a04 size 0x20 virtual true final true
  inline ::UnityEngine::InputSystem::InputAction* FindAction(::StringW actionNameOrId, bool throwIfNotFound);

  /// @brief Method FindBinding addr 0x2ab8a24 size 0x5c virtual true final true
  inline int32_t FindBinding(::UnityEngine::InputSystem::InputBinding bindingMask, ByRef<::UnityEngine::InputSystem::InputAction*> action);

  /// @brief Method get_Player addr 0x2ab8a80 size 0x4 virtual false final false
  inline ::UnityEngine::InputSystem::__DefaultInputActions__PlayerActions get_Player();

  /// @brief Method get_UI addr 0x2ab8a84 size 0x4 virtual false final false
  inline ::UnityEngine::InputSystem::__DefaultInputActions__UIActions get_UI();

  /// @brief Method get_KeyboardMouseScheme addr 0x2ab8a88 size 0xc4 virtual false final false
  inline ::UnityEngine::InputSystem::InputControlScheme get_KeyboardMouseScheme();

  /// @brief Method get_GamepadScheme addr 0x2ab8b4c size 0xc4 virtual false final false
  inline ::UnityEngine::InputSystem::InputControlScheme get_GamepadScheme();

  /// @brief Method get_TouchScheme addr 0x2ab8c10 size 0xc4 virtual false final false
  inline ::UnityEngine::InputSystem::InputControlScheme get_TouchScheme();

  /// @brief Method get_JoystickScheme addr 0x2ab8cd4 size 0xc4 virtual false final false
  inline ::UnityEngine::InputSystem::InputControlScheme get_JoystickScheme();

  /// @brief Method get_XRScheme addr 0x2ab8d98 size 0xc4 virtual false final false
  inline ::UnityEngine::InputSystem::InputControlScheme get_XRScheme();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultInputActions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultInputActions(DefaultInputActions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultInputActions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultInputActions(DefaultInputActions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultInputActions();

public:
  /// @brief Field <asset>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionAsset* ____asset_k__BackingField;

  /// @brief Field m_Player, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* ___m_Player;

  /// @brief Field m_PlayerActionsCallbackInterface, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::__DefaultInputActions__IPlayerActions* ___m_PlayerActionsCallbackInterface;

  /// @brief Field m_Player_Move, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_Player_Move;

  /// @brief Field m_Player_Look, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_Player_Look;

  /// @brief Field m_Player_Fire, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___m_Player_Fire;

  /// @brief Field m_UI, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionMap* ___m_UI;

  /// @brief Field m_UIActionsCallbackInterface, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::InputSystem::__DefaultInputActions__IUIActions* ___m_UIActionsCallbackInterface;

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DefaultInputActions, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::DefaultInputActions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DefaultInputActions*, "UnityEngine.InputSystem", "DefaultInputActions");
NEED_NO_BOX(::UnityEngine::InputSystem::__DefaultInputActions__IPlayerActions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__DefaultInputActions__IPlayerActions*, "UnityEngine.InputSystem", "DefaultInputActions/IPlayerActions");
NEED_NO_BOX(::UnityEngine::InputSystem::__DefaultInputActions__IUIActions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__DefaultInputActions__IUIActions*, "UnityEngine.InputSystem", "DefaultInputActions/IUIActions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__DefaultInputActions__PlayerActions, "UnityEngine.InputSystem", "DefaultInputActions/PlayerActions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__DefaultInputActions__UIActions, "UnityEngine.InputSystem", "DefaultInputActions/UIActions");
