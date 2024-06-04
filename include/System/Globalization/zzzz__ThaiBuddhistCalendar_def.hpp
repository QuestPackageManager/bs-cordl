#pragma once
// IWYU pragma private; include "System/Globalization/ThaiBuddhistCalendar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThaiBuddhistCalendar)
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
class ThaiBuddhistCalendar;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::ThaiBuddhistCalendar);
// Type: System.Globalization::ThaiBuddhistCalendar
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::System.Globalization::ThaiBuddhistCalendar*
class CORDL_TYPE ThaiBuddhistCalendar : public ::System::Globalization::Calendar {
public:
  // Declarations
  __declspec(property(get = get_Eras))::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  __declspec(property(get = get_MaxSupportedDateTime))::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_MinSupportedDateTime))::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  /// @brief Field helper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper))::System::Globalization::GregorianCalendarHelper* helper;

  /// @brief Field thaiBuddhistEraInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_thaiBuddhistEraInfo,
                             put = setStaticF_thaiBuddhistEraInfo))::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> thaiBuddhistEraInfo;

  /// @brief Method GetDayOfMonth, addr 0x2908de4, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek, addr 0x2908e2c, size 0x18, virtual true, abstract: false, final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetDaysInMonth, addr 0x2908db4, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear, addr 0x2908dcc, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetEra, addr 0x2908e68, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method GetMonth, addr 0x2908e80, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetMonthsInYear, addr 0x2908e44, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetYear, addr 0x2908ec8, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method IsLeapYear, addr 0x2908ee0, size 0x18, virtual true, abstract: false, final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  static inline ::System::Globalization::ThaiBuddhistCalendar* New_ctor();

  /// @brief Method ToDateTime, addr 0x2908ef8, size 0x20, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method ToFourDigitYear, addr 0x29090b0, size 0xac, virtual true, abstract: false, final false
  inline int32_t ToFourDigitYear(int32_t year);

  constexpr ::System::Globalization::GregorianCalendarHelper*& __cordl_internal_get_helper();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::GregorianCalendarHelper*> const& __cordl_internal_get_helper() const;

  constexpr void __cordl_internal_set_helper(::System::Globalization::GregorianCalendarHelper* value);

  /// @brief Method .ctor, addr 0x2908d00, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> getStaticF_thaiBuddhistEraInfo();

  /// @brief Method get_Eras, addr 0x2908f18, size 0x18, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method get_ID, addr 0x2908dac, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ID();

  /// @brief Method get_MaxSupportedDateTime, addr 0x2908ca8, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  /// @brief Method get_MinSupportedDateTime, addr 0x2908c50, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_TwoDigitYearMax, addr 0x2908f30, size 0x44, virtual true, abstract: false, final false
  inline int32_t get_TwoDigitYearMax();

  static inline void setStaticF_thaiBuddhistEraInfo(::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> value);

  /// @brief Method set_TwoDigitYearMax, addr 0x2908f74, size 0x13c, virtual true, abstract: false, final false
  inline void set_TwoDigitYearMax(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThaiBuddhistCalendar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThaiBuddhistCalendar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThaiBuddhistCalendar(ThaiBuddhistCalendar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThaiBuddhistCalendar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThaiBuddhistCalendar(ThaiBuddhistCalendar const&) = delete;

  /// @brief Field helper, offset: 0x20, size: 0x8, def value: None
  ::System::Globalization::GregorianCalendarHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::ThaiBuddhistCalendar, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::ThaiBuddhistCalendar, ___helper) == 0x20, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::ThaiBuddhistCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::ThaiBuddhistCalendar*, "System.Globalization", "ThaiBuddhistCalendar");
