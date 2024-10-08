#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TouchScreenTextEditorEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
CORDL_MODULE_EXPORT(TouchScreenTextEditorEventHandler)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine {
class TextEditingUtilities;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TouchScreenTextEditorEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler);
// Type: UnityEngine.UIElements::TouchScreenTextEditorEventHandler
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TouchScreenTextEditorEventHandler*
class CORDL_TYPE TouchScreenTextEditorEventHandler : public ::UnityEngine::UIElements::TextEditorEventHandler {
public:
  // Declarations
  /// @brief Field m_IsClicking, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsClicking, put = __cordl_internal_set_m_IsClicking)) bool m_IsClicking;

  /// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing, put = __cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing)) bool m_TouchKeyboardAllowsInPlaceEditing;

  /// @brief Field m_TouchKeyboardPoller, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TouchKeyboardPoller,
                      put = __cordl_internal_set_m_TouchKeyboardPoller)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_TouchKeyboardPoller;

  /// @brief Method CloseTouchScreenKeyboard, addr 0x497556c, size 0xe4, virtual false, abstract: false, final false
  inline void CloseTouchScreenKeyboard();

  /// @brief Method DoPollTouchScreenKeyboard, addr 0x4974d2c, size 0x840, virtual false, abstract: false, final false
  inline void DoPollTouchScreenKeyboard();

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x4975dc8, size 0x1dc, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities);

  /// @brief Method OnFocusInEvent, addr 0x4976184, size 0x180, virtual false, abstract: false, final false
  inline void OnFocusInEvent();

  /// @brief Method OnFocusOutEvent, addr 0x4976304, size 0x480, virtual false, abstract: false, final false
  inline void OnFocusOutEvent(::UnityEngine::UIElements::FocusOutEvent* evt);

  /// @brief Method OnPointerDownEvent, addr 0x4975fa4, size 0x1c0, virtual false, abstract: false, final false
  inline void OnPointerDownEvent();

  /// @brief Method OnPointerUpEvent, addr 0x4976164, size 0x20, virtual false, abstract: false, final false
  inline void OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OpenTouchScreenKeyboard, addr 0x49758c0, size 0x508, virtual false, abstract: false, final false
  inline void OpenTouchScreenKeyboard();

  /// @brief Method PollTouchScreenKeyboard, addr 0x4974af4, size 0x238, virtual false, abstract: false, final false
  inline void PollTouchScreenKeyboard();

  /// @brief Method UpdateStringPositionFromKeyboard, addr 0x4975650, size 0x270, virtual false, abstract: false, final false
  inline void UpdateStringPositionFromKeyboard();

  constexpr bool const& __cordl_internal_get_m_IsClicking() const;

  constexpr bool& __cordl_internal_get_m_IsClicking();

  constexpr bool const& __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing() const;

  constexpr bool& __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_TouchKeyboardPoller();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const& __cordl_internal_get_m_TouchKeyboardPoller() const;

  constexpr void __cordl_internal_set_m_IsClicking(bool value);

  constexpr void __cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing(bool value);

  constexpr void __cordl_internal_set_m_TouchKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  /// @brief Method .ctor, addr 0x4974ac0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchScreenTextEditorEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TouchScreenTextEditorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchScreenTextEditorEventHandler(TouchScreenTextEditorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchScreenTextEditorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchScreenTextEditorEventHandler(TouchScreenTextEditorEventHandler const&) = delete;

  /// @brief Field m_TouchKeyboardPoller, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_TouchKeyboardPoller;

  /// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset: 0x28, size: 0x1, def value: None
  bool ___m_TouchKeyboardAllowsInPlaceEditing;

  /// @brief Field m_IsClicking, offset: 0x29, size: 0x1, def value: None
  bool ___m_IsClicking;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5583 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, ___m_TouchKeyboardPoller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, ___m_TouchKeyboardAllowsInPlaceEditing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, ___m_IsClicking) == 0x29, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*, "UnityEngine.UIElements", "TouchScreenTextEditorEventHandler");
