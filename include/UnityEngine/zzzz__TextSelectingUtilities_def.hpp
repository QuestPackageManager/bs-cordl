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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19628 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19629 };

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

  __declspec(property(get = get_cursorIndexNoValidation, put = set_cursorIndexNoValidation)) int32_t cursorIndexNoValidation;

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

  /// @brief Field m_bJustSelected, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_bJustSelected, put = __cordl_internal_set_m_bJustSelected)) bool m_bJustSelected;

  __declspec(property(get = get_revealCursor, put = set_revealCursor)) bool revealCursor;

  /// @brief Field s_KeySelectOps, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_KeySelectOps,
                      put = setStaticF_s_KeySelectOps)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* s_KeySelectOps;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  __declspec(property(put = set_selectIndexNoValidation)) int32_t selectIndexNoValidation;

  __declspec(property(get = get_selectedText)) ::StringW selectedText;

  /// @brief Field textHandle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_textHandle, put = __cordl_internal_set_textHandle)) ::UnityEngine::TextCore::Text::TextHandle* textHandle;

  /// @brief Method ClampTextIndex, addr 0x698aaac, size 0x24, virtual false, abstract: false, final false
  inline int32_t ClampTextIndex(int32_t index);

  /// @brief Method ClassifyChar, addr 0x698d0a0, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::TextSelectingUtilities_CharacterType ClassifyChar(int32_t index);

  /// @brief Method ClearCursorPos, addr 0x6989960, size 0x10, virtual false, abstract: false, final false
  inline void ClearCursorPos();

  /// @brief Method Copy, addr 0x6989afc, size 0x94, virtual false, abstract: false, final false
  inline void Copy();

  /// @brief Method DblClickSnap, addr 0x698ca98, size 0x8, virtual false, abstract: false, final false
  inline void DblClickSnap(::UnityEngine::TextEditor_DblClickSnapping snapping);

  /// @brief Method ExpandSelectGraphicalLineEnd, addr 0x698bb60, size 0xdc, virtual false, abstract: false, final false
  inline void ExpandSelectGraphicalLineEnd();

  /// @brief Method ExpandSelectGraphicalLineStart, addr 0x698ba84, size 0xdc, virtual false, abstract: false, final false
  inline void ExpandSelectGraphicalLineStart();

  /// @brief Method FindEndOfClassification, addr 0x698c618, size 0x14c, virtual false, abstract: false, final false
  inline int32_t FindEndOfClassification(int32_t p, ::UnityEngine::TextSelectingUtilities_Direction dir);

  /// @brief Method FindEndOfPreviousWord, addr 0x69895ec, size 0x114, virtual false, abstract: false, final false
  inline int32_t FindEndOfPreviousWord(int32_t p);

  /// @brief Method FindNextSeperator, addr 0x698c8f8, size 0x84, virtual false, abstract: false, final false
  inline int32_t FindNextSeperator(int32_t startPos);

  /// @brief Method FindPrevSeperator, addr 0x698c97c, size 0x9c, virtual false, abstract: false, final false
  inline int32_t FindPrevSeperator(int32_t startPos);

  /// @brief Method FindStartOfNextWord, addr 0x6989700, size 0x200, virtual false, abstract: false, final false
  inline int32_t FindStartOfNextWord(int32_t p);

  /// @brief Method GetGraphicalLineEnd, addr 0x698c2d0, size 0x114, virtual false, abstract: false, final false
  inline int32_t GetGraphicalLineEnd(int32_t p);

  /// @brief Method GetGraphicalLineStart, addr 0x698c1c8, size 0x108, virtual false, abstract: false, final false
  inline int32_t GetGraphicalLineStart(int32_t p);

  /// @brief Method HandleKeyEvent, addr 0x698abd8, size 0x128, virtual false, abstract: false, final false
  inline bool HandleKeyEvent(::UnityEngine::Event* e);

  /// @brief Method IndexOfEndOfLine, addr 0x698c3e4, size 0x40, virtual false, abstract: false, final false
  inline int32_t IndexOfEndOfLine(int32_t startIndex);

  /// @brief Method InitKeyActions, addr 0x698ad00, size 0x508, virtual false, abstract: false, final false
  inline void InitKeyActions();

  /// @brief Method MapKey, addr 0x698c074, size 0xa8, virtual false, abstract: false, final false
  static inline void MapKey(::StringW key, ::UnityEngine::TextSelectOp action);

  /// @brief Method MouseDragSelectsWholeWords, addr 0x698ca18, size 0x80, virtual false, abstract: false, final false
  inline void MouseDragSelectsWholeWords(bool on);

  /// @brief Method MoveCursorToPosition_Internal, addr 0x698caa0, size 0x98, virtual false, abstract: false, final false
  inline void MoveCursorToPosition_Internal(::UnityEngine::Vector2 cursorPosition, bool shift);

  /// @brief Method MoveDown, addr 0x6987f04, size 0x124, virtual false, abstract: false, final false
  inline void MoveDown();

  /// @brief Method MoveGraphicalLineEnd, addr 0x6988b28, size 0xb4, virtual false, abstract: false, final false
  inline void MoveGraphicalLineEnd();

  /// @brief Method MoveGraphicalLineStart, addr 0x6988a74, size 0xb4, virtual false, abstract: false, final false
  inline void MoveGraphicalLineStart();

  /// @brief Method MoveLeft, addr 0x6987c0c, size 0xec, virtual false, abstract: false, final false
  inline void MoveLeft();

  /// @brief Method MoveLineEnd, addr 0x6988154, size 0x14c, virtual false, abstract: false, final false
  inline void MoveLineEnd();

  /// @brief Method MoveLineStart, addr 0x6988028, size 0x12c, virtual false, abstract: false, final false
  inline void MoveLineStart();

  /// @brief Method MoveParagraphBackward, addr 0x698889c, size 0x1d8, virtual false, abstract: false, final false
  inline void MoveParagraphBackward();

  /// @brief Method MoveParagraphForward, addr 0x6988704, size 0x198, virtual false, abstract: false, final false
  inline void MoveParagraphForward();

  /// @brief Method MoveRight, addr 0x6987cf8, size 0xf4, virtual false, abstract: false, final false
  inline void MoveRight();

  /// @brief Method MoveTextEnd, addr 0x698868c, size 0x78, virtual false, abstract: false, final false
  inline void MoveTextEnd();

  /// @brief Method MoveTextStart, addr 0x6988630, size 0x5c, virtual false, abstract: false, final false
  inline void MoveTextStart();

  /// @brief Method MoveToEndOfPreviousWord, addr 0x6988468, size 0xbc, virtual false, abstract: false, final false
  inline void MoveToEndOfPreviousWord();

  /// @brief Method MoveToStartOfNextWord, addr 0x69883ac, size 0xbc, virtual false, abstract: false, final false
  inline void MoveToStartOfNextWord();

  /// @brief Method MoveUp, addr 0x6987dec, size 0x118, virtual false, abstract: false, final false
  inline void MoveUp();

  /// @brief Method MoveWordLeft, addr 0x6988524, size 0x10c, virtual false, abstract: false, final false
  inline void MoveWordLeft();

  /// @brief Method MoveWordRight, addr 0x69882a0, size 0x10c, virtual false, abstract: false, final false
  inline void MoveWordRight();

  static inline ::UnityEngine::TextSelectingUtilities* New_ctor(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  /// @brief Method NextCodePointIndex, addr 0x698c164, size 0x64, virtual false, abstract: false, final false
  inline int32_t NextCodePointIndex(int32_t index);

  /// @brief Method OnFocus, addr 0x698c11c, size 0x48, virtual false, abstract: false, final false
  inline void OnFocus(bool selectAll);

  /// @brief Method PerformOperation, addr 0x698b208, size 0x204, virtual false, abstract: false, final false
  inline bool PerformOperation(::UnityEngine::TextSelectOp operation);

  /// @brief Method PreviousCodePointIndex, addr 0x6989900, size 0x60, virtual false, abstract: false, final false
  inline int32_t PreviousCodePointIndex(int32_t index);

  /// @brief Method SelectAll, addr 0x698c008, size 0x6c, virtual false, abstract: false, final false
  inline void SelectAll();

  /// @brief Method SelectCurrentParagraph, addr 0x698c764, size 0x194, virtual false, abstract: false, final false
  inline void SelectCurrentParagraph();

  /// @brief Method SelectCurrentWord, addr 0x698c424, size 0x1f4, virtual false, abstract: false, final false
  inline void SelectCurrentWord();

  /// @brief Method SelectDown, addr 0x698b644, size 0x68, virtual false, abstract: false, final false
  inline void SelectDown();

  /// @brief Method SelectGraphicalLineEnd, addr 0x698bfb0, size 0x58, virtual false, abstract: false, final false
  inline void SelectGraphicalLineEnd();

  /// @brief Method SelectGraphicalLineStart, addr 0x698bf58, size 0x58, virtual false, abstract: false, final false
  inline void SelectGraphicalLineStart();

  /// @brief Method SelectLeft, addr 0x698b40c, size 0xe8, virtual false, abstract: false, final false
  inline void SelectLeft();

  /// @brief Method SelectNone, addr 0x6989c50, size 0x48, virtual false, abstract: false, final false
  inline void SelectNone();

  /// @brief Method SelectParagraphBackward, addr 0x698bdac, size 0x1ac, virtual false, abstract: false, final false
  inline void SelectParagraphBackward();

  /// @brief Method SelectParagraphForward, addr 0x698bc3c, size 0x170, virtual false, abstract: false, final false
  inline void SelectParagraphForward();

  /// @brief Method SelectRight, addr 0x698b4f4, size 0xe8, virtual false, abstract: false, final false
  inline void SelectRight();

  /// @brief Method SelectTextEnd, addr 0x698ba44, size 0x40, virtual false, abstract: false, final false
  inline void SelectTextEnd();

  /// @brief Method SelectTextStart, addr 0x698ba1c, size 0x28, virtual false, abstract: false, final false
  inline void SelectTextStart();

  /// @brief Method SelectToEndOfPreviousWord, addr 0x698b96c, size 0x58, virtual false, abstract: false, final false
  inline void SelectToEndOfPreviousWord();

  /// @brief Method SelectToPosition, addr 0x698cb38, size 0x568, virtual false, abstract: false, final false
  inline void SelectToPosition(::UnityEngine::Vector2 cursorPosition);

  /// @brief Method SelectToStartOfNextWord, addr 0x698b9c4, size 0x58, virtual false, abstract: false, final false
  inline void SelectToStartOfNextWord();

  /// @brief Method SelectUp, addr 0x698b5dc, size 0x68, virtual false, abstract: false, final false
  inline void SelectUp();

  /// @brief Method SelectWordLeft, addr 0x698b80c, size 0x160, virtual false, abstract: false, final false
  inline void SelectWordLeft();

  /// @brief Method SelectWordRight, addr 0x698b6ac, size 0x160, virtual false, abstract: false, final false
  inline void SelectWordRight();

  /// @brief Method SetCursorIndexWithoutNotify, addr 0x698aad0, size 0x8, virtual false, abstract: false, final false
  inline void SetCursorIndexWithoutNotify(int32_t index);

  /// @brief Method SetSelectIndexWithoutNotify, addr 0x698aad8, size 0x8, virtual false, abstract: false, final false
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

  constexpr bool const& __cordl_internal_get_m_bJustSelected() const;

  constexpr bool& __cordl_internal_get_m_bJustSelected();

  constexpr ::UnityEngine::TextCore::Text::TextHandle* const& __cordl_internal_get_textHandle() const;

  constexpr ::UnityEngine::TextCore::Text::TextHandle*& __cordl_internal_get_textHandle();

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

  constexpr void __cordl_internal_set_m_bJustSelected(bool value);

  constexpr void __cordl_internal_set_textHandle(::UnityEngine::TextCore::Text::TextHandle* value);

  /// @brief Method .ctor, addr 0x698a4f4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* getStaticF_s_KeySelectOps();

  /// @brief Method get_characterCount, addr 0x698a9b0, size 0xd4, virtual false, abstract: false, final false
  inline int32_t get_characterCount();

  /// @brief Method get_cursorIndex, addr 0x6986818, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_cursorIndexNoValidation, addr 0x69868f0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cursorIndexNoValidation();

  /// @brief Method get_hasSelection, addr 0x6986730, size 0x30, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_m_CharacterCount, addr 0x698a998, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_m_CharacterCount();

  /// @brief Method get_m_TextElementInfos, addr 0x698aa84, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> get_m_TextElementInfos();

  /// @brief Method get_revealCursor, addr 0x698a990, size 0x8, virtual false, abstract: false, final false
  inline bool get_revealCursor();

  /// @brief Method get_selectIndex, addr 0x6986a10, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method get_selectedText, addr 0x698aae0, size 0xf8, virtual false, abstract: false, final false
  inline ::StringW get_selectedText();

  static inline void setStaticF_s_KeySelectOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* value);

  /// @brief Method set_cursorIndex, addr 0x69868ac, size 0x2c, virtual false, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_cursorIndexNoValidation, addr 0x6986934, size 0x2c, virtual false, abstract: false, final false
  inline void set_cursorIndexNoValidation(int32_t value);

  /// @brief Method set_revealCursor, addr 0x69867a0, size 0x30, virtual false, abstract: false, final false
  inline void set_revealCursor(bool value);

  /// @brief Method set_selectIndex, addr 0x6986aa4, size 0x2c, virtual false, abstract: false, final false
  inline void set_selectIndex(int32_t value);

  /// @brief Method set_selectIndexNoValidation, addr 0x698699c, size 0x2c, virtual false, abstract: false, final false
  inline void set_selectIndexNoValidation(int32_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19630 };

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

  /// @brief Field textHandle, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextHandle* ___textHandle;

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

static_assert(offsetof(::UnityEngine::TextSelectingUtilities, ___textHandle) == 0x28, "Offset mismatch!");

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
