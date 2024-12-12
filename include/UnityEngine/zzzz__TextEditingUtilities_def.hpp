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
  __declspec(property(get = get_cursorIndex, put = set_cursorIndex)) int32_t cursorIndex;

  __declspec(property(get = get_hasSelection)) bool hasSelection;

  /// @brief Field isCompositionActive, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_isCompositionActive, put = __cordl_internal_set_isCompositionActive)) bool isCompositionActive;

  /// @brief Field m_CursorIndexSavedState, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CursorIndexSavedState, put = __cordl_internal_set_m_CursorIndexSavedState)) int32_t m_CursorIndexSavedState;

  /// @brief Field m_Text, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::StringW m_Text;

  /// @brief Field m_TextHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextHandle, put = __cordl_internal_set_m_TextHandle)) ::UnityEngine::TextCore::Text::TextHandle* m_TextHandle;

  /// @brief Field m_TextSelectingUtility, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextSelectingUtility, put = __cordl_internal_set_m_TextSelectingUtility)) ::UnityEngine::TextSelectingUtilities* m_TextSelectingUtility;

  /// @brief Field m_UpdateImeWindowPosition, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdateImeWindowPosition, put = __cordl_internal_set_m_UpdateImeWindowPosition)) bool m_UpdateImeWindowPosition;

  /// @brief Field multiline, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_multiline, put = __cordl_internal_set_multiline)) bool multiline;

  __declspec(property(put = set_revealCursor)) bool revealCursor;

  /// @brief Field s_KeyEditOps, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_KeyEditOps, put = setStaticF_s_KeyEditOps)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* s_KeyEditOps;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Method Backspace, addr 0x48e40b8, size 0x100, virtual false, abstract: false, final false
  inline bool Backspace();

  /// @brief Method CanPaste, addr 0x48e48b8, size 0x84, virtual false, abstract: false, final false
  inline bool CanPaste();

  /// @brief Method Cut, addr 0x48e41b8, size 0x28, virtual false, abstract: false, final false
  inline bool Cut();

  /// @brief Method Delete, addr 0x48e3fd0, size 0xe8, virtual false, abstract: false, final false
  inline bool Delete();

  /// @brief Method DeleteLineBack, addr 0x48e439c, size 0x104, virtual false, abstract: false, final false
  inline bool DeleteLineBack();

  /// @brief Method DeleteSelection, addr 0x48e4618, size 0x22c, virtual false, abstract: false, final false
  inline bool DeleteSelection();

  /// @brief Method DeleteWordBack, addr 0x48e42ac, size 0xf0, virtual false, abstract: false, final false
  inline bool DeleteWordBack();

  /// @brief Method DeleteWordForward, addr 0x48e44a0, size 0xec, virtual false, abstract: false, final false
  inline bool DeleteWordForward();

  /// @brief Method EnableCursorPreviewState, addr 0x48e33e4, size 0xdc, virtual false, abstract: false, final false
  inline void EnableCursorPreviewState();

  /// @brief Method GeneratePreviewString, addr 0x48e3268, size 0x124, virtual false, abstract: false, final false
  inline ::StringW GeneratePreviewString(bool richText);

  /// @brief Method HandleKeyEvent, addr 0x48e34c0, size 0x188, virtual false, abstract: false, final false
  inline bool HandleKeyEvent(::UnityEngine::Event* e);

  /// @brief Method InitKeyActions, addr 0x48e3648, size 0x638, virtual false, abstract: false, final false
  inline void InitKeyActions();

  /// @brief Method Insert, addr 0x48e4844, size 0x74, virtual false, abstract: false, final false
  inline void Insert(char16_t c);

  /// @brief Method MapKey, addr 0x48e458c, size 0x8c, virtual false, abstract: false, final false
  static inline void MapKey(::StringW key, ::UnityEngine::TextEditOp action);

  static inline ::UnityEngine::TextEditingUtilities* New_ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities, ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text);

  /// @brief Method OnBlur, addr 0x48e49d0, size 0x34, virtual false, abstract: false, final false
  inline void OnBlur();

  /// @brief Method Paste, addr 0x48e41e0, size 0xcc, virtual false, abstract: false, final false
  inline bool Paste();

  /// @brief Method PerformOperation, addr 0x48e3c80, size 0x350, virtual false, abstract: false, final false
  inline void PerformOperation(::UnityEngine::TextEditOp operation);

  /// @brief Method ReplaceNewlinesWithSpaces, addr 0x48e493c, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW ReplaceNewlinesWithSpaces(::StringW value);

  /// @brief Method ReplaceSelection, addr 0x48e3100, size 0xb8, virtual false, abstract: false, final false
  inline void ReplaceSelection(::StringW replace);

  /// @brief Method RestoreCursorState, addr 0x48e338c, size 0x58, virtual false, abstract: false, final false
  inline void RestoreCursorState();

  /// @brief Method SetImeWindowPosition, addr 0x48e31c0, size 0xa8, virtual false, abstract: false, final false
  inline void SetImeWindowPosition(::UnityEngine::Vector2 worldPosition);

  /// @brief Method ShouldUpdateImeWindowPosition, addr 0x48e31b8, size 0x8, virtual false, abstract: false, final false
  inline bool ShouldUpdateImeWindowPosition();

  /// @brief Method TouchScreenKeyboardShouldBeUsed, addr 0x48e4a04, size 0x84, virtual false, abstract: false, final false
  inline bool TouchScreenKeyboardShouldBeUsed();

  /// @brief Method UpdateImeState, addr 0x48e302c, size 0xd4, virtual false, abstract: false, final false
  inline bool UpdateImeState();

  constexpr bool const& __cordl_internal_get_isCompositionActive() const;

  constexpr bool& __cordl_internal_get_isCompositionActive();

  constexpr int32_t const& __cordl_internal_get_m_CursorIndexSavedState() const;

  constexpr int32_t& __cordl_internal_get_m_CursorIndexSavedState();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::UnityEngine::TextCore::Text::TextHandle* const& __cordl_internal_get_m_TextHandle() const;

  constexpr ::UnityEngine::TextCore::Text::TextHandle*& __cordl_internal_get_m_TextHandle();

  constexpr ::UnityEngine::TextSelectingUtilities* const& __cordl_internal_get_m_TextSelectingUtility() const;

  constexpr ::UnityEngine::TextSelectingUtilities*& __cordl_internal_get_m_TextSelectingUtility();

  constexpr bool const& __cordl_internal_get_m_UpdateImeWindowPosition() const;

  constexpr bool& __cordl_internal_get_m_UpdateImeWindowPosition();

  constexpr bool const& __cordl_internal_get_multiline() const;

  constexpr bool& __cordl_internal_get_multiline();

  constexpr void __cordl_internal_set_isCompositionActive(bool value);

  constexpr void __cordl_internal_set_m_CursorIndexSavedState(int32_t value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr void __cordl_internal_set_m_TextHandle(::UnityEngine::TextCore::Text::TextHandle* value);

  constexpr void __cordl_internal_set_m_TextSelectingUtility(::UnityEngine::TextSelectingUtilities* value);

  constexpr void __cordl_internal_set_m_UpdateImeWindowPosition(bool value);

  constexpr void __cordl_internal_set_multiline(bool value);

  /// @brief Method .ctor, addr 0x48e2fe4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities, ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* getStaticF_s_KeyEditOps();

  /// @brief Method get_cursorIndex, addr 0x48e2f00, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_hasSelection, addr 0x48e2ec4, size 0x1c, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_selectIndex, addr 0x48e2f38, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method get_text, addr 0x48e2f70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  static inline void setStaticF_s_KeyEditOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* value);

  /// @brief Method set_cursorIndex, addr 0x48e2f1c, size 0x1c, virtual false, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_revealCursor, addr 0x48e2ee0, size 0x20, virtual false, abstract: false, final false
  inline void set_revealCursor(bool value);

  /// @brief Method set_selectIndex, addr 0x48e2f54, size 0x1c, virtual false, abstract: false, final false
  inline void set_selectIndex(int32_t value);

  /// @brief Method set_text, addr 0x48e2f78, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16659 };

  /// @brief Field m_TextSelectingUtility, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextSelectingUtilities* ___m_TextSelectingUtility;

  /// @brief Field m_TextHandle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextHandle* ___m_TextHandle;

  /// @brief Field m_CursorIndexSavedState, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_CursorIndexSavedState;

  /// @brief Field isCompositionActive, offset: 0x24, size: 0x1, def value: None
  bool ___isCompositionActive;

  /// @brief Field m_UpdateImeWindowPosition, offset: 0x25, size: 0x1, def value: None
  bool ___m_UpdateImeWindowPosition;

  /// @brief Field multiline, offset: 0x26, size: 0x1, def value: None
  bool ___multiline;

  /// @brief Field m_Text, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_Text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_TextSelectingUtility) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_TextHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_CursorIndexSavedState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___isCompositionActive) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_UpdateImeWindowPosition) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___multiline) == 0x26, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_Text) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextEditingUtilities, 0x30>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TextEditingUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextEditingUtilities*, "UnityEngine", "TextEditingUtilities");
