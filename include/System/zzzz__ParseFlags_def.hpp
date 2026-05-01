#pragma once
// IWYU pragma private; include "System/ParseFlags.hpp"
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
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.ParseFlags
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParseFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParseFlags(int32_t value__) noexcept;

  /// @brief Field CaptureOffset value: I32(2048)
  static ::System::ParseFlags const CaptureOffset;

  /// @brief Field HaveDate value: I32(128)
  static ::System::ParseFlags const HaveDate;

  /// @brief Field HaveDay value: I32(4)
  static ::System::ParseFlags const HaveDay;

  /// @brief Field HaveHour value: I32(8)
  static ::System::ParseFlags const HaveHour;

  /// @brief Field HaveMinute value: I32(16)
  static ::System::ParseFlags const HaveMinute;

  /// @brief Field HaveMonth value: I32(2)
  static ::System::ParseFlags const HaveMonth;

  /// @brief Field HaveSecond value: I32(32)
  static ::System::ParseFlags const HaveSecond;

  /// @brief Field HaveTime value: I32(64)
  static ::System::ParseFlags const HaveTime;

  /// @brief Field HaveYear value: I32(1)
  static ::System::ParseFlags const HaveYear;

  /// @brief Field ParsedMonthName value: I32(1024)
  static ::System::ParseFlags const ParsedMonthName;

  /// @brief Field Rfc1123Pattern value: I32(8192)
  static ::System::ParseFlags const Rfc1123Pattern;

  /// @brief Field TimeZoneUsed value: I32(256)
  static ::System::ParseFlags const TimeZoneUsed;

  /// @brief Field TimeZoneUtc value: I32(512)
  static ::System::ParseFlags const TimeZoneUtc;

  /// @brief Field UtcSortPattern value: I32(16384)
  static ::System::ParseFlags const UtcSortPattern;

  /// @brief Field YearDefault value: I32(4096)
  static ::System::ParseFlags const YearDefault;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2400 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ParseFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ParseFlags, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ParseFlags, "System", "ParseFlags");
