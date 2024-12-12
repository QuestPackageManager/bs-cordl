#pragma once
// IWYU pragma private; include "System/TokenType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TokenType)
// Forward declare root types
namespace System {
struct TokenType;
}
// Write type traits
MARK_VAL_T(::System::TokenType);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.TokenType
struct CORDL_TYPE TokenType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TokenType_Unwrapped
  enum struct __TokenType_Unwrapped : int32_t {
    __E_NumberToken = static_cast<int32_t>(0x1),
    __E_YearNumberToken = static_cast<int32_t>(0x2),
    __E_Am = static_cast<int32_t>(0x3),
    __E_Pm = static_cast<int32_t>(0x4),
    __E_MonthToken = static_cast<int32_t>(0x5),
    __E_EndOfString = static_cast<int32_t>(0x6),
    __E_DayOfWeekToken = static_cast<int32_t>(0x7),
    __E_TimeZoneToken = static_cast<int32_t>(0x8),
    __E_EraToken = static_cast<int32_t>(0x9),
    __E_DateWordToken = static_cast<int32_t>(0xa),
    __E_UnknownToken = static_cast<int32_t>(0xb),
    __E_HebrewNumber = static_cast<int32_t>(0xc),
    __E_JapaneseEraToken = static_cast<int32_t>(0xd),
    __E_TEraToken = static_cast<int32_t>(0xe),
    __E_IgnorableSymbol = static_cast<int32_t>(0xf),
    __E_SEP_Unk = static_cast<int32_t>(0x100),
    __E_SEP_End = static_cast<int32_t>(0x200),
    __E_SEP_Space = static_cast<int32_t>(0x300),
    __E_SEP_Am = static_cast<int32_t>(0x400),
    __E_SEP_Pm = static_cast<int32_t>(0x500),
    __E_SEP_Date = static_cast<int32_t>(0x600),
    __E_SEP_Time = static_cast<int32_t>(0x700),
    __E_SEP_YearSuff = static_cast<int32_t>(0x800),
    __E_SEP_MonthSuff = static_cast<int32_t>(0x900),
    __E_SEP_DaySuff = static_cast<int32_t>(0xa00),
    __E_SEP_HourSuff = static_cast<int32_t>(0xb00),
    __E_SEP_MinuteSuff = static_cast<int32_t>(0xc00),
    __E_SEP_SecondSuff = static_cast<int32_t>(0xd00),
    __E_SEP_LocalTimeMark = static_cast<int32_t>(0xe00),
    __E_SEP_DateOrOffset = static_cast<int32_t>(0xf00),
    __E_RegularTokenMask = static_cast<int32_t>(0xff),
    __E_SeparatorTokenMask = static_cast<int32_t>(0xff00),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TokenType_Unwrapped() const noexcept {
    return static_cast<__TokenType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TokenType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TokenType(int32_t value__) noexcept;

  /// @brief Field Am value: I32(3)
  static ::System::TokenType const Am;

  /// @brief Field DateWordToken value: I32(10)
  static ::System::TokenType const DateWordToken;

  /// @brief Field DayOfWeekToken value: I32(7)
  static ::System::TokenType const DayOfWeekToken;

  /// @brief Field EndOfString value: I32(6)
  static ::System::TokenType const EndOfString;

  /// @brief Field EraToken value: I32(9)
  static ::System::TokenType const EraToken;

  /// @brief Field HebrewNumber value: I32(12)
  static ::System::TokenType const HebrewNumber;

  /// @brief Field IgnorableSymbol value: I32(15)
  static ::System::TokenType const IgnorableSymbol;

  /// @brief Field JapaneseEraToken value: I32(13)
  static ::System::TokenType const JapaneseEraToken;

  /// @brief Field MonthToken value: I32(5)
  static ::System::TokenType const MonthToken;

  /// @brief Field NumberToken value: I32(1)
  static ::System::TokenType const NumberToken;

  /// @brief Field Pm value: I32(4)
  static ::System::TokenType const Pm;

  /// @brief Field RegularTokenMask value: I32(255)
  static ::System::TokenType const RegularTokenMask;

  /// @brief Field SEP_Am value: I32(1024)
  static ::System::TokenType const SEP_Am;

  /// @brief Field SEP_Date value: I32(1536)
  static ::System::TokenType const SEP_Date;

  /// @brief Field SEP_DateOrOffset value: I32(3840)
  static ::System::TokenType const SEP_DateOrOffset;

  /// @brief Field SEP_DaySuff value: I32(2560)
  static ::System::TokenType const SEP_DaySuff;

  /// @brief Field SEP_End value: I32(512)
  static ::System::TokenType const SEP_End;

  /// @brief Field SEP_HourSuff value: I32(2816)
  static ::System::TokenType const SEP_HourSuff;

  /// @brief Field SEP_LocalTimeMark value: I32(3584)
  static ::System::TokenType const SEP_LocalTimeMark;

  /// @brief Field SEP_MinuteSuff value: I32(3072)
  static ::System::TokenType const SEP_MinuteSuff;

  /// @brief Field SEP_MonthSuff value: I32(2304)
  static ::System::TokenType const SEP_MonthSuff;

  /// @brief Field SEP_Pm value: I32(1280)
  static ::System::TokenType const SEP_Pm;

  /// @brief Field SEP_SecondSuff value: I32(3328)
  static ::System::TokenType const SEP_SecondSuff;

  /// @brief Field SEP_Space value: I32(768)
  static ::System::TokenType const SEP_Space;

  /// @brief Field SEP_Time value: I32(1792)
  static ::System::TokenType const SEP_Time;

  /// @brief Field SEP_Unk value: I32(256)
  static ::System::TokenType const SEP_Unk;

  /// @brief Field SEP_YearSuff value: I32(2048)
  static ::System::TokenType const SEP_YearSuff;

  /// @brief Field SeparatorTokenMask value: I32(65280)
  static ::System::TokenType const SeparatorTokenMask;

  /// @brief Field TEraToken value: I32(14)
  static ::System::TokenType const TEraToken;

  /// @brief Field TimeZoneToken value: I32(8)
  static ::System::TokenType const TimeZoneToken;

  /// @brief Field UnknownToken value: I32(11)
  static ::System::TokenType const UnknownToken;

  /// @brief Field YearNumberToken value: I32(2)
  static ::System::TokenType const YearNumberToken;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2403 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TokenType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TokenType, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TokenType, "System", "TokenType");
