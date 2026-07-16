#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextSelectionService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::TextCore::Text::TextSelectionService*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextSelectionService*, "UnityEngine.TextCore.Text", "TextSelectionService");
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextSelectionService
class CORDL_TYPE TextSelectionService : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCharacterHeightFromIndex, addr 0x6c0a09c, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetCharacterHeightFromIndex(::System::IntPtr textGenerationInfo, int32_t index);

  /// @brief Method GetCursorLogicalIndexFromPosition, addr 0x6c09d54, size 0x48, virtual false, abstract: false, final false
  static inline int32_t GetCursorLogicalIndexFromPosition(::System::IntPtr textGenerationInfo, ::UnityEngine::Vector2 position);

  /// @brief Method GetCursorLogicalIndexFromPosition_Injected, addr 0x6c09d9c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetCursorLogicalIndexFromPosition_Injected(::System::IntPtr textGenerationInfo, ::by_ref<::UnityEngine::Vector2> position);

  /// @brief Method GetCursorPositionFromLogicalIndex, addr 0x6c09de0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetCursorPositionFromLogicalIndex(::System::IntPtr textGenerationInfo, int32_t logicalIndex);

  /// @brief Method GetCursorPositionFromLogicalIndex_Injected, addr 0x6c09e3c, size 0x54, virtual false, abstract: false, final false
  static inline void GetCursorPositionFromLogicalIndex_Injected(::System::IntPtr textGenerationInfo, int32_t logicalIndex, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method GetEndOfPreviousWord, addr 0x6c0a124, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetEndOfPreviousWord(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method GetFirstCharacterIndexOnLine, addr 0x6c0a168, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetFirstCharacterIndexOnLine(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method GetHighlightRectangles, addr 0x6c09f18, size 0x128, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Rect> GetHighlightRectangles(::System::IntPtr textGenerationInfo, int32_t cursorIndex, int32_t selectIndex);

  /// @brief Method GetHighlightRectangles_Injected, addr 0x6c0a040, size 0x5c, virtual false, abstract: false, final false
  static inline void GetHighlightRectangles_Injected(::System::IntPtr textGenerationInfo, int32_t cursorIndex, int32_t selectIndex, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetLastCharacterIndexOnLine, addr 0x6c0a1ac, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetLastCharacterIndexOnLine(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method GetLineHeight, addr 0x6c0a1f0, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetLineHeight(::System::IntPtr textGenerationInfo, int32_t lineIndex);

  /// @brief Method GetLineNumber, addr 0x6c0a234, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetLineNumber(::System::IntPtr textGenerationInfo, int32_t logicalIndex);

  /// @brief Method GetStartOfNextWord, addr 0x6c0a0e0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetStartOfNextWord(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method LineDownCharacterPosition, addr 0x6c09ed4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t LineDownCharacterPosition(::System::IntPtr textGenerationInfo, int32_t originalPos);

  /// @brief Method LineUpCharacterPosition, addr 0x6c09e90, size 0x44, virtual false, abstract: false, final false
  static inline int32_t LineUpCharacterPosition(::System::IntPtr textGenerationInfo, int32_t originalPos);

  /// @brief Method NextCodePointIndex, addr 0x6c09d10, size 0x44, virtual false, abstract: false, final false
  static inline int32_t NextCodePointIndex(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method PreviousCodePointIndex, addr 0x6c09ccc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t PreviousCodePointIndex(::System::IntPtr textGenerationInfo, int32_t currentIndex);

  /// @brief Method SelectCurrentParagraph, addr 0x6c0a388, size 0x54, virtual false, abstract: false, final false
  static inline void SelectCurrentParagraph(::System::IntPtr textGenerationInfo, ::by_ref<int32_t> cursorIndex, ::by_ref<int32_t> selectIndex);

  /// @brief Method SelectCurrentWord, addr 0x6c09c70, size 0x5c, virtual false, abstract: false, final false
  static inline void SelectCurrentWord(::System::IntPtr textGenerationInfo, int32_t currentIndex, ::by_ref<int32_t> startIndex, ::by_ref<int32_t> endIndex);

  /// @brief Method SelectToEndOfParagraph, addr 0x6c0a300, size 0x44, virtual false, abstract: false, final false
  static inline void SelectToEndOfParagraph(::System::IntPtr textGenerationInfo, ::by_ref<int32_t> cursorIndex);

  /// @brief Method SelectToNextParagraph, addr 0x6c0a344, size 0x44, virtual false, abstract: false, final false
  static inline void SelectToNextParagraph(::System::IntPtr textGenerationInfo, ::by_ref<int32_t> cursorIndex);

  /// @brief Method SelectToPreviousParagraph, addr 0x6c0a278, size 0x44, virtual false, abstract: false, final false
  static inline void SelectToPreviousParagraph(::System::IntPtr textGenerationInfo, ::by_ref<int32_t> cursorIndex);

  /// @brief Method SelectToStartOfParagraph, addr 0x6c0a2bc, size 0x44, virtual false, abstract: false, final false
  static inline void SelectToStartOfParagraph(::System::IntPtr textGenerationInfo, ::by_ref<int32_t> cursorIndex);

  /// @brief Method Substring, addr 0x6c09b34, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW Substring(::System::IntPtr textGenerationInfo, int32_t startIndex, int32_t endIndex);

  /// @brief Method Substring_Injected, addr 0x6c09c14, size 0x5c, virtual false, abstract: false, final false
  static inline void Substring_Injected(::System::IntPtr textGenerationInfo, int32_t startIndex, int32_t endIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17240 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::Text::TextSelectionService) == 0x10, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
