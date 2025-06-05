#pragma once
// IWYU pragma private; include "System/Globalization/HijriCalendar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HijriCalendar)
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
// Forward declare root types
namespace System::Globalization {
class HijriCalendar;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::HijriCalendar);
// Dependencies System.DateTime, System.Globalization.Calendar
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.HijriCalendar
class CORDL_TYPE HijriCalendar : public ::System::Globalization::Calendar {
public:
  // Declarations
  __declspec(property(get = get_Eras)) ::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  __declspec(property(get = get_HijriAdjustment)) int32_t HijriAdjustment;

  /// @brief Field HijriEra, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_HijriEra, put = setStaticF_HijriEra)) int32_t HijriEra;

  /// @brief Field HijriMonthDays, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HijriMonthDays, put = setStaticF_HijriMonthDays)) ::ArrayW<int32_t, ::Array<int32_t>*> HijriMonthDays;

  __declspec(property(get = get_MaxSupportedDateTime)) ::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_MinSupportedDateTime)) ::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  /// @brief Field calendarMaxValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_calendarMaxValue, put = setStaticF_calendarMaxValue)) ::System::DateTime calendarMaxValue;

  /// @brief Field calendarMinValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_calendarMinValue, put = setStaticF_calendarMinValue)) ::System::DateTime calendarMinValue;

  /// @brief Field m_HijriAdvance, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HijriAdvance, put = __cordl_internal_set_m_HijriAdvance)) int32_t m_HijriAdvance;

  /// @brief Method CheckEraRange, addr 0x3da0cf4, size 0xcc, virtual false, abstract: false, final false
  static inline void CheckEraRange(int32_t era);

  /// @brief Method CheckTicksRange, addr 0x3da0b14, size 0x1e0, virtual false, abstract: false, final false
  static inline void CheckTicksRange(int64_t ticks);

  /// @brief Method CheckYearMonthRange, addr 0x3da0f14, size 0x184, virtual false, abstract: false, final false
  static inline void CheckYearMonthRange(int32_t year, int32_t month, int32_t era);

  /// @brief Method CheckYearRange, addr 0x3da0dc0, size 0x154, virtual false, abstract: false, final false
  static inline void CheckYearRange(int32_t year, int32_t era);

  /// @brief Method DaysUpToHijriYear, addr 0x3da09e8, size 0xbc, virtual false, abstract: false, final false
  inline int64_t DaysUpToHijriYear(int32_t HijriYear);

  /// @brief Method GetAbsoluteDateHijri, addr 0x3da0920, size 0xc8, virtual false, abstract: false, final false
  inline int64_t GetAbsoluteDateHijri(int32_t y, int32_t m, int32_t d);

  /// @brief Method GetAdvanceHijriDate, addr 0x3da0b0c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetAdvanceHijriDate();

  /// @brief Method GetDatePart, addr 0x3da1098, size 0x270, virtual true, abstract: false, final false
  inline int32_t GetDatePart(int64_t ticks, int32_t part);

  /// @brief Method GetDayOfMonth, addr 0x3da1308, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek, addr 0x3da138c, size 0xa8, virtual true, abstract: false, final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetDaysInMonth, addr 0x3da1434, size 0xcc, virtual true, abstract: false, final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear, addr 0x3da1500, size 0x94, virtual true, abstract: false, final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetEra, addr 0x3da1594, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method GetMonth, addr 0x3da16cc, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetMonthsInYear, addr 0x3da1750, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetYear, addr 0x3da17bc, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method IsLeapYear, addr 0x3da1840, size 0xa0, virtual true, abstract: false, final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  static inline ::System::Globalization::HijriCalendar* New_ctor();

  /// @brief Method ToDateTime, addr 0x3da18e0, size 0x1d4, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method ToFourDigitYear, addr 0x3da1c0c, size 0x138, virtual true, abstract: false, final false
  inline int32_t ToFourDigitYear(int32_t year);

  constexpr int32_t const& __cordl_internal_get_m_HijriAdvance() const;

  constexpr int32_t& __cordl_internal_get_m_HijriAdvance();

  constexpr void __cordl_internal_set_m_HijriAdvance(int32_t value);

  /// @brief Method .ctor, addr 0x3da08fc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_HijriEra();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_HijriMonthDays();

  static inline ::System::DateTime getStaticF_calendarMaxValue();

  static inline ::System::DateTime getStaticF_calendarMinValue();

  /// @brief Method get_Eras, addr 0x3da1630, size 0x9c, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method get_HijriAdjustment, addr 0x3da0aa4, size 0x68, virtual false, abstract: false, final false
  inline int32_t get_HijriAdjustment();

  /// @brief Method get_ID, addr 0x3da0918, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ID();

  /// @brief Method get_MaxSupportedDateTime, addr 0x3da08a4, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  /// @brief Method get_MinSupportedDateTime, addr 0x3da084c, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_TwoDigitYearMax, addr 0x3da1ab4, size 0x44, virtual true, abstract: false, final false
  inline int32_t get_TwoDigitYearMax();

  static inline void setStaticF_HijriEra(int32_t value);

  static inline void setStaticF_HijriMonthDays(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_calendarMaxValue(::System::DateTime value);

  static inline void setStaticF_calendarMinValue(::System::DateTime value);

  /// @brief Method set_TwoDigitYearMax, addr 0x3da1af8, size 0x114, virtual true, abstract: false, final false
  inline void set_TwoDigitYearMax(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HijriCalendar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HijriCalendar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HijriCalendar(HijriCalendar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HijriCalendar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HijriCalendar(HijriCalendar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3708 };

  /// @brief Field m_HijriAdvance, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_HijriAdvance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::HijriCalendar, ___m_HijriAdvance) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::HijriCalendar, 0x20>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::HijriCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HijriCalendar*, "System.Globalization", "HijriCalendar");
