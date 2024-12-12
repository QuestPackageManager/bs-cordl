#pragma once
// IWYU pragma private; include "UnityEngine/TextSelectingUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSelectingUtilities)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Action;
}
namespace UnityEngine::TextCore::Text {
struct TextElementInfo;
}
namespace UnityEngine::TextCore::Text {
class TextHandle;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct TextEditor_DblClickSnapping;
}
namespace UnityEngine {
struct TextSelectOp;
}
namespace UnityEngine {
struct TextSelectingUtilities_CharacterType;
}
namespace UnityEngine {
struct TextSelectingUtilities_Direction;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct TextSelectingUtilities_CharacterType;
}
namespace UnityEngine {
struct TextSelectingUtilities_Direction;
}
namespace UnityEngine {
class TextSelectingUtilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextSelectingUtilities_CharacterType);
MARK_VAL_T(::UnityEngine::TextSelectingUtilities_Direction);
MARK_REF_PTR_T(::UnityEngine::TextSelectingUtilities);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextSelectingUtilities/CharacterType
struct CORDL_TYPE TextSelectingUtilities_CharacterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextSelectingUtilities_CharacterType_Unwrapped
  enum struct __TextSelectingUtilities_CharacterType_Unwrapped : int32_t {
    __E_LetterLike = static_cast<int32_t>(0x0),
    __E_Symbol = static_cast<int32_t>(0x1),
    __E_Symbol2 = static_cast<int32_t>(0x2),
    __E_WhiteSpace = static_cast<int32_t>(0x3),
    __E_NewLine = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextSelectingUtilities_CharacterType_Unwrapped() const noexcept {
    return static_cast<__TextSelectingUtilities_CharacterType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSelectingUtilities_CharacterType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextSelectingUtilities_CharacterType(int32_t value__) noexcept;

  /// @brief Field LetterLike value: I32(0)
  static ::UnityEngine::TextSelectingUtilities_CharacterType const LetterLike;

  /// @brief Field NewLine value: I32(4)
  static ::UnityEngine::TextSelectingUtilities_CharacterType const NewLine;

  /// @brief Field Symbol value: I32(1)
  static ::UnityEngine::TextSelectingUtilities_CharacterType const Symbol;

  /// @brief Field Symbol2 value: I32(2)
  static ::UnityEngine::TextSelectingUtilities_CharacterType const Symbol2;

  /// @brief Field WhiteSpace value: I32(3)
  static ::UnityEngine::TextSelectingUtilities_CharacterType const WhiteSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16662 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextSelectingUtilities_CharacterType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextSelectingUtilities_CharacterType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TextSelectingUtilities/Direction
struct CORDL_TYPE TextSelectingUtilities_Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextSelectingUtilities_Direction_Unwrapped
  enum struct __TextSelectingUtilities_Direction_Unwrapped : int32_t {
    __E_Forward = static_cast<int32_t>(0x0),
    __E_Backward = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextSelectingUtilities_Direction_Unwrapped() const noexcept {
    return static_cast<__TextSelectingUtilities_Direction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSelectingUtilities_Direction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextSelectingUtilities_Direction(int32_t value__) noexcept;

  /// @brief Field Backward value: I32(1)
  static ::UnityEngine::TextSelectingUtilities_Direction const Backward;

  /// @brief Field Forward value: I32(0)
  static ::UnityEngine::TextSelectingUtilities_Direction const Forward;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16663 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextSelectingUtilities_Direction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextSelectingUtilities_Direction, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object, UnityEngine.TextEditor::DblClickSnapping
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TextSelectingUtilities
class CORDL_TYPE TextSelectingUtilities : public ::System::Object {
public:
  // Declarations
  using CharacterType = ::UnityEngine::TextSelectingUtilities_CharacterType;

  using Direction = ::UnityEngine::TextSelectingUtilities_Direction;

  /// @brief Field OnCursorIndexChange, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_OnCursorIndexChange, put = __cordl_internal_set_OnCursorIndexChange)) ::System::Action* OnCursorIndexChange;

  /// @brief Field OnRevealCursorChange, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_OnRevealCursorChange, put = __cordl_internal_set_OnRevealCursorChange)) ::System::Action* OnRevealCursorChange;

  /// @brief Field OnSelectIndexChange, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_OnSelectIndexChange, put = __cordl_internal_set_OnSelectIndexChange)) ::System::Action* OnSelectIndexChange;

  __declspec(property(get = get_characterCount)) int32_t characterCount;

  __declspec(property(get = get_cursorIndex, put = set_cursorIndex)) int32_t cursorIndex;

  /// @brief Field dblClickSnap, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_dblClickSnap, put = __cordl_internal_set_dblClickSnap)) ::UnityEngine::TextEditor_DblClickSnapping dblClickSnap;

  /// @brief Field hasHorizontalCursorPos, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_hasHorizontalCursorPos, put = __cordl_internal_set_hasHorizontalCursorPos)) bool hasHorizontalCursorPos;

  __declspec(property(get = get_hasSelection)) bool hasSelection;

  /// @brief Field iAltCursorPos, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_iAltCursorPos, put = __cordl_internal_set_iAltCursorPos)) int32_t iAltCursorPos;

  __declspec(property(get = get_m_CharacterCount)) int32_t m_CharacterCount;

  /// @brief Field m_CursorIndex, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CursorIndex, put = __cordl_internal_set_m_CursorIndex)) int32_t m_CursorIndex;

  /// @brief Field m_DblClickInitPosEnd, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DblClickInitPosEnd, put = __cordl_internal_set_m_DblClickInitPosEnd)) int32_t m_DblClickInitPosEnd;

  /// @brief Field m_DblClickInitPosStart, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DblClickInitPosStart, put = __cordl_internal_set_m_DblClickInitPosStart)) int32_t m_DblClickInitPosStart;

  /// @brief Field m_MouseDragSelectsWholeWords, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MouseDragSelectsWholeWords, put = __cordl_internal_set_m_MouseDragSelectsWholeWords)) bool m_MouseDragSelectsWholeWords;

  /// @brief Field m_RevealCursor, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RevealCursor, put = __cordl_internal_set_m_RevealCursor)) bool m_RevealCursor;

  /// @brief Field m_SelectIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SelectIndex, put = __cordl_internal_set_m_SelectIndex)) int32_t m_SelectIndex;

  __declspec(property(get = get_m_TextElementInfos)) ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> m_TextElementInfos;

  /// @brief Field m_TextHandle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextHandle, put = __cordl_internal_set_m_TextHandle)) ::UnityEngine::TextCore::Text::TextHandle* m_TextHandle;

  /// @brief Field m_bJustSelected, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_bJustSelected, put = __cordl_internal_set_m_bJustSelected)) bool m_bJustSelected;

  __declspec(property(get = get_revealCursor, put = set_revealCursor)) bool revealCursor;

  /// @brief Field s_KeySelectOps, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_KeySelectOps,
                      put = setStaticF_s_KeySelectOps)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* s_KeySelectOps;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  __declspec(property(get = get_selectedText)) ::StringW selectedText;

  /// @brief Method ClampTextIndex, addr 0x48e8234, size 0x24, virtual false, abstract: false, final false
  inline int32_t ClampTextIndex(int32_t index);

  /// @brief Method ClassifyChar, addr 0x48e8128, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextSelectingUtilities_CharacterType ClassifyChar(int32_t index);

  /// @brief Method ClearCursorPos, addr 0x48e6328, size 0x10, virtual false, abstract: false, final false
  inline void ClearCursorPos();

  /// @brief Method Copy, addr 0x48e6148, size 0x98, virtual false, abstract: false, final false
  inline void Copy();

  /// @brief Method DblClickSnap, addr 0x48e7d9c, size 0x8, virtual false, abstract: false, final false
  inline void DblClickSnap(::UnityEngine::TextEditor_DblClickSnapping snapping);

  /// @brief Method EnsureValidCodePointIndex, addr 0x48e4cd8, size 0x58, virtual false, abstract: false, final false
  inline int32_t EnsureValidCodePointIndex(int32_t index);

  /// @brief Method ExpandSelectGraphicalLineEnd, addr 0x48e5d30, size 0xf0, virtual false, abstract: false, final false
  inline void ExpandSelectGraphicalLineEnd();

  /// @brief Method ExpandSelectGraphicalLineStart, addr 0x48e5c40, size 0xf0, virtual false, abstract: false, final false
  inline void ExpandSelectGraphicalLineStart();

  /// @brief Method FindEndOfClassification, addr 0x48e6c74, size 0x144, virtual false, abstract: false, final false
  inline int32_t FindEndOfClassification(int32_t p, ::UnityEngine::TextSelectingUtilities_Direction dir);

  /// @brief Method FindEndOfPreviousWord, addr 0x48e6700, size 0xdc, virtual false, abstract: false, final false
  inline int32_t FindEndOfPreviousWord(int32_t p);

  /// @brief Method FindNextSeperator, addr 0x48e7a54, size 0x84, virtual false, abstract: false, final false
  inline int32_t FindNextSeperator(int32_t startPos);

  /// @brief Method FindPrevSeperator, addr 0x48e7c68, size 0x9c, virtual false, abstract: false, final false
  inline int32_t FindPrevSeperator(int32_t startPos);

  /// @brief Method FindStartOfNextWord, addr 0x48e653c, size 0x1c4, virtual false, abstract: false, final false
  inline int32_t FindStartOfNextWord(int32_t p);

  /// @brief Method GetGraphicalLineEnd, addr 0x48e6a70, size 0xb4, virtual false, abstract: false, final false
  inline int32_t GetGraphicalLineEnd(int32_t p);

  /// @brief Method GetGraphicalLineStart, addr 0x48e69c4, size 0xac, virtual false, abstract: false, final false
  inline int32_t GetGraphicalLineStart(int32_t p);

  /// @brief Method HandleKeyEvent, addr 0x48e4ef0, size 0x10c, virtual false, abstract: false, final false
  inline bool HandleKeyEvent(::UnityEngine::Event* e);

  /// @brief Method IndexOfEndOfLine, addr 0x48e6b24, size 0x40, virtual false, abstract: false, final false
  inline int32_t IndexOfEndOfLine(int32_t startIndex);

  /// @brief Method InitKeyActions, addr 0x48e4ffc, size 0x404, virtual false, abstract: false, final false
  inline void InitKeyActions();

  /// @brief Method IsValidCodePointIndex, addr 0x48e8258, size 0xd0, virtual false, abstract: false, final false
  inline bool IsValidCodePointIndex(int32_t index);

  /// @brief Method MapKey, addr 0x48e6298, size 0x90, virtual false, abstract: false, final false
  static inline void MapKey(::StringW key, ::UnityEngine::TextSelectOp action);

  /// @brief Method MouseDragSelectsWholeWords, addr 0x48e7d04, size 0x98, virtual false, abstract: false, final false
  inline void MouseDragSelectsWholeWords(bool on);

  /// @brief Method MoveCursorToPosition_Internal, addr 0x48e7da4, size 0x9c, virtual false, abstract: false, final false
  inline void MoveCursorToPosition_Internal(::UnityEngine::Vector2 cursorPosition, bool shift);

  /// @brief Method MoveDown, addr 0x48e71fc, size 0x140, virtual false, abstract: false, final false
  inline void MoveDown();

  /// @brief Method MoveGraphicalLineEnd, addr 0x48e7670, size 0xb4, virtual false, abstract: false, final false
  inline void MoveGraphicalLineEnd();

  /// @brief Method MoveGraphicalLineStart, addr 0x48e75bc, size 0xb4, virtual false, abstract: false, final false
  inline void MoveGraphicalLineStart();

  /// @brief Method MoveLeft, addr 0x48e6fbc, size 0x10c, virtual false, abstract: false, final false
  inline void MoveLeft();

  /// @brief Method MoveLineEnd, addr 0x48e7470, size 0x14c, virtual false, abstract: false, final false
  inline void MoveLineEnd();

  /// @brief Method MoveLineStart, addr 0x48e733c, size 0x134, virtual false, abstract: false, final false
  inline void MoveLineStart();

  /// @brief Method MoveParagraphBackward, addr 0x48e7904, size 0x150, virtual false, abstract: false, final false
  inline void MoveParagraphBackward();

  /// @brief Method MoveParagraphForward, addr 0x48e77f8, size 0x10c, virtual false, abstract: false, final false
  inline void MoveParagraphForward();

  /// @brief Method MoveRight, addr 0x48e6ea8, size 0x114, virtual false, abstract: false, final false
  inline void MoveRight();

  /// @brief Method MoveTextEnd, addr 0x48e7780, size 0x78, virtual false, abstract: false, final false
  inline void MoveTextEnd();

  /// @brief Method MoveTextStart, addr 0x48e7724, size 0x5c, virtual false, abstract: false, final false
  inline void MoveTextStart();

  /// @brief Method MoveToEndOfPreviousWord, addr 0x48e7ba0, size 0xc8, virtual false, abstract: false, final false
  inline void MoveToEndOfPreviousWord();

  /// @brief Method MoveToStartOfNextWord, addr 0x48e7ad8, size 0xc8, virtual false, abstract: false, final false
  inline void MoveToStartOfNextWord();

  /// @brief Method MoveUp, addr 0x48e70c8, size 0x134, virtual false, abstract: false, final false
  inline void MoveUp();

  /// @brief Method MoveWordLeft, addr 0x48e68cc, size 0xf8, virtual false, abstract: false, final false
  inline void MoveWordLeft();

  /// @brief Method MoveWordRight, addr 0x48e67dc, size 0xf0, virtual false, abstract: false, final false
  inline void MoveWordRight();

  static inline ::UnityEngine::TextSelectingUtilities* New_ctor(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  /// @brief Method NextCodePointIndex, addr 0x48e645c, size 0xe0, virtual false, abstract: false, final false
  inline int32_t NextCodePointIndex(int32_t index);

  /// @brief Method OnFocus, addr 0x48e6338, size 0x4c, virtual false, abstract: false, final false
  inline void OnFocus(bool selectAll);

  /// @brief Method PerformOperation, addr 0x48e5400, size 0x1f0, virtual false, abstract: false, final false
  inline bool PerformOperation(::UnityEngine::TextSelectOp operation);

  /// @brief Method PreviousCodePointIndex, addr 0x48e6384, size 0xd8, virtual false, abstract: false, final false
  inline int32_t PreviousCodePointIndex(int32_t index);

  /// @brief Method SelectAll, addr 0x48e61e0, size 0x6c, virtual false, abstract: false, final false
  inline void SelectAll();

  /// @brief Method SelectCurrentParagraph, addr 0x48e6db8, size 0xf0, virtual false, abstract: false, final false
  inline void SelectCurrentParagraph();

  /// @brief Method SelectCurrentWord, addr 0x48e6b64, size 0x110, virtual false, abstract: false, final false
  inline void SelectCurrentWord();

  /// @brief Method SelectDown, addr 0x48e5854, size 0x6c, virtual false, abstract: false, final false
  inline void SelectDown();

  /// @brief Method SelectGraphicalLineEnd, addr 0x48e60ec, size 0x5c, virtual false, abstract: false, final false
  inline void SelectGraphicalLineEnd();

  /// @brief Method SelectGraphicalLineStart, addr 0x48e6090, size 0x5c, virtual false, abstract: false, final false
  inline void SelectGraphicalLineStart();

  /// @brief Method SelectLeft, addr 0x48e55f0, size 0xfc, virtual false, abstract: false, final false
  inline void SelectLeft();

  /// @brief Method SelectNone, addr 0x48e624c, size 0x4c, virtual false, abstract: false, final false
  inline void SelectNone();

  /// @brief Method SelectParagraphBackward, addr 0x48e5f34, size 0x15c, virtual false, abstract: false, final false
  inline void SelectParagraphBackward();

  /// @brief Method SelectParagraphForward, addr 0x48e5e20, size 0x114, virtual false, abstract: false, final false
  inline void SelectParagraphForward();

  /// @brief Method SelectRight, addr 0x48e56ec, size 0xfc, virtual false, abstract: false, final false
  inline void SelectRight();

  /// @brief Method SelectTextEnd, addr 0x48e5c00, size 0x40, virtual false, abstract: false, final false
  inline void SelectTextEnd();

  /// @brief Method SelectTextStart, addr 0x48e5bd8, size 0x28, virtual false, abstract: false, final false
  inline void SelectTextStart();

  /// @brief Method SelectToEndOfPreviousWord, addr 0x48e5b20, size 0x5c, virtual false, abstract: false, final false
  inline void SelectToEndOfPreviousWord();

  /// @brief Method SelectToPosition, addr 0x48e7e40, size 0x2e8, virtual false, abstract: false, final false
  inline void SelectToPosition(::UnityEngine::Vector2 cursorPosition);

  /// @brief Method SelectToStartOfNextWord, addr 0x48e5b7c, size 0x5c, virtual false, abstract: false, final false
  inline void SelectToStartOfNextWord();

  /// @brief Method SelectUp, addr 0x48e57e8, size 0x6c, virtual false, abstract: false, final false
  inline void SelectUp();

  /// @brief Method SelectWordLeft, addr 0x48e59f0, size 0x130, virtual false, abstract: false, final false
  inline void SelectWordLeft();

  /// @brief Method SelectWordRight, addr 0x48e58c0, size 0x130, virtual false, abstract: false, final false
  inline void SelectWordRight();

  /// @brief Method SetCursorIndexWithoutNotify, addr 0x48e4d5c, size 0x8, virtual false, abstract: false, final false
  inline void SetCursorIndexWithoutNotify(int32_t index);

  /// @brief Method SetSelectIndexWithoutNotify, addr 0x48e4d90, size 0x8, virtual false, abstract: false, final false
  inline void SetSelectIndexWithoutNotify(int32_t index);

  constexpr ::System::Action* const& __cordl_internal_get_OnCursorIndexChange() const;

  constexpr ::System::Action*& __cordl_internal_get_OnCursorIndexChange();

  constexpr ::System::Action* const& __cordl_internal_get_OnRevealCursorChange() const;

  constexpr ::System::Action*& __cordl_internal_get_OnRevealCursorChange();

  constexpr ::System::Action* const& __cordl_internal_get_OnSelectIndexChange() const;

  constexpr ::System::Action*& __cordl_internal_get_OnSelectIndexChange();

  constexpr ::UnityEngine::TextEditor_DblClickSnapping const& __cordl_internal_get_dblClickSnap() const;

  constexpr ::UnityEngine::TextEditor_DblClickSnapping& __cordl_internal_get_dblClickSnap();

  constexpr bool const& __cordl_internal_get_hasHorizontalCursorPos() const;

  constexpr bool& __cordl_internal_get_hasHorizontalCursorPos();

  constexpr int32_t const& __cordl_internal_get_iAltCursorPos() const;

  constexpr int32_t& __cordl_internal_get_iAltCursorPos();

  constexpr int32_t const& __cordl_internal_get_m_CursorIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CursorIndex();

  constexpr int32_t const& __cordl_internal_get_m_DblClickInitPosEnd() const;

  constexpr int32_t& __cordl_internal_get_m_DblClickInitPosEnd();

  constexpr int32_t const& __cordl_internal_get_m_DblClickInitPosStart() const;

  constexpr int32_t& __cordl_internal_get_m_DblClickInitPosStart();

  constexpr bool const& __cordl_internal_get_m_MouseDragSelectsWholeWords() const;

  constexpr bool& __cordl_internal_get_m_MouseDragSelectsWholeWords();

  constexpr bool const& __cordl_internal_get_m_RevealCursor() const;

  constexpr bool& __cordl_internal_get_m_RevealCursor();

  constexpr int32_t const& __cordl_internal_get_m_SelectIndex() const;

  constexpr int32_t& __cordl_internal_get_m_SelectIndex();

  constexpr ::UnityEngine::TextCore::Text::TextHandle* const& __cordl_internal_get_m_TextHandle() const;

  constexpr ::UnityEngine::TextCore::Text::TextHandle*& __cordl_internal_get_m_TextHandle();

  constexpr bool const& __cordl_internal_get_m_bJustSelected() const;

  constexpr bool& __cordl_internal_get_m_bJustSelected();

  constexpr void __cordl_internal_set_OnCursorIndexChange(::System::Action* value);

  constexpr void __cordl_internal_set_OnRevealCursorChange(::System::Action* value);

  constexpr void __cordl_internal_set_OnSelectIndexChange(::System::Action* value);

  constexpr void __cordl_internal_set_dblClickSnap(::UnityEngine::TextEditor_DblClickSnapping value);

  constexpr void __cordl_internal_set_hasHorizontalCursorPos(bool value);

  constexpr void __cordl_internal_set_iAltCursorPos(int32_t value);

  constexpr void __cordl_internal_set_m_CursorIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DblClickInitPosEnd(int32_t value);

  constexpr void __cordl_internal_set_m_DblClickInitPosStart(int32_t value);

  constexpr void __cordl_internal_set_m_MouseDragSelectsWholeWords(bool value);

  constexpr void __cordl_internal_set_m_RevealCursor(bool value);

  constexpr void __cordl_internal_set_m_SelectIndex(int32_t value);

  constexpr void __cordl_internal_set_m_TextHandle(::UnityEngine::TextCore::Text::TextHandle* value);

  constexpr void __cordl_internal_set_m_bJustSelected(bool value);

  /// @brief Method .ctor, addr 0x48e4ea8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* getStaticF_s_KeySelectOps();

  /// @brief Method get_characterCount, addr 0x48e4c1c, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_characterCount();

  /// @brief Method get_cursorIndex, addr 0x48e4bac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_hasSelection, addr 0x48e4b74, size 0x38, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_m_CharacterCount, addr 0x48e4bf4, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_m_CharacterCount();

  /// @brief Method get_m_TextElementInfos, addr 0x48e4cb0, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> get_m_TextElementInfos();

  /// @brief Method get_revealCursor, addr 0x48e4bbc, size 0x8, virtual false, abstract: false, final false
  inline bool get_revealCursor();

  /// @brief Method get_selectIndex, addr 0x48e4bb4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method get_selectedText, addr 0x48e4d98, size 0x110, virtual false, abstract: false, final false
  inline ::StringW get_selectedText();

  static inline void setStaticF_s_KeySelectOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* value);

  /// @brief Method set_cursorIndex, addr 0x48e4d30, size 0x2c, virtual false, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_revealCursor, addr 0x48e4bc4, size 0x30, virtual false, abstract: false, final false
  inline void set_revealCursor(bool value);

  /// @brief Method set_selectIndex, addr 0x48e4d64, size 0x2c, virtual false, abstract: false, final false
  inline void set_selectIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSelectingUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextSelectingUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextSelectingUtilities(TextSelectingUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextSelectingUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextSelectingUtilities(TextSelectingUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16664 };

  /// @brief Field kMoveDownHeight offset 0xffffffff size 0x4
  static constexpr int32_t kMoveDownHeight{ static_cast<int32_t>(0x5) };

  /// @brief Field kNewLineChar offset 0xffffffff size 0x2
  static constexpr char16_t kNewLineChar{ u'\n' };

  /// @brief Field dblClickSnap, offset: 0x10, size: 0x1, def value: None
  ::UnityEngine::TextEditor_DblClickSnapping ___dblClickSnap;

  /// @brief Field iAltCursorPos, offset: 0x14, size: 0x4, def value: None
  int32_t ___iAltCursorPos;

  /// @brief Field hasHorizontalCursorPos, offset: 0x18, size: 0x1, def value: None
  bool ___hasHorizontalCursorPos;

  /// @brief Field m_bJustSelected, offset: 0x19, size: 0x1, def value: None
  bool ___m_bJustSelected;

  /// @brief Field m_MouseDragSelectsWholeWords, offset: 0x1a, size: 0x1, def value: None
  bool ___m_MouseDragSelectsWholeWords;

  /// @brief Field m_DblClickInitPosStart, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_DblClickInitPosStart;

  /// @brief Field m_DblClickInitPosEnd, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_DblClickInitPosEnd;

  /// @brief Field m_TextHandle, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextHandle* ___m_TextHandle;

  /// @brief Field m_RevealCursor, offset: 0x30, size: 0x1, def value: None
  bool ___m_RevealCursor;

  /// @brief Field m_CursorIndex, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_CursorIndex;

  /// @brief Field m_SelectIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_SelectIndex;

  /// @brief Field OnCursorIndexChange, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___OnCursorIndexChange;

  /// @brief Field OnSelectIndexChange, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___OnSelectIndexChange;

  /// @brief Field OnRevealCursorChange, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___OnRevealCursorChange;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___dblClickSnap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___iAltCursorPos) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___hasHorizontalCursorPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_bJustSelected) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_MouseDragSelectsWholeWords) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_DblClickInitPosStart) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_DblClickInitPosEnd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_TextHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_RevealCursor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_CursorIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___m_SelectIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___OnCursorIndexChange) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___OnSelectIndexChange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___OnRevealCursorChange) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextSelectingUtilities, 0x58>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextSelectingUtilities_CharacterType, "UnityEngine", "TextSelectingUtilities/CharacterType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextSelectingUtilities_Direction, "UnityEngine", "TextSelectingUtilities/Direction");
NEED_NO_BOX(::UnityEngine::TextSelectingUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextSelectingUtilities*, "UnityEngine", "TextSelectingUtilities");
