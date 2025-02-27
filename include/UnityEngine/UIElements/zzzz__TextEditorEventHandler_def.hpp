#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextEditorEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextEditorEventHandler)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine {
class TextEditingUtilities;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextEditorEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextEditorEventHandler);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextEditorEventHandler
class CORDL_TYPE TextEditorEventHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field editingUtilities, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_editingUtilities, put = __cordl_internal_set_editingUtilities)) ::UnityEngine::TextEditingUtilities* editingUtilities;

  /// @brief Field textElement, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_textElement, put = __cordl_internal_set_textElement)) ::UnityEngine::UIElements::TextElement* textElement;

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x49fa874, size 0x4, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::TextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities);

  constexpr ::UnityEngine::TextEditingUtilities* const& __cordl_internal_get_editingUtilities() const;

  constexpr ::UnityEngine::TextEditingUtilities*& __cordl_internal_get_editingUtilities();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_textElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_textElement();

  constexpr void __cordl_internal_set_editingUtilities(::UnityEngine::TextEditingUtilities* value);

  constexpr void __cordl_internal_set_textElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x49fa598, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditorEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEditorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEditorEventHandler(TextEditorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEditorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEditorEventHandler(TextEditorEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5610 };

  /// @brief Field textElement, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___textElement;

  /// @brief Field editingUtilities, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextEditingUtilities* ___editingUtilities;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextEditorEventHandler, ___textElement) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditorEventHandler, ___editingUtilities) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextEditorEventHandler, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextEditorEventHandler*, "UnityEngine.UIElements", "TextEditorEventHandler");
