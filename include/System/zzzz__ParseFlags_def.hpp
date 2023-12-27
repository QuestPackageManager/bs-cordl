#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParseFlags)
// Forward declare root types
namespace System {
struct ParseFlags;
}
// Write type traits
MARK_VAL_T(::System::ParseFlags);
// Type: System::ParseFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2398))
// CS Name: ::System::ParseFlags
struct CORDL_TYPE ParseFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParseFlags_Unwrapped
  enum struct __ParseFlags_Unwrapped : int32_t {
    __E_HaveYear = static_cast<int32_t>(0x1),
    __E_HaveMonth = static_cast<int32_t>(0x2),
    __E_HaveDay = static_cast<int32_t>(0x4),
    __E_HaveHour = static_cast<int32_t>(0x8),
    __E_HaveMinute = static_cast<int32_t>(0x10),
    __E_HaveSecond = static_cast<int32_t>(0x20),
    __E_HaveTime = static_cast<int32_t>(0x40),
    __E_HaveDate = static_cast<int32_t>(0x80),
    __E_TimeZoneUsed = static_cast<int32_t>(0x100),
    __E_TimeZoneUtc = static_cast<int32_t>(0x200),
    __E_ParsedMonthName = static_cast<int32_t>(0x400),
    __E_CaptureOffset = static_cast<int32_t>(0x800),
    __E_YearDefault = static_cast<int32_t>(0x1000),
    __E_Rfc1123Pattern = static_cast<int32_t>(0x2000),
    __E_UtcSortPattern = static_cast<int32_t>(0x4000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParseFlags_Unwrapped() const noexcept {
    return static_cast<__ParseFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParseFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParseFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HaveYear value: static_cast<int32_t>(0x1)
  static ::System::ParseFlags const HaveYear;

  /// @brief Field HaveMonth value: static_cast<int32_t>(0x2)
  static ::System::ParseFlags const HaveMonth;

  /// @brief Field HaveDay value: static_cast<int32_t>(0x4)
  static ::System::ParseFlags const HaveDay;

  /// @brief Field HaveHour value: static_cast<int32_t>(0x8)
  static ::System::ParseFlags const HaveHour;

  /// @brief Field HaveMinute value: static_cast<int32_t>(0x10)
  static ::System::ParseFlags const HaveMinute;

  /// @brief Field HaveSecond value: static_cast<int32_t>(0x20)
  static ::System::ParseFlags const HaveSecond;

  /// @brief Field HaveTime value: static_cast<int32_t>(0x40)
  static ::System::ParseFlags const HaveTime;

  /// @brief Field HaveDate value: static_cast<int32_t>(0x80)
  static ::System::ParseFlags const HaveDate;

  /// @brief Field TimeZoneUsed value: static_cast<int32_t>(0x100)
  static ::System::ParseFlags const TimeZoneUsed;

  /// @brief Field TimeZoneUtc value: static_cast<int32_t>(0x200)
  static ::System::ParseFlags const TimeZoneUtc;

  /// @brief Field ParsedMonthName value: static_cast<int32_t>(0x400)
  static ::System::ParseFlags const ParsedMonthName;

  /// @brief Field CaptureOffset value: static_cast<int32_t>(0x800)
  static ::System::ParseFlags const CaptureOffset;

  /// @brief Field YearDefault value: static_cast<int32_t>(0x1000)
  static ::System::ParseFlags const YearDefault;

  /// @brief Field Rfc1123Pattern value: static_cast<int32_t>(0x2000)
  static ::System::ParseFlags const Rfc1123Pattern;

  /// @brief Field UtcSortPattern value: static_cast<int32_t>(0x4000)
  static ::System::ParseFlags const UtcSortPattern;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParseFlags, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ParseFlags, "System", "ParseFlags");
