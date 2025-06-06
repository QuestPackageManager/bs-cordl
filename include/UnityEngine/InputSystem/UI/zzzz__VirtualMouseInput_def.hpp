#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/VirtualMouseInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualMouseInput)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::UI {
struct VirtualMouseInput_CursorMode;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
namespace UnityEngine::InputSystem {
class Mouse;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct VirtualMouseInput_CursorMode;
}
namespace UnityEngine::InputSystem::UI {
class VirtualMouseInput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode);
MARK_REF_PTR_T(::UnityEngine::InputSystem::UI::VirtualMouseInput);
// Dependencies
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// CS Name: UnityEngine.InputSystem.UI.VirtualMouseInput/CursorMode
struct CORDL_TYPE VirtualMouseInput_CursorMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VirtualMouseInput_CursorMode_Unwrapped
  enum struct __VirtualMouseInput_CursorMode_Unwrapped : int32_t {
    __E_SoftwareCursor = static_cast<int32_t>(0x0),
    __E_HardwareCursorIfAvailable = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VirtualMouseInput_CursorMode_Unwrapped() const noexcept {
    return static_cast<__VirtualMouseInput_CursorMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VirtualMouseInput_CursorMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VirtualMouseInput_CursorMode(int32_t value__) noexcept;

  /// @brief Field HardwareCursorIfAvailable value: I32(1)
  static ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode const HardwareCursorIfAvailable;

  /// @brief Field SoftwareCursor value: I32(0)
  static ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode const SoftwareCursor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6793 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
// Dependencies UnityEngine.InputSystem.InputActionProperty, UnityEngine.InputSystem.UI.VirtualMouseInput::CursorMode, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.UI.VirtualMouseInput
class CORDL_TYPE VirtualMouseInput : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CursorMode = ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode;

  __declspec(property(get = get_backButtonAction, put = set_backButtonAction)) ::UnityEngine::InputSystem::InputActionProperty backButtonAction;

  __declspec(property(get = get_cursorGraphic, put = set_cursorGraphic)) ::UnityW<::UnityEngine::UI::Graphic> cursorGraphic;

  __declspec(property(get = get_cursorMode, put = set_cursorMode)) ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode cursorMode;

  __declspec(property(get = get_cursorSpeed, put = set_cursorSpeed)) float_t cursorSpeed;

  __declspec(property(get = get_cursorTransform, put = set_cursorTransform)) ::UnityW<::UnityEngine::RectTransform> cursorTransform;

  __declspec(property(get = get_forwardButtonAction, put = set_forwardButtonAction)) ::UnityEngine::InputSystem::InputActionProperty forwardButtonAction;

  __declspec(property(get = get_leftButtonAction, put = set_leftButtonAction)) ::UnityEngine::InputSystem::InputActionProperty leftButtonAction;

  /// @brief Field m_AfterInputUpdateDelegate, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AfterInputUpdateDelegate, put = __cordl_internal_set_m_AfterInputUpdateDelegate)) ::System::Action* m_AfterInputUpdateDelegate;

  /// @brief Field m_BackButtonAction, offset 0xb8, size 0x18
  __declspec(property(get = __cordl_internal_get_m_BackButtonAction, put = __cordl_internal_set_m_BackButtonAction)) ::UnityEngine::InputSystem::InputActionProperty m_BackButtonAction;

  /// @brief Field m_ButtonActionTriggeredDelegate, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ButtonActionTriggeredDelegate,
                      put = __cordl_internal_set_m_ButtonActionTriggeredDelegate)) ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* m_ButtonActionTriggeredDelegate;

  /// @brief Field m_Canvas, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Canvas, put = __cordl_internal_set_m_Canvas)) ::UnityW<::UnityEngine::Canvas> m_Canvas;

  /// @brief Field m_CursorGraphic, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CursorGraphic, put = __cordl_internal_set_m_CursorGraphic)) ::UnityW<::UnityEngine::UI::Graphic> m_CursorGraphic;

  /// @brief Field m_CursorMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CursorMode, put = __cordl_internal_set_m_CursorMode)) ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode m_CursorMode;

  /// @brief Field m_CursorSpeed, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CursorSpeed, put = __cordl_internal_set_m_CursorSpeed)) float_t m_CursorSpeed;

  /// @brief Field m_CursorTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CursorTransform, put = __cordl_internal_set_m_CursorTransform)) ::UnityW<::UnityEngine::RectTransform> m_CursorTransform;

  /// @brief Field m_ForwardButtonAction, offset 0xa0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ForwardButtonAction, put = __cordl_internal_set_m_ForwardButtonAction)) ::UnityEngine::InputSystem::InputActionProperty m_ForwardButtonAction;

  /// @brief Field m_LastStickValue, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastStickValue, put = __cordl_internal_set_m_LastStickValue)) ::UnityEngine::Vector2 m_LastStickValue;

  /// @brief Field m_LastTime, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastTime, put = __cordl_internal_set_m_LastTime)) double_t m_LastTime;

  /// @brief Field m_LeftButtonAction, offset 0x58, size 0x18
  __declspec(property(get = __cordl_internal_get_m_LeftButtonAction, put = __cordl_internal_set_m_LeftButtonAction)) ::UnityEngine::InputSystem::InputActionProperty m_LeftButtonAction;

  /// @brief Field m_MiddleButtonAction, offset 0x70, size 0x18
  __declspec(property(get = __cordl_internal_get_m_MiddleButtonAction, put = __cordl_internal_set_m_MiddleButtonAction)) ::UnityEngine::InputSystem::InputActionProperty m_MiddleButtonAction;

  /// @brief Field m_RightButtonAction, offset 0x88, size 0x18
  __declspec(property(get = __cordl_internal_get_m_RightButtonAction, put = __cordl_internal_set_m_RightButtonAction)) ::UnityEngine::InputSystem::InputActionProperty m_RightButtonAction;

  /// @brief Field m_ScrollSpeed, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScrollSpeed, put = __cordl_internal_set_m_ScrollSpeed)) float_t m_ScrollSpeed;

  /// @brief Field m_ScrollWheelAction, offset 0xd0, size 0x18
  __declspec(property(get = __cordl_internal_get_m_ScrollWheelAction, put = __cordl_internal_set_m_ScrollWheelAction)) ::UnityEngine::InputSystem::InputActionProperty m_ScrollWheelAction;

  /// @brief Field m_StickAction, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get_m_StickAction, put = __cordl_internal_set_m_StickAction)) ::UnityEngine::InputSystem::InputActionProperty m_StickAction;

  /// @brief Field m_SystemMouse, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SystemMouse, put = __cordl_internal_set_m_SystemMouse)) ::UnityEngine::InputSystem::Mouse* m_SystemMouse;

  /// @brief Field m_VirtualMouse, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VirtualMouse, put = __cordl_internal_set_m_VirtualMouse)) ::UnityEngine::InputSystem::Mouse* m_VirtualMouse;

  __declspec(property(get = get_middleButtonAction, put = set_middleButtonAction)) ::UnityEngine::InputSystem::InputActionProperty middleButtonAction;

  __declspec(property(get = get_rightButtonAction, put = set_rightButtonAction)) ::UnityEngine::InputSystem::InputActionProperty rightButtonAction;

  __declspec(property(get = get_scrollSpeed, put = set_scrollSpeed)) float_t scrollSpeed;

  __declspec(property(get = get_scrollWheelAction, put = set_scrollWheelAction)) ::UnityEngine::InputSystem::InputActionProperty scrollWheelAction;

  __declspec(property(get = get_stickAction, put = set_stickAction)) ::UnityEngine::InputSystem::InputActionProperty stickAction;

  __declspec(property(get = get_virtualMouse)) ::UnityEngine::InputSystem::Mouse* virtualMouse;

  static inline ::UnityEngine::InputSystem::UI::VirtualMouseInput* New_ctor();

  /// @brief Method OnAfterInputUpdate, addr 0x45f7854, size 0x4, virtual false, abstract: false, final false
  inline void OnAfterInputUpdate();

  /// @brief Method OnButtonActionTriggered, addr 0x45f765c, size 0x1f8, virtual false, abstract: false, final false
  inline void OnButtonActionTriggered(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnDisable, addr 0x45f7084, size 0x23c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x45f6c80, size 0x404, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetAction, addr 0x45f6770, size 0x128, virtual false, abstract: false, final false
  static inline void SetAction(::ByRef<::UnityEngine::InputSystem::InputActionProperty> field, ::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method SetActionCallback, addr 0x45f693c, size 0x70, virtual false, abstract: false, final false
  static inline void SetActionCallback(::UnityEngine::InputSystem::InputActionProperty field, ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* callback, bool install);

  /// @brief Method TryEnableHardwareCursor, addr 0x45f6498, size 0x218, virtual false, abstract: false, final false
  inline void TryEnableHardwareCursor();

  /// @brief Method TryFindCanvas, addr 0x45f66c0, size 0x54, virtual false, abstract: false, final false
  inline void TryFindCanvas();

  /// @brief Method UpdateMotion, addr 0x45f72c0, size 0x39c, virtual false, abstract: false, final false
  inline void UpdateMotion();

  constexpr ::System::Action* const& __cordl_internal_get_m_AfterInputUpdateDelegate() const;

  constexpr ::System::Action*& __cordl_internal_get_m_AfterInputUpdateDelegate();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_BackButtonAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_BackButtonAction();

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* const& __cordl_internal_get_m_ButtonActionTriggeredDelegate() const;

  constexpr ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>*& __cordl_internal_get_m_ButtonActionTriggeredDelegate();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get_m_Canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get_m_Canvas();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_CursorGraphic() const;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_CursorGraphic();

  constexpr ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode const& __cordl_internal_get_m_CursorMode() const;

  constexpr ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode& __cordl_internal_get_m_CursorMode();

  constexpr float_t const& __cordl_internal_get_m_CursorSpeed() const;

  constexpr float_t& __cordl_internal_get_m_CursorSpeed();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_CursorTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_CursorTransform();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_ForwardButtonAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_ForwardButtonAction();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastStickValue() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastStickValue();

  constexpr double_t const& __cordl_internal_get_m_LastTime() const;

  constexpr double_t& __cordl_internal_get_m_LastTime();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_LeftButtonAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_LeftButtonAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_MiddleButtonAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_MiddleButtonAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RightButtonAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RightButtonAction();

  constexpr float_t const& __cordl_internal_get_m_ScrollSpeed() const;

  constexpr float_t& __cordl_internal_get_m_ScrollSpeed();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_ScrollWheelAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_ScrollWheelAction();

  constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_StickAction() const;

  constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_StickAction();

  constexpr ::UnityEngine::InputSystem::Mouse* const& __cordl_internal_get_m_SystemMouse() const;

  constexpr ::UnityEngine::InputSystem::Mouse*& __cordl_internal_get_m_SystemMouse();

  constexpr ::UnityEngine::InputSystem::Mouse* const& __cordl_internal_get_m_VirtualMouse() const;

  constexpr ::UnityEngine::InputSystem::Mouse*& __cordl_internal_get_m_VirtualMouse();

  constexpr void __cordl_internal_set_m_AfterInputUpdateDelegate(::System::Action* value);

  constexpr void __cordl_internal_set_m_BackButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_ButtonActionTriggeredDelegate(::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* value);

  constexpr void __cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_m_CursorGraphic(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr void __cordl_internal_set_m_CursorMode(::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode value);

  constexpr void __cordl_internal_set_m_CursorSpeed(float_t value);

  constexpr void __cordl_internal_set_m_CursorTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_ForwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_LastStickValue(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_LastTime(double_t value);

  constexpr void __cordl_internal_set_m_LeftButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_MiddleButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_RightButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_ScrollSpeed(float_t value);

  constexpr void __cordl_internal_set_m_ScrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_StickAction(::UnityEngine::InputSystem::InputActionProperty value);

  constexpr void __cordl_internal_set_m_SystemMouse(::UnityEngine::InputSystem::Mouse* value);

  constexpr void __cordl_internal_set_m_VirtualMouse(::UnityEngine::InputSystem::Mouse* value);

  /// @brief Method .ctor, addr 0x45f7858, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_backButtonAction, addr 0x45f6b98, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_backButtonAction();

  /// @brief Method get_cursorGraphic, addr 0x45f66b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_cursorGraphic();

  /// @brief Method get_cursorMode, addr 0x45f6398, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode get_cursorMode();

  /// @brief Method get_cursorSpeed, addr 0x45f6388, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cursorSpeed();

  /// @brief Method get_cursorTransform, addr 0x45f6378, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_cursorTransform();

  /// @brief Method get_forwardButtonAction, addr 0x45f6af4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_forwardButtonAction();

  /// @brief Method get_leftButtonAction, addr 0x45f6898, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_leftButtonAction();

  /// @brief Method get_middleButtonAction, addr 0x45f6a50, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_middleButtonAction();

  /// @brief Method get_rightButtonAction, addr 0x45f69ac, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_rightButtonAction();

  /// @brief Method get_scrollSpeed, addr 0x45f6714, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scrollSpeed();

  /// @brief Method get_scrollWheelAction, addr 0x45f6c3c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_scrollWheelAction();

  /// @brief Method get_stickAction, addr 0x45f672c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputActionProperty get_stickAction();

  /// @brief Method get_virtualMouse, addr 0x45f6724, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Mouse* get_virtualMouse();

  /// @brief Method set_backButtonAction, addr 0x45f6bac, size 0x90, virtual false, abstract: false, final false
  inline void set_backButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_cursorGraphic, addr 0x45f66b8, size 0x8, virtual false, abstract: false, final false
  inline void set_cursorGraphic(::UnityEngine::UI::Graphic* value);

  /// @brief Method set_cursorMode, addr 0x45f63a0, size 0xf8, virtual false, abstract: false, final false
  inline void set_cursorMode(::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode value);

  /// @brief Method set_cursorSpeed, addr 0x45f6390, size 0x8, virtual false, abstract: false, final false
  inline void set_cursorSpeed(float_t value);

  /// @brief Method set_cursorTransform, addr 0x45f6380, size 0x8, virtual false, abstract: false, final false
  inline void set_cursorTransform(::UnityEngine::RectTransform* value);

  /// @brief Method set_forwardButtonAction, addr 0x45f6b08, size 0x90, virtual false, abstract: false, final false
  inline void set_forwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_leftButtonAction, addr 0x45f68ac, size 0x90, virtual false, abstract: false, final false
  inline void set_leftButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_middleButtonAction, addr 0x45f6a64, size 0x90, virtual false, abstract: false, final false
  inline void set_middleButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_rightButtonAction, addr 0x45f69c0, size 0x90, virtual false, abstract: false, final false
  inline void set_rightButtonAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_scrollSpeed, addr 0x45f671c, size 0x8, virtual false, abstract: false, final false
  inline void set_scrollSpeed(float_t value);

  /// @brief Method set_scrollWheelAction, addr 0x45f6c50, size 0x30, virtual false, abstract: false, final false
  inline void set_scrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value);

  /// @brief Method set_stickAction, addr 0x45f6740, size 0x30, virtual false, abstract: false, final false
  inline void set_stickAction(::UnityEngine::InputSystem::InputActionProperty value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VirtualMouseInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VirtualMouseInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VirtualMouseInput(VirtualMouseInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VirtualMouseInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VirtualMouseInput(VirtualMouseInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6794 };

  /// @brief Field m_CursorMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode ___m_CursorMode;

  /// @brief Field m_CursorGraphic, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ___m_CursorGraphic;

  /// @brief Field m_CursorTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_CursorTransform;

  /// @brief Field m_CursorSpeed, offset: 0x38, size: 0x4, def value: None
  float_t ___m_CursorSpeed;

  /// @brief Field m_ScrollSpeed, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_ScrollSpeed;

  /// @brief Field m_StickAction, offset: 0x40, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_StickAction;

  /// @brief Field m_LeftButtonAction, offset: 0x58, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_LeftButtonAction;

  /// @brief Field m_MiddleButtonAction, offset: 0x70, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_MiddleButtonAction;

  /// @brief Field m_RightButtonAction, offset: 0x88, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_RightButtonAction;

  /// @brief Field m_ForwardButtonAction, offset: 0xa0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_ForwardButtonAction;

  /// @brief Field m_BackButtonAction, offset: 0xb8, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_BackButtonAction;

  /// @brief Field m_ScrollWheelAction, offset: 0xd0, size: 0x18, def value: None
  ::UnityEngine::InputSystem::InputActionProperty ___m_ScrollWheelAction;

  /// @brief Field m_Canvas, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ___m_Canvas;

  /// @brief Field m_VirtualMouse, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Mouse* ___m_VirtualMouse;

  /// @brief Field m_SystemMouse, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Mouse* ___m_SystemMouse;

  /// @brief Field m_AfterInputUpdateDelegate, offset: 0x100, size: 0x8, def value: None
  ::System::Action* ___m_AfterInputUpdateDelegate;

  /// @brief Field m_ButtonActionTriggeredDelegate, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::InputSystem::InputAction_CallbackContext>* ___m_ButtonActionTriggeredDelegate;

  /// @brief Field m_LastTime, offset: 0x110, size: 0x8, def value: None
  double_t ___m_LastTime;

  /// @brief Field m_LastStickValue, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastStickValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_CursorMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_CursorGraphic) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_CursorTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_CursorSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_ScrollSpeed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_StickAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_LeftButtonAction) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_MiddleButtonAction) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_RightButtonAction) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_ForwardButtonAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_BackButtonAction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_ScrollWheelAction) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_Canvas) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_VirtualMouse) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_SystemMouse) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_AfterInputUpdateDelegate) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_ButtonActionTriggeredDelegate) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_LastTime) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::UI::VirtualMouseInput, ___m_LastStickValue) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::VirtualMouseInput, 0x120>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::VirtualMouseInput_CursorMode, "UnityEngine.InputSystem.UI", "VirtualMouseInput/CursorMode");
NEED_NO_BOX(::UnityEngine::InputSystem::UI::VirtualMouseInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::VirtualMouseInput*, "UnityEngine.InputSystem.UI", "VirtualMouseInput");
