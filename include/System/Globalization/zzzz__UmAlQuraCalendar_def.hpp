#pragma once
// IWYU pragma private; include "System/Globalization/UmAlQuraCalendar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UmAlQuraCalendar)
namespace System::Globalization {
struct UmAlQuraCalendar_DateMapping;
}
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
// Forward declare root types
namespace System::Globalization {
class UmAlQuraCalendar;
}
namespace System::Globalization {
struct UmAlQuraCalendar_DateMapping;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::UmAlQuraCalendar);
MARK_VAL_T(::System::Globalization::UmAlQuraCalendar_DateMapping);
// Dependencies System.DateTime
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.UmAlQuraCalendar/DateMapping
struct CORDL_TYPE UmAlQuraCalendar_DateMapping {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x5a21740, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t MonthsLengthFlags, int32_t GYear, int32_t GMonth, int32_t GDay);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UmAlQuraCalendar_DateMapping();

  // Ctor Parameters [CppParam { name: "HijriMonthsLengthFlags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "GregorianDate", ty: "::System::DateTime", modifiers: "", def_value:
  // None }]
  constexpr UmAlQuraCalendar_DateMapping(int32_t HijriMonthsLengthFlags, ::System::DateTime GregorianDate) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3635 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field HijriMonthsLengthFlags, offset: 0x0, size: 0x4, def value: None
  int32_t HijriMonthsLengthFlags;

  /// @brief Field GregorianDate, offset: 0x8, size: 0x8, def value: None
  ::System::DateTime GregorianDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::UmAlQuraCalendar_DateMapping, HijriMonthsLengthFlags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::UmAlQuraCalendar_DateMapping, GregorianDate) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::UmAlQuraCalendar_DateMapping, 0x10>, "Size mismatch!");

} // namespace System::Globalization
// Dependencies System.DateTime, System.Globalization.Calendar
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.UmAlQuraCalendar
class CORDL_TYPE UmAlQuraCalendar : public ::System::Globalization::Calendar {
public:
  // Declarations
  using DateMapping = ::System::Globalization::UmAlQuraCalendar_DateMapping;

  __declspec(property(get = get_BaseCalendarID)) int32_t BaseCalendarID;

  __declspec(property(get = get_Eras)) ::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  /// @brief Field HijriYearInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HijriYearInfo,
                      put = setStaticF_HijriYearInfo)) ::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*>
      HijriYearInfo;

  __declspec(property(get = get_MaxSupportedDateTime)) ::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_MinSupportedDateTime)) ::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  /// @brief Field maxDate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_maxDate, put = setStaticF_maxDate)) ::System::DateTime maxDate;

  /// @brief Field minDate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_minDate, put = setStaticF_minDate)) ::System::DateTime minDate;

  /// @brief Method CheckEraRange, addr 0x5a2049c, size 0x70, virtual false, abstract: false, final false
  static inline void CheckEraRange(int32_t era);

  /// @brief Method CheckTicksRange, addr 0x5a202bc, size 0x1e0, virtual false, abstract: false, final false
  static inline void CheckTicksRange(int64_t ticks);

  /// @brief Method CheckYearMonthRange, addr 0x5a20644, size 0xd8, virtual false, abstract: false, final false
  static inline void CheckYearMonthRange(int32_t year, int32_t month, int32_t era);

  /// @brief Method CheckYearRange, addr 0x5a2050c, size 0x138, virtual false, abstract: false, final false
  static inline void CheckYearRange(int32_t year, int32_t era);

  /// @brief Method ConvertGregorianToHijri, addr 0x5a2071c, size 0x2f0, virtual false, abstract: false, final false
  static inline void ConvertGregorianToHijri(::System::DateTime time, ::ByRef<int32_t> HijriYear, ::ByRef<int32_t> HijriMonth, ::ByRef<int32_t> HijriDay);

  /// @brief Method ConvertHijriToGregorian, addr 0x5a20098, size 0x158, virtual false, abstract: false, final false
  static inline void ConvertHijriToGregorian(int32_t HijriYear, int32_t HijriMonth, int32_t HijriDay, ::ByRef<int32_t> yg, ::ByRef<int32_t> mg, ::ByRef<int32_t> dg);

  /// @brief Method GetAbsoluteDateUmAlQura, addr 0x5a201f0, size 0xcc, virtual false, abstract: false, final false
  static inline int64_t GetAbsoluteDateUmAlQura(int32_t year, int32_t month, int32_t day);

  /// @brief Method GetDatePart, addr 0x5a20a0c, size 0x188, virtual true, abstract: false, final false
  inline int32_t GetDatePart(::System::DateTime time, int32_t part);

  /// @brief Method GetDayOfMonth, addr 0x5a20b94, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek, addr 0x5a20ba8, size 0xac, virtual true, abstract: false, final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetDaysInMonth, addr 0x5a20c54, size 0xb8, virtual true, abstract: false, final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear, addr 0x5a20db0, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetEra, addr 0x5a20e20, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method GetMonth, addr 0x5a20f24, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetMonthsInYear, addr 0x5a20f38, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetYear, addr 0x5a20fa8, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method InitDateMapping, addr 0x5a1fe4c, size 0x174, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*> InitDateMapping();

  /// @brief Method IsLeapYear, addr 0x5a20fbc, size 0x7c, virtual true, abstract: false, final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  static inline ::System::Globalization::UmAlQuraCalendar* New_ctor();

  /// @brief Method RealGetDaysInYear, addr 0x5a20d0c, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t RealGetDaysInYear(int32_t year);

  /// @brief Method ToDateTime, addr 0x5a21038, size 0x234, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method ToFourDigitYear, addr 0x5a213b8, size 0x11c, virtual true, abstract: false, final false
  inline int32_t ToFourDigitYear(int32_t year);

  /// @brief Method .ctor, addr 0x5a20078, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*> getStaticF_HijriYearInfo();

  static inline ::System::DateTime getStaticF_maxDate();

  static inline ::System::DateTime getStaticF_minDate();

  /// @brief Method get_BaseCalendarID, addr 0x5a20088, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_BaseCalendarID();

  /// @brief Method get_Eras, addr 0x5a20ebc, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method get_ID, addr 0x5a20090, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ID();

  /// @brief Method get_MaxSupportedDateTime, addr 0x5a2001c, size 0x5c, virtual true, abstract: false, final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  /// @brief Method get_MinSupportedDateTime, addr 0x5a1ffc0, size 0x5c, virtual true, abstract: false, final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_TwoDigitYearMax, addr 0x5a2126c, size 0x44, virtual true, abstract: false, final false
  inline int32_t get_TwoDigitYearMax();

  static inline void setStaticF_HijriYearInfo(::ArrayW<::System::Globalization::UmAlQuraCalendar_DateMapping, ::Array<::System::Globalization::UmAlQuraCalendar_DateMapping>*> value);

  static inline void setStaticF_maxDate(::System::DateTime value);

  static inline void setStaticF_minDate(::System::DateTime value);

  /// @brief Method set_TwoDigitYearMax, addr 0x5a212b0, size 0x108, virtual true, abstract: false, final false
  inline void set_TwoDigitYearMax(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UmAlQuraCalendar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UmAlQuraCalendar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UmAlQuraCalendar(UmAlQuraCalendar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UmAlQuraCalendar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UmAlQuraCalendar(UmAlQuraCalendar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3636 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::UmAlQuraCalendar, 0x20>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::UmAlQuraCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::UmAlQuraCalendar*, "System.Globalization", "UmAlQuraCalendar");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::UmAlQuraCalendar_DateMapping, "System.Globalization", "UmAlQuraCalendar/DateMapping");
