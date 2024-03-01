#pragma once
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
// Type: System::TokenType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::TokenType
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
  constexpr operator int32_t() const noexcept {
    return static_cast<__TokenType_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TokenType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TokenType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Am value: static_cast<int32_t>(0x3)
  static ::System::TokenType const Am;

  /// @brief Field DateWordToken value: static_cast<int32_t>(0xa)
  static ::System::TokenType const DateWordToken;

  /// @brief Field DayOfWeekToken value: static_cast<int32_t>(0x7)
  static ::System::TokenType const DayOfWeekToken;

  /// @brief Field EndOfString value: static_cast<int32_t>(0x6)
  static ::System::TokenType const EndOfString;

  /// @brief Field EraToken value: static_cast<int32_t>(0x9)
  static ::System::TokenType const EraToken;

  /// @brief Field HebrewNumber value: static_cast<int32_t>(0xc)
  static ::System::TokenType const HebrewNumber;

  /// @brief Field IgnorableSymbol value: static_cast<int32_t>(0xf)
  static ::System::TokenType const IgnorableSymbol;

  /// @brief Field JapaneseEraToken value: static_cast<int32_t>(0xd)
  static ::System::TokenType const JapaneseEraToken;

  /// @brief Field MonthToken value: static_cast<int32_t>(0x5)
  static ::System::TokenType const MonthToken;

  /// @brief Field NumberToken value: static_cast<int32_t>(0x1)
  static ::System::TokenType const NumberToken;

  /// @brief Field Pm value: static_cast<int32_t>(0x4)
  static ::System::TokenType const Pm;

  /// @brief Field RegularTokenMask value: static_cast<int32_t>(0xff)
  static ::System::TokenType const RegularTokenMask;

  /// @brief Field SEP_Am value: static_cast<int32_t>(0x400)
  static ::System::TokenType const SEP_Am;

  /// @brief Field SEP_Date value: static_cast<int32_t>(0x600)
  static ::System::TokenType const SEP_Date;

  /// @brief Field SEP_DateOrOffset value: static_cast<int32_t>(0xf00)
  static ::System::TokenType const SEP_DateOrOffset;

  /// @brief Field SEP_DaySuff value: static_cast<int32_t>(0xa00)
  static ::System::TokenType const SEP_DaySuff;

  /// @brief Field SEP_End value: static_cast<int32_t>(0x200)
  static ::System::TokenType const SEP_End;

  /// @brief Field SEP_HourSuff value: static_cast<int32_t>(0xb00)
  static ::System::TokenType const SEP_HourSuff;

  /// @brief Field SEP_LocalTimeMark value: static_cast<int32_t>(0xe00)
  static ::System::TokenType const SEP_LocalTimeMark;

  /// @brief Field SEP_MinuteSuff value: static_cast<int32_t>(0xc00)
  static ::System::TokenType const SEP_MinuteSuff;

  /// @brief Field SEP_MonthSuff value: static_cast<int32_t>(0x900)
  static ::System::TokenType const SEP_MonthSuff;

  /// @brief Field SEP_Pm value: static_cast<int32_t>(0x500)
  static ::System::TokenType const SEP_Pm;

  /// @brief Field SEP_SecondSuff value: static_cast<int32_t>(0xd00)
  static ::System::TokenType const SEP_SecondSuff;

  /// @brief Field SEP_Space value: static_cast<int32_t>(0x300)
  static ::System::TokenType const SEP_Space;

  /// @brief Field SEP_Time value: static_cast<int32_t>(0x700)
  static ::System::TokenType const SEP_Time;

  /// @brief Field SEP_Unk value: static_cast<int32_t>(0x100)
  static ::System::TokenType const SEP_Unk;

  /// @brief Field SEP_YearSuff value: static_cast<int32_t>(0x800)
  static ::System::TokenType const SEP_YearSuff;

  /// @brief Field SeparatorTokenMask value: static_cast<int32_t>(0xff00)
  static ::System::TokenType const SeparatorTokenMask;

  /// @brief Field TEraToken value: static_cast<int32_t>(0xe)
  static ::System::TokenType const TEraToken;

  /// @brief Field TimeZoneToken value: static_cast<int32_t>(0x8)
  static ::System::TokenType const TimeZoneToken;

  /// @brief Field UnknownToken value: static_cast<int32_t>(0xb)
  static ::System::TokenType const UnknownToken;

  /// @brief Field YearNumberToken value: static_cast<int32_t>(0x2)
  static ::System::TokenType const YearNumberToken;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TokenType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::TokenType, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TokenType, "System", "TokenType");
