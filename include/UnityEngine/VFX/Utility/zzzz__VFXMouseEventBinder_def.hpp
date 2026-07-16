#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXMouseEventBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXMouseEventBinder)
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX::Utility {
struct VFXMouseEventBinder_Activation;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
struct VFXMouseEventBinder_Activation;
}
namespace UnityEngine::VFX::Utility {
class VFXMouseEventBinder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation);
MARK_REF_T(::UnityEngine::VFX::Utility::VFXMouseEventBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation, "UnityEngine.VFX.Utility", "VFXMouseEventBinder/Activation");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXMouseEventBinder*, "UnityEngine.VFX.Utility", "VFXMouseEventBinder");
// Dependencies
namespace UnityEngine::VFX::Utility {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXMouseEventBinder/Activation
struct CORDL_TYPE VFXMouseEventBinder_Activation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXMouseEventBinder_Activation_Unwrapped
  enum struct __VFXMouseEventBinder_Activation_Unwrapped : int32_t {
    __E_OnMouseUp = static_cast<int32_t>(0x0),
    __E_OnMouseDown = static_cast<int32_t>(0x1),
    __E_OnMouseEnter = static_cast<int32_t>(0x2),
    __E_OnMouseExit = static_cast<int32_t>(0x3),
    __E_OnMouseOver = static_cast<int32_t>(0x4),
    __E_OnMouseDrag = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXMouseEventBinder_Activation_Unwrapped() const noexcept {
    return static_cast<__VFXMouseEventBinder_Activation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXMouseEventBinder_Activation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXMouseEventBinder_Activation(int32_t value__) noexcept;

  /// @brief Field OnMouseDown value: I32(1)
  static ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation const OnMouseDown;

  /// @brief Field OnMouseDrag value: I32(5)
  static ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation const OnMouseDrag;

  /// @brief Field OnMouseEnter value: I32(2)
  static ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation const OnMouseEnter;

  /// @brief Field OnMouseExit value: I32(3)
  static ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation const OnMouseExit;

  /// @brief Field OnMouseOver value: I32(4)
  static ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation const OnMouseOver;

  /// @brief Field OnMouseUp value: I32(0)
  static ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation const OnMouseUp;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
// Dependencies UnityEngine.VFX.Utility.VFXEventBinderBase, UnityEngine.VFX.Utility.VFXMouseEventBinder::Activation
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXMouseEventBinder
class CORDL_TYPE VFXMouseEventBinder : public ::UnityEngine::VFX::Utility::VFXEventBinderBase {
public:
  // Declarations
  using Activation = ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation;

  /// @brief Field RaycastMousePosition, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_RaycastMousePosition, put = __cordl_internal_set_RaycastMousePosition)) bool RaycastMousePosition;

  /// @brief Field activation, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_activation, put = __cordl_internal_set_activation)) ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation activation;

  /// @brief Field drag, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_drag, put = __cordl_internal_set_drag)) bool drag;

  /// @brief Field mouseDown, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mouseDown, put = __cordl_internal_set_mouseDown)) ::UnityEngine::InputSystem::InputAction* mouseDown;

  /// @brief Field mouseDragStart, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_mouseDragStart, put = __cordl_internal_set_mouseDragStart)) ::UnityEngine::InputSystem::InputAction* mouseDragStart;

  /// @brief Field mouseDragStop, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_mouseDragStop, put = __cordl_internal_set_mouseDragStop)) ::UnityEngine::InputSystem::InputAction* mouseDragStop;

  /// @brief Field mouseEnter, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_mouseEnter, put = __cordl_internal_set_mouseEnter)) ::UnityEngine::InputSystem::InputAction* mouseEnter;

  /// @brief Field mouseOver, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_mouseOver, put = __cordl_internal_set_mouseOver)) bool mouseOver;

  /// @brief Field mouseUp, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_mouseUp, put = __cordl_internal_set_mouseUp)) ::UnityEngine::InputSystem::InputAction* mouseUp;

  /// @brief Field position, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) ::UnityEngine::VFX::Utility::ExposedProperty* position;

  /// @brief Method Awake, addr 0x69db088, size 0x2d0, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method DoOnMouseDown, addr 0x69db790, size 0xb8, virtual false, abstract: false, final false
  inline void DoOnMouseDown();

  /// @brief Method DoOnMouseDrag, addr 0x69db9ac, size 0xb8, virtual false, abstract: false, final false
  inline void DoOnMouseDrag();

  /// @brief Method DoOnMouseEnter, addr 0x69dba64, size 0xb8, virtual false, abstract: false, final false
  inline void DoOnMouseEnter();

  /// @brief Method DoOnMouseExit, addr 0x69db4f0, size 0xb8, virtual false, abstract: false, final false
  inline void DoOnMouseExit();

  /// @brief Method DoOnMouseOver, addr 0x69db438, size 0xb8, virtual false, abstract: false, final false
  inline void DoOnMouseOver();

  /// @brief Method DoOnMouseUp, addr 0x69db8f8, size 0xb4, virtual false, abstract: false, final false
  inline void DoOnMouseUp();

  /// @brief Method GetMousePosition, addr 0x69dafe8, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetMousePosition();

  static inline ::UnityEngine::VFX::Utility::VFXMouseEventBinder* New_ctor();

  /// @brief Method OnDisable, addr 0x69db750, size 0x40, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x69db708, size 0x44, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RayCastAndTriggerEvent, addr 0x69db628, size 0xe0, virtual false, abstract: false, final false
  inline void RayCastAndTriggerEvent(::System::Action* trigger);

  /// @brief Method RayCastDrag, addr 0x69db5a8, size 0x80, virtual false, abstract: false, final false
  inline void RayCastDrag();

  /// @brief Method RaycastMainCamera, addr 0x69db358, size 0xe0, virtual false, abstract: false, final false
  inline void RaycastMainCamera();

  /// @brief Method SetEventAttribute, addr 0x69daedc, size 0x10c, virtual true, abstract: false, final false
  inline void SetEventAttribute(::ArrayW<::System::Object*> parameters);

  /// @brief Method <Awake>b__12_0, addr 0x69dbbcc, size 0x80, virtual false, abstract: false, final false
  inline void _Awake_b__12_0(::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  /// @brief Method <Awake>b__12_1, addr 0x69dbc4c, size 0x80, virtual false, abstract: false, final false
  inline void _Awake_b__12_1(::UnityEngine::InputSystem::InputAction_CallbackContext ctx);

  constexpr bool const& __cordl_internal_get_RaycastMousePosition() const;

  constexpr bool& __cordl_internal_get_RaycastMousePosition();

  constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation const& __cordl_internal_get_activation() const;

  constexpr ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation& __cordl_internal_get_activation();

  constexpr bool const& __cordl_internal_get_drag() const;

  constexpr bool& __cordl_internal_get_drag();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_mouseDown() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_mouseDown();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_mouseDragStart() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_mouseDragStart();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_mouseDragStop() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_mouseDragStop();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_mouseEnter() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_mouseEnter();

  constexpr bool const& __cordl_internal_get_mouseOver() const;

  constexpr bool& __cordl_internal_get_mouseOver();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_mouseUp() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_mouseUp();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_position();

  constexpr void __cordl_internal_set_RaycastMousePosition(bool value);

  constexpr void __cordl_internal_set_activation(::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation value);

  constexpr void __cordl_internal_set_drag(bool value);

  constexpr void __cordl_internal_set_mouseDown(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_mouseDragStart(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_mouseDragStop(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_mouseEnter(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_mouseOver(bool value);

  constexpr void __cordl_internal_set_mouseUp(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set_position(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69dbb1c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXMouseEventBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXMouseEventBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXMouseEventBinder(VFXMouseEventBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXMouseEventBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXMouseEventBinder(VFXMouseEventBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19943 };

  /// @brief Field activation, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::VFX::Utility::VFXMouseEventBinder_Activation ___activation;

  /// @brief Field position, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___position;

  /// @brief Field RaycastMousePosition, offset: 0x48, size: 0x1, def value: None
  bool ___RaycastMousePosition;

  /// @brief Field mouseDown, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___mouseDown;

  /// @brief Field mouseUp, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___mouseUp;

  /// @brief Field mouseDragStart, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___mouseDragStart;

  /// @brief Field mouseDragStop, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___mouseDragStop;

  /// @brief Field mouseEnter, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ___mouseEnter;

  /// @brief Field mouseOver, offset: 0x78, size: 0x1, def value: None
  bool ___mouseOver;

  /// @brief Field drag, offset: 0x79, size: 0x1, def value: None
  bool ___drag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder, ___activation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder, ___position) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder, ___RaycastMousePosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder, ___mouseDown) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder, ___mouseUp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder, ___mouseDragStart) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder, ___mouseDragStop) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder, ___mouseEnter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder, ___mouseOver) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXMouseEventBinder, ___drag) == 0x79, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXMouseEventBinder) == 0x80, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
