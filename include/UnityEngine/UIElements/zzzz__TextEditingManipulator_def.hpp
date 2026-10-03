#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextEditingManipulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextEditingManipulator)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class TextEditorEventHandler;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine {
class TextEditingUtilities;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextEditingManipulator;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::TextEditingManipulator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TextEditingManipulator*, "UnityEngine.UIElements", "TextEditingManipulator");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextEditingManipulator
class CORDL_TYPE TextEditingManipulator : public ::System::Object {
public:
  // Declarations
  /// @brief Field editingUtilities, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_editingUtilities, put = __cordl_internal_set_editingUtilities)) ::UnityEngine::TextEditingUtilities* editingUtilities;

  __declspec(property(get = get_keyboardCanBeUsed)) bool keyboardCanBeUsed;

  __declspec(property(get = get_keyboardEditingEventHandler, put = set_keyboardEditingEventHandler)) ::UnityEngine::UIElements::TextEditorEventHandler* keyboardEditingEventHandler;

  /// @brief Field m_HardwareKeyboardPoller, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HardwareKeyboardPoller,
                      put = __cordl_internal_set_m_HardwareKeyboardPoller)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_HardwareKeyboardPoller;

  /// @brief Field m_KeyboardEditingEventHandler, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyboardEditingEventHandler,
                      put = __cordl_internal_set_m_KeyboardEditingEventHandler)) ::UnityEngine::UIElements::TextEditorEventHandler* m_KeyboardEditingEventHandler;

  /// @brief Field m_TextElement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextElement, put = __cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement* m_TextElement;

  /// @brief Field m_TouchScreenEditingEventHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TouchScreenEditingEventHandler,
                      put = __cordl_internal_set_m_TouchScreenEditingEventHandler)) ::UnityEngine::UIElements::TextEditorEventHandler* m_TouchScreenEditingEventHandler;

  __declspec(property(get = get_touchScreenCanBeUsed)) bool touchScreenCanBeUsed;

  __declspec(property(get = get_touchScreenEditingEventHandler, put = set_touchScreenEditingEventHandler)) ::UnityEngine::UIElements::TextEditorEventHandler* touchScreenEditingEventHandler;

  __declspec(property(get = get_touchScreenTextFieldChanged)) bool touchScreenTextFieldChanged;

  /// @brief Method HandleEventBubbleUp, addr 0x7125e84, size 0x298, virtual false, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::TextEditingManipulator* New_ctor(::UnityEngine::UIElements::TextElement* textElement);

  /// @brief Method OnFocusInEvent, addr 0x712611c, size 0x2e0, virtual false, abstract: false, final false
  inline void OnFocusInEvent();

  /// @brief Method OnFocusOutEvent, addr 0x71263fc, size 0xb8, virtual false, abstract: false, final false
  inline void OnFocusOutEvent();

  /// @brief Method Reset, addr 0x7125c40, size 0x48, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method UpdateTextEditorEventHandler, addr 0x7125b24, size 0x11c, virtual false, abstract: false, final false
  inline void UpdateTextEditorEventHandler();

  /// [CompilerGenerated]
  /// @brief Method <OnFocusInEvent>b__21_0, addr 0x71264b4, size 0x40, virtual false, abstract: false, final false
  inline void _OnFocusInEvent_b__21_0();

  constexpr ::UnityEngine::TextEditingUtilities* const& __cordl_internal_get_editingUtilities() const;

  constexpr ::UnityEngine::TextEditingUtilities*& __cordl_internal_get_editingUtilities();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_HardwareKeyboardPoller() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_HardwareKeyboardPoller();

  constexpr ::UnityEngine::UIElements::TextEditorEventHandler* const& __cordl_internal_get_m_KeyboardEditingEventHandler() const;

  constexpr ::UnityEngine::UIElements::TextEditorEventHandler*& __cordl_internal_get_m_KeyboardEditingEventHandler();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr ::UnityEngine::UIElements::TextEditorEventHandler* const& __cordl_internal_get_m_TouchScreenEditingEventHandler() const;

  constexpr ::UnityEngine::UIElements::TextEditorEventHandler*& __cordl_internal_get_m_TouchScreenEditingEventHandler();

  constexpr void __cordl_internal_set_editingUtilities(::UnityEngine::TextEditingUtilities* value);

  constexpr void __cordl_internal_set_m_HardwareKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_KeyboardEditingEventHandler(::UnityEngine::UIElements::TextEditorEventHandler* value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  constexpr void __cordl_internal_set_m_TouchScreenEditingEventHandler(::UnityEngine::UIElements::TextEditorEventHandler* value);

  /// @brief Method .ctor, addr 0x7125a00, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* textElement);

  /// @brief Method get_keyboardCanBeUsed, addr 0x7125dac, size 0xd8, virtual false, abstract: false, final false
  inline bool get_keyboardCanBeUsed();

  /// @brief Method get_keyboardEditingEventHandler, addr 0x7125998, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextEditorEventHandler* get_keyboardEditingEventHandler();

  /// @brief Method get_touchScreenCanBeUsed, addr 0x7125cdc, size 0xd0, virtual false, abstract: false, final false
  inline bool get_touchScreenCanBeUsed();

  /// @brief Method get_touchScreenEditingEventHandler, addr 0x7125930, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextEditorEventHandler* get_touchScreenEditingEventHandler();

  /// @brief Method get_touchScreenTextFieldChanged, addr 0x7125c88, size 0x54, virtual false, abstract: false, final false
  inline bool get_touchScreenTextFieldChanged();

  /// @brief Method set_keyboardEditingEventHandler, addr 0x71259a0, size 0x60, virtual false, abstract: false, final false
  inline void set_keyboardEditingEventHandler(::UnityEngine::UIElements::TextEditorEventHandler* value);

  /// @brief Method set_touchScreenEditingEventHandler, addr 0x7125938, size 0x60, virtual false, abstract: false, final false
  inline void set_touchScreenEditingEventHandler(::UnityEngine::UIElements::TextEditorEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditingManipulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEditingManipulator", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEditingManipulator(TextEditingManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEditingManipulator", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEditingManipulator(TextEditingManipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5177 };

  /// @brief Field m_TextElement, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_TextElement;

  /// @brief Field m_TouchScreenEditingEventHandler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextEditorEventHandler* ___m_TouchScreenEditingEventHandler;

  /// @brief Field m_KeyboardEditingEventHandler, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextEditorEventHandler* ___m_KeyboardEditingEventHandler;

  /// @brief Field editingUtilities, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::TextEditingUtilities* ___editingUtilities;

  /// @brief Field m_HardwareKeyboardPoller, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_HardwareKeyboardPoller;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextEditingManipulator, ___m_TextElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditingManipulator, ___m_TouchScreenEditingEventHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditingManipulator, ___m_KeyboardEditingEventHandler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditingManipulator, ___editingUtilities) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditingManipulator, ___m_HardwareKeyboardPoller) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::TextEditingManipulator) == 0x38, "Size mismatch!");

} // namespace UnityEngine::UIElements
