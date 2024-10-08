#pragma once
// IWYU pragma private; include "UnityEngine/TextSelectingUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__TextEditor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct TextSelectOp;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct __TextEditor__DblClickSnapping;
}
namespace UnityEngine {
struct __TextSelectingUtilities__CharacterType;
}
namespace UnityEngine {
struct __TextSelectingUtilities__Direction;
}
// Forward declare root types
namespace UnityEngine {
struct __TextSelectingUtilities__CharacterType;
}
namespace UnityEngine {
struct __TextSelectingUtilities__Direction;
}
namespace UnityEngine {
class TextSelectingUtilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__TextSelectingUtilities__CharacterType);
MARK_VAL_T(::UnityEngine::__TextSelectingUtilities__Direction);
MARK_REF_PTR_T(::UnityEngine::TextSelectingUtilities);
// Type: ::CharacterType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::TextSelectingUtilities::CharacterType
struct CORDL_TYPE __TextSelectingUtilities__CharacterType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TextSelectingUtilities__CharacterType_Unwrapped
  enum struct ____TextSelectingUtilities__CharacterType_Unwrapped : int32_t {
    __E_LetterLike = static_cast<int32_t>(0x0),
    __E_Symbol = static_cast<int32_t>(0x1),
    __E_Symbol2 = static_cast<int32_t>(0x2),
    __E_WhiteSpace = static_cast<int32_t>(0x3),
    __E_NewLine = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TextSelectingUtilities__CharacterType_Unwrapped() const noexcept {
    return static_cast<____TextSelectingUtilities__CharacterType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextSelectingUtilities__CharacterType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TextSelectingUtilities__CharacterType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LetterLike value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__TextSelectingUtilities__CharacterType const LetterLike;

  /// @brief Field NewLine value: static_cast<int32_t>(0x4)
  static ::UnityEngine::__TextSelectingUtilities__CharacterType const NewLine;

  /// @brief Field Symbol value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__TextSelectingUtilities__CharacterType const Symbol;

  /// @brief Field Symbol2 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__TextSelectingUtilities__CharacterType const Symbol2;

  /// @brief Field WhiteSpace value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__TextSelectingUtilities__CharacterType const WhiteSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TextSelectingUtilities__CharacterType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__TextSelectingUtilities__CharacterType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: ::Direction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::TextSelectingUtilities::Direction
struct CORDL_TYPE __TextSelectingUtilities__Direction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TextSelectingUtilities__Direction_Unwrapped
  enum struct ____TextSelectingUtilities__Direction_Unwrapped : int32_t {
    __E_Forward = static_cast<int32_t>(0x0),
    __E_Backward = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TextSelectingUtilities__Direction_Unwrapped() const noexcept {
    return static_cast<____TextSelectingUtilities__Direction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextSelectingUtilities__Direction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TextSelectingUtilities__Direction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Backward value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__TextSelectingUtilities__Direction const Backward;

  /// @brief Field Forward value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__TextSelectingUtilities__Direction const Forward;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16617 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__TextSelectingUtilities__Direction, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__TextSelectingUtilities__Direction, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::TextSelectingUtilities
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::TextSelectingUtilities*
class CORDL_TYPE TextSelectingUtilities : public ::System::Object {
public:
  // Declarations
  using CharacterType = ::UnityEngine::__TextSelectingUtilities__CharacterType;

  using Direction = ::UnityEngine::__TextSelectingUtilities__Direction;

  /// @brief Field OnCursorIndexChange, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_OnCursorIndexChange, put = __cordl_internal_set_OnCursorIndexChange)) ::System::Action* OnCursorIndexChange;

  /// @brief Field OnRevealCursorChange, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_OnRevealCursorChange, put = __cordl_internal_set_OnRevealCursorChange)) ::System::Action* OnRevealCursorChange;

  /// @brief Field OnSelectIndexChange, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_OnSelectIndexChange, put = __cordl_internal_set_OnSelectIndexChange)) ::System::Action* OnSelectIndexChange;

  __declspec(property(get = get_characterCount)) int32_t characterCount;

  __declspec(property(get = get_cursorIndex, put = set_cursorIndex)) int32_t cursorIndex;

  /// @brief Field dblClickSnap, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_dblClickSnap, put = __cordl_internal_set_dblClickSnap)) ::UnityEngine::__TextEditor__DblClickSnapping dblClickSnap;

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
  static __declspec(property(get = getStaticF_s_KeySelectOps,
                             put = setStaticF_s_KeySelectOps)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* s_KeySelectOps;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  __declspec(property(get = get_selectedText)) ::StringW selectedText;

  /// @brief Method ClampTextIndex, addr 0x486f48c, size 0x24, virtual false, abstract: false, final false
  inline int32_t ClampTextIndex(int32_t index);

  /// @brief Method ClassifyChar, addr 0x486f380, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::__TextSelectingUtilities__CharacterType ClassifyChar(int32_t index);

  /// @brief Method ClearCursorPos, addr 0x486ce54, size 0x10, virtual false, abstract: false, final false
  inline void ClearCursorPos();

  /// @brief Method Copy, addr 0x486cf5c, size 0xb4, virtual false, abstract: false, final false
  inline void Copy();

  /// @brief Method DblClickSnap, addr 0x486eff4, size 0x8, virtual false, abstract: false, final false
  inline void DblClickSnap(::UnityEngine::__TextEditor__DblClickSnapping snapping);

  /// @brief Method EnsureValidCodePointIndex, addr 0x486d368, size 0x58, virtual false, abstract: false, final false
  inline int32_t EnsureValidCodePointIndex(int32_t index);

  /// @brief Method ExpandSelectGraphicalLineEnd, addr 0x486e3cc, size 0xf0, virtual false, abstract: false, final false
  inline void ExpandSelectGraphicalLineEnd();

  /// @brief Method ExpandSelectGraphicalLineStart, addr 0x486e2dc, size 0xf0, virtual false, abstract: false, final false
  inline void ExpandSelectGraphicalLineStart();

  /// @brief Method FindEndOfClassification, addr 0x486ec08, size 0x144, virtual false, abstract: false, final false
  inline int32_t FindEndOfClassification(int32_t p, ::UnityEngine::__TextSelectingUtilities__Direction dir);

  /// @brief Method FindEndOfPreviousWord, addr 0x486c9ec, size 0xdc, virtual false, abstract: false, final false
  inline int32_t FindEndOfPreviousWord(int32_t p);

  /// @brief Method FindNextSeperator, addr 0x486ee3c, size 0x84, virtual false, abstract: false, final false
  inline int32_t FindNextSeperator(int32_t startPos);

  /// @brief Method FindPrevSeperator, addr 0x486eec0, size 0x9c, virtual false, abstract: false, final false
  inline int32_t FindPrevSeperator(int32_t startPos);

  /// @brief Method FindStartOfNextWord, addr 0x486cac8, size 0x1c4, virtual false, abstract: false, final false
  inline int32_t FindStartOfNextWord(int32_t p);

  /// @brief Method GetGraphicalLineEnd, addr 0x486e9ec, size 0xcc, virtual false, abstract: false, final false
  inline int32_t GetGraphicalLineEnd(int32_t p);

  /// @brief Method GetGraphicalLineStart, addr 0x486e928, size 0xc4, virtual false, abstract: false, final false
  inline int32_t GetGraphicalLineStart(int32_t p);

  /// @brief Method HandleKeyEvent, addr 0x486d518, size 0x180, virtual false, abstract: false, final false
  inline bool HandleKeyEvent(::UnityEngine::Event* e);

  /// @brief Method IndexOfEndOfLine, addr 0x486eab8, size 0x40, virtual false, abstract: false, final false
  inline int32_t IndexOfEndOfLine(int32_t startIndex);

  /// @brief Method InitKeyActions, addr 0x486d698, size 0x404, virtual false, abstract: false, final false
  inline void InitKeyActions();

  /// @brief Method IsValidCodePointIndex, addr 0x486f4b0, size 0xd0, virtual false, abstract: false, final false
  inline bool IsValidCodePointIndex(int32_t index);

  /// @brief Method MapKey, addr 0x486e850, size 0x8c, virtual false, abstract: false, final false
  static inline void MapKey(::StringW key, ::UnityEngine::TextSelectOp action);

  /// @brief Method MouseDragSelectsWholeWords, addr 0x486ef5c, size 0x98, virtual false, abstract: false, final false
  inline void MouseDragSelectsWholeWords(bool on);

  /// @brief Method MoveCursorToPosition_Internal, addr 0x486effc, size 0x9c, virtual false, abstract: false, final false
  inline void MoveCursorToPosition_Internal(::UnityEngine::Vector2 cursorPosition, bool shift);

  /// @brief Method MoveDown, addr 0x486b710, size 0x140, virtual false, abstract: false, final false
  inline void MoveDown();

  /// @brief Method MoveGraphicalLineEnd, addr 0x486c22c, size 0xb4, virtual false, abstract: false, final false
  inline void MoveGraphicalLineEnd();

  /// @brief Method MoveGraphicalLineStart, addr 0x486c178, size 0xb4, virtual false, abstract: false, final false
  inline void MoveGraphicalLineStart();

  /// @brief Method MoveLeft, addr 0x486b3bc, size 0x10c, virtual false, abstract: false, final false
  inline void MoveLeft();

  /// @brief Method MoveLineEnd, addr 0x486b984, size 0x14c, virtual false, abstract: false, final false
  inline void MoveLineEnd();

  /// @brief Method MoveLineStart, addr 0x486b850, size 0x134, virtual false, abstract: false, final false
  inline void MoveLineStart();

  /// @brief Method MoveParagraphBackward, addr 0x486c028, size 0x150, virtual false, abstract: false, final false
  inline void MoveParagraphBackward();

  /// @brief Method MoveParagraphForward, addr 0x486bf1c, size 0x10c, virtual false, abstract: false, final false
  inline void MoveParagraphForward();

  /// @brief Method MoveRight, addr 0x486b4c8, size 0x114, virtual false, abstract: false, final false
  inline void MoveRight();

  /// @brief Method MoveTextEnd, addr 0x486bea4, size 0x78, virtual false, abstract: false, final false
  inline void MoveTextEnd();

  /// @brief Method MoveTextStart, addr 0x486be48, size 0x5c, virtual false, abstract: false, final false
  inline void MoveTextStart();

  /// @brief Method MoveToEndOfPreviousWord, addr 0x486bc88, size 0xc8, virtual false, abstract: false, final false
  inline void MoveToEndOfPreviousWord();

  /// @brief Method MoveToStartOfNextWord, addr 0x486bbc0, size 0xc8, virtual false, abstract: false, final false
  inline void MoveToStartOfNextWord();

  /// @brief Method MoveUp, addr 0x486b5dc, size 0x134, virtual false, abstract: false, final false
  inline void MoveUp();

  /// @brief Method MoveWordLeft, addr 0x486bd50, size 0xf8, virtual false, abstract: false, final false
  inline void MoveWordLeft();

  /// @brief Method MoveWordRight, addr 0x486bad0, size 0xf0, virtual false, abstract: false, final false
  inline void MoveWordRight();

  static inline ::UnityEngine::TextSelectingUtilities* New_ctor(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  /// @brief Method NextCodePointIndex, addr 0x486cc8c, size 0xe0, virtual false, abstract: false, final false
  inline int32_t NextCodePointIndex(int32_t index);

  /// @brief Method OnFocus, addr 0x486e8dc, size 0x4c, virtual false, abstract: false, final false
  inline void OnFocus(bool selectAll);

  /// @brief Method PerformOperation, addr 0x486da9c, size 0x1f0, virtual false, abstract: false, final false
  inline bool PerformOperation(::UnityEngine::TextSelectOp operation);

  /// @brief Method PreviousCodePointIndex, addr 0x486cd6c, size 0xd8, virtual false, abstract: false, final false
  inline int32_t PreviousCodePointIndex(int32_t index);

  /// @brief Method SelectAll, addr 0x486e7e4, size 0x6c, virtual false, abstract: false, final false
  inline void SelectAll();

  /// @brief Method SelectCurrentParagraph, addr 0x486ed4c, size 0xf0, virtual false, abstract: false, final false
  inline void SelectCurrentParagraph();

  /// @brief Method SelectCurrentWord, addr 0x486eaf8, size 0x110, virtual false, abstract: false, final false
  inline void SelectCurrentWord();

  /// @brief Method SelectDown, addr 0x486def0, size 0x6c, virtual false, abstract: false, final false
  inline void SelectDown();

  /// @brief Method SelectGraphicalLineEnd, addr 0x486e788, size 0x5c, virtual false, abstract: false, final false
  inline void SelectGraphicalLineEnd();

  /// @brief Method SelectGraphicalLineStart, addr 0x486e72c, size 0x5c, virtual false, abstract: false, final false
  inline void SelectGraphicalLineStart();

  /// @brief Method SelectLeft, addr 0x486dc8c, size 0xfc, virtual false, abstract: false, final false
  inline void SelectLeft();

  /// @brief Method SelectNone, addr 0x486d0c8, size 0x4c, virtual false, abstract: false, final false
  inline void SelectNone();

  /// @brief Method SelectParagraphBackward, addr 0x486e5d0, size 0x15c, virtual false, abstract: false, final false
  inline void SelectParagraphBackward();

  /// @brief Method SelectParagraphForward, addr 0x486e4bc, size 0x114, virtual false, abstract: false, final false
  inline void SelectParagraphForward();

  /// @brief Method SelectRight, addr 0x486dd88, size 0xfc, virtual false, abstract: false, final false
  inline void SelectRight();

  /// @brief Method SelectTextEnd, addr 0x486e29c, size 0x40, virtual false, abstract: false, final false
  inline void SelectTextEnd();

  /// @brief Method SelectTextStart, addr 0x486e274, size 0x28, virtual false, abstract: false, final false
  inline void SelectTextStart();

  /// @brief Method SelectToEndOfPreviousWord, addr 0x486e1bc, size 0x5c, virtual false, abstract: false, final false
  inline void SelectToEndOfPreviousWord();

  /// @brief Method SelectToPosition, addr 0x486f098, size 0x2e8, virtual false, abstract: false, final false
  inline void SelectToPosition(::UnityEngine::Vector2 cursorPosition);

  /// @brief Method SelectToStartOfNextWord, addr 0x486e218, size 0x5c, virtual false, abstract: false, final false
  inline void SelectToStartOfNextWord();

  /// @brief Method SelectUp, addr 0x486de84, size 0x6c, virtual false, abstract: false, final false
  inline void SelectUp();

  /// @brief Method SelectWordLeft, addr 0x486e08c, size 0x130, virtual false, abstract: false, final false
  inline void SelectWordLeft();

  /// @brief Method SelectWordRight, addr 0x486df5c, size 0x130, virtual false, abstract: false, final false
  inline void SelectWordRight();

  /// @brief Method SetCursorIndexWithoutNotify, addr 0x486ce44, size 0x8, virtual false, abstract: false, final false
  inline void SetCursorIndexWithoutNotify(int32_t index);

  /// @brief Method SetSelectIndexWithoutNotify, addr 0x486ce4c, size 0x8, virtual false, abstract: false, final false
  inline void SetSelectIndexWithoutNotify(int32_t index);

  constexpr ::System::Action*& __cordl_internal_get_OnCursorIndexChange();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_OnCursorIndexChange() const;

  constexpr ::System::Action*& __cordl_internal_get_OnRevealCursorChange();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_OnRevealCursorChange() const;

  constexpr ::System::Action*& __cordl_internal_get_OnSelectIndexChange();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_OnSelectIndexChange() const;

  constexpr ::UnityEngine::__TextEditor__DblClickSnapping const& __cordl_internal_get_dblClickSnap() const;

  constexpr ::UnityEngine::__TextEditor__DblClickSnapping& __cordl_internal_get_dblClickSnap();

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

  constexpr ::UnityEngine::TextCore::Text::TextHandle*& __cordl_internal_get_m_TextHandle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextHandle*> const& __cordl_internal_get_m_TextHandle() const;

  constexpr bool const& __cordl_internal_get_m_bJustSelected() const;

  constexpr bool& __cordl_internal_get_m_bJustSelected();

  constexpr void __cordl_internal_set_OnCursorIndexChange(::System::Action* value);

  constexpr void __cordl_internal_set_OnRevealCursorChange(::System::Action* value);

  constexpr void __cordl_internal_set_OnSelectIndexChange(::System::Action* value);

  constexpr void __cordl_internal_set_dblClickSnap(::UnityEngine::__TextEditor__DblClickSnapping value);

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

  /// @brief Method .ctor, addr 0x486d4d0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::TextCore::Text::TextHandle* textHandle);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* getStaticF_s_KeySelectOps();

  /// @brief Method get_characterCount, addr 0x486d2ac, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_characterCount();

  /// @brief Method get_cursorIndex, addr 0x486a304, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_hasSelection, addr 0x486a238, size 0x38, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_m_CharacterCount, addr 0x486d284, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_m_CharacterCount();

  /// @brief Method get_m_TextElementInfos, addr 0x486d340, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo, ::Array<::UnityEngine::TextCore::Text::TextElementInfo>*> get_m_TextElementInfos();

  /// @brief Method get_revealCursor, addr 0x486d27c, size 0x8, virtual false, abstract: false, final false
  inline bool get_revealCursor();

  /// @brief Method get_selectIndex, addr 0x486a398, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method get_selectedText, addr 0x486d3c0, size 0x110, virtual false, abstract: false, final false
  inline ::StringW get_selectedText();

  static inline void setStaticF_s_KeySelectOps(::System::Collections::Generic::Dictionary_2<::UnityEngine::Event*, ::UnityEngine::TextSelectOp>* value);

  /// @brief Method set_cursorIndex, addr 0x486a350, size 0x2c, virtual false, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_revealCursor, addr 0x486a2b8, size 0x30, virtual false, abstract: false, final false
  inline void set_revealCursor(bool value);

  /// @brief Method set_selectIndex, addr 0x486a3e4, size 0x2c, virtual false, abstract: false, final false
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

  /// @brief Field dblClickSnap, offset: 0x10, size: 0x1, def value: None
  ::UnityEngine::__TextEditor__DblClickSnapping ___dblClickSnap;

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16618 };

  /// @brief Field kMoveDownHeight offset 0xffffffff size 0x4
  static constexpr int32_t kMoveDownHeight{ static_cast<int32_t>(0x5) };

  /// @brief Field kNewLineChar offset 0xffffffff size 0x2
  static constexpr char16_t kNewLineChar{ u'\n' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextSelectingUtilities, 0x58>, "Size mismatch!");

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

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TextSelectingUtilities__CharacterType, "UnityEngine", "TextSelectingUtilities/CharacterType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__TextSelectingUtilities__Direction, "UnityEngine", "TextSelectingUtilities/Direction");
NEED_NO_BOX(::UnityEngine::TextSelectingUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextSelectingUtilities*, "UnityEngine", "TextSelectingUtilities");
