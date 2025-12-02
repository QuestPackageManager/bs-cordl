#pragma once
// IWYU pragma private; include "UnityEngine/TextEditingUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextEditingUtilities)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Action;
}
namespace UnityEngine::TextCore::Text {
class TextHandle;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct TextEditOp;
}
namespace UnityEngine {
class TextSelectingUtilities;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class TextEditingUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextEditingUtilities);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextEditingUtilities
class CORDL_TYPE TextEditingUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field OnTextChanged, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_OnTextChanged, put = __cordl_internal_set_OnTextChanged)) ::System::Action* OnTextChanged;

  __declspec(property(get = get_cursorIndex, put = set_cursorIndex)) int32_t cursorIndex;

  __declspec(property(get = get_cursorIndexNoValidation, put = set_cursorIndexNoValidation)) int32_t cursorIndexNoValidation;

  __declspec(property(get = get_hasSelection)) bool hasSelection;

  /// @brief Field isCompositionActive, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_isCompositionActive, put = __cordl_internal_set_isCompositionActive)) bool isCompositionActive;

  /// @brief Field m_CursorIndexSavedState, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CursorIndexSavedState, put = __cordl_internal_set_m_CursorIndexSavedState)) int32_t m_CursorIndexSavedState;

  /// @brief Field m_HighSurrogate, offset 0x40, size 0x2
  __declspec(property(get = __cordl_internal_get_m_HighSurrogate, put = __cordl_internal_set_m_HighSurrogate)) char16_t m_HighSurrogate;

  /// @brief Field m_Text, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::StringW m_Text;

  /// @brief Field m_TextSelectingUtility, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextSelectingUtility, put = __cordl_internal_set_m_TextSelectingUtility)) ::UnityEngine::TextSelectingUtilities* m_TextSelectingUtility;

  /// @brief Field m_UpdateImeWindowPosition, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdateImeWindowPosition, put = __cordl_internal_set_m_UpdateImeWindowPosition)) bool m_UpdateImeWindowPosition;

  /// @brief Field multiline, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_multiline, put = __cordl_internal_set_multiline)) bool multiline;

  __declspec(property(put = set_revealCursor)) bool revealCursor;

  /// @brief Field s_KeyEditOps, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_KeyEditOps, put = setStaticF_s_KeyEditOps)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* s_KeyEditOps;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  __declspec(property(put = set_selectIndexNoValidation)) int32_t selectIndexNoValidation;

  __declspec(property(get = get_stringCursorIndex)) int32_t stringCursorIndex;

  __declspec(property(get = get_stringSelectIndex)) int32_t stringSelectIndex;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Field textHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_textHandle, put = __cordl_internal_set_textHandle)) ::UnityEngine::TextCore::Text::TextHandle* textHandle;

  /// @brief Method Backspace, addr 0x691fe88, size 0x260, virtual false, abstract: false, final false
  inline bool Backspace();

  /// @brief Method CanPaste, addr 0x6920c0c, size 0x6c, virtual false, abstract: false, final false
  inline bool CanPaste();

  /// @brief Method Cut, addr 0x69200e8, size 0x24, virtual false, abstract: false, final false
  inline bool Cut();

  /// @brief Method Delete, addr 0x691fd58, size 0x130, virtual false, abstract: false, final false
  inline bool Delete();

  /// @brief Method DeleteLineBack, addr 0x69202a8, size 0x168, virtual false, abstract: false, final false
  inline bool DeleteLineBack();

  /// @brief Method DeleteSelection, addr 0x692059c, size 0x1cc, virtual false, abstract: false, final false
  inline bool DeleteSelection();

  /// @brief Method DeleteWordBack, addr 0x69201c4, size 0xe4, virtual false, abstract: false, final false
  inline bool DeleteWordBack();

  /// @brief Method DeleteWordForward, addr 0x6920410, size 0xe4, virtual false, abstract: false, final false
  inline bool DeleteWordForward();

  /// @brief Method EnableCursorPreviewState, addr 0x691e0a4, size 0xa4, virtual false, abstract: false, final false
  inline void EnableCursorPreviewState();

  /// @brief Method GeneratePreviewString, addr 0x691df58, size 0x10c, virtual false, abstract: false, final false
  inline ::StringW GeneratePreviewString(bool richText);

  /// @brief Method HandleKeyEvent, addr 0x691e148, size 0x130, virtual false, abstract: false, final false
  inline bool HandleKeyEvent(::UnityEngine::Event* e);

  /// @brief Method InitKeyActions, addr 0x691e278, size 0x798, virtual false, abstract: false, final false
  inline void InitKeyActions();

  /// @brief Method Insert, addr 0x6920aec, size 0x120, virtual false, abstract: false, final false
  inline bool Insert(char16_t c);

  /// @brief Method MapKey, addr 0x69204f4, size 0xa8, virtual false, abstract: false, final false
  static inline void MapKey(::StringW key, ::UnityEngine::TextEditOp action);

  static inline ::UnityEngine::TextEditingUtilities* New_ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities, ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text);

  /// @brief Method OnBlur, addr 0x6920da8, size 0x24, virtual false, abstract: false, final false
  inline void OnBlur();

  /// @brief Method Paste, addr 0x692010c, size 0xb8, virtual false, abstract: false, final false
  inline bool Paste();

  /// @brief Method PerformOperation, addr 0x691ea10, size 0x378, virtual false, abstract: false, final false
  inline void PerformOperation(::UnityEngine::TextEditOp operation);

  /// @brief Method ReplaceNewlinesWithSpaces, addr 0x6920d0c, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW ReplaceNewlinesWithSpaces(::StringW value);

  /// @brief Method ReplaceSelection, addr 0x691dd88, size 0x118, virtual false, abstract: false, final false
  inline void ReplaceSelection(::StringW replace);

  /// @brief Method RestoreCursorState, addr 0x691e064, size 0x40, virtual false, abstract: false, final false
  inline void RestoreCursorState();

  /// @brief Method SetImeWindowPosition, addr 0x691dea8, size 0xb0, virtual false, abstract: false, final false
  inline void SetImeWindowPosition(::UnityEngine::Vector2 worldPosition);

  /// @brief Method SetTextWithoutNotify, addr 0x691dcbc, size 0x8, virtual false, abstract: false, final false
  inline void SetTextWithoutNotify(::StringW value);

  /// @brief Method ShouldUpdateImeWindowPosition, addr 0x691dea0, size 0x8, virtual false, abstract: false, final false
  inline bool ShouldUpdateImeWindowPosition();

  /// @brief Method TouchScreenKeyboardShouldBeUsed, addr 0x6920e14, size 0xa0, virtual false, abstract: false, final false
  inline bool TouchScreenKeyboardShouldBeUsed();

  /// @brief Method UpdateImeState, addr 0x691dcdc, size 0xac, virtual false, abstract: false, final false
  inline bool UpdateImeState();

  constexpr ::System::Action* const& __cordl_internal_get_OnTextChanged() const;

  constexpr ::System::Action*& __cordl_internal_get_OnTextChanged();

  constexpr bool const& __cordl_internal_get_isCompositionActive() const;

  constexpr bool& __cordl_internal_get_isCompositionActive();

  constexpr int32_t const& __cordl_internal_get_m_CursorIndexSavedState() const;

  constexpr int32_t& __cordl_internal_get_m_CursorIndexSavedState();

  constexpr char16_t const& __cordl_internal_get_m_HighSurrogate() const;

  constexpr char16_t& __cordl_internal_get_m_HighSurrogate();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::UnityEngine::TextSelectingUtilities* const& __cordl_internal_get_m_TextSelectingUtility() const;

  constexpr ::UnityEngine::TextSelectingUtilities*& __cordl_internal_get_m_TextSelectingUtility();

  constexpr bool const& __cordl_internal_get_m_UpdateImeWindowPosition() const;

  constexpr bool& __cordl_internal_get_m_UpdateImeWindowPosition();

  constexpr bool const& __cordl_internal_get_multiline() const;

  constexpr bool& __cordl_internal_get_multiline();

  constexpr ::UnityEngine::TextCore::Text::TextHandle* const& __cordl_internal_get_textHandle() const;

  constexpr ::UnityEngine::TextCore::Text::TextHandle*& __cordl_internal_get_textHandle();

  constexpr void __cordl_internal_set_OnTextChanged(::System::Action* value);

  constexpr void __cordl_internal_set_isCompositionActive(bool value);

  constexpr void __cordl_internal_set_m_CursorIndexSavedState(int32_t value);

  constexpr void __cordl_internal_set_m_HighSurrogate(char16_t value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr void __cordl_internal_set_m_TextSelectingUtility(::UnityEngine::TextSelectingUtilities* value);

  constexpr void __cordl_internal_set_m_UpdateImeWindowPosition(bool value);

  constexpr void __cordl_internal_set_multiline(bool value);

  constexpr void __cordl_internal_set_textHandle(::UnityEngine::TextCore::Text::TextHandle* value);

  /// @brief Method .ctor, addr 0x691dcc4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities, ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* getStaticF_s_KeyEditOps();

  /// @brief Method get_cursorIndex, addr 0x691d980, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_cursorIndexNoValidation, addr 0x691da54, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_cursorIndexNoValidation();

  /// @brief Method get_hasSelection, addr 0x691d870, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_selectIndex, addr 0x691db78, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method get_stringCursorIndex, addr 0x691d94c, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_stringCursorIndex();

  /// @brief Method get_stringSelectIndex, addr 0x691db44, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_stringSelectIndex();

  /// @brief Method get_text, addr 0x691dc4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  static inline void setStaticF_s_KeyEditOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* value);

  /// @brief Method set_cursorIndex, addr 0x691d9ec, size 0x3c, virtual false, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_cursorIndexNoValidation, addr 0x691da74, size 0x3c, virtual false, abstract: false, final false
  inline void set_cursorIndexNoValidation(int32_t value);

  /// @brief Method set_revealCursor, addr 0x691d8dc, size 0x40, virtual false, abstract: false, final false
  inline void set_revealCursor(bool value);

  /// @brief Method set_selectIndex, addr 0x691dbe4, size 0x3c, virtual false, abstract: false, final false
  inline void set_selectIndex(int32_t value);

  /// @brief Method set_selectIndexNoValidation, addr 0x691dadc, size 0x3c, virtual false, abstract: false, final false
  inline void set_selectIndexNoValidation(int32_t value);

  /// @brief Method set_text, addr 0x691dc54, size 0x68, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditingUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEditingUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEditingUtilities(TextEditingUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEditingUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEditingUtilities(TextEditingUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19599 };

  /// @brief Field m_TextSelectingUtility, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextSelectingUtilities* ___m_TextSelectingUtility;

  /// @brief Field textHandle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextHandle* ___textHandle;

  /// @brief Field m_CursorIndexSavedState, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_CursorIndexSavedState;

  /// @brief Field isCompositionActive, offset: 0x24, size: 0x1, def value: None
  bool ___isCompositionActive;

  /// @brief Field m_UpdateImeWindowPosition, offset: 0x25, size: 0x1, def value: None
  bool ___m_UpdateImeWindowPosition;

  /// @brief Field OnTextChanged, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___OnTextChanged;

  /// @brief Field multiline, offset: 0x30, size: 0x1, def value: None
  bool ___multiline;

  /// @brief Field m_Text, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_HighSurrogate, offset: 0x40, size: 0x2, def value: None
  char16_t ___m_HighSurrogate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_TextSelectingUtility) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___textHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_CursorIndexSavedState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___isCompositionActive) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_UpdateImeWindowPosition) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___OnTextChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___multiline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_Text) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_HighSurrogate) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextEditingUtilities, 0x48>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TextEditingUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextEditingUtilities*, "UnityEngine", "TextEditingUtilities");
