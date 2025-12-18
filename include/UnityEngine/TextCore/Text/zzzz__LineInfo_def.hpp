#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/LineInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LineInfo)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct LineInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::LineInfo);
// Dependencies UnityEngine.TextCore.Text.Extents, UnityEngine.TextCore.Text.TextAlignment
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.LineInfo
struct CORDL_TYPE LineInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr LineInfo();

  // Ctor Parameters [CppParam { name: "controlCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleSpaceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "spaceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "lastVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "lineHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "baseline", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAdvance", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "marginLeft", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "marginRight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "alignment", ty: "::UnityEngine::TextCore::Text::TextAlignment", modifiers: "", def_value: None
  // }, CppParam { name: "lineExtents", ty: "::UnityEngine::TextCore::Text::Extents", modifiers: "", def_value: None }]
  constexpr LineInfo(int32_t controlCharacterCount, int32_t characterCount, int32_t visibleCharacterCount, int32_t visibleSpaceCount, int32_t spaceCount, int32_t wordCount,
                     int32_t firstCharacterIndex, int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharacterIndex, float_t length, float_t lineHeight,
                     float_t ascender, float_t baseline, float_t descender, float_t maxAdvance, float_t width, float_t marginLeft, float_t marginRight,
                     ::UnityEngine::TextCore::Text::TextAlignment alignment, ::UnityEngine::TextCore::Text::Extents lineExtents) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17180 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field controlCharacterCount, offset: 0x0, size: 0x4, def value: None
  int32_t controlCharacterCount;

  /// @brief Field characterCount, offset: 0x4, size: 0x4, def value: None
  int32_t characterCount;

  /// @brief Field visibleCharacterCount, offset: 0x8, size: 0x4, def value: None
  int32_t visibleCharacterCount;

  /// @brief Field visibleSpaceCount, offset: 0xc, size: 0x4, def value: None
  int32_t visibleSpaceCount;

  /// @brief Field spaceCount, offset: 0x10, size: 0x4, def value: None
  int32_t spaceCount;

  /// @brief Field wordCount, offset: 0x14, size: 0x4, def value: None
  int32_t wordCount;

  /// @brief Field firstCharacterIndex, offset: 0x18, size: 0x4, def value: None
  int32_t firstCharacterIndex;

  /// @brief Field firstVisibleCharacterIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t firstVisibleCharacterIndex;

  /// @brief Field lastCharacterIndex, offset: 0x20, size: 0x4, def value: None
  int32_t lastCharacterIndex;

  /// @brief Field lastVisibleCharacterIndex, offset: 0x24, size: 0x4, def value: None
  int32_t lastVisibleCharacterIndex;

  /// @brief Field length, offset: 0x28, size: 0x4, def value: None
  float_t length;

  /// @brief Field lineHeight, offset: 0x2c, size: 0x4, def value: None
  float_t lineHeight;

  /// @brief Field ascender, offset: 0x30, size: 0x4, def value: None
  float_t ascender;

  /// @brief Field baseline, offset: 0x34, size: 0x4, def value: None
  float_t baseline;

  /// @brief Field descender, offset: 0x38, size: 0x4, def value: None
  float_t descender;

  /// @brief Field maxAdvance, offset: 0x3c, size: 0x4, def value: None
  float_t maxAdvance;

  /// @brief Field width, offset: 0x40, size: 0x4, def value: None
  float_t width;

  /// @brief Field marginLeft, offset: 0x44, size: 0x4, def value: None
  float_t marginLeft;

  /// @brief Field marginRight, offset: 0x48, size: 0x4, def value: None
  float_t marginRight;

  /// @brief Field alignment, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextAlignment alignment;

  /// @brief Field lineExtents, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::TextCore::Text::Extents lineExtents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, controlCharacterCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, characterCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, visibleCharacterCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, visibleSpaceCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, spaceCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, wordCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, firstCharacterIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, firstVisibleCharacterIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, lastCharacterIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, lastVisibleCharacterIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, length) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, lineHeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, ascender) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, baseline) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, descender) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, maxAdvance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, width) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, marginLeft) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, marginRight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, alignment) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::LineInfo, lineExtents) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::LineInfo, 0x60>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::LineInfo, "UnityEngine.TextCore.Text", "LineInfo");
