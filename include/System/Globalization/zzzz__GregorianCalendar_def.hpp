#pragma once
// IWYU pragma private; include "System/Globalization/GregorianCalendar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__GregorianCalendarTypes_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::System::Globalization::GregorianCalendar*);
DEFINE_IL2CPP_CLASS(::System::Globalization::GregorianCalendar*, "System.Globalization", "GregorianCalendar");
// Dependencies System.Globalization.Calendar, System.Globalization.GregorianCalendarTypes
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.GregorianCalendar
class CORDL_TYPE GregorianCalendar : public ::System::Globalization::Calendar {
public:
  // Declarations
  /// @brief Field DaysToMonth365, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DaysToMonth365, put = setStaticF_DaysToMonth365)) ::ArrayW<int32_t> DaysToMonth365;

  /// @brief Field DaysToMonth366, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DaysToMonth366, put = setStaticF_DaysToMonth366)) ::ArrayW<int32_t> DaysToMonth366;

  __declspec(property(get = get_Eras)) ::ArrayW<int32_t> Eras;

  __declspec(property(get = get_MaxSupportedDateTime)) ::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_MinSupportedDateTime)) ::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  /// @brief Field m_type, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_type, put = __cordl_internal_set_m_type)) ::System::Globalization::GregorianCalendarTypes m_type;

  /// @brief Field s_defaultInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultInstance, put = setStaticF_s_defaultInstance)) ::System::Globalization::Calendar* s_defaultInstance;

  /// @brief Method GetAbsoluteDate, addr 0x5bc5924, size 0x1d0, virtual false, abstract: false, final false
  static inline int64_t GetAbsoluteDate(int32_t year, int32_t month, int32_t day);

  /// @brief Method GetDatePart, addr 0x5bc5714, size 0x210, virtual true, abstract: false, final false
  inline int32_t GetDatePart(int64_t ticks, int32_t part);

  /// @brief Method GetDayOfMonth, addr 0x5bc5af4, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek, addr 0x5bc5b78, size 0xac, virtual true, abstract: false, final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetDaysInMonth, addr 0x5bc5c24, size 0x28c, virtual true, abstract: false, final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear, addr 0x5bc5eb0, size 0x16c, virtual true, abstract: false, final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetDefaultInstance, addr 0x5bc5508, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Globalization::Calendar* GetDefaultInstance();

  /// @brief Method GetEra, addr 0x5bc601c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method GetMonth, addr 0x5bc608c, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetMonthsInYear, addr 0x5bc6110, size 0x130, virtual true, abstract: false, final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetYear, addr 0x5bc6240, size 0x84, virtual true, abstract: false, final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method IsLeapYear, addr 0x5bc62c4, size 0x17c, virtual true, abstract: false, final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  static inline ::System::Globalization::GregorianCalendar* New_ctor();

  static inline ::System::Globalization::GregorianCalendar* New_ctor(::System::Globalization::GregorianCalendarTypes type);

  /// @brief Method OnDeserialized, addr 0x5bc538c, size 0xc4, virtual false, abstract: false, final false
  inline void OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method ToDateTime, addr 0x5bc6440, size 0x94, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method ToFourDigitYear, addr 0x5bc6710, size 0x100, virtual true, abstract: false, final false
  inline int32_t ToFourDigitYear(int32_t year);

  /// @brief Method TryToDateTime, addr 0x5bc64d4, size 0xf8, virtual true, abstract: false, final false
  inline bool TryToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, ::by_ref<::System::DateTime> result);

  constexpr ::System::Globalization::GregorianCalendarTypes const& __cordl_internal_get_m_type() const;

  constexpr ::System::Globalization::GregorianCalendarTypes& __cordl_internal_get_m_type();

  constexpr void __cordl_internal_set_m_type(::System::Globalization::GregorianCalendarTypes value);

  /// @brief Method .ctor, addr 0x5bc55c8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5bc55e0, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::GregorianCalendarTypes type);

  static inline ::ArrayW<int32_t> getStaticF_DaysToMonth365();

  static inline ::ArrayW<int32_t> getStaticF_DaysToMonth366();

  static inline ::System::Globalization::Calendar* getStaticF_s_defaultInstance();

  /// @brief Method get_Eras, addr 0x5bc6024, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t> get_Eras();

  /// @brief Method get_ID, addr 0x5bc570c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ID();

  /// @brief Method get_MaxSupportedDateTime, addr 0x5bc54ac, size 0x5c, virtual true, abstract: false, final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  /// @brief Method get_MinSupportedDateTime, addr 0x5bc5450, size 0x5c, virtual true, abstract: false, final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_TwoDigitYearMax, addr 0x5bc65cc, size 0x44, virtual true, abstract: false, final false
  inline int32_t get_TwoDigitYearMax();

  static inline void setStaticF_DaysToMonth365(::ArrayW<int32_t> value);

  static inline void setStaticF_DaysToMonth366(::ArrayW<int32_t> value);

  static inline void setStaticF_s_defaultInstance(::System::Globalization::Calendar* value);

  /// @brief Method set_TwoDigitYearMax, addr 0x5bc6610, size 0x100, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3624 };

  /// @brief Field m_type, offset: 0x1c, size: 0x4, def value: None
  ::System::Globalization::GregorianCalendarTypes ___m_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::GregorianCalendar, ___m_type) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::System::Globalization::GregorianCalendar) == 0x20, "Size mismatch!");

} // namespace System::Globalization
