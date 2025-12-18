#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextSelectionService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextSelectionService)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextSelectionService;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextSelectionService);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextSelectionService
class CORDL_TYPE TextSelectionService : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCharacterHeightFromIndex, addr 0x6a41d64, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetCharacterHeightFromIndex(::System::IntPtr textGenerationInfo, int32_t index);

  /// @brief Method GetCursorLogicalIndexFromPosition, addr 0x6a41a1c, size 0x48, virtual false, abstract: false, final false
  static inline int32_t GetCursorLogicalIndexFromPosition(::System::IntPtr textGenerationInfo, ::UnityEngine::Vector2 position);

  /// @brief Method GetCursorLogicalIndexFromPosition_Injected, addr 0x6a41a64, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetCursorLogicalIndexFromPosition_Injected(::System::IntPtr textGenerationInfo, ::ByRef<::UnityEngine::Vector2> position);

  /// @brief Method GetCursorPositionFromLogicalIndex, addr 0x6a41aa8, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetCursorPositionFromLogicalIndex(::System::IntPtr textGenerationInfo, int32_t logicalIndex);

  /// @brief Method GetCursorPositionFromLogicalIndex_Injected, addr 0x6a41b04, size 0x54, virtual false, abstract: false, final false
  static inline void GetCursorPositionFromLogicalIndex_Injected(::System::IntPtr textGenerationInfo, int32_t logicalIndex, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method GetEndOfPreviousWord, addr 0x6a41dec, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetEndOfPreviousWord(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method GetFirstCharacterIndexOnLine, addr 0x6a41e30, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetFirstCharacterIndexOnLine(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method GetHighlightRectangles, addr 0x6a41be0, size 0x128, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rect, ::Array<::UnityEngine::Rect>*> GetHighlightRectangles(::System::IntPtr textGenerationInfo, int32_t cursorIndex, int32_t selectIndex);

  /// @brief Method GetHighlightRectangles_Injected, addr 0x6a41d08, size 0x5c, virtual false, abstract: false, final false
  static inline void GetHighlightRectangles_Injected(::System::IntPtr textGenerationInfo, int32_t cursorIndex, int32_t selectIndex, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetLastCharacterIndexOnLine, addr 0x6a41e74, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetLastCharacterIndexOnLine(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method GetLineHeight, addr 0x6a41eb8, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetLineHeight(::System::IntPtr textGenerationInfo, int32_t lineIndex);

  /// @brief Method GetLineNumber, addr 0x6a41efc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetLineNumber(::System::IntPtr textGenerationInfo, int32_t logicalIndex);

  /// @brief Method GetStartOfNextWord, addr 0x6a41da8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetStartOfNextWord(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method LineDownCharacterPosition, addr 0x6a41b9c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t LineDownCharacterPosition(::System::IntPtr textGenerationInfo, int32_t originalPos);

  /// @brief Method LineUpCharacterPosition, addr 0x6a41b58, size 0x44, virtual false, abstract: false, final false
  static inline int32_t LineUpCharacterPosition(::System::IntPtr textGenerationInfo, int32_t originalPos);

  /// @brief Method NextCodePointIndex, addr 0x6a419d8, size 0x44, virtual false, abstract: false, final false
  static inline int32_t NextCodePointIndex(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method PreviousCodePointIndex, addr 0x6a41994, size 0x44, virtual false, abstract: false, final false
  static inline int32_t PreviousCodePointIndex(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method SelectCurrentParagraph, addr 0x6a42050, size 0x54, virtual false, abstract: false, final false
  static inline void SelectCurrentParagraph(::System::IntPtr textGenerationInfo, ::ByRef<int32_t> cursorIndex, ::ByRef<int32_t> selectIndex);

  /// @brief Method SelectCurrentWord, addr 0x6a41938, size 0x5c, virtual false, abstract: false, final false
  static inline void SelectCurrentWord(::System::IntPtr textGenerationInfo, int32_t currentIndex, ::ByRef<int32_t> startIndex, ::ByRef<int32_t> endIndex);

  /// @brief Method SelectToEndOfParagraph, addr 0x6a41fc8, size 0x44, virtual false, abstract: false, final false
  static inline void SelectToEndOfParagraph(::System::IntPtr textGenerationInfo, ::ByRef<int32_t> cursorIndex);

  /// @brief Method SelectToNextParagraph, addr 0x6a4200c, size 0x44, virtual false, abstract: false, final false
  static inline void SelectToNextParagraph(::System::IntPtr textGenerationInfo, ::ByRef<int32_t> cursorIndex);

  /// @brief Method SelectToPreviousParagraph, addr 0x6a41f40, size 0x44, virtual false, abstract: false, final false
  static inline void SelectToPreviousParagraph(::System::IntPtr textGenerationInfo, ::ByRef<int32_t> cursorIndex);

  /// @brief Method SelectToStartOfParagraph, addr 0x6a41f84, size 0x44, virtual false, abstract: false, final false
  static inline void SelectToStartOfParagraph(::System::IntPtr textGenerationInfo, ::ByRef<int32_t> cursorIndex);

  /// @brief Method Substring, addr 0x6a417fc, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW Substring(::System::IntPtr textGenerationInfo, int32_t startIndex, int32_t endIndex);

  /// @brief Method Substring_Injected, addr 0x6a418dc, size 0x5c, virtual false, abstract: false, final false
  static inline void Substring_Injected(::System::IntPtr textGenerationInfo, int32_t startIndex, int32_t endIndex, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextSelectionService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextSelectionService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextSelectionService(TextSelectionService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextSelectionService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextSelectionService(TextSelectionService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextSelectionService, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextSelectionService);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextSelectionService*, "UnityEngine.TextCore.Text", "TextSelectionService");
