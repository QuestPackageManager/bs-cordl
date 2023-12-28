#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ITextInputField)
namespace UnityEngine::UIElements {
class ITextElement;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ITextInputField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ITextInputField);
// Type: UnityEngine.UIElements::ITextInputField
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7095))
// CS Name: ::UnityEngine.UIElements::ITextInputField*
class CORDL_TYPE ITextInputField {
public:
  // Declarations
  __declspec(property(get = get_hasFocus)) bool hasFocus;

  __declspec(property(get = get_doubleClickSelectsWord)) bool doubleClickSelectsWord;

  __declspec(property(get = get_tripleClickSelectsLine)) bool tripleClickSelectsLine;

  __declspec(property(get = get_isReadOnly)) bool isReadOnly;

  __declspec(property(get = get_isDelayed)) bool isDelayed;

  __declspec(property(get = get_isPasswordField)) bool isPasswordField;

  __declspec(property(get = get_editorEngine))::UnityEngine::UIElements::TextEditorEngine* editorEngine;

  /// @brief Convert operator to "::UnityEngine::UIElements::IEventHandler"
  constexpr operator ::UnityEngine::UIElements::IEventHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextElement"
  constexpr operator ::UnityEngine::UIElements::ITextElement*() noexcept;

  /// @brief Method get_hasFocus addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_hasFocus();

  /// @brief Method get_doubleClickSelectsWord addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_doubleClickSelectsWord();

  /// @brief Method get_tripleClickSelectsLine addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_tripleClickSelectsLine();

  /// @brief Method get_isReadOnly addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isReadOnly();

  /// @brief Method get_isDelayed addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isDelayed();

  /// @brief Method get_isPasswordField addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isPasswordField();

  /// @brief Method get_editorEngine addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::UIElements::TextEditorEngine* get_editorEngine();

  /// @brief Method SyncTextEngine addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SyncTextEngine();

  /// @brief Method AcceptCharacter addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool AcceptCharacter(char16_t c);

  /// @brief Method CullString addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW CullString(::StringW s);

  /// @brief Method UpdateText addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateText(::StringW value);

  /// @brief Method UpdateValueFromText addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateValueFromText();

  // Ctor Parameters [CppParam { name: "", ty: "ITextInputField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITextInputField(ITextInputField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITextInputField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextInputField(ITextInputField const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ITextInputField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITextInputField*, "UnityEngine.UIElements", "ITextInputField");
