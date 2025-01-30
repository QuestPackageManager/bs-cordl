#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextAlignment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextAlignment)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextAlignment);
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextAlignment
struct CORDL_TYPE TextAlignment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextAlignment_Unwrapped
  enum struct __TextAlignment_Unwrapped : int32_t {
    __E_TopLeft = static_cast<int32_t>(0x101),
    __E_TopCenter = static_cast<int32_t>(0x102),
    __E_TopRight = static_cast<int32_t>(0x104),
    __E_TopJustified = static_cast<int32_t>(0x108),
    __E_TopFlush = static_cast<int32_t>(0x110),
    __E_TopGeoAligned = static_cast<int32_t>(0x120),
    __E_MiddleLeft = static_cast<int32_t>(0x201),
    __E_MiddleCenter = static_cast<int32_t>(0x202),
    __E_MiddleRight = static_cast<int32_t>(0x204),
    __E_MiddleJustified = static_cast<int32_t>(0x208),
    __E_MiddleFlush = static_cast<int32_t>(0x210),
    __E_MiddleGeoAligned = static_cast<int32_t>(0x220),
    __E_BottomLeft = static_cast<int32_t>(0x401),
    __E_BottomCenter = static_cast<int32_t>(0x402),
    __E_BottomRight = static_cast<int32_t>(0x404),
    __E_BottomJustified = static_cast<int32_t>(0x408),
    __E_BottomFlush = static_cast<int32_t>(0x410),
    __E_BottomGeoAligned = static_cast<int32_t>(0x420),
    __E_BaselineLeft = static_cast<int32_t>(0x801),
    __E_BaselineCenter = static_cast<int32_t>(0x802),
    __E_BaselineRight = static_cast<int32_t>(0x804),
    __E_BaselineJustified = static_cast<int32_t>(0x808),
    __E_BaselineFlush = static_cast<int32_t>(0x810),
    __E_BaselineGeoAligned = static_cast<int32_t>(0x820),
    __E_MidlineLeft = static_cast<int32_t>(0x1001),
    __E_MidlineCenter = static_cast<int32_t>(0x1002),
    __E_MidlineRight = static_cast<int32_t>(0x1004),
    __E_MidlineJustified = static_cast<int32_t>(0x1008),
    __E_MidlineFlush = static_cast<int32_t>(0x1010),
    __E_MidlineGeoAligned = static_cast<int32_t>(0x1020),
    __E_CaplineLeft = static_cast<int32_t>(0x2001),
    __E_CaplineCenter = static_cast<int32_t>(0x2002),
    __E_CaplineRight = static_cast<int32_t>(0x2004),
    __E_CaplineJustified = static_cast<int32_t>(0x2008),
    __E_CaplineFlush = static_cast<int32_t>(0x2010),
    __E_CaplineGeoAligned = static_cast<int32_t>(0x2020),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextAlignment_Unwrapped() const noexcept {
    return static_cast<__TextAlignment_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAlignment();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextAlignment(int32_t value__) noexcept;

  /// @brief Field BaselineCenter value: I32(2050)
  static ::UnityEngine::TextCore::Text::TextAlignment const BaselineCenter;

  /// @brief Field BaselineFlush value: I32(2064)
  static ::UnityEngine::TextCore::Text::TextAlignment const BaselineFlush;

  /// @brief Field BaselineGeoAligned value: I32(2080)
  static ::UnityEngine::TextCore::Text::TextAlignment const BaselineGeoAligned;

  /// @brief Field BaselineJustified value: I32(2056)
  static ::UnityEngine::TextCore::Text::TextAlignment const BaselineJustified;

  /// @brief Field BaselineLeft value: I32(2049)
  static ::UnityEngine::TextCore::Text::TextAlignment const BaselineLeft;

  /// @brief Field BaselineRight value: I32(2052)
  static ::UnityEngine::TextCore::Text::TextAlignment const BaselineRight;

  /// @brief Field BottomCenter value: I32(1026)
  static ::UnityEngine::TextCore::Text::TextAlignment const BottomCenter;

  /// @brief Field BottomFlush value: I32(1040)
  static ::UnityEngine::TextCore::Text::TextAlignment const BottomFlush;

  /// @brief Field BottomGeoAligned value: I32(1056)
  static ::UnityEngine::TextCore::Text::TextAlignment const BottomGeoAligned;

  /// @brief Field BottomJustified value: I32(1032)
  static ::UnityEngine::TextCore::Text::TextAlignment const BottomJustified;

  /// @brief Field BottomLeft value: I32(1025)
  static ::UnityEngine::TextCore::Text::TextAlignment const BottomLeft;

  /// @brief Field BottomRight value: I32(1028)
  static ::UnityEngine::TextCore::Text::TextAlignment const BottomRight;

  /// @brief Field CaplineCenter value: I32(8194)
  static ::UnityEngine::TextCore::Text::TextAlignment const CaplineCenter;

  /// @brief Field CaplineFlush value: I32(8208)
  static ::UnityEngine::TextCore::Text::TextAlignment const CaplineFlush;

  /// @brief Field CaplineGeoAligned value: I32(8224)
  static ::UnityEngine::TextCore::Text::TextAlignment const CaplineGeoAligned;

  /// @brief Field CaplineJustified value: I32(8200)
  static ::UnityEngine::TextCore::Text::TextAlignment const CaplineJustified;

  /// @brief Field CaplineLeft value: I32(8193)
  static ::UnityEngine::TextCore::Text::TextAlignment const CaplineLeft;

  /// @brief Field CaplineRight value: I32(8196)
  static ::UnityEngine::TextCore::Text::TextAlignment const CaplineRight;

  /// @brief Field MiddleCenter value: I32(514)
  static ::UnityEngine::TextCore::Text::TextAlignment const MiddleCenter;

  /// @brief Field MiddleFlush value: I32(528)
  static ::UnityEngine::TextCore::Text::TextAlignment const MiddleFlush;

  /// @brief Field MiddleGeoAligned value: I32(544)
  static ::UnityEngine::TextCore::Text::TextAlignment const MiddleGeoAligned;

  /// @brief Field MiddleJustified value: I32(520)
  static ::UnityEngine::TextCore::Text::TextAlignment const MiddleJustified;

  /// @brief Field MiddleLeft value: I32(513)
  static ::UnityEngine::TextCore::Text::TextAlignment const MiddleLeft;

  /// @brief Field MiddleRight value: I32(516)
  static ::UnityEngine::TextCore::Text::TextAlignment const MiddleRight;

  /// @brief Field MidlineCenter value: I32(4098)
  static ::UnityEngine::TextCore::Text::TextAlignment const MidlineCenter;

  /// @brief Field MidlineFlush value: I32(4112)
  static ::UnityEngine::TextCore::Text::TextAlignment const MidlineFlush;

  /// @brief Field MidlineGeoAligned value: I32(4128)
  static ::UnityEngine::TextCore::Text::TextAlignment const MidlineGeoAligned;

  /// @brief Field MidlineJustified value: I32(4104)
  static ::UnityEngine::TextCore::Text::TextAlignment const MidlineJustified;

  /// @brief Field MidlineLeft value: I32(4097)
  static ::UnityEngine::TextCore::Text::TextAlignment const MidlineLeft;

  /// @brief Field MidlineRight value: I32(4100)
  static ::UnityEngine::TextCore::Text::TextAlignment const MidlineRight;

  /// @brief Field TopCenter value: I32(258)
  static ::UnityEngine::TextCore::Text::TextAlignment const TopCenter;

  /// @brief Field TopFlush value: I32(272)
  static ::UnityEngine::TextCore::Text::TextAlignment const TopFlush;

  /// @brief Field TopGeoAligned value: I32(288)
  static ::UnityEngine::TextCore::Text::TextAlignment const TopGeoAligned;

  /// @brief Field TopJustified value: I32(264)
  static ::UnityEngine::TextCore::Text::TextAlignment const TopJustified;

  /// @brief Field TopLeft value: I32(257)
  static ::UnityEngine::TextCore::Text::TextAlignment const TopLeft;

  /// @brief Field TopRight value: I32(260)
  static ::UnityEngine::TextCore::Text::TextAlignment const TopRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15267 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextAlignment, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextAlignment, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextAlignment, "UnityEngine.TextCore.Text", "TextAlignment");
