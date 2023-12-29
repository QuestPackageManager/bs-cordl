#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GregorianCalendarHelper)
namespace System::Globalization {
class EraInfo;
}
namespace System::Globalization {
class Calendar;
}
namespace System {
struct DayOfWeek;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Globalization {
class GregorianCalendarHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::GregorianCalendarHelper);
// Type: System.Globalization::GregorianCalendarHelper
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3688))
// CS Name: ::System.Globalization::GregorianCalendarHelper*
class CORDL_TYPE GregorianCalendarHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_maxYear, offset 0x10, size 0x4
  __declspec(property(get = __get_m_maxYear, put = __set_m_maxYear)) int32_t m_maxYear;

  /// @brief Field m_minYear, offset 0x14, size 0x4
  __declspec(property(get = __get_m_minYear, put = __set_m_minYear)) int32_t m_minYear;

  /// @brief Field m_Cal, offset 0x18, size 0x8
  __declspec(property(get = __get_m_Cal, put = __set_m_Cal))::System::Globalization::Calendar* m_Cal;

  /// @brief Field m_EraInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_m_EraInfo, put = __set_m_EraInfo))::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> m_EraInfo;

  /// @brief Field m_eras, offset 0x28, size 0x8
  __declspec(property(get = __get_m_eras, put = __set_m_eras))::ArrayW<int32_t, ::Array<int32_t>*> m_eras;

  /// @brief Field m_minDate, offset 0x30, size 0x8
  __declspec(property(get = __get_m_minDate, put = __set_m_minDate))::System::DateTime m_minDate;

  /// @brief Field DaysToMonth365, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DaysToMonth365, put = setStaticF_DaysToMonth365))::ArrayW<int32_t, ::Array<int32_t>*> DaysToMonth365;

  /// @brief Field DaysToMonth366, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DaysToMonth366, put = setStaticF_DaysToMonth366))::ArrayW<int32_t, ::Array<int32_t>*> DaysToMonth366;

  __declspec(property(get = get_MaxYear)) int32_t MaxYear;

  __declspec(property(get = get_Eras))::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  constexpr int32_t& __get_m_maxYear();

  constexpr int32_t const& __get_m_maxYear() const;

  constexpr void __set_m_maxYear(int32_t value);

  constexpr int32_t& __get_m_minYear();

  constexpr int32_t const& __get_m_minYear() const;

  constexpr void __set_m_minYear(int32_t value);

  constexpr ::System::Globalization::Calendar*& __get_m_Cal();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::Calendar*> const& __get_m_Cal() const;

  constexpr void __set_m_Cal(::System::Globalization::Calendar* value);

  constexpr ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*>& __get_m_EraInfo();

  constexpr ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> const& __get_m_EraInfo() const;

  constexpr void __set_m_EraInfo(::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_eras();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_eras() const;

  constexpr void __set_m_eras(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::System::DateTime& __get_m_minDate();

  constexpr ::System::DateTime const& __get_m_minDate() const;

  constexpr void __set_m_minDate(::System::DateTime value);

  static inline void setStaticF_DaysToMonth365(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DaysToMonth365();

  static inline void setStaticF_DaysToMonth366(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DaysToMonth366();

  /// @brief Method get_MaxYear addr 0x2406214 size 0x8 virtual false final false
  inline int32_t get_MaxYear();

  static inline ::System::Globalization::GregorianCalendarHelper* New_ctor(::System::Globalization::Calendar* cal,
                                                                           ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> eraInfo);

  /// @brief Method .ctor addr 0x240621c size 0x78 virtual false final false
  inline void _ctor(::System::Globalization::Calendar* cal, ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> eraInfo);

  /// @brief Method GetYearOffset addr 0x2406294 size 0x2f4 virtual false final false
  inline int32_t GetYearOffset(int32_t year, int32_t era, bool throwOnError);

  /// @brief Method GetGregorianYear addr 0x2406588 size 0x1c virtual false final false
  inline int32_t GetGregorianYear(int32_t year, int32_t era);

  /// @brief Method IsValidYear addr 0x24065a4 size 0x1c virtual false final false
  inline bool IsValidYear(int32_t year, int32_t era);

  /// @brief Method GetDatePart addr 0x24065c0 size 0x20c virtual true final false
  inline int32_t GetDatePart(int64_t ticks, int32_t part);

  /// @brief Method GetAbsoluteDate addr 0x2406964 size 0x1e8 virtual false final false
  static inline int64_t GetAbsoluteDate(int32_t year, int32_t month, int32_t day);

  /// @brief Method DateToTicks addr 0x2406b4c size 0x80 virtual false final false
  static inline int64_t DateToTicks(int32_t year, int32_t month, int32_t day);

  /// @brief Method TimeToTicks addr 0x2406bcc size 0x1bc virtual false final false
  static inline int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second, int32_t millisecond);

  /// @brief Method CheckTicksRange addr 0x24067cc size 0x198 virtual false final false
  inline void CheckTicksRange(int64_t ticks);

  /// @brief Method GetDayOfMonth addr 0x2406d88 size 0x40 virtual false final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek addr 0x2406dc8 size 0x8c virtual false final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetDaysInMonth addr 0x2406e54 size 0x18c virtual false final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear addr 0x2406fe0 size 0x70 virtual false final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetEra addr 0x2407050 size 0xd0 virtual false final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method get_Eras addr 0x2407120 size 0xf0 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method GetMonth addr 0x2407210 size 0x40 virtual false final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetMonthsInYear addr 0x2407250 size 0x18 virtual false final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetYear addr 0x2407268 size 0xf0 virtual false final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method IsLeapYear addr 0x2407358 size 0x70 virtual false final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  /// @brief Method ToDateTime addr 0x24073c8 size 0x104 virtual false final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method ToFourDigitYear addr 0x24074cc size 0x188 virtual false final false
  inline int32_t ToFourDigitYear(int32_t year, int32_t twoDigitYearMax);

  // Ctor Parameters [CppParam { name: "", ty: "GregorianCalendarHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GregorianCalendarHelper(GregorianCalendarHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GregorianCalendarHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GregorianCalendarHelper(GregorianCalendarHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GregorianCalendarHelper();

public:
  /// @brief Field m_maxYear, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_maxYear;

  /// @brief Field m_minYear, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_minYear;

  /// @brief Field m_Cal, offset: 0x18, size: 0x8, def value: None
  ::System::Globalization::Calendar* ___m_Cal;

  /// @brief Field m_EraInfo, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> ___m_EraInfo;

  /// @brief Field m_eras, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_eras;

  /// @brief Field m_minDate, offset: 0x30, size: 0x8, def value: None
  ::System::DateTime ___m_minDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::GregorianCalendarHelper, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::GregorianCalendarHelper, ___m_maxYear) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::GregorianCalendarHelper, ___m_minYear) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::GregorianCalendarHelper, ___m_Cal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::GregorianCalendarHelper, ___m_EraInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::GregorianCalendarHelper, ___m_eras) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::GregorianCalendarHelper, ___m_minDate) == 0x30, "Offset mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::GregorianCalendarHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::GregorianCalendarHelper*, "System.Globalization", "GregorianCalendarHelper");
