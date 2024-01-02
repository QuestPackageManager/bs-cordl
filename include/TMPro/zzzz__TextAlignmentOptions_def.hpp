#pragma once
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
// Type: TMPro::TextAlignmentOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12429))
// CS Name: ::TMPro::TextAlignmentOptions
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextAlignmentOptions(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAlignmentOptions();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field TopLeft value: static_cast<int32_t>(0x101)
  static ::TMPro::TextAlignmentOptions const TopLeft;

  /// @brief Field Top value: static_cast<int32_t>(0x102)
  static ::TMPro::TextAlignmentOptions const Top;

  /// @brief Field TopRight value: static_cast<int32_t>(0x104)
  static ::TMPro::TextAlignmentOptions const TopRight;

  /// @brief Field TopJustified value: static_cast<int32_t>(0x108)
  static ::TMPro::TextAlignmentOptions const TopJustified;

  /// @brief Field TopFlush value: static_cast<int32_t>(0x110)
  static ::TMPro::TextAlignmentOptions const TopFlush;

  /// @brief Field TopGeoAligned value: static_cast<int32_t>(0x120)
  static ::TMPro::TextAlignmentOptions const TopGeoAligned;

  /// @brief Field Left value: static_cast<int32_t>(0x201)
  static ::TMPro::TextAlignmentOptions const Left;

  /// @brief Field Center value: static_cast<int32_t>(0x202)
  static ::TMPro::TextAlignmentOptions const Center;

  /// @brief Field Right value: static_cast<int32_t>(0x204)
  static ::TMPro::TextAlignmentOptions const Right;

  /// @brief Field Justified value: static_cast<int32_t>(0x208)
  static ::TMPro::TextAlignmentOptions const Justified;

  /// @brief Field Flush value: static_cast<int32_t>(0x210)
  static ::TMPro::TextAlignmentOptions const Flush;

  /// @brief Field CenterGeoAligned value: static_cast<int32_t>(0x220)
  static ::TMPro::TextAlignmentOptions const CenterGeoAligned;

  /// @brief Field BottomLeft value: static_cast<int32_t>(0x401)
  static ::TMPro::TextAlignmentOptions const BottomLeft;

  /// @brief Field Bottom value: static_cast<int32_t>(0x402)
  static ::TMPro::TextAlignmentOptions const Bottom;

  /// @brief Field BottomRight value: static_cast<int32_t>(0x404)
  static ::TMPro::TextAlignmentOptions const BottomRight;

  /// @brief Field BottomJustified value: static_cast<int32_t>(0x408)
  static ::TMPro::TextAlignmentOptions const BottomJustified;

  /// @brief Field BottomFlush value: static_cast<int32_t>(0x410)
  static ::TMPro::TextAlignmentOptions const BottomFlush;

  /// @brief Field BottomGeoAligned value: static_cast<int32_t>(0x420)
  static ::TMPro::TextAlignmentOptions const BottomGeoAligned;

  /// @brief Field BaselineLeft value: static_cast<int32_t>(0x801)
  static ::TMPro::TextAlignmentOptions const BaselineLeft;

  /// @brief Field Baseline value: static_cast<int32_t>(0x802)
  static ::TMPro::TextAlignmentOptions const Baseline;

  /// @brief Field BaselineRight value: static_cast<int32_t>(0x804)
  static ::TMPro::TextAlignmentOptions const BaselineRight;

  /// @brief Field BaselineJustified value: static_cast<int32_t>(0x808)
  static ::TMPro::TextAlignmentOptions const BaselineJustified;

  /// @brief Field BaselineFlush value: static_cast<int32_t>(0x810)
  static ::TMPro::TextAlignmentOptions const BaselineFlush;

  /// @brief Field BaselineGeoAligned value: static_cast<int32_t>(0x820)
  static ::TMPro::TextAlignmentOptions const BaselineGeoAligned;

  /// @brief Field MidlineLeft value: static_cast<int32_t>(0x1001)
  static ::TMPro::TextAlignmentOptions const MidlineLeft;

  /// @brief Field Midline value: static_cast<int32_t>(0x1002)
  static ::TMPro::TextAlignmentOptions const Midline;

  /// @brief Field MidlineRight value: static_cast<int32_t>(0x1004)
  static ::TMPro::TextAlignmentOptions const MidlineRight;

  /// @brief Field MidlineJustified value: static_cast<int32_t>(0x1008)
  static ::TMPro::TextAlignmentOptions const MidlineJustified;

  /// @brief Field MidlineFlush value: static_cast<int32_t>(0x1010)
  static ::TMPro::TextAlignmentOptions const MidlineFlush;

  /// @brief Field MidlineGeoAligned value: static_cast<int32_t>(0x1020)
  static ::TMPro::TextAlignmentOptions const MidlineGeoAligned;

  /// @brief Field CaplineLeft value: static_cast<int32_t>(0x2001)
  static ::TMPro::TextAlignmentOptions const CaplineLeft;

  /// @brief Field Capline value: static_cast<int32_t>(0x2002)
  static ::TMPro::TextAlignmentOptions const Capline;

  /// @brief Field CaplineRight value: static_cast<int32_t>(0x2004)
  static ::TMPro::TextAlignmentOptions const CaplineRight;

  /// @brief Field CaplineJustified value: static_cast<int32_t>(0x2008)
  static ::TMPro::TextAlignmentOptions const CaplineJustified;

  /// @brief Field CaplineFlush value: static_cast<int32_t>(0x2010)
  static ::TMPro::TextAlignmentOptions const CaplineFlush;

  /// @brief Field CaplineGeoAligned value: static_cast<int32_t>(0x2020)
  static ::TMPro::TextAlignmentOptions const CaplineGeoAligned;

  /// @brief Field Converted value: static_cast<int32_t>(0xffff)
  static ::TMPro::TextAlignmentOptions const Converted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TextAlignmentOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::TextAlignmentOptions, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextAlignmentOptions, "TMPro", "TextAlignmentOptions");
