#pragma once
// IWYU pragma private; include "System/Globalization/JapaneseCalendar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JapaneseCalendar)
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
class EraInfo;
}
namespace System::Globalization {
class GregorianCalendarHelper;
}
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
// Forward declare root types
namespace System::Globalization {
class JapaneseCalendar;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::JapaneseCalendar);
// Dependencies System.DateTime, System.Globalization.Calendar
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.JapaneseCalendar
class CORDL_TYPE JapaneseCalendar : public ::System::Globalization::Calendar {
public:
  // Declarations
  __declspec(property(get = get_Eras)) ::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  __declspec(property(get = get_MaxSupportedDateTime)) ::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_MinSupportedDateTime)) ::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  /// @brief Field calendarMinValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_calendarMinValue, put = setStaticF_calendarMinValue)) ::System::DateTime calendarMinValue;

  /// @brief Field helper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Globalization::GregorianCalendarHelper* helper;

  /// @brief Field japaneseEraInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_japaneseEraInfo, put = setStaticF_japaneseEraInfo)) ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> japaneseEraInfo;

  /// @brief Field s_defaultInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultInstance, put = setStaticF_s_defaultInstance)) ::System::Globalization::Calendar* s_defaultInstance;

  /// @brief Method EnglishEraNames, addr 0x3d9bf44, size 0xd4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> EnglishEraNames();

  /// @brief Method EraNames, addr 0x3d9be70, size 0xd4, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> EraNames();

  /// @brief Method GetDayOfMonth, addr 0x3da0e50, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek, addr 0x3da0e68, size 0x18, virtual true, abstract: false, final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetDaysInMonth, addr 0x3da0e20, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear, addr 0x3da0e38, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetDefaultInstance, addr 0x3da0bb0, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Globalization::Calendar* GetDefaultInstance();

  /// @brief Method GetEra, addr 0x3da0ea4, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method GetEraInfo, addr 0x3da0750, size 0x458, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> GetEraInfo();

  /// @brief Method GetErasFromRegistry, addr 0x3da0ba8, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> GetErasFromRegistry();

  /// @brief Method GetMonth, addr 0x3da0ebc, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetMonthsInYear, addr 0x3da0e80, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetYear, addr 0x3da0ed4, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method IsLeapYear, addr 0x3da0eec, size 0x18, virtual true, abstract: false, final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  /// @brief Method IsValidYear, addr 0x3da1088, size 0x28, virtual true, abstract: false, final false
  inline bool IsValidYear(int32_t year, int32_t era);

  static inline ::System::Globalization::JapaneseCalendar* New_ctor();

  /// @brief Method ToDateTime, addr 0x3da0f04, size 0x20, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method ToFourDigitYear, addr 0x3da0f24, size 0x14c, virtual true, abstract: false, final false
  inline int32_t ToFourDigitYear(int32_t year);

  constexpr ::System::Globalization::GregorianCalendarHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Globalization::GregorianCalendarHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_helper(::System::Globalization::GregorianCalendarHelper* value);

  /// @brief Method .ctor, addr 0x3da0c60, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::DateTime getStaticF_calendarMinValue();

  static inline ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> getStaticF_japaneseEraInfo();

  static inline ::System::Globalization::Calendar* getStaticF_s_defaultInstance();

  /// @brief Method get_Eras, addr 0x3da1070, size 0x18, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method get_ID, addr 0x3da0e18, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ID();

  /// @brief Method get_MaxSupportedDateTime, addr 0x3da06f8, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  /// @brief Method get_MinSupportedDateTime, addr 0x3da06a0, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_TwoDigitYearMax, addr 0x3da10b0, size 0x44, virtual true, abstract: false, final false
  inline int32_t get_TwoDigitYearMax();

  static inline void setStaticF_calendarMinValue(::System::DateTime value);

  static inline void setStaticF_japaneseEraInfo(::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> value);

  static inline void setStaticF_s_defaultInstance(::System::Globalization::Calendar* value);

  /// @brief Method set_TwoDigitYearMax, addr 0x3da10f4, size 0x138, virtual true, abstract: false, final false
  inline void set_TwoDigitYearMax(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JapaneseCalendar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JapaneseCalendar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JapaneseCalendar(JapaneseCalendar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JapaneseCalendar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JapaneseCalendar(JapaneseCalendar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3709 };

  /// @brief Field helper, offset: 0x20, size: 0x8, def value: None
  ::System::Globalization::GregorianCalendarHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::JapaneseCalendar, ___helper) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::JapaneseCalendar, 0x28>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::JapaneseCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::JapaneseCalendar*, "System.Globalization", "JapaneseCalendar");
