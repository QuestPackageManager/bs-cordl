#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardTextEditorEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
CORDL_MODULE_EXPORT(KeyboardTextEditorEventHandler)
namespace UnityEngine::UIElements {
class BlurEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class ExecuteCommandEvent;
}
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
template <typename T> class NavigationEventBase_1;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class ValidateCommandEvent;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class TextEditingUtilities;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyboardTextEditorEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyboardTextEditorEventHandler);
// Dependencies UnityEngine.UIElements.TextEditorEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.KeyboardTextEditorEventHandler
class CORDL_TYPE KeyboardTextEditorEventHandler : public ::UnityEngine::UIElements::TextEditorEventHandler {
public:
  // Declarations
  /// @brief Field m_Changed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Changed, put = __cordl_internal_set_m_Changed)) bool m_Changed;

  /// @brief Field m_ImguiEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ImguiEvent, put = __cordl_internal_set_m_ImguiEvent)) ::UnityEngine::Event* m_ImguiEvent;

  /// @brief Method HandleEventBubbleUp, addr 0x6b159d8, size 0x304, virtual true, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::KeyboardTextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities);

  /// @brief Method OnBlur, addr 0x6b16a6c, size 0x74, virtual false, abstract: false, final false
  inline void OnBlur(::UnityEngine::UIElements::BlurEvent* _);

  /// @brief Method OnExecuteCommandEvent, addr 0x6b16724, size 0x250, virtual false, abstract: false, final false
  inline void OnExecuteCommandEvent(::UnityEngine::UIElements::ExecuteCommandEvent* evt);

  /// @brief Method OnFocus, addr 0x6b16974, size 0xf8, virtual false, abstract: false, final false
  inline void OnFocus(::UnityEngine::UIElements::FocusEvent* _);

  /// @brief Method OnKeyDown, addr 0x6b15ce0, size 0x838, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnNavigationEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEvent> inline void OnNavigationEvent(::UnityEngine::UIElements::NavigationEventBase_1<TEvent>* evt);

  /// @brief Method OnValidateCommandEvent, addr 0x6b16518, size 0x20c, virtual false, abstract: false, final false
  inline void OnValidateCommandEvent(::UnityEngine::UIElements::ValidateCommandEvent* evt);

  /// @brief Method UpdateLabel, addr 0x6b16ae0, size 0x280, virtual false, abstract: false, final false
  inline void UpdateLabel(bool generatePreview);

  constexpr bool const& __cordl_internal_get_m_Changed() const;

  constexpr bool& __cordl_internal_get_m_Changed();

  constexpr ::UnityEngine::Event* const& __cordl_internal_get_m_ImguiEvent() const;

  constexpr ::UnityEngine::Event*& __cordl_internal_get_m_ImguiEvent();

  constexpr void __cordl_internal_set_m_Changed(bool value);

  constexpr void __cordl_internal_set_m_ImguiEvent(::UnityEngine::Event* value);

  /// @brief Method .ctor, addr 0x6b158b8, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardTextEditorEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyboardTextEditorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyboardTextEditorEventHandler(KeyboardTextEditorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardTextEditorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyboardTextEditorEventHandler(KeyboardTextEditorEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4222 };

  /// @brief Field m_ImguiEvent, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_ImguiEvent;

  /// @brief Field m_Changed, offset: 0x28, size: 0x1, def value: None
  bool ___m_Changed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_ImguiEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_Changed) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyboardTextEditorEventHandler, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyboardTextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyboardTextEditorEventHandler*, "UnityEngine.UIElements", "KeyboardTextEditorEventHandler");
