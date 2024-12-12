#pragma once
// IWYU pragma private; include "System/Globalization/Calendar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Calendar)
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Globalization {
class Calendar;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::Calendar);
// Dependencies System.ICloneable, System.Object
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.Calendar
class CORDL_TYPE Calendar : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseCalendarID)) int32_t BaseCalendarID;

  __declspec(property(get = get_CurrentEraValue)) int32_t CurrentEraValue;

  __declspec(property(get = get_Eras)) ::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  __declspec(property(get = get_MaxSupportedDateTime)) ::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_MinSupportedDateTime)) ::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  /// @brief Field m_currentEraValue, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentEraValue, put = __cordl_internal_set_m_currentEraValue)) int32_t m_currentEraValue;

  /// @brief Field m_isReadOnly, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_isReadOnly, put = __cordl_internal_set_m_isReadOnly)) bool m_isReadOnly;

  /// @brief Field twoDigitYearMax, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_twoDigitYearMax, put = __cordl_internal_set_twoDigitYearMax)) int32_t twoDigitYearMax;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x3d99b9c, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method GetDayOfMonth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetDaysInMonth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetEra, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method GetMonth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetMonthsInYear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetSystemTwoDigitYearSetting, addr 0x3d9a3b8, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetSystemTwoDigitYearSetting(int32_t CalID, int32_t defaultYearValue);

  /// @brief Method GetYear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method IsLeapYear, addr 0x3d99dcc, size 0x14, virtual true, abstract: false, final false
  inline bool IsLeapYear(int32_t year);

  /// @brief Method IsLeapYear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  /// @brief Method IsValidDay, addr 0x3d9a064, size 0x80, virtual true, abstract: false, final false
  inline bool IsValidDay(int32_t year, int32_t month, int32_t day, int32_t era);

  /// @brief Method IsValidMonth, addr 0x3d99fec, size 0x78, virtual true, abstract: false, final false
  inline bool IsValidMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method IsValidYear, addr 0x3d99f68, size 0x84, virtual true, abstract: false, final false
  inline bool IsValidYear(int32_t year, int32_t era);

  static inline ::System::Globalization::Calendar* New_ctor();

  /// @brief Method SetReadOnlyState, addr 0x3d99c90, size 0xc, virtual false, abstract: false, final false
  inline void SetReadOnlyState(bool readOnly);

  /// @brief Method TimeToTicks, addr 0x3d9a208, size 0x1b0, virtual false, abstract: false, final false
  static inline int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second, int32_t millisecond);

  /// @brief Method ToDateTime, addr 0x3d99de0, size 0x28, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond);

  /// @brief Method ToDateTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method ToFourDigitYear, addr 0x3d9a110, size 0xf8, virtual true, abstract: false, final false
  inline int32_t ToFourDigitYear(int32_t year);

  /// @brief Method TryToDateTime, addr 0x3d99e08, size 0x160, virtual true, abstract: false, final false
  inline bool TryToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, ::ByRef<::System::DateTime> result);

  /// @brief Method VerifyWritable, addr 0x3d99c24, size 0x6c, virtual false, abstract: false, final false
  inline void VerifyWritable();

  constexpr int32_t const& __cordl_internal_get_m_currentEraValue() const;

  constexpr int32_t& __cordl_internal_get_m_currentEraValue();

  constexpr bool const& __cordl_internal_get_m_isReadOnly() const;

  constexpr bool& __cordl_internal_get_m_isReadOnly();

  constexpr int32_t const& __cordl_internal_get_twoDigitYearMax() const;

  constexpr int32_t& __cordl_internal_get_twoDigitYearMax();

  constexpr void __cordl_internal_set_m_currentEraValue(int32_t value);

  constexpr void __cordl_internal_set_m_isReadOnly(bool value);

  constexpr void __cordl_internal_set_twoDigitYearMax(int32_t value);

  /// @brief Method .ctor, addr 0x3d99b74, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BaseCalendarID, addr 0x3d99b90, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_BaseCalendarID();

  /// @brief Method get_CurrentEraValue, addr 0x3d99c9c, size 0x8c, virtual true, abstract: false, final false
  inline int32_t get_CurrentEraValue();

  /// @brief Method get_Eras, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method get_ID, addr 0x3d99b88, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ID();

  /// @brief Method get_MaxSupportedDateTime, addr 0x3d99b1c, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  /// @brief Method get_MinSupportedDateTime, addr 0x3d99ac4, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_TwoDigitYearMax, addr 0x3d9a0e4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_TwoDigitYearMax();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_TwoDigitYearMax, addr 0x3d9a0ec, size 0x24, virtual true, abstract: false, final false
  inline void set_TwoDigitYearMax(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Calendar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Calendar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Calendar(Calendar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Calendar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Calendar(Calendar const&) = delete;

  /// @brief Field CAL_CHINESELUNISOLAR offset 0xffffffff size 0x4
  static constexpr int32_t CAL_CHINESELUNISOLAR{ static_cast<int32_t>(0xf) };

  /// @brief Field CAL_GREGORIAN offset 0xffffffff size 0x4
  static constexpr int32_t CAL_GREGORIAN{ static_cast<int32_t>(0x1) };

  /// @brief Field CAL_GREGORIAN_ARABIC offset 0xffffffff size 0x4
  static constexpr int32_t CAL_GREGORIAN_ARABIC{ static_cast<int32_t>(0xa) };

  /// @brief Field CAL_GREGORIAN_ME_FRENCH offset 0xffffffff size 0x4
  static constexpr int32_t CAL_GREGORIAN_ME_FRENCH{ static_cast<int32_t>(0x9) };

  /// @brief Field CAL_GREGORIAN_US offset 0xffffffff size 0x4
  static constexpr int32_t CAL_GREGORIAN_US{ static_cast<int32_t>(0x2) };

  /// @brief Field CAL_GREGORIAN_XLIT_ENGLISH offset 0xffffffff size 0x4
  static constexpr int32_t CAL_GREGORIAN_XLIT_ENGLISH{ static_cast<int32_t>(0xb) };

  /// @brief Field CAL_GREGORIAN_XLIT_FRENCH offset 0xffffffff size 0x4
  static constexpr int32_t CAL_GREGORIAN_XLIT_FRENCH{ static_cast<int32_t>(0xc) };

  /// @brief Field CAL_HEBREW offset 0xffffffff size 0x4
  static constexpr int32_t CAL_HEBREW{ static_cast<int32_t>(0x8) };

  /// @brief Field CAL_HIJRI offset 0xffffffff size 0x4
  static constexpr int32_t CAL_HIJRI{ static_cast<int32_t>(0x6) };

  /// @brief Field CAL_JAPAN offset 0xffffffff size 0x4
  static constexpr int32_t CAL_JAPAN{ static_cast<int32_t>(0x3) };

  /// @brief Field CAL_JAPANESELUNISOLAR offset 0xffffffff size 0x4
  static constexpr int32_t CAL_JAPANESELUNISOLAR{ static_cast<int32_t>(0xe) };

  /// @brief Field CAL_JULIAN offset 0xffffffff size 0x4
  static constexpr int32_t CAL_JULIAN{ static_cast<int32_t>(0xd) };

  /// @brief Field CAL_KOREA offset 0xffffffff size 0x4
  static constexpr int32_t CAL_KOREA{ static_cast<int32_t>(0x5) };

  /// @brief Field CAL_KOREANLUNISOLAR offset 0xffffffff size 0x4
  static constexpr int32_t CAL_KOREANLUNISOLAR{ static_cast<int32_t>(0x14) };

  /// @brief Field CAL_LUNAR_ETO_CHN offset 0xffffffff size 0x4
  static constexpr int32_t CAL_LUNAR_ETO_CHN{ static_cast<int32_t>(0x11) };

  /// @brief Field CAL_LUNAR_ETO_KOR offset 0xffffffff size 0x4
  static constexpr int32_t CAL_LUNAR_ETO_KOR{ static_cast<int32_t>(0x12) };

  /// @brief Field CAL_LUNAR_ETO_ROKUYOU offset 0xffffffff size 0x4
  static constexpr int32_t CAL_LUNAR_ETO_ROKUYOU{ static_cast<int32_t>(0x13) };

  /// @brief Field CAL_PERSIAN offset 0xffffffff size 0x4
  static constexpr int32_t CAL_PERSIAN{ static_cast<int32_t>(0x16) };

  /// @brief Field CAL_SAKA offset 0xffffffff size 0x4
  static constexpr int32_t CAL_SAKA{ static_cast<int32_t>(0x10) };

  /// @brief Field CAL_TAIWAN offset 0xffffffff size 0x4
  static constexpr int32_t CAL_TAIWAN{ static_cast<int32_t>(0x4) };

  /// @brief Field CAL_TAIWANLUNISOLAR offset 0xffffffff size 0x4
  static constexpr int32_t CAL_TAIWANLUNISOLAR{ static_cast<int32_t>(0x15) };

  /// @brief Field CAL_THAI offset 0xffffffff size 0x4
  static constexpr int32_t CAL_THAI{ static_cast<int32_t>(0x7) };

  /// @brief Field CAL_UMALQURA offset 0xffffffff size 0x4
  static constexpr int32_t CAL_UMALQURA{ static_cast<int32_t>(0x17) };

  /// @brief Field CurrentEra offset 0xffffffff size 0x4
  static constexpr int32_t CurrentEra{ static_cast<int32_t>(0x0) };

  /// @brief Field DaysPer100Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer100Years{ static_cast<int32_t>(0x8eac) };

  /// @brief Field DaysPer400Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer400Years{ static_cast<int32_t>(0x23ab1) };

  /// @brief Field DaysPer4Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer4Years{ static_cast<int32_t>(0x5b5) };

  /// @brief Field DaysPerYear offset 0xffffffff size 0x4
  static constexpr int32_t DaysPerYear{ static_cast<int32_t>(0x16d) };

  /// @brief Field DaysTo10000 offset 0xffffffff size 0x4
  static constexpr int32_t DaysTo10000{ static_cast<int32_t>(0x37b9db) };

  /// @brief Field MaxMillis offset 0xffffffff size 0x8
  static constexpr int64_t MaxMillis{ static_cast<int64_t>(0x11efae44cb400) };

  /// @brief Field MillisPerDay offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerDay{ static_cast<int32_t>(0x5265c00) };

  /// @brief Field MillisPerHour offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerHour{ static_cast<int32_t>(0x36ee80) };

  /// @brief Field MillisPerMinute offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerMinute{ static_cast<int32_t>(0xea60) };

  /// @brief Field MillisPerSecond offset 0xffffffff size 0x4
  static constexpr int32_t MillisPerSecond{ static_cast<int32_t>(0x3e8) };

  /// @brief Field TicksPerDay offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerDay{ static_cast<int64_t>(0xc92a69c000) };

  /// @brief Field TicksPerHour offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerHour{ static_cast<int64_t>(0x861c46800) };

  /// @brief Field TicksPerMillisecond offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerMillisecond{ static_cast<int64_t>(0x2710) };

  /// @brief Field TicksPerMinute offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerMinute{ static_cast<int64_t>(0x23c34600) };

  /// @brief Field TicksPerSecond offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerSecond{ static_cast<int64_t>(0x989680) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3702 };

  /// @brief Field m_currentEraValue, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_currentEraValue;

  /// @brief Field m_isReadOnly, offset: 0x14, size: 0x1, def value: None
  bool ___m_isReadOnly;

  /// @brief Field twoDigitYearMax, offset: 0x18, size: 0x4, def value: None
  int32_t ___twoDigitYearMax;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::Calendar, ___m_currentEraValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Calendar, ___m_isReadOnly) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::Calendar, ___twoDigitYearMax) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::Calendar, 0x20>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::Calendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::Calendar*, "System.Globalization", "Calendar");
