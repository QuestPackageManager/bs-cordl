#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UmAlQuraCalendar)
namespace System::Globalization {
struct __UmAlQuraCalendar__DateMapping;
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
struct __UmAlQuraCalendar__DateMapping;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::UmAlQuraCalendar);
MARK_VAL_T(::System::Globalization::__UmAlQuraCalendar__DateMapping);
// Type: ::DateMapping
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::UmAlQuraCalendar::DateMapping
struct CORDL_TYPE __UmAlQuraCalendar__DateMapping {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x27ee608, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(int32_t MonthsLengthFlags, int32_t GYear, int32_t GMonth, int32_t GDay);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UmAlQuraCalendar__DateMapping();

  // Ctor Parameters [CppParam { name: "HijriMonthsLengthFlags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "GregorianDate", ty: "::System::DateTime", modifiers: "", def_value:
  // None }]
  constexpr __UmAlQuraCalendar__DateMapping(int32_t HijriMonthsLengthFlags, ::System::DateTime GregorianDate) noexcept;

  /// @brief Field HijriMonthsLengthFlags, offset: 0x0, size: 0x4, def value: None
  int32_t HijriMonthsLengthFlags;

  /// @brief Field GregorianDate, offset: 0x8, size: 0x8, def value: None
  ::System::DateTime GregorianDate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::__UmAlQuraCalendar__DateMapping, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::__UmAlQuraCalendar__DateMapping, HijriMonthsLengthFlags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::__UmAlQuraCalendar__DateMapping, GregorianDate) == 0x8, "Offset mismatch!");

} // namespace System::Globalization
// Type: System.Globalization::UmAlQuraCalendar
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::System.Globalization::UmAlQuraCalendar*
class CORDL_TYPE UmAlQuraCalendar : public ::System::Globalization::Calendar {
public:
  // Declarations
  using DateMapping = ::System::Globalization::__UmAlQuraCalendar__DateMapping;

  __declspec(property(get = get_BaseCalendarID)) int32_t BaseCalendarID;

  __declspec(property(get = get_Eras))::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  /// @brief Field HijriYearInfo, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_HijriYearInfo,
               put = setStaticF_HijriYearInfo))::ArrayW<::System::Globalization::__UmAlQuraCalendar__DateMapping, ::Array<::System::Globalization::__UmAlQuraCalendar__DateMapping>*> HijriYearInfo;

  __declspec(property(get = get_MaxSupportedDateTime))::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_MinSupportedDateTime))::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  /// @brief Field maxDate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_maxDate, put = setStaticF_maxDate))::System::DateTime maxDate;

  /// @brief Field minDate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_minDate, put = setStaticF_minDate))::System::DateTime minDate;

  /// @brief Method CheckEraRange, addr 0x27eead0, size 0x7c, virtual false, abstract: false, final false
  static inline void CheckEraRange(int32_t era);

  /// @brief Method CheckTicksRange, addr 0x27ee920, size 0x1b0, virtual false, abstract: false, final false
  static inline void CheckTicksRange(int64_t ticks);

  /// @brief Method CheckYearMonthRange, addr 0x27eec98, size 0xe0, virtual false, abstract: false, final false
  static inline void CheckYearMonthRange(int32_t year, int32_t month, int32_t era);

  /// @brief Method CheckYearRange, addr 0x27eeb4c, size 0x14c, virtual false, abstract: false, final false
  static inline void CheckYearRange(int32_t year, int32_t era);

  /// @brief Method ConvertGregorianToHijri, addr 0x27eed78, size 0x258, virtual false, abstract: false, final false
  static inline void ConvertGregorianToHijri(::System::DateTime time, ByRef<int32_t> HijriYear, ByRef<int32_t> HijriMonth, ByRef<int32_t> HijriDay);

  /// @brief Method ConvertHijriToGregorian, addr 0x27ee71c, size 0x140, virtual false, abstract: false, final false
  static inline void ConvertHijriToGregorian(int32_t HijriYear, int32_t HijriMonth, int32_t HijriDay, ByRef<int32_t> yg, ByRef<int32_t> mg, ByRef<int32_t> dg);

  /// @brief Method GetAbsoluteDateUmAlQura, addr 0x27ee85c, size 0xc4, virtual false, abstract: false, final false
  static inline int64_t GetAbsoluteDateUmAlQura(int32_t year, int32_t month, int32_t day);

  /// @brief Method GetDatePart, addr 0x27eefd0, size 0x16c, virtual true, abstract: false, final false
  inline int32_t GetDatePart(::System::DateTime time, int32_t part);

  /// @brief Method GetDayOfMonth, addr 0x27ef13c, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek, addr 0x27ef150, size 0x68, virtual true, abstract: false, final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetDaysInMonth, addr 0x27ef1b8, size 0xb8, virtual true, abstract: false, final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear, addr 0x27ef310, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetEra, addr 0x27ef37c, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method GetMonth, addr 0x27ef450, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetMonthsInYear, addr 0x27ef464, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetYear, addr 0x27ef4d0, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method InitDateMapping, addr 0x27ee4a4, size 0x164, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Globalization::__UmAlQuraCalendar__DateMapping, ::Array<::System::Globalization::__UmAlQuraCalendar__DateMapping>*> InitDateMapping();

  /// @brief Method IsLeapYear, addr 0x27ef4e4, size 0x78, virtual true, abstract: false, final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  static inline ::System::Globalization::UmAlQuraCalendar* New_ctor();

  /// @brief Method RealGetDaysInYear, addr 0x27ef270, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t RealGetDaysInYear(int32_t year);

  /// @brief Method ToDateTime, addr 0x27ef55c, size 0x254, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method ToFourDigitYear, addr 0x27ef914, size 0x13c, virtual true, abstract: false, final false
  inline int32_t ToFourDigitYear(int32_t year);

  /// @brief Method .ctor, addr 0x27ee6f8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Globalization::__UmAlQuraCalendar__DateMapping, ::Array<::System::Globalization::__UmAlQuraCalendar__DateMapping>*> getStaticF_HijriYearInfo();

  static inline ::System::DateTime getStaticF_maxDate();

  static inline ::System::DateTime getStaticF_minDate();

  /// @brief Method get_BaseCalendarID, addr 0x27ee70c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_BaseCalendarID();

  /// @brief Method get_Eras, addr 0x27ef3ec, size 0x64, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method get_ID, addr 0x27ee714, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ID();

  /// @brief Method get_MaxSupportedDateTime, addr 0x27ee6a0, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  /// @brief Method get_MinSupportedDateTime, addr 0x27ee648, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_TwoDigitYearMax, addr 0x27ef7b0, size 0x44, virtual true, abstract: false, final false
  inline int32_t get_TwoDigitYearMax();

  static inline void setStaticF_HijriYearInfo(::ArrayW<::System::Globalization::__UmAlQuraCalendar__DateMapping, ::Array<::System::Globalization::__UmAlQuraCalendar__DateMapping>*> value);

  static inline void setStaticF_maxDate(::System::DateTime value);

  static inline void setStaticF_minDate(::System::DateTime value);

  /// @brief Method set_TwoDigitYearMax, addr 0x27ef7f4, size 0x120, virtual true, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::UmAlQuraCalendar, 0x20>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::UmAlQuraCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::UmAlQuraCalendar*, "System.Globalization", "UmAlQuraCalendar");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::__UmAlQuraCalendar__DateMapping, "System.Globalization", "UmAlQuraCalendar/DateMapping");
