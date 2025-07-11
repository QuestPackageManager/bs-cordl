#pragma once
// IWYU pragma private; include "System/Globalization/GregorianCalendar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__GregorianCalendarTypes_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GregorianCalendar)
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
struct GregorianCalendarTypes;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
// Forward declare root types
namespace System::Globalization {
class GregorianCalendar;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::GregorianCalendar);
// Dependencies System.Globalization.Calendar, System.Globalization.GregorianCalendarTypes
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.GregorianCalendar
class CORDL_TYPE GregorianCalendar : public ::System::Globalization::Calendar {
public:
  // Declarations
  /// @brief Field DaysToMonth365, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DaysToMonth365, put = setStaticF_DaysToMonth365)) ::ArrayW<int32_t, ::Array<int32_t>*> DaysToMonth365;

  /// @brief Field DaysToMonth366, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DaysToMonth366, put = setStaticF_DaysToMonth366)) ::ArrayW<int32_t, ::Array<int32_t>*> DaysToMonth366;

  __declspec(property(get = get_Eras)) ::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  __declspec(property(get = get_MaxSupportedDateTime)) ::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_MinSupportedDateTime)) ::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  /// @brief Field m_type, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_type, put = __cordl_internal_set_m_type)) ::System::Globalization::GregorianCalendarTypes m_type;

  /// @brief Field s_defaultInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultInstance, put = setStaticF_s_defaultInstance)) ::System::Globalization::Calendar* s_defaultInstance;

  /// @brief Method GetAbsoluteDate, addr 0x3d9dc1c, size 0x1f0, virtual false, abstract: false, final false
  static inline int64_t GetAbsoluteDate(int32_t year, int32_t month, int32_t day);

  /// @brief Method GetDatePart, addr 0x3d9da1c, size 0x200, virtual true, abstract: false, final false
  inline int32_t GetDatePart(int64_t ticks, int32_t part);

  /// @brief Method GetDayOfMonth, addr 0x3d9de0c, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek, addr 0x3d9de90, size 0xa8, virtual true, abstract: false, final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetDaysInMonth, addr 0x3d9df38, size 0x2a4, virtual true, abstract: false, final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear, addr 0x3d9e1dc, size 0x18c, virtual true, abstract: false, final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetDefaultInstance, addr 0x3d9d7d0, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Globalization::Calendar* GetDefaultInstance();

  /// @brief Method GetEra, addr 0x3d9e368, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method GetMonth, addr 0x3d9e3d4, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetMonthsInYear, addr 0x3d9e458, size 0x148, virtual true, abstract: false, final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetYear, addr 0x3d9e5a0, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method IsLeapYear, addr 0x3d9e624, size 0x194, virtual true, abstract: false, final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  static inline ::System::Globalization::GregorianCalendar* New_ctor();

  static inline ::System::Globalization::GregorianCalendar* New_ctor(::System::Globalization::GregorianCalendarTypes type);

  /// @brief Method OnDeserialized, addr 0x3d9d64c, size 0xd4, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method ToDateTime, addr 0x3d9e7b8, size 0x9c, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method ToFourDigitYear, addr 0x3d9ea98, size 0x11c, virtual true, abstract: false, final false
  inline int32_t ToFourDigitYear(int32_t year);

  /// @brief Method TryToDateTime, addr 0x3d9e854, size 0xec, virtual true, abstract: false, final false
  inline bool TryToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, ::ByRef<::System::DateTime> result);

  constexpr ::System::Globalization::GregorianCalendarTypes const& __cordl_internal_get_m_type() const;

  constexpr ::System::Globalization::GregorianCalendarTypes& __cordl_internal_get_m_type();

  constexpr void __cordl_internal_set_m_type(::System::Globalization::GregorianCalendarTypes value);

  /// @brief Method .ctor, addr 0x3d9d898, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d9d8c4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::GregorianCalendarTypes type);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DaysToMonth365();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DaysToMonth366();

  static inline ::System::Globalization::Calendar* getStaticF_s_defaultInstance();

  /// @brief Method get_Eras, addr 0x3d9e370, size 0x64, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method get_ID, addr 0x3d9da14, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ID();

  /// @brief Method get_MaxSupportedDateTime, addr 0x3d9d778, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  /// @brief Method get_MinSupportedDateTime, addr 0x3d9d720, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_TwoDigitYearMax, addr 0x3d9e940, size 0x44, virtual true, abstract: false, final false
  inline int32_t get_TwoDigitYearMax();

  static inline void setStaticF_DaysToMonth365(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_DaysToMonth366(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_defaultInstance(::System::Globalization::Calendar* value);

  /// @brief Method set_TwoDigitYearMax, addr 0x3d9e984, size 0x114, virtual true, abstract: false, final false
  inline void set_TwoDigitYearMax(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GregorianCalendar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GregorianCalendar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GregorianCalendar(GregorianCalendar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GregorianCalendar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GregorianCalendar(GregorianCalendar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3704 };

  /// @brief Field m_type, offset: 0x1c, size: 0x4, def value: None
  ::System::Globalization::GregorianCalendarTypes ___m_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::GregorianCalendar, ___m_type) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::GregorianCalendar, 0x20>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::GregorianCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::GregorianCalendar*, "System.Globalization", "GregorianCalendar");
