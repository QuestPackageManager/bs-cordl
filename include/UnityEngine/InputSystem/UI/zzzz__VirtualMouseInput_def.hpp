#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/UI/zzzz__VirtualMouseInput_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualMouseInput)
namespace System {
class Action;
}
namespace UnityEngine::InputSystem {
class Mouse;
}
namespace UnityEngine {
class Canvas;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::InputSystem::UI {
struct __VirtualMouseInput__CursorMode;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct __VirtualMouseInput__CursorMode;
}
namespace UnityEngine::InputSystem::UI {
class VirtualMouseInput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode);
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::VirtualMouseInput);
// Type: ::CursorMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6470))
// CS Name: ::VirtualMouseInput::CursorMode
struct CORDL_TYPE __VirtualMouseInput__CursorMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____VirtualMouseInput__CursorMode_Unwrapped
  enum struct ____VirtualMouseInput__CursorMode_Unwrapped : int32_t {
    __E_SoftwareCursor = static_cast<int32_t>(0x0),
    __E_HardwareCursorIfAvailable = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____VirtualMouseInput__CursorMode_Unwrapped() const noexcept {
    return static_cast<____VirtualMouseInput__CursorMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __VirtualMouseInput__CursorMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __VirtualMouseInput__CursorMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SoftwareCursor value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode const SoftwareCursor;

  /// @brief Field HardwareCursorIfAvailable value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode const HardwareCursorIfAvailable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::UI
// Type: UnityEngine.InputSystem.UI::VirtualMouseInput
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 280, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170)), TypeDefinitionIndex(TypeDefinitionIndex(6470)), TypeDefinitionIndex(TypeDefinitionIndex(10152)),
// TypeDefinitionIndex(TypeDefinitionIndex(6250))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6471)) CS Name: ::UnityEngine.InputSystem.UI::VirtualMouseInput*
class CORDL_TYPE VirtualMouseInput : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CursorMode = ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode;

  /// @brief Field m_CursorMode, offset 0x18, size 0x4
  __declspec(property(get = __get_m_CursorMode, put = __set_m_CursorMode))::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode m_CursorMode;

  /// @brief Field m_CursorGraphic, offset 0x20, size 0x8
  __declspec(property(get = __get_m_CursorGraphic, put = __set_m_CursorGraphic))::UnityEngine::UI::Graphic* m_CursorGraphic;

  /// @brief Field m_CursorTransform, offset 0x28, size 0x8
  __declspec(property(get = __get_m_CursorTransform, put = __set_m_CursorTransform))::UnityEngine::RectTransform* m_CursorTransform;

  /// @brief Field m_CursorSpeed, offset 0x30, size 0x4
  __declspec(property(get = __get_m_CursorSpeed, put = __set_m_CursorSpeed)) float_t m_CursorSpeed;

  /// @brief Field m_ScrollSpeed, offset 0x34, size 0x4
  __declspec(property(get = __get_m_ScrollSpeed, put = __set_m_ScrollSpeed)) float_t m_ScrollSpeed;

  /// @brief Field m_StickAction, offset 0x38, size 0x18
  __declspec(property(get = __get_m_StickAction, put = __set_m_StickAction))::UnityEngine::InputSystem::InputActionProperty m_StickAction;

  /// @brief Field m_LeftButtonAction, offset 0x50, size 0x18
  __declspec(property(get = __get_m_LeftButtonAction, put = __set_m_LeftButtonAction))::UnityEngine::InputSystem::InputActionProperty m_LeftButtonAction;

  /// @brief Field m_MiddleButtonAction, offset 0x68, size 0x18
  __declspec(property(get = __get_m_MiddleButtonAction, put = __set_m_MiddleButtonAction))::UnityEngine::InputSystem::InputActionProperty m_MiddleButtonAction;

  /// @brief Field m_RightButtonAction, offset 0x80, size 0x18
  __declspec(property(get = __get_m_RightButtonAction, put = __set_m_RightButtonAction))::UnityEngine::InputSystem::InputActionProperty m_RightButtonAction;

  /// @brief Field m_ForwardButtonAction, offset 0x98, size 0x18
  __declspec(property(get = __get_m_ForwardButtonAction, put = __set_m_ForwardButtonAction))::UnityEngine::InputSystem::InputActionProperty m_ForwardButtonAction;

  /// @brief Field m_BackButtonAction, offset 0xb0, size 0x18
  __declspec(property(get = __get_m_BackButtonAction, put = __set_m_BackButtonAction))::UnityEngine::InputSystem::InputActionProperty m_BackButtonAction;

  /// @brief Field m_ScrollWheelAction, offset 0xc8, size 0x18
  __declspec(property(get = __get_m_ScrollWheelAction, put = __set_m_ScrollWheelAction))::UnityEngine::InputSystem::InputActionProperty m_ScrollWheelAction;

  /// @brief Field m_Canvas, offset 0xe0, size 0x8
  __declspec(property(get = __get_m_Canvas, put = __set_m_Canvas))::UnityEngine::Canvas* m_Canvas;

  /// @brief Field m_VirtualMouse, offset 0xe8, size 0x8
  __declspec(property(get = __get_m_VirtualMouse, put = __set_m_VirtualMouse))::UnityEngine::InputSystem::Mouse* m_VirtualMouse;

  /// @brief Field m_SystemMouse, offset 0xf0, size 0x8
  __declspec(property(get = __get_m_SystemMouse, put = __set_m_SystemMouse))::UnityEngine::InputSystem::Mouse* m_SystemMouse;

  /// @brief Field m_AfterInputUpdateDelegate, offset 0xf8, size 0x8
  __declspec(property(get = __get_m_AfterInputUpdateDelegate, put = __set_m_AfterInputUpdateDelegate))::System::Action* m_AfterInputUpdateDelegate;

  /// @brief Field m_ButtonActionTriggeredDelegate, offset 0x100, size 0x8
  __declspec(property(get = __get_m_ButtonActionTriggeredDelegate,
                      put = __set_m_ButtonActionTriggeredDelegate))::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* m_ButtonActionTriggeredDelegate;

  /// @brief Field m_LastTime, offset 0x108, size 0x8
  __declspec(property(get = __get_m_LastTime, put = __set_m_LastTime)) double_t m_LastTime;

  /// @brief Field m_LastStickValue, offset 0x110, size 0x8
  __declspec(property(get = __get_m_LastStickValue, put = __set_m_LastStickValue))::UnityEngine::Vector2 m_LastStickValue;

  __declspec(property(get = get_cursorTransform, put = set_cursorTransform))::UnityEngine::RectTransform* cursorTransform;

  __declspec(property(get = get_cursorSpeed, put = set_cursorSpeed)) float_t cursorSpeed;

  __declspec(property(get = get_cursorMode, put = set_cursorMode))::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode cursorMode;

  __declspec(property(get = get_cursorGraphic, put = set_cursorGraphic))::UnityEngine::UI::Graphic* cursorGraphic;

  __declspec(property(get = get_scrollSpeed, put = set_scrollSpeed)) float_t scrollSpeed;

  __declspec(property(get = get_virtualMouse))::UnityEngine::InputSystem::Mouse* virtualMouse;

  __declspec(property(get = get_stickAction, put = set_stickAction))::UnityEngine::InputSystem::InputActionProperty stickAction;

  __declspec(property(get = get_leftButtonAction, put = set_leftButtonAction))::UnityEngine::InputSystem::InputActionProperty leftButtonAction;

  __declspec(property(get = get_rightButtonAction, put = set_rightButtonAction))::UnityEngine::InputSystem::InputActionProperty rightButtonAction;

  __declspec(property(get = get_middleButtonAction, put = set_middleButtonAction))::UnityEngine::InputSystem::InputActionProperty middleButtonAction;

  __declspec(property(get = get_forwardButtonAction, put = set_forwardButtonAction))::UnityEngine::InputSystem::InputActionProperty forwardButtonAction;

  __declspec(property(get = get_backButtonAction, put = set_backButtonAction))::UnityEngine::InputSystem::InputActionProperty backButtonAction;

  __declspec(property(get = get_scrollWheelAction, put = set_scrollWheelAction))::UnityEngine::InputSystem::InputActionProperty scrollWheelAction;

  constexpr ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode& __get_m_CursorMode();

  constexpr ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode const& __get_m_CursorMode() const;

  constexpr void __set_m_CursorMode(::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode value);

  constexpr ::UnityEngine::UI::Graphic*& __get_m_CursorGraphic();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Graphic*> const& __get_m_CursorGraphic() const;

  constexpr void __set_m_CursorGraphic(::UnityEngine::UI::Graphic* value);

  constexpr ::UnityEngine::RectTransform*& __get_m_CursorTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get_m_CursorTransform() const;

  constexpr void __set_m_CursorTransform(::UnityEngine::RectTransform* value);

  constexpr float_t& __get_m_CursorSpeed();

  constexpr float_t const& __get_m_CursorSpeed() const;

  constexpr void __set_m_CursorSpeed(float_t value);

  constexpr float_t& __get_m_ScrollSpeed();

  constexpr float_t const& __get_m_ScrollSpeed() const;

  constexpr void __set_m_ScrollSpeed(float_t value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __get_m_StickAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __get_m_StickAction() const;

  constexpr void __set_m_StickAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __get_m_LeftButtonAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __get_m_LeftButtonAction() const;

  constexpr void __set_m_LeftButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __get_m_MiddleButtonAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __get_m_MiddleButtonAction() const;

  constexpr void __set_m_MiddleButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __get_m_RightButtonAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __get_m_RightButtonAction() const;

  constexpr void __set_m_RightButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __get_m_ForwardButtonAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __get_m_ForwardButtonAction() const;

  constexpr void __set_m_ForwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __get_m_BackButtonAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __get_m_BackButtonAction() const;

  constexpr void __set_m_BackButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __get_m_ScrollWheelAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __get_m_ScrollWheelAction() const;

  constexpr void __set_m_ScrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr ::UnityEngine::Canvas*& __get_m_Canvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get_m_Canvas() const;

  constexpr void __set_m_Canvas(::UnityEngine::Canvas* value);

  constexpr ::UnityEngine::InputSystem::Mouse*& __get_m_VirtualMouse();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Mouse*> const& __get_m_VirtualMouse() const;

  constexpr void __set_m_VirtualMouse(::UnityEngine::InputSystem::Mouse* value);

  constexpr ::UnityEngine::InputSystem::Mouse*& __get_m_SystemMouse();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Mouse*> const& __get_m_SystemMouse() const;

  constexpr void __set_m_SystemMouse(::UnityEngine::InputSystem::Mouse* value);

  constexpr ::System::Action*& __get_m_AfterInputUpdateDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_m_AfterInputUpdateDelegate() const;

  constexpr void __set_m_AfterInputUpdateDelegate(::System::Action* value);

  constexpr ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*& __get_m_ButtonActionTriggeredDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const& __get_m_ButtonActionTriggeredDelegate() const;

  constexpr void __set_m_ButtonActionTriggeredDelegate(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* value);

  constexpr double_t& __get_m_LastTime();

  constexpr double_t const& __get_m_LastTime() const;

  constexpr void __set_m_LastTime(double_t value);

  constexpr ::UnityEngine::Vector2& __get_m_LastStickValue();

  constexpr ::UnityEngine::Vector2 const& __get_m_LastStickValue() const;

  constexpr void __set_m_LastStickValue(::UnityEngine::Vector2 value);

  /// @brief Method get_cursorTransform addr 0x295786c size 0x8 virtual false final false
  inline ::UnityEngine::RectTransform* get_cursorTransform();

  /// @brief Method set_cursorTransform addr 0x2957874 size 0x8 virtual false final false
  inline void set_cursorTransform(::UnityEngine::RectTransform* value);

  /// @brief Method get_cursorSpeed addr 0x295787c size 0x8 virtual false final false
  inline float_t get_cursorSpeed();

  /// @brief Method set_cursorSpeed addr 0x2957884 size 0x8 virtual false final false
  inline void set_cursorSpeed(float_t value);

  /// @brief Method get_cursorMode addr 0x295788c size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode get_cursorMode();

  /// @brief Method set_cursorMode addr 0x2957894 size 0xf8 virtual false final false
  inline void set_cursorMode(::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode value);

  /// @brief Method get_cursorGraphic addr 0x2957ba4 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Graphic* get_cursorGraphic();

  /// @brief Method set_cursorGraphic addr 0x2957bac size 0x8 virtual false final false
  inline void set_cursorGraphic(::UnityEngine::UI::Graphic* value);

  /// @brief Method get_scrollSpeed addr 0x2957c08 size 0x8 virtual false final false
  inline float_t get_scrollSpeed();

  /// @brief Method set_scrollSpeed addr 0x2957c10 size 0x8 virtual false final false
  inline void set_scrollSpeed(float_t value);

  /// @brief Method get_virtualMouse addr 0x2957c18 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Mouse* get_virtualMouse();

  /// @brief Method get_stickAction addr 0x2957c20 size 0x14 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_stickAction();

  /// @brief Method set_stickAction addr 0x2957c34 size 0x30 virtual false final false
  inline void set_stickAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method get_leftButtonAction addr 0x2957d8c size 0x14 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_leftButtonAction();

  /// @brief Method set_leftButtonAction addr 0x2957da0 size 0x90 virtual false final false
  inline void set_leftButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method get_rightButtonAction addr 0x2957ea0 size 0x14 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_rightButtonAction();

  /// @brief Method set_rightButtonAction addr 0x2957eb4 size 0x90 virtual false final false
  inline void set_rightButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method get_middleButtonAction addr 0x2957f44 size 0x14 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_middleButtonAction();

  /// @brief Method set_middleButtonAction addr 0x2957f58 size 0x90 virtual false final false
  inline void set_middleButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method get_forwardButtonAction addr 0x2957fe8 size 0x14 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_forwardButtonAction();

  /// @brief Method set_forwardButtonAction addr 0x2957ffc size 0x90 virtual false final false
  inline void set_forwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method get_backButtonAction addr 0x295808c size 0x14 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_backButtonAction();

  /// @brief Method set_backButtonAction addr 0x29580a0 size 0x90 virtual false final false
  inline void set_backButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method get_scrollWheelAction addr 0x2958130 size 0x14 virtual false final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_scrollWheelAction();

  /// @brief Method set_scrollWheelAction addr 0x2958144 size 0x30 virtual false final false
  inline void set_scrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method OnEnable addr 0x2958174 size 0x40c virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x2958580 size 0x23c virtual false final false
  inline void OnDisable();

  /// @brief Method TryFindCanvas addr 0x2957bb4 size 0x54 virtual false final false
  inline void TryFindCanvas();

  /// @brief Method TryEnableHardwareCursor addr 0x295798c size 0x218 virtual false final false
  inline void TryEnableHardwareCursor();

  /// @brief Method UpdateMotion addr 0x29587bc size 0x3b8 virtual false final false
  inline void UpdateMotion();

  /// @brief Method OnButtonActionTriggered addr 0x2958b74 size 0x1f4 virtual false final false
  inline void OnButtonActionTriggered(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method SetActionCallback addr 0x2957e30 size 0x70 virtual false final false
  static inline void SetActionCallback(::UnityEngine::InputSystem::InputActionProperty field, ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* callback, bool install);

  /// @brief Method SetAction addr 0x2957c64 size 0x128 virtual false final false
  static inline void SetAction(ByRef<::UnityEngine::InputSystem::InputActionProperty> field, ::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method OnAfterInputUpdate addr 0x2958d68 size 0x4 virtual false final false
  inline void OnAfterInputUpdate();

  static inline ::UnityEngine::InputSystem::UI::VirtualMouseInput* New_ctor();

  /// @brief Method .ctor addr 0x2958d6c size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VirtualMouseInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VirtualMouseInput(VirtualMouseInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VirtualMouseInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VirtualMouseInput(VirtualMouseInput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VirtualMouseInput();

public:
  /// @brief Field m_CursorMode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode ___m_CursorMode;

  /// @brief Field m_CursorGraphic, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Graphic* ___m_CursorGraphic;

  /// @brief Field m_CursorTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ___m_CursorTransform;

  /// @brief Field m_CursorSpeed, offset: 0x30, size: 0x4, def value: None
  float_t ___m_CursorSpeed;

  /// @brief Field m_ScrollSpeed, offset: 0x34, size: 0x4, def value: None
  float_t ___m_ScrollSpeed;

  /// @brief Field m_StickAction, offset: 0x38, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_StickAction;

  /// @brief Field m_LeftButtonAction, offset: 0x50, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_LeftButtonAction;

  /// @brief Field m_MiddleButtonAction, offset: 0x68, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_MiddleButtonAction;

  /// @brief Field m_RightButtonAction, offset: 0x80, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_RightButtonAction;

  /// @brief Field m_ForwardButtonAction, offset: 0x98, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_ForwardButtonAction;

  /// @brief Field m_BackButtonAction, offset: 0xb0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_BackButtonAction;

  /// @brief Field m_ScrollWheelAction, offset: 0xc8, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_ScrollWheelAction;

  /// @brief Field m_Canvas, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Canvas* ___m_Canvas;

  /// @brief Field m_VirtualMouse, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Mouse* ___m_VirtualMouse;

  /// @brief Field m_SystemMouse, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Mouse* ___m_SystemMouse;

  /// @brief Field m_AfterInputUpdateDelegate, offset: 0xf8, size: 0x8, def value: None
  ::System::Action* ___m_AfterInputUpdateDelegate;

  /// @brief Field m_ButtonActionTriggeredDelegate, offset: 0x100, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>* ___m_ButtonActionTriggeredDelegate;

  /// @brief Field m_LastTime, offset: 0x108, size: 0x8, def value: None
  double_t ___m_LastTime;

  /// @brief Field m_LastStickValue, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastStickValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::VirtualMouseInput, 0x118>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_CursorMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_CursorGraphic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_CursorTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_CursorSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_ScrollSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_StickAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_LeftButtonAction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_MiddleButtonAction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_RightButtonAction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_ForwardButtonAction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_BackButtonAction) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_ScrollWheelAction) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_Canvas) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_VirtualMouse) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_SystemMouse) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_AfterInputUpdateDelegate) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_ButtonActionTriggeredDelegate) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_LastTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_LastStickValue) == 0x110, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::__VirtualMouseInput__CursorMode, "UnityEngine.InputSystem.UI", "VirtualMouseInput/CursorMode");
NEED_NO_BOX(::UnityEngine::InputSystem::UI::VirtualMouseInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::VirtualMouseInput*, "UnityEngine.InputSystem.UI", "VirtualMouseInput");
