#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TouchScreenTextEditorEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
#include <cstdint>
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
namespace UnityEngine {
class TouchScreenKeyboard;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TouchScreenTextEditorEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler);
// Dependencies UnityEngine.UIElements.TextEditorEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TouchScreenTextEditorEventHandler
class CORDL_TYPE TouchScreenTextEditorEventHandler : public ::UnityEngine::UIElements::TextEditorEventHandler {
public:
  // Declarations
  /// @brief Field <Frame>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Frame_k__BackingField, put = setStaticF__Frame_k__BackingField)) int64_t _Frame_k__BackingField;

  /// @brief Field <activeTouchScreenKeyboard>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__activeTouchScreenKeyboard_k__BackingField,
                      put = setStaticF__activeTouchScreenKeyboard_k__BackingField)) ::UnityEngine::TouchScreenKeyboard* _activeTouchScreenKeyboard_k__BackingField;

  /// @brief Field m_IsClicking, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsClicking, put = __cordl_internal_set_m_IsClicking)) bool m_IsClicking;

  /// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing, put = __cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing)) bool m_TouchKeyboardAllowsInPlaceEditing;

  /// @brief Field m_TouchKeyboardPoller, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TouchKeyboardPoller,
                      put = __cordl_internal_set_m_TouchKeyboardPoller)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_TouchKeyboardPoller;

  /// @brief Method CloseTouchScreenKeyboard, addr 0x6b81b08, size 0x134, virtual false, abstract: false, final false
  inline void CloseTouchScreenKeyboard();

  /// @brief Method DoPollTouchScreenKeyboard, addr 0x6b81288, size 0x880, virtual false, abstract: false, final false
  inline void DoPollTouchScreenKeyboard();

  /// @brief Method HandleEventBubbleUp, addr 0x6b823a8, size 0x1ec, virtual true, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities);

  /// @brief Method OnFocusInEvent, addr 0x6b82748, size 0x164, virtual false, abstract: false, final false
  inline void OnFocusInEvent();

  /// @brief Method OnFocusOutEvent, addr 0x6b828ac, size 0x3f4, virtual false, abstract: false, final false
  inline void OnFocusOutEvent(::UnityEngine::UIElements::FocusOutEvent* evt);

  /// @brief Method OnPointerDownEvent, addr 0x6b82594, size 0x194, virtual false, abstract: false, final false
  inline void OnPointerDownEvent();

  /// @brief Method OnPointerUpEvent, addr 0x6b82728, size 0x20, virtual false, abstract: false, final false
  inline void OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OpenTouchScreenKeyboard, addr 0x6b81e88, size 0x520, virtual false, abstract: false, final false
  inline void OpenTouchScreenKeyboard();

  /// @brief Method PollTouchScreenKeyboard, addr 0x6b8102c, size 0x25c, virtual false, abstract: false, final false
  inline void PollTouchScreenKeyboard();

  /// @brief Method UpdateStringPositionFromKeyboard, addr 0x6b81c3c, size 0x24c, virtual false, abstract: false, final false
  inline void UpdateStringPositionFromKeyboard();

  constexpr bool const& __cordl_internal_get_m_IsClicking() const;

  constexpr bool& __cordl_internal_get_m_IsClicking();

  constexpr bool const& __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing() const;

  constexpr bool& __cordl_internal_get_m_TouchKeyboardAllowsInPlaceEditing();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_TouchKeyboardPoller() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_TouchKeyboardPoller();

  constexpr void __cordl_internal_set_m_IsClicking(bool value);

  constexpr void __cordl_internal_set_m_TouchKeyboardAllowsInPlaceEditing(bool value);

  constexpr void __cordl_internal_set_m_TouchKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  /// @brief Method .ctor, addr 0x6b8101c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities);

  static inline int64_t getStaticF__Frame_k__BackingField();

  static inline ::UnityEngine::TouchScreenKeyboard* getStaticF__activeTouchScreenKeyboard_k__BackingField();

  /// @brief Method get_Frame, addr 0x6b80f30, size 0x4c, virtual false, abstract: false, final false
  static inline int64_t get_Frame();

  static inline void setStaticF__Frame_k__BackingField(int64_t value);

  static inline void setStaticF__activeTouchScreenKeyboard_k__BackingField(::UnityEngine::TouchScreenKeyboard* value);

  /// @brief Method set_Frame, addr 0x6b80f7c, size 0x50, virtual false, abstract: false, final false
  static inline void set_Frame(int64_t value);

  /// @brief Method set_activeTouchScreenKeyboard, addr 0x6b80fcc, size 0x50, virtual false, abstract: false, final false
  static inline void set_activeTouchScreenKeyboard(::UnityEngine::TouchScreenKeyboard* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4231 };

  /// @brief Field m_TouchKeyboardPoller, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_TouchKeyboardPoller;

  /// @brief Field m_TouchKeyboardAllowsInPlaceEditing, offset: 0x28, size: 0x1, def value: None
  bool ___m_TouchKeyboardAllowsInPlaceEditing;

  /// @brief Field m_IsClicking, offset: 0x29, size: 0x1, def value: None
  bool ___m_IsClicking;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, ___m_TouchKeyboardPoller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, ___m_TouchKeyboardAllowsInPlaceEditing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, ___m_IsClicking) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*, "UnityEngine.UIElements", "TouchScreenTextEditorEventHandler");
