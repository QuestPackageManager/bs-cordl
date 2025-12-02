#pragma once
// IWYU pragma private; include "TMPro/TextAlignmentOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextAlignmentOptions)
// Forward declare root types
namespace TMPro {
struct TextAlignmentOptions;
}
// Write type traits
MARK_VAL_T(::TMPro::TextAlignmentOptions);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TextAlignmentOptions
struct CORDL_TYPE TextAlignmentOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextAlignmentOptions_Unwrapped
  enum struct __TextAlignmentOptions_Unwrapped : int32_t {
    __E_TopLeft = static_cast<int32_t>(0x101),
    __E_Top = static_cast<int32_t>(0x102),
    __E_TopRight = static_cast<int32_t>(0x104),
    __E_TopJustified = static_cast<int32_t>(0x108),
    __E_TopFlush = static_cast<int32_t>(0x110),
    __E_TopGeoAligned = static_cast<int32_t>(0x120),
    __E_Left = static_cast<int32_t>(0x201),
    __E_Center = static_cast<int32_t>(0x202),
    __E_Right = static_cast<int32_t>(0x204),
    __E_Justified = static_cast<int32_t>(0x208),
    __E_Flush = static_cast<int32_t>(0x210),
    __E_CenterGeoAligned = static_cast<int32_t>(0x220),
    __E_BottomLeft = static_cast<int32_t>(0x401),
    __E_Bottom = static_cast<int32_t>(0x402),
    __E_BottomRight = static_cast<int32_t>(0x404),
    __E_BottomJustified = static_cast<int32_t>(0x408),
    __E_BottomFlush = static_cast<int32_t>(0x410),
    __E_BottomGeoAligned = static_cast<int32_t>(0x420),
    __E_BaselineLeft = static_cast<int32_t>(0x801),
    __E_Baseline = static_cast<int32_t>(0x802),
    __E_BaselineRight = static_cast<int32_t>(0x804),
    __E_BaselineJustified = static_cast<int32_t>(0x808),
    __E_BaselineFlush = static_cast<int32_t>(0x810),
    __E_BaselineGeoAligned = static_cast<int32_t>(0x820),
    __E_MidlineLeft = static_cast<int32_t>(0x1001),
    __E_Midline = static_cast<int32_t>(0x1002),
    __E_MidlineRight = static_cast<int32_t>(0x1004),
    __E_MidlineJustified = static_cast<int32_t>(0x1008),
    __E_MidlineFlush = static_cast<int32_t>(0x1010),
    __E_MidlineGeoAligned = static_cast<int32_t>(0x1020),
    __E_CaplineLeft = static_cast<int32_t>(0x2001),
    __E_Capline = static_cast<int32_t>(0x2002),
    __E_CaplineRight = static_cast<int32_t>(0x2004),
    __E_CaplineJustified = static_cast<int32_t>(0x2008),
    __E_CaplineFlush = static_cast<int32_t>(0x2010),
    __E_CaplineGeoAligned = static_cast<int32_t>(0x2020),
    __E_Converted = static_cast<int32_t>(0xffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextAlignmentOptions_Unwrapped() const noexcept {
    return static_cast<__TextAlignmentOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAlignmentOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextAlignmentOptions(int32_t value__) noexcept;

  /// @brief Field Baseline value: I32(2050)
  static ::TMPro::TextAlignmentOptions const Baseline;

  /// @brief Field BaselineFlush value: I32(2064)
  static ::TMPro::TextAlignmentOptions const BaselineFlush;

  /// @brief Field BaselineGeoAligned value: I32(2080)
  static ::TMPro::TextAlignmentOptions const BaselineGeoAligned;

  /// @brief Field BaselineJustified value: I32(2056)
  static ::TMPro::TextAlignmentOptions const BaselineJustified;

  /// @brief Field BaselineLeft value: I32(2049)
  static ::TMPro::TextAlignmentOptions const BaselineLeft;

  /// @brief Field BaselineRight value: I32(2052)
  static ::TMPro::TextAlignmentOptions const BaselineRight;

  /// @brief Field Bottom value: I32(1026)
  static ::TMPro::TextAlignmentOptions const Bottom;

  /// @brief Field BottomFlush value: I32(1040)
  static ::TMPro::TextAlignmentOptions const BottomFlush;

  /// @brief Field BottomGeoAligned value: I32(1056)
  static ::TMPro::TextAlignmentOptions const BottomGeoAligned;

  /// @brief Field BottomJustified value: I32(1032)
  static ::TMPro::TextAlignmentOptions const BottomJustified;

  /// @brief Field BottomLeft value: I32(1025)
  static ::TMPro::TextAlignmentOptions const BottomLeft;

  /// @brief Field BottomRight value: I32(1028)
  static ::TMPro::TextAlignmentOptions const BottomRight;

  /// @brief Field Capline value: I32(8194)
  static ::TMPro::TextAlignmentOptions const Capline;

  /// @brief Field CaplineFlush value: I32(8208)
  static ::TMPro::TextAlignmentOptions const CaplineFlush;

  /// @brief Field CaplineGeoAligned value: I32(8224)
  static ::TMPro::TextAlignmentOptions const CaplineGeoAligned;

  /// @brief Field CaplineJustified value: I32(8200)
  static ::TMPro::TextAlignmentOptions const CaplineJustified;

  /// @brief Field CaplineLeft value: I32(8193)
  static ::TMPro::TextAlignmentOptions const CaplineLeft;

  /// @brief Field CaplineRight value: I32(8196)
  static ::TMPro::TextAlignmentOptions const CaplineRight;

  /// @brief Field Center value: I32(514)
  static ::TMPro::TextAlignmentOptions const Center;

  /// @brief Field CenterGeoAligned value: I32(544)
  static ::TMPro::TextAlignmentOptions const CenterGeoAligned;

  /// @brief Field Converted value: I32(65535)
  static ::TMPro::TextAlignmentOptions const Converted;

  /// @brief Field Flush value: I32(528)
  static ::TMPro::TextAlignmentOptions const Flush;

  /// @brief Field Justified value: I32(520)
  static ::TMPro::TextAlignmentOptions const Justified;

  /// @brief Field Left value: I32(513)
  static ::TMPro::TextAlignmentOptions const Left;

  /// @brief Field Midline value: I32(4098)
  static ::TMPro::TextAlignmentOptions const Midline;

  /// @brief Field MidlineFlush value: I32(4112)
  static ::TMPro::TextAlignmentOptions const MidlineFlush;

  /// @brief Field MidlineGeoAligned value: I32(4128)
  static ::TMPro::TextAlignmentOptions const MidlineGeoAligned;

  /// @brief Field MidlineJustified value: I32(4104)
  static ::TMPro::TextAlignmentOptions const MidlineJustified;

  /// @brief Field MidlineLeft value: I32(4097)
  static ::TMPro::TextAlignmentOptions const MidlineLeft;

  /// @brief Field MidlineRight value: I32(4100)
  static ::TMPro::TextAlignmentOptions const MidlineRight;

  /// @brief Field Right value: I32(516)
  static ::TMPro::TextAlignmentOptions const Right;

  /// @brief Field Top value: I32(258)
  static ::TMPro::TextAlignmentOptions const Top;

  /// @brief Field TopFlush value: I32(272)
  static ::TMPro::TextAlignmentOptions const TopFlush;

  /// @brief Field TopGeoAligned value: I32(288)
  static ::TMPro::TextAlignmentOptions const TopGeoAligned;

  /// @brief Field TopJustified value: I32(264)
  static ::TMPro::TextAlignmentOptions const TopJustified;

  /// @brief Field TopLeft value: I32(257)
  static ::TMPro::TextAlignmentOptions const TopLeft;

  /// @brief Field TopRight value: I32(260)
  static ::TMPro::TextAlignmentOptions const TopRight;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15944 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TextAlignmentOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TextAlignmentOptions, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextAlignmentOptions, "TMPro", "TextAlignmentOptions");
