#pragma once
// IWYU pragma private; include "UnityEngine/TextEditor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextEditor)
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct TextEditor_DblClickSnapping;
}
namespace UnityEngine {
class TouchScreenKeyboard;
}
// Forward declare root types
namespace UnityEngine {
struct TextEditor_DblClickSnapping;
}
namespace UnityEngine {
class TextEditor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextEditor_DblClickSnapping);
MARK_REF_PTR_T(::UnityEngine::TextEditor);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextEditor/DblClickSnapping
struct CORDL_TYPE TextEditor_DblClickSnapping {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __TextEditor_DblClickSnapping_Unwrapped
  enum struct __TextEditor_DblClickSnapping_Unwrapped : uint8_t {
    __E_WORDS = static_cast<uint8_t>(0x0u),
    __E_PARAGRAPHS = static_cast<uint8_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextEditor_DblClickSnapping_Unwrapped() const noexcept {
    return static_cast<__TextEditor_DblClickSnapping_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditor_DblClickSnapping();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TextEditor_DblClickSnapping(uint8_t value__) noexcept;

  /// @brief Field PARAGRAPHS value: U8(1)
  static ::UnityEngine::TextEditor_DblClickSnapping const PARAGRAPHS;

  /// @brief Field WORDS value: U8(0)
  static ::UnityEngine::TextEditor_DblClickSnapping const WORDS;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16671 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextEditor_DblClickSnapping, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextEditor_DblClickSnapping, 0x1>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object, UnityEngine.TextEditor::DblClickSnapping, UnityEngine.Vector2
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextEditor
class CORDL_TYPE TextEditor : public ::System::Object {
public:
  // Declarations
  using DblClickSnapping = ::UnityEngine::TextEditor_DblClickSnapping;

  /// @brief Field controlID, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_controlID, put = __cordl_internal_set_controlID)) int32_t controlID;

  /// @brief Field hasHorizontalCursorPos, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_hasHorizontalCursorPos, put = __cordl_internal_set_hasHorizontalCursorPos)) bool hasHorizontalCursorPos;

  /// @brief Field isPasswordField, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_isPasswordField, put = __cordl_internal_set_isPasswordField)) bool isPasswordField;

  /// @brief Field keyboardOnScreen, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_keyboardOnScreen, put = __cordl_internal_set_keyboardOnScreen)) ::UnityEngine::TouchScreenKeyboard* keyboardOnScreen;

  /// @brief Field m_Content, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Content, put = __cordl_internal_set_m_Content)) ::UnityEngine::GUIContent* m_Content;

  /// @brief Field m_CursorIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CursorIndex, put = __cordl_internal_set_m_CursorIndex)) int32_t m_CursorIndex;

  /// @brief Field m_DblClickInitPos, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DblClickInitPos, put = __cordl_internal_set_m_DblClickInitPos)) int32_t m_DblClickInitPos;

  /// @brief Field m_DblClickSnap, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DblClickSnap, put = __cordl_internal_set_m_DblClickSnap)) ::UnityEngine::TextEditor_DblClickSnapping m_DblClickSnap;

  /// @brief Field m_MouseDragSelectsWholeWords, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MouseDragSelectsWholeWords, put = __cordl_internal_set_m_MouseDragSelectsWholeWords)) bool m_MouseDragSelectsWholeWords;

  /// @brief Field m_RevealCursor, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RevealCursor, put = __cordl_internal_set_m_RevealCursor)) bool m_RevealCursor;

  /// @brief Field m_SelectIndex, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectIndex, put = __cordl_internal_set_m_SelectIndex)) int32_t m_SelectIndex;

  /// @brief Field m_bJustSelected, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_m_bJustSelected, put = __cordl_internal_set_m_bJustSelected)) bool m_bJustSelected;

  /// @brief Field m_iAltCursorPos, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_iAltCursorPos, put = __cordl_internal_set_m_iAltCursorPos)) int32_t m_iAltCursorPos;

  /// @brief Field multiline, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_multiline, put = __cordl_internal_set_multiline)) bool multiline;

  /// @brief Field scrollOffset, offset 0x2c, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollOffset, put = __cordl_internal_set_scrollOffset)) ::UnityEngine::Vector2 scrollOffset;

  /// @brief Field style, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_style, put = __cordl_internal_set_style)) ::UnityEngine::GUIStyle* style;

  static inline ::UnityEngine::TextEditor* New_ctor();

  constexpr int32_t const& __cordl_internal_get_controlID() const;

  constexpr int32_t& __cordl_internal_get_controlID();

  constexpr bool const& __cordl_internal_get_hasHorizontalCursorPos() const;

  constexpr bool& __cordl_internal_get_hasHorizontalCursorPos();

  constexpr bool const& __cordl_internal_get_isPasswordField() const;

  constexpr bool& __cordl_internal_get_isPasswordField();

  constexpr ::UnityEngine::TouchScreenKeyboard* const& __cordl_internal_get_keyboardOnScreen() const;

  constexpr ::UnityEngine::TouchScreenKeyboard*& __cordl_internal_get_keyboardOnScreen();

  constexpr ::UnityEngine::GUIContent* const& __cordl_internal_get_m_Content() const;

  constexpr ::UnityEngine::GUIContent*& __cordl_internal_get_m_Content();

  constexpr int32_t const& __cordl_internal_get_m_CursorIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CursorIndex();

  constexpr int32_t const& __cordl_internal_get_m_DblClickInitPos() const;

  constexpr int32_t& __cordl_internal_get_m_DblClickInitPos();

  constexpr ::UnityEngine::TextEditor_DblClickSnapping const& __cordl_internal_get_m_DblClickSnap() const;

  constexpr ::UnityEngine::TextEditor_DblClickSnapping& __cordl_internal_get_m_DblClickSnap();

  constexpr bool const& __cordl_internal_get_m_MouseDragSelectsWholeWords() const;

  constexpr bool& __cordl_internal_get_m_MouseDragSelectsWholeWords();

  constexpr bool const& __cordl_internal_get_m_RevealCursor() const;

  constexpr bool& __cordl_internal_get_m_RevealCursor();

  constexpr int32_t const& __cordl_internal_get_m_SelectIndex() const;

  constexpr int32_t& __cordl_internal_get_m_SelectIndex();

  constexpr bool const& __cordl_internal_get_m_bJustSelected() const;

  constexpr bool& __cordl_internal_get_m_bJustSelected();

  constexpr int32_t const& __cordl_internal_get_m_iAltCursorPos() const;

  constexpr int32_t& __cordl_internal_get_m_iAltCursorPos();

  constexpr bool const& __cordl_internal_get_multiline() const;

  constexpr bool& __cordl_internal_get_multiline();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scrollOffset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_scrollOffset();

  constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get_style() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_style();

  constexpr void __cordl_internal_set_controlID(int32_t value);

  constexpr void __cordl_internal_set_hasHorizontalCursorPos(bool value);

  constexpr void __cordl_internal_set_isPasswordField(bool value);

  constexpr void __cordl_internal_set_keyboardOnScreen(::UnityEngine::TouchScreenKeyboard* value);

  constexpr void __cordl_internal_set_m_Content(::UnityEngine::GUIContent* value);

  constexpr void __cordl_internal_set_m_CursorIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DblClickInitPos(int32_t value);

  constexpr void __cordl_internal_set_m_DblClickSnap(::UnityEngine::TextEditor_DblClickSnapping value);

  constexpr void __cordl_internal_set_m_MouseDragSelectsWholeWords(bool value);

  constexpr void __cordl_internal_set_m_RevealCursor(bool value);

  constexpr void __cordl_internal_set_m_SelectIndex(int32_t value);

  constexpr void __cordl_internal_set_m_bJustSelected(bool value);

  constexpr void __cordl_internal_set_m_iAltCursorPos(int32_t value);

  constexpr void __cordl_internal_set_multiline(bool value);

  constexpr void __cordl_internal_set_scrollOffset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_style(::UnityEngine::GUIStyle* value);

  /// @brief Method .ctor, addr 0x48e71d4, size 0xec, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEditor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEditor(TextEditor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEditor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEditor(TextEditor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16672 };

  /// @brief Field keyboardOnScreen, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TouchScreenKeyboard* ___keyboardOnScreen;

  /// @brief Field controlID, offset: 0x18, size: 0x4, def value: None
  int32_t ___controlID;

  /// @brief Field style, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___style;

  /// @brief Field multiline, offset: 0x28, size: 0x1, def value: None
  bool ___multiline;

  /// @brief Field hasHorizontalCursorPos, offset: 0x29, size: 0x1, def value: None
  bool ___hasHorizontalCursorPos;

  /// @brief Field isPasswordField, offset: 0x2a, size: 0x1, def value: None
  bool ___isPasswordField;

  /// @brief Field scrollOffset, offset: 0x2c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___scrollOffset;

  /// @brief Field m_Content, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GUIContent* ___m_Content;

  /// @brief Field m_CursorIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_CursorIndex;

  /// @brief Field m_SelectIndex, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_SelectIndex;

  /// @brief Field m_RevealCursor, offset: 0x48, size: 0x1, def value: None
  bool ___m_RevealCursor;

  /// @brief Field m_MouseDragSelectsWholeWords, offset: 0x49, size: 0x1, def value: None
  bool ___m_MouseDragSelectsWholeWords;

  /// @brief Field m_DblClickInitPos, offset: 0x4c, size: 0x4, def value: None
  int32_t ___m_DblClickInitPos;

  /// @brief Field m_DblClickSnap, offset: 0x50, size: 0x1, def value: None
  ::UnityEngine::TextEditor_DblClickSnapping ___m_DblClickSnap;

  /// @brief Field m_bJustSelected, offset: 0x51, size: 0x1, def value: None
  bool ___m_bJustSelected;

  /// @brief Field m_iAltCursorPos, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_iAltCursorPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextEditor, ___keyboardOnScreen) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___controlID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___style) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___multiline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___hasHorizontalCursorPos) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___isPasswordField) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___scrollOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_Content) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_CursorIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_SelectIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_RevealCursor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_MouseDragSelectsWholeWords) == 0x49, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_DblClickInitPos) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_DblClickSnap) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_bJustSelected) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditor, ___m_iAltCursorPos) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextEditor, 0x58>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextEditor_DblClickSnapping, "UnityEngine", "TextEditor/DblClickSnapping");
NEED_NO_BOX(::UnityEngine::TextEditor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextEditor*, "UnityEngine", "TextEditor");
