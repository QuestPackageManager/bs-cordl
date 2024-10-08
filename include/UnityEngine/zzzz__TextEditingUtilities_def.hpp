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
// Type: UnityEngine::TextEditingUtilities
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::TextEditingUtilities*
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
  static
      __declspec(property(get = getStaticF_s_KeyEditOps, put = setStaticF_s_KeyEditOps)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* s_KeyEditOps;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Method Backspace, addr 0x486c39c, size 0xbc, virtual false, abstract: false, final false
  inline bool Backspace();

  /// @brief Method CanPaste, addr 0x486ced8, size 0x84, virtual false, abstract: false, final false
  inline bool CanPaste();

  /// @brief Method Cut, addr 0x486c458, size 0x24, virtual false, abstract: false, final false
  inline bool Cut();

  /// @brief Method Delete, addr 0x486c2e0, size 0xbc, virtual false, abstract: false, final false
  inline bool Delete();

  /// @brief Method DeleteLineBack, addr 0x486c604, size 0xf8, virtual false, abstract: false, final false
  inline bool DeleteLineBack();

  /// @brief Method DeleteSelection, addr 0x486c844, size 0x1a8, virtual false, abstract: false, final false
  inline bool DeleteSelection();

  /// @brief Method DeleteWordBack, addr 0x486c548, size 0xbc, virtual false, abstract: false, final false
  inline bool DeleteWordBack();

  /// @brief Method DeleteWordForward, addr 0x486c6fc, size 0xbc, virtual false, abstract: false, final false
  inline bool DeleteWordForward();

  /// @brief Method EnableCursorPreviewState, addr 0x486a82c, size 0xc8, virtual false, abstract: false, final false
  inline void EnableCursorPreviewState();

  /// @brief Method GeneratePreviewString, addr 0x486a6d0, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW GeneratePreviewString(bool richText);

  /// @brief Method HandleKeyEvent, addr 0x486a8f4, size 0x188, virtual false, abstract: false, final false
  inline bool HandleKeyEvent(::UnityEngine::Event* e);

  /// @brief Method InitKeyActions, addr 0x486aa7c, size 0x638, virtual false, abstract: false, final false
  inline void InitKeyActions();

  /// @brief Method Insert, addr 0x486ce64, size 0x74, virtual false, abstract: false, final false
  inline void Insert(char16_t c);

  /// @brief Method MapKey, addr 0x486c7b8, size 0x8c, virtual false, abstract: false, final false
  static inline void MapKey(::StringW key, ::UnityEngine::TextEditOp action);

  static inline ::UnityEngine::TextEditingUtilities* New_ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities, ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text);

  /// @brief Method OnBlur, addr 0x486d0a4, size 0x24, virtual false, abstract: false, final false
  inline void OnBlur();

  /// @brief Method Paste, addr 0x486c47c, size 0xcc, virtual false, abstract: false, final false
  inline bool Paste();

  /// @brief Method PerformOperation, addr 0x486b0b4, size 0x308, virtual false, abstract: false, final false
  inline void PerformOperation(::UnityEngine::TextEditOp operation);

  /// @brief Method ReplaceNewlinesWithSpaces, addr 0x486d010, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW ReplaceNewlinesWithSpaces(::StringW value);

  /// @brief Method ReplaceSelection, addr 0x486a5a0, size 0x88, virtual false, abstract: false, final false
  inline void ReplaceSelection(::StringW replace);

  /// @brief Method RestoreCursorState, addr 0x486a7ec, size 0x40, virtual false, abstract: false, final false
  inline void RestoreCursorState();

  /// @brief Method SetImeWindowPosition, addr 0x486a630, size 0xa0, virtual false, abstract: false, final false
  inline void SetImeWindowPosition(::UnityEngine::Vector2 worldPosition);

  /// @brief Method ShouldUpdateImeWindowPosition, addr 0x486a628, size 0x8, virtual false, abstract: false, final false
  inline bool ShouldUpdateImeWindowPosition();

  /// @brief Method TouchScreenKeyboardShouldBeUsed, addr 0x486d114, size 0x84, virtual false, abstract: false, final false
  inline bool TouchScreenKeyboardShouldBeUsed();

  /// @brief Method UpdateImeState, addr 0x486a4cc, size 0xd4, virtual false, abstract: false, final false
  inline bool UpdateImeState();

  constexpr bool const& __cordl_internal_get_isCompositionActive() const;

  constexpr bool& __cordl_internal_get_isCompositionActive();

  constexpr int32_t const& __cordl_internal_get_m_CursorIndexSavedState() const;

  constexpr int32_t& __cordl_internal_get_m_CursorIndexSavedState();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::UnityEngine::TextCore::Text::TextHandle*& __cordl_internal_get_m_TextHandle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextHandle*> const& __cordl_internal_get_m_TextHandle() const;

  constexpr ::UnityEngine::TextSelectingUtilities*& __cordl_internal_get_m_TextSelectingUtility();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextSelectingUtilities*> const& __cordl_internal_get_m_TextSelectingUtility() const;

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

  /// @brief Method .ctor, addr 0x486a484, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities, ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* getStaticF_s_KeyEditOps();

  /// @brief Method get_cursorIndex, addr 0x486a2e8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_hasSelection, addr 0x486a1f4, size 0x44, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_selectIndex, addr 0x486a37c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method get_text, addr 0x486a410, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  static inline void setStaticF_s_KeyEditOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextEditOp>* value);

  /// @brief Method set_cursorIndex, addr 0x486a30c, size 0x44, virtual false, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_revealCursor, addr 0x486a270, size 0x48, virtual false, abstract: false, final false
  inline void set_revealCursor(bool value);

  /// @brief Method set_selectIndex, addr 0x486a3a0, size 0x44, virtual false, abstract: false, final false
  inline void set_selectIndex(int32_t value);

  /// @brief Method set_text, addr 0x486a418, size 0x6c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextEditingUtilities, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_TextSelectingUtility) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_TextHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_CursorIndexSavedState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___isCompositionActive) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_UpdateImeWindowPosition) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___multiline) == 0x26, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities, ___m_Text) == 0x28, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::TextEditingUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextEditingUtilities*, "UnityEngine", "TextEditingUtilities");
