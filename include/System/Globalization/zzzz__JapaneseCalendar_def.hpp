#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JapaneseCalendar)
namespace System::Globalization {
class EraInfo;
}
namespace System::Globalization {
class GregorianCalendarHelper;
}
namespace System::Globalization {
class Calendar;
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
// Type: System.Globalization::JapaneseCalendar
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3696)), TypeDefinitionIndex(TypeDefinitionIndex(2368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3703))
// CS Name: ::System.Globalization::JapaneseCalendar*
class CORDL_TYPE JapaneseCalendar : public ::System::Globalization::Calendar {
public:
  // Declarations
  /// @brief Field helper, offset 0x20, size 0x8
  __declspec(property(get = __get_helper, put = __set_helper))::System::Globalization::GregorianCalendarHelper* helper;

  /// @brief Field calendarMinValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_calendarMinValue, put = setStaticF_calendarMinValue))::System::DateTime calendarMinValue;

  /// @brief Field japaneseEraInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_japaneseEraInfo,
                             put = setStaticF_japaneseEraInfo))::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> japaneseEraInfo;

  /// @brief Field s_defaultInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultInstance, put = setStaticF_s_defaultInstance))::System::Globalization::Calendar* s_defaultInstance;

  __declspec(property(get = get_MinSupportedDateTime))::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_MaxSupportedDateTime))::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  __declspec(property(get = get_Eras))::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  constexpr ::System::Globalization::GregorianCalendarHelper*& __get_helper();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::GregorianCalendarHelper*> const& __get_helper() const;

  constexpr void __set_helper(::System::Globalization::GregorianCalendarHelper* value);

  static inline void setStaticF_calendarMinValue(::System::DateTime value);

  static inline ::System::DateTime getStaticF_calendarMinValue();

  static inline void setStaticF_japaneseEraInfo(::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> value);

  static inline ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> getStaticF_japaneseEraInfo();

  static inline void setStaticF_s_defaultInstance(::System::Globalization::Calendar* value);

  static inline ::System::Globalization::Calendar* getStaticF_s_defaultInstance();

  /// @brief Method get_MinSupportedDateTime, addr 0x2565284, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_MaxSupportedDateTime, addr 0x25652dc, size 0x58, virtual true, abstract: false, final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  /// @brief Method GetEraInfo, addr 0x2565334, size 0x458, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> GetEraInfo();

  /// @brief Method GetErasFromRegistry, addr 0x256578c, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> GetErasFromRegistry();

  /// @brief Method GetDefaultInstance, addr 0x2565794, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Globalization::Calendar* GetDefaultInstance();

  static inline ::System::Globalization::JapaneseCalendar* New_ctor();

  /// @brief Method .ctor, addr 0x256584c, size 0x1d0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ID, addr 0x2565a1c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ID();

  /// @brief Method GetDaysInMonth, addr 0x2565a24, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear, addr 0x2565a3c, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetDayOfMonth, addr 0x2565a54, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek, addr 0x2565a9c, size 0x18, virtual true, abstract: false, final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetMonthsInYear, addr 0x2565ab4, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetEra, addr 0x2565ad8, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method GetMonth, addr 0x2565af0, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetYear, addr 0x2565b38, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method IsLeapYear, addr 0x2565b50, size 0x18, virtual true, abstract: false, final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  /// @brief Method ToDateTime, addr 0x2565b68, size 0x20, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method ToFourDigitYear, addr 0x2565b88, size 0x150, virtual true, abstract: false, final false
  inline int32_t ToFourDigitYear(int32_t year);

  /// @brief Method get_Eras, addr 0x2565cd8, size 0x18, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method EraNames, addr 0x2560dc4, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> EraNames();

  /// @brief Method EnglishEraNames, addr 0x2560ed8, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> EnglishEraNames();

  /// @brief Method IsValidYear, addr 0x2565cf0, size 0x28, virtual true, abstract: false, final false
  inline bool IsValidYear(int32_t year, int32_t era);

  /// @brief Method get_TwoDigitYearMax, addr 0x2565d18, size 0x44, virtual true, abstract: false, final false
  inline int32_t get_TwoDigitYearMax();

  /// @brief Method set_TwoDigitYearMax, addr 0x2565d5c, size 0x13c, virtual true, abstract: false, final false
  inline void set_TwoDigitYearMax(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "JapaneseCalendar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JapaneseCalendar(JapaneseCalendar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JapaneseCalendar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JapaneseCalendar(JapaneseCalendar const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JapaneseCalendar();

public:
  /// @brief Field helper, offset: 0x20, size: 0x8, def value: None
  ::System::Globalization::GregorianCalendarHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::JapaneseCalendar, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::JapaneseCalendar, ___helper) == 0x20, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::JapaneseCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::JapaneseCalendar*, "System.Globalization", "JapaneseCalendar");
