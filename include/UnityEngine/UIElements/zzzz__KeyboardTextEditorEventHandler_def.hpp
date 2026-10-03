#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardTextEditorEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
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
class IMEEvent;
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
class TextEditingUtilities;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyboardTextEditorEventHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::KeyboardTextEditorEventHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::KeyboardTextEditorEventHandler*, "UnityEngine.UIElements", "KeyboardTextEditorEventHandler");
// Dependencies UnityEngine.UIElements.NavigationEventBase`1<T>, UnityEngine.UIElements.TextEditorEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.KeyboardTextEditorEventHandler
class CORDL_TYPE KeyboardTextEditorEventHandler : public ::UnityEngine::UIElements::TextEditorEventHandler {
public:
  // Declarations
  /// @brief Field m_Changed, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Changed, put = __cordl_internal_set_m_Changed)) bool m_Changed;

  /// @brief Field m_ShouldInvokeUpdateValue, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldInvokeUpdateValue, put = __cordl_internal_set_m_ShouldInvokeUpdateValue)) bool m_ShouldInvokeUpdateValue;

  /// @brief Method ApplyTextIfNeeded, addr 0x71bee98, size 0xd0, virtual false, abstract: false, final false
  inline void ApplyTextIfNeeded();

  /// @brief Method HandleEventBubbleUp, addr 0x71bdbec, size 0x354, virtual true, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::KeyboardTextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities);

  /// @brief Method OnBlur, addr 0x71beb14, size 0x74, virtual false, abstract: false, final false
  inline void OnBlur(::UnityEngine::UIElements::BlurEvent* _);

  /// @brief Method OnExecuteCommandEvent, addr 0x71be7cc, size 0x250, virtual false, abstract: false, final false
  inline void OnExecuteCommandEvent(::UnityEngine::UIElements::ExecuteCommandEvent* evt);

  /// @brief Method OnFocus, addr 0x71bea1c, size 0xf8, virtual false, abstract: false, final false
  inline void OnFocus(::UnityEngine::UIElements::FocusEvent* _);

  /// @brief Method OnIMEInput, addr 0x71beb88, size 0x5c, virtual false, abstract: false, final false
  inline void OnIMEInput(::UnityEngine::UIElements::IMEEvent* _);

  /// @brief Method OnKeyDown, addr 0x71bdf44, size 0x67c, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnNavigationEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TEvent>
    requires(::cordl_internals::type_constraint<TEvent, ::UnityEngine::UIElements::NavigationEventBase_1<TEvent>*> && ::cordl_internals::default_constructor_constraint<TEvent>)
  inline void OnNavigationEvent(::UnityEngine::UIElements::NavigationEventBase_1<TEvent>* evt);

  /// @brief Method OnValidateCommandEvent, addr 0x71be5c0, size 0x20c, virtual false, abstract: false, final false
  inline void OnValidateCommandEvent(::UnityEngine::UIElements::ValidateCommandEvent* evt);

  /// @brief Method UpdateLabel, addr 0x71bebe4, size 0x2b4, virtual false, abstract: false, final false
  inline void UpdateLabel(bool generatePreview);

  constexpr bool const& __cordl_internal_get_m_Changed() const;

  constexpr bool& __cordl_internal_get_m_Changed();

  constexpr bool const& __cordl_internal_get_m_ShouldInvokeUpdateValue() const;

  constexpr bool& __cordl_internal_get_m_ShouldInvokeUpdateValue();

  constexpr void __cordl_internal_set_m_Changed(bool value);

  constexpr void __cordl_internal_set_m_ShouldInvokeUpdateValue(bool value);

  /// @brief Method .ctor, addr 0x71bdb20, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyboardTextEditorEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyboardTextEditorEventHandler", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyboardTextEditorEventHandler(KeyboardTextEditorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyboardTextEditorEventHandler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyboardTextEditorEventHandler(KeyboardTextEditorEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4227 };

  /// @brief Field m_Changed, offset: 0x20, size: 0x1, def value: None
  bool ___m_Changed;

  /// @brief Field m_ShouldInvokeUpdateValue, offset: 0x21, size: 0x1, def value: None
  bool ___m_ShouldInvokeUpdateValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_Changed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler, ___m_ShouldInvokeUpdateValue) == 0x21, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::KeyboardTextEditorEventHandler) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
