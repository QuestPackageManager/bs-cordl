#pragma once
// IWYU pragma private; include "UnityEngine/TextEditingUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextEditingUtilities)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Action;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine::TextCore::Text {
class TextHandle;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct TextEditOp;
}
namespace UnityEngine {
struct TextEditingUtilities_KeyEvent;
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
namespace UnityEngine {
struct TextEditingUtilities_KeyEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextEditingUtilities*);
MARK_VAL_T(::UnityEngine::TextEditingUtilities_KeyEvent);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextEditingUtilities*, "UnityEngine", "TextEditingUtilities");
DEFINE_IL2CPP_CLASS(::UnityEngine::TextEditingUtilities_KeyEvent, "UnityEngine", "TextEditingUtilities/KeyEvent");
// Dependencies UnityEngine.EventModifiers, UnityEngine.KeyCode
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextEditingUtilities/KeyEvent
struct CORDL_TYPE TextEditingUtilities_KeyEvent {
public:
  // Declarations
  __declspec(property(get = get_key)) ::UnityEngine::KeyCode key;

  __declspec(property(get = get_modifiers)) ::UnityEngine::EventModifiers modifiers;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextEditingUtilities_KeyEvent>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextEditingUtilities_KeyEvent>*();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method Equals, addr 0x6fb2e5c, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method Equals, addr 0x6fb2cf0, size 0xc0, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::TextEditingUtilities_KeyEvent other);

  /// [CompilerGenerated]
  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6fb2db0, size 0xac, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [CompilerGenerated]
  /// [IsReadOnly]
  /// @brief Method PrintMembers, addr 0x6fb2bb4, size 0x124, virtual false, abstract: false, final false
  inline bool PrintMembers(::System::Text::StringBuilder* builder);

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method ToString, addr 0x6fb2ad8, size 0xdc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x6fb2ac0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::KeyCode key, ::UnityEngine::EventModifiers modifiers);

  /// [CompilerGenerated]
  /// [IsReadOnly]
  /// @brief Method get_key, addr 0x6fb2ac8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::KeyCode get_key();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_modifiers, addr 0x6fb2ad0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextEditingUtilities_KeyEvent>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextEditingUtilities_KeyEvent>* i___System__IEquatable_1___UnityEngine__TextEditingUtilities_KeyEvent_();

  /// [CompilerGenerated]
  /// @brief Method op_Equality, addr 0x6fb2cd8, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::TextEditingUtilities_KeyEvent left, ::UnityEngine::TextEditingUtilities_KeyEvent right);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditingUtilities_KeyEvent();

  // Ctor Parameters [CppParam { name: "_key_k__BackingField", ty: "::UnityEngine::KeyCode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_modifiers_k__BackingField", ty:
  // "::UnityEngine::EventModifiers", modifiers: "", def_value: None, comment: None }]
  constexpr TextEditingUtilities_KeyEvent(::UnityEngine::KeyCode _key_k__BackingField, ::UnityEngine::EventModifiers _modifiers_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20076 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <key>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::KeyCode _key_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <modifiers>k__BackingField, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::EventModifiers _modifiers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextEditingUtilities_KeyEvent, _key_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextEditingUtilities_KeyEvent, _modifiers_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextEditingUtilities_KeyEvent) == 0x8, "Size mismatch!");

} // namespace UnityEngine
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextEditingUtilities
class CORDL_TYPE TextEditingUtilities : public ::System::Object {
public:
  // Declarations
  using KeyEvent = ::UnityEngine::TextEditingUtilities_KeyEvent;

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

  /// @brief Field s_GlobalKeyMappings, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_GlobalKeyMappings,
      put =
          setStaticF_s_GlobalKeyMappings)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* s_GlobalKeyMappings;

  /// @brief Field s_MacKeyMappings, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_MacKeyMappings,
      put = setStaticF_s_MacKeyMappings)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* s_MacKeyMappings;

  /// @brief Field s_WindowsLinuxKeyMappings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_WindowsLinuxKeyMappings, put = setStaticF_s_WindowsLinuxKeyMappings)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* s_WindowsLinuxKeyMappings;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  __declspec(property(put = set_selectIndexNoValidation)) int32_t selectIndexNoValidation;

  __declspec(property(get = get_stringCursorIndex)) int32_t stringCursorIndex;

  __declspec(property(get = get_stringSelectIndex)) int32_t stringSelectIndex;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Field textHandle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_textHandle, put = __cordl_internal_set_textHandle)) ::UnityEngine::TextCore::Text::TextHandle* textHandle;

  /// @brief Method Backspace, addr 0x6fb0840, size 0x3b4, virtual false, abstract: false, final false
  inline bool Backspace();

  /// @brief Method CanPaste, addr 0x6fb1464, size 0x68, virtual false, abstract: false, final false
  inline bool CanPaste();

  /// @brief Method Cut, addr 0x6fb0bf4, size 0x28, virtual false, abstract: false, final false
  inline bool Cut();

  /// @brief Method Delete, addr 0x6fb0620, size 0x220, virtual false, abstract: false, final false
  inline bool Delete();

  /// @brief Method DeleteLineBack, addr 0x6fb0e48, size 0x1d8, virtual false, abstract: false, final false
  inline bool DeleteLineBack();

  /// @brief Method DeleteSelection, addr 0x6fb1128, size 0x21c, virtual false, abstract: false, final false
  inline bool DeleteSelection();

  /// @brief Method DeleteWordBack, addr 0x6fb0cf8, size 0x150, virtual false, abstract: false, final false
  inline bool DeleteWordBack();

  /// @brief Method DeleteWordForward, addr 0x6fb1020, size 0x108, virtual false, abstract: false, final false
  inline bool DeleteWordForward();

  /// @brief Method EnableCursorPreviewState, addr 0x6fafe44, size 0xec, virtual false, abstract: false, final false
  inline void EnableCursorPreviewState();

  /// @brief Method GeneratePreviewString, addr 0x6fafcac, size 0x108, virtual false, abstract: false, final false
  inline ::StringW GeneratePreviewString(bool richText);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method HandleKeyEvent, addr 0x6faff30, size 0xe4, virtual false, abstract: false, final false
  inline bool HandleKeyEvent(::UnityEngine::KeyCode key, ::UnityEngine::EventModifiers modifiers);

  /// @brief Method Insert, addr 0x6fb1344, size 0x120, virtual false, abstract: false, final false
  inline bool Insert(char16_t c);

  static inline ::UnityEngine::TextEditingUtilities* New_ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities, ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method OnBlur, addr 0x6fb1568, size 0x58, virtual false, abstract: false, final false
  inline void OnBlur();

  /// @brief Method Paste, addr 0x6fb0c1c, size 0xdc, virtual false, abstract: false, final false
  inline bool Paste();

  /// @brief Method PerformOperation, addr 0x6fb0244, size 0x3dc, virtual false, abstract: false, final false
  inline void PerformOperation(::UnityEngine::TextEditOp operation);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method PhysicalKeyboardCanBeUsed, addr 0x6fb1664, size 0x28, virtual false, abstract: false, final false
  inline bool PhysicalKeyboardCanBeUsed();

  /// @brief Method ReplaceNewlinesWithSpaces, addr 0x6fb14cc, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW ReplaceNewlinesWithSpaces(::StringW value);

  /// @brief Method ReplaceSelection, addr 0x6fafaa4, size 0x150, virtual false, abstract: false, final false
  inline void ReplaceSelection(::StringW replace);

  /// @brief Method RestoreCursorState, addr 0x6fafdb4, size 0x90, virtual false, abstract: false, final false
  inline void RestoreCursorState();

  /// @brief Method SetImeWindowPosition, addr 0x6fafbfc, size 0xb0, virtual false, abstract: false, final false
  inline void SetImeWindowPosition(::UnityEngine::Vector2 worldPosition);

  /// @brief Method SetTextWithoutNotify, addr 0x6faf9dc, size 0x8, virtual false, abstract: false, final false
  inline void SetTextWithoutNotify(::StringW value);

  /// @brief Method ShouldUpdateImeWindowPosition, addr 0x6fafbf4, size 0x8, virtual false, abstract: false, final false
  inline bool ShouldUpdateImeWindowPosition();

  /// @brief Method TextEditOpFromEnum, addr 0x6fb0014, size 0x230, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::UnityEngine::TextEditOp> TextEditOpFromEnum(::UnityEngine::KeyCode key, ::UnityEngine::EventModifiers modifiers, bool IsMacOsFamily);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method TouchScreenKeyboardCanBeUsed, addr 0x6fb15c0, size 0xa4, virtual false, abstract: false, final false
  inline bool TouchScreenKeyboardCanBeUsed();

  /// @brief Method UpdateImeState, addr 0x6faf9fc, size 0xa8, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x6faf9e4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextSelectingUtilities* selectingUtilities, ::UnityEngine::TextCore::Text::TextHandle* textHandle, ::StringW text);

  static inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* getStaticF_s_GlobalKeyMappings();

  static inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* getStaticF_s_MacKeyMappings();

  static inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* getStaticF_s_WindowsLinuxKeyMappings();

  /// @brief Method get_cursorIndex, addr 0x6faf7fc, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_cursorIndexNoValidation, addr 0x6faf850, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_cursorIndexNoValidation();

  /// @brief Method get_hasSelection, addr 0x6faf748, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_selectIndex, addr 0x6faf918, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method get_stringCursorIndex, addr 0x6faf7c4, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_stringCursorIndex();

  /// @brief Method get_stringSelectIndex, addr 0x6faf8e0, size 0x38, virtual false, abstract: false, final false
  inline int32_t get_stringSelectIndex();

  /// @brief Method get_text, addr 0x6faf96c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  static inline void setStaticF_s_GlobalKeyMappings(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* value);

  static inline void setStaticF_s_MacKeyMappings(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* value);

  static inline void
  setStaticF_s_WindowsLinuxKeyMappings(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::TextEditingUtilities_KeyEvent, ::UnityEngine::TextEditOp>>* value);

  /// @brief Method set_cursorIndex, addr 0x6faf814, size 0x3c, virtual false, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_cursorIndexNoValidation, addr 0x6faf868, size 0x3c, virtual false, abstract: false, final false
  inline void set_cursorIndexNoValidation(int32_t value);

  /// @brief Method set_revealCursor, addr 0x6faf784, size 0x40, virtual false, abstract: false, final false
  inline void set_revealCursor(bool value);

  /// @brief Method set_selectIndex, addr 0x6faf930, size 0x3c, virtual false, abstract: false, final false
  inline void set_selectIndex(int32_t value);

  /// @brief Method set_selectIndexNoValidation, addr 0x6faf8a4, size 0x3c, virtual false, abstract: false, final false
  inline void set_selectIndexNoValidation(int32_t value);

  /// @brief Method set_text, addr 0x6faf974, size 0x68, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditingUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEditingUtilities", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEditingUtilities(TextEditingUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEditingUtilities", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEditingUtilities(TextEditingUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20077 };

  /// @brief Field m_TextSelectingUtility, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::TextSelectingUtilities* ___m_TextSelectingUtility;

  /// @brief Field textHandle, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextHandle* ___textHandle;

  /// @brief Field m_CursorIndexSavedState, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_CursorIndexSavedState;

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
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

static_assert(sizeof(::UnityEngine::TextEditingUtilities) == 0x48, "Size mismatch!");

} // namespace UnityEngine
