#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextEditingManipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::UnityEngine::UIElements::TextEditingManipulator);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextEditingManipulator
class CORDL_TYPE TextEditingManipulator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_editingEventHandler, put = set_editingEventHandler)) ::UnityEngine::UIElements::TextEditorEventHandler* editingEventHandler;

  /// @brief Field editingUtilities, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_editingUtilities, put = __cordl_internal_set_editingUtilities)) ::UnityEngine::TextEditingUtilities* editingUtilities;

  /// @brief Field m_EditingEventHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EditingEventHandler, put = __cordl_internal_set_m_EditingEventHandler)) ::UnityEngine::UIElements::TextEditorEventHandler* m_EditingEventHandler;

  /// @brief Field m_HardwareKeyboardPoller, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HardwareKeyboardPoller,
                      put = __cordl_internal_set_m_HardwareKeyboardPoller)) ::UnityEngine::UIElements::IVisualElementScheduledItem* m_HardwareKeyboardPoller;

  /// @brief Field m_TextElement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextElement, put = __cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement* m_TextElement;

  /// @brief Field m_TouchScreenTextFieldInitialized, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TouchScreenTextFieldInitialized, put = __cordl_internal_set_m_TouchScreenTextFieldInitialized)) bool m_TouchScreenTextFieldInitialized;

  __declspec(property(get = get_touchScreenTextFieldChanged)) bool touchScreenTextFieldChanged;

  /// @brief Method HandleEventBubbleUp, addr 0x6ad88bc, size 0x270, virtual false, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method InitTextEditorEventHandler, addr 0x6ad87bc, size 0xd4, virtual false, abstract: false, final false
  inline void InitTextEditorEventHandler();

  static inline ::UnityEngine::UIElements::TextEditingManipulator* New_ctor(::UnityEngine::UIElements::TextElement* textElement);

  /// @brief Method OnFocusInEvent, addr 0x6ad8b30, size 0x2e0, virtual false, abstract: false, final false
  inline void OnFocusInEvent();

  /// @brief Method OnFocusOutEvent, addr 0x6ad8e10, size 0xb8, virtual false, abstract: false, final false
  inline void OnFocusOutEvent();

  /// @brief Method Reset, addr 0x6ad8890, size 0x2c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method <OnFocusInEvent>b__14_0, addr 0x6ad8ec8, size 0x40, virtual false, abstract: false, final false
  inline void _OnFocusInEvent_b__14_0();

  constexpr ::UnityEngine::TextEditingUtilities* const& __cordl_internal_get_editingUtilities() const;

  constexpr ::UnityEngine::TextEditingUtilities*& __cordl_internal_get_editingUtilities();

  constexpr ::UnityEngine::UIElements::TextEditorEventHandler* const& __cordl_internal_get_m_EditingEventHandler() const;

  constexpr ::UnityEngine::UIElements::TextEditorEventHandler*& __cordl_internal_get_m_EditingEventHandler();

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_HardwareKeyboardPoller() const;

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_HardwareKeyboardPoller();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr bool const& __cordl_internal_get_m_TouchScreenTextFieldInitialized() const;

  constexpr bool& __cordl_internal_get_m_TouchScreenTextFieldInitialized();

  constexpr void __cordl_internal_set_editingUtilities(::UnityEngine::TextEditingUtilities* value);

  constexpr void __cordl_internal_set_m_EditingEventHandler(::UnityEngine::UIElements::TextEditorEventHandler* value);

  constexpr void __cordl_internal_set_m_HardwareKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  constexpr void __cordl_internal_set_m_TouchScreenTextFieldInitialized(bool value);

  /// @brief Method .ctor, addr 0x6ad869c, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* textElement);

  /// @brief Method get_editingEventHandler, addr 0x6ad8590, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextEditorEventHandler* get_editingEventHandler();

  /// @brief Method get_touchScreenTextFieldChanged, addr 0x6ad85f8, size 0xa4, virtual false, abstract: false, final false
  inline bool get_touchScreenTextFieldChanged();

  /// @brief Method set_editingEventHandler, addr 0x6ad8598, size 0x60, virtual false, abstract: false, final false
  inline void set_editingEventHandler(::UnityEngine::UIElements::TextEditorEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditingManipulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEditingManipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEditingManipulator(TextEditingManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEditingManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEditingManipulator(TextEditingManipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5091 };

  /// @brief Field m_TextElement, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_TextElement;

  /// @brief Field m_EditingEventHandler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextEditorEventHandler* ___m_EditingEventHandler;

  /// @brief Field editingUtilities, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::TextEditingUtilities* ___editingUtilities;

  /// @brief Field m_TouchScreenTextFieldInitialized, offset: 0x28, size: 0x1, def value: None
  bool ___m_TouchScreenTextFieldInitialized;

  /// @brief Field m_HardwareKeyboardPoller, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_HardwareKeyboardPoller;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextEditingManipulator, ___m_TextElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditingManipulator, ___m_EditingEventHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditingManipulator, ___editingUtilities) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditingManipulator, ___m_TouchScreenTextFieldInitialized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditingManipulator, ___m_HardwareKeyboardPoller) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextEditingManipulator, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextEditingManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextEditingManipulator*, "UnityEngine.UIElements", "TextEditingManipulator");
