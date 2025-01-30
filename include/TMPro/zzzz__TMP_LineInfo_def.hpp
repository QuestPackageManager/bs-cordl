#pragma once
// IWYU pragma private; include "TMPro/TMP_LineInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__Extents_def.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_LineInfo)
// Forward declare root types
namespace TMPro {
struct TMP_LineInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_LineInfo);
// Dependencies TMPro.Extents, TMPro.HorizontalAlignmentOptions
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_LineInfo
struct CORDL_TYPE TMP_LineInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_LineInfo();

  // Ctor Parameters [CppParam { name: "controlCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "spaceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "wordCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "lastVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineHeight", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseline", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "marginLeft", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "marginRight", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "alignment", ty: "::TMPro::HorizontalAlignmentOptions", modifiers: "", def_value: None }, CppParam { name: "lineExtents", ty: "::TMPro::Extents", modifiers:
  // "", def_value: None }]
  constexpr TMP_LineInfo(int32_t controlCharacterCount, int32_t characterCount, int32_t visibleCharacterCount, int32_t spaceCount, int32_t wordCount, int32_t firstCharacterIndex,
                         int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharacterIndex, float_t length, float_t lineHeight, float_t ascender, float_t baseline,
                         float_t descender, float_t maxAdvance, float_t width, float_t marginLeft, float_t marginRight, ::TMPro::HorizontalAlignmentOptions alignment,
                         ::TMPro::Extents lineExtents) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14514 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x5c };

  /// @brief Field controlCharacterCount, offset: 0x0, size: 0x4, def value: None
  int32_t controlCharacterCount;

  /// @brief Field characterCount, offset: 0x4, size: 0x4, def value: None
  int32_t characterCount;

  /// @brief Field visibleCharacterCount, offset: 0x8, size: 0x4, def value: None
  int32_t visibleCharacterCount;

  /// @brief Field spaceCount, offset: 0xc, size: 0x4, def value: None
  int32_t spaceCount;

  /// @brief Field wordCount, offset: 0x10, size: 0x4, def value: None
  int32_t wordCount;

  /// @brief Field firstCharacterIndex, offset: 0x14, size: 0x4, def value: None
  int32_t firstCharacterIndex;

  /// @brief Field firstVisibleCharacterIndex, offset: 0x18, size: 0x4, def value: None
  int32_t firstVisibleCharacterIndex;

  /// @brief Field lastCharacterIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t lastCharacterIndex;

  /// @brief Field lastVisibleCharacterIndex, offset: 0x20, size: 0x4, def value: None
  int32_t lastVisibleCharacterIndex;

  /// @brief Field length, offset: 0x24, size: 0x4, def value: None
  float_t length;

  /// @brief Field lineHeight, offset: 0x28, size: 0x4, def value: None
  float_t lineHeight;

  /// @brief Field ascender, offset: 0x2c, size: 0x4, def value: None
  float_t ascender;

  /// @brief Field baseline, offset: 0x30, size: 0x4, def value: None
  float_t baseline;

  /// @brief Field descender, offset: 0x34, size: 0x4, def value: None
  float_t descender;

  /// @brief Field maxAdvance, offset: 0x38, size: 0x4, def value: None
  float_t maxAdvance;

  /// @brief Field width, offset: 0x3c, size: 0x4, def value: None
  float_t width;

  /// @brief Field marginLeft, offset: 0x40, size: 0x4, def value: None
  float_t marginLeft;

  /// @brief Field marginRight, offset: 0x44, size: 0x4, def value: None
  float_t marginRight;

  /// @brief Field alignment, offset: 0x48, size: 0x4, def value: None
  ::TMPro::HorizontalAlignmentOptions alignment;

  /// @brief Field lineExtents, offset: 0x4c, size: 0x10, def value: None
  ::TMPro::Extents lineExtents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_LineInfo, controlCharacterCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, characterCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, visibleCharacterCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, spaceCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, wordCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, firstCharacterIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, firstVisibleCharacterIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, lastCharacterIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, lastVisibleCharacterIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, length) == 0x24, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, lineHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, ascender) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, baseline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, descender) == 0x34, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, maxAdvance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, width) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, marginLeft) == 0x40, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, marginRight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, alignment) == 0x48, "Offset mismatch!");

static_assert(offsetof(::TMPro::TMP_LineInfo, lineExtents) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_LineInfo, 0x5c>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_LineInfo, "TMPro", "TMP_LineInfo");
