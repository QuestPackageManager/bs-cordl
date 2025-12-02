#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/ControllerButtonsMapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerButtonsMapper)
namespace GlobalNamespace {
struct OVRInput_Button;
}
namespace Meta::XR::BuildingBlocks {
struct ButtonClickAction_ControllerButtonsMapper_ButtonClickMode;
}
namespace Meta::XR::BuildingBlocks {
struct ControllerButtonsMapper_ButtonClickAction;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Events {
template <typename T0> class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
// Forward declare root types
namespace Meta::XR::BuildingBlocks {
struct ButtonClickAction_ControllerButtonsMapper_ButtonClickMode;
}
namespace Meta::XR::BuildingBlocks {
class ControllerButtonsMapper;
}
namespace Meta::XR::BuildingBlocks {
struct ControllerButtonsMapper_ButtonClickAction;
}
// Write type traits
MARK_VAL_T(::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode);
MARK_REF_PTR_T(::Meta::XR::BuildingBlocks::ControllerButtonsMapper);
MARK_VAL_T(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction);
// Dependencies
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.ControllerButtonsMapper/ButtonClickAction/ButtonClickMode
struct CORDL_TYPE ButtonClickAction_ControllerButtonsMapper_ButtonClickMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ButtonClickAction_ControllerButtonsMapper_ButtonClickMode_Unwrapped
  enum struct __ButtonClickAction_ControllerButtonsMapper_ButtonClickMode_Unwrapped : int32_t {
    __E_OnButtonUp = static_cast<int32_t>(0x0),
    __E_OnButtonDown = static_cast<int32_t>(0x1),
    __E_OnButton = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ButtonClickAction_ControllerButtonsMapper_ButtonClickMode_Unwrapped() const noexcept {
    return static_cast<__ButtonClickAction_ControllerButtonsMapper_ButtonClickMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonClickAction_ControllerButtonsMapper_ButtonClickMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ButtonClickAction_ControllerButtonsMapper_ButtonClickMode(int32_t value__) noexcept;

  /// @brief Field OnButton value: I32(2)
  static ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode const OnButton;

  /// @brief Field OnButtonDown value: I32(1)
  static ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode const OnButtonDown;

  /// @brief Field OnButtonUp value: I32(0)
  static ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode const OnButtonUp;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21133 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode, 0x4>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies Meta.XR.BuildingBlocks.ControllerButtonsMapper::ButtonClickAction::ButtonClickMode, OVRInput::Button
namespace Meta::XR::BuildingBlocks {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.ControllerButtonsMapper/ButtonClickAction
struct CORDL_TYPE ControllerButtonsMapper_ButtonClickAction {
public:
  // Declarations
  using ButtonClickMode = ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode;

  /// @brief Method OnCallbackWithContext, addr 0x581e29c, size 0x78, virtual false, abstract: false, final false
  inline void OnCallbackWithContext(::UnityEngine::InputSystem::InputAction_CallbackContext callbackContext);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerButtonsMapper_ButtonClickAction();

  // Ctor Parameters [CppParam { name: "Title", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Button", ty: "::GlobalNamespace::OVRInput_Button", modifiers: "", def_value: None
  // }, CppParam { name: "ButtonMode", ty: "::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode", modifiers: "", def_value: None }, CppParam { name:
  // "InputActionReference", ty: "::UnityW<::UnityEngine::InputSystem::InputActionReference>", modifiers: "", def_value: None }, CppParam { name: "CallbackWithContext", ty:
  // "::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*", modifiers: "", def_value: None }, CppParam { name: "Callback", ty:
  // "::UnityEngine::Events::UnityEvent*", modifiers: "", def_value: None }]
  constexpr ControllerButtonsMapper_ButtonClickAction(::StringW Title, ::GlobalNamespace::OVRInput_Button Button,
                                                      ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode ButtonMode,
                                                      ::UnityW<::UnityEngine::InputSystem::InputActionReference> InputActionReference,
                                                      ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* CallbackWithContext,
                                                      ::UnityEngine::Events::UnityEvent* Callback) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21134 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Title, offset: 0x0, size: 0x8, def value: None
  ::StringW Title;

  /// @brief Field Button, offset: 0x8, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_Button Button;

  /// @brief Field ButtonMode, offset: 0xc, size: 0x4, def value: None
  ::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode ButtonMode;

  /// @brief Field InputActionReference, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> InputActionReference;

  /// @brief Field CallbackWithContext, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* CallbackWithContext;

  /// @brief Field Callback, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* Callback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction, Title) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction, Button) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction, ButtonMode) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction, InputActionReference) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction, CallbackWithContext) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction, Callback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction, 0x28>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::BuildingBlocks {
// Is value type: false
// CS Name: Meta.XR.BuildingBlocks.ControllerButtonsMapper
class CORDL_TYPE ControllerButtonsMapper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ButtonClickAction = ::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction;

  __declspec(property(get = get_ButtonClickActions,
                      put = set_ButtonClickActions)) ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* ButtonClickActions;

  /// @brief Field _buttonClickActions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonClickActions,
                      put =
                          __cordl_internal_set__buttonClickActions)) ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* _buttonClickActions;

  /// @brief Method IsActionTriggered, addr 0x581e0c0, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsActionTriggered(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction buttonClickAction);

  /// @brief Method IsLegacyInputActionTriggered, addr 0x581e10c, size 0xf8, virtual false, abstract: false, final false
  static inline bool IsLegacyInputActionTriggered(::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode buttonMode, ::GlobalNamespace::OVRInput_Button button);

  /// @brief Method IsNewInputSystemActionTriggered, addr 0x581e204, size 0x94, virtual false, abstract: false, final false
  static inline bool IsNewInputSystemActionTriggered(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction buttonClickAction);

  static inline ::Meta::XR::BuildingBlocks::ControllerButtonsMapper* New_ctor();

  /// @brief Method OnDisable, addr 0x581dd30, size 0x258, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x581dad8, size 0x258, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Update, addr 0x581df88, size 0x138, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* const& __cordl_internal_get__buttonClickActions() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>*& __cordl_internal_get__buttonClickActions();

  constexpr void __cordl_internal_set__buttonClickActions(::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* value);

  /// @brief Method .ctor, addr 0x581e298, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ButtonClickActions, addr 0x581dac8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* get_ButtonClickActions();

  /// @brief Method set_ButtonClickActions, addr 0x581dad0, size 0x8, virtual false, abstract: false, final false
  inline void set_ButtonClickActions(::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControllerButtonsMapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControllerButtonsMapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControllerButtonsMapper(ControllerButtonsMapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControllerButtonsMapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControllerButtonsMapper(ControllerButtonsMapper const&) = delete;

  /// @brief Field UseLegacyInputSystem offset 0xffffffff size 0x1
  static constexpr bool UseLegacyInputSystem{ true };

  /// @brief Field UseNewInputSystem offset 0xffffffff size 0x1
  static constexpr bool UseNewInputSystem{ true };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21135 };

  /// @brief Field _buttonClickActions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction>* ____buttonClickActions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::BuildingBlocks::ControllerButtonsMapper, ____buttonClickActions) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::BuildingBlocks::ControllerButtonsMapper, 0x28>, "Size mismatch!");

} // namespace Meta::XR::BuildingBlocks
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::ButtonClickAction_ControllerButtonsMapper_ButtonClickMode, "Meta.XR.BuildingBlocks", "ControllerButtonsMapper/ButtonClickAction/ButtonClickMode");
NEED_NO_BOX(::Meta::XR::BuildingBlocks::ControllerButtonsMapper);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::ControllerButtonsMapper*, "Meta.XR.BuildingBlocks", "ControllerButtonsMapper");
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::ControllerButtonsMapper_ButtonClickAction, "Meta.XR.BuildingBlocks", "ControllerButtonsMapper/ButtonClickAction");
