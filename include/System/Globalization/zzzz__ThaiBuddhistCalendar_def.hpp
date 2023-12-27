#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThaiBuddhistCalendar)
namespace System::Globalization {
class GregorianCalendarHelper;
}
namespace System::Globalization {
class EraInfo;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3696))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3707))
// CS Name: ::System.Globalization::ThaiBuddhistCalendar*
class CORDL_TYPE ThaiBuddhistCalendar : public ::System::Globalization::Calendar {
public:
  // Declarations
  /// @brief Field helper, offset 0x20, size 0x8
  __declspec(property(get = __get_helper, put = __set_helper))::System::Globalization::GregorianCalendarHelper* helper;

  /// @brief Field thaiBuddhistEraInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_thaiBuddhistEraInfo,
                             put = setStaticF_thaiBuddhistEraInfo))::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> thaiBuddhistEraInfo;

  __declspec(property(get = get_MinSupportedDateTime))::System::DateTime MinSupportedDateTime;

  __declspec(property(get = get_MaxSupportedDateTime))::System::DateTime MaxSupportedDateTime;

  __declspec(property(get = get_ID)) int32_t _cordl_ID;

  __declspec(property(get = get_Eras))::ArrayW<int32_t, ::Array<int32_t>*> Eras;

  __declspec(property(get = get_TwoDigitYearMax, put = set_TwoDigitYearMax)) int32_t TwoDigitYearMax;

  constexpr ::System::Globalization::GregorianCalendarHelper*& __get_helper();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::GregorianCalendarHelper*> const& __get_helper() const;

  constexpr void __set_helper(::System::Globalization::GregorianCalendarHelper* value);

  static inline void setStaticF_thaiBuddhistEraInfo(::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> value);

  static inline ::ArrayW<::System::Globalization::EraInfo*, ::Array<::System::Globalization::EraInfo*>*> getStaticF_thaiBuddhistEraInfo();

  /// @brief Method get_MinSupportedDateTime addr 0x256963c size 0x58 virtual true final false
  inline ::System::DateTime get_MinSupportedDateTime();

  /// @brief Method get_MaxSupportedDateTime addr 0x2569694 size 0x58 virtual true final false
  inline ::System::DateTime get_MaxSupportedDateTime();

  static inline ::System::Globalization::ThaiBuddhistCalendar* New_ctor();

  /// @brief Method .ctor addr 0x25696ec size 0xac virtual false final false
  inline void _ctor();

  /// @brief Method get_ID addr 0x2569798 size 0x8 virtual true final false
  inline int32_t get_ID();

  /// @brief Method GetDaysInMonth addr 0x25697a0 size 0x18 virtual true final false
  inline int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era);

  /// @brief Method GetDaysInYear addr 0x25697b8 size 0x18 virtual true final false
  inline int32_t GetDaysInYear(int32_t year, int32_t era);

  /// @brief Method GetDayOfMonth addr 0x25697d0 size 0x48 virtual true final false
  inline int32_t GetDayOfMonth(::System::DateTime time);

  /// @brief Method GetDayOfWeek addr 0x2569818 size 0x18 virtual true final false
  inline ::System::DayOfWeek GetDayOfWeek(::System::DateTime time);

  /// @brief Method GetMonthsInYear addr 0x2569830 size 0x24 virtual true final false
  inline int32_t GetMonthsInYear(int32_t year, int32_t era);

  /// @brief Method GetEra addr 0x2569854 size 0x18 virtual true final false
  inline int32_t GetEra(::System::DateTime time);

  /// @brief Method GetMonth addr 0x256986c size 0x48 virtual true final false
  inline int32_t GetMonth(::System::DateTime time);

  /// @brief Method GetYear addr 0x25698b4 size 0x18 virtual true final false
  inline int32_t GetYear(::System::DateTime time);

  /// @brief Method IsLeapYear addr 0x25698cc size 0x18 virtual true final false
  inline bool IsLeapYear(int32_t year, int32_t era);

  /// @brief Method ToDateTime addr 0x25698e4 size 0x20 virtual true final false
  inline ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era);

  /// @brief Method get_Eras addr 0x2569904 size 0x18 virtual true final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Eras();

  /// @brief Method get_TwoDigitYearMax addr 0x256991c size 0x44 virtual true final false
  inline int32_t get_TwoDigitYearMax();

  /// @brief Method set_TwoDigitYearMax addr 0x2569960 size 0x13c virtual true final false
  inline void set_TwoDigitYearMax(int32_t value);

  /// @brief Method ToFourDigitYear addr 0x2569a9c size 0xac virtual true final false
  inline int32_t ToFourDigitYear(int32_t year);

  // Ctor Parameters [CppParam { name: "", ty: "ThaiBuddhistCalendar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThaiBuddhistCalendar(ThaiBuddhistCalendar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThaiBuddhistCalendar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThaiBuddhistCalendar(ThaiBuddhistCalendar const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThaiBuddhistCalendar();

public:
  /// @brief Field helper, offset: 0x20, size: 0x8, def value: None
  ::System::Globalization::GregorianCalendarHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::ThaiBuddhistCalendar, 0x28>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::ThaiBuddhistCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::ThaiBuddhistCalendar*, "System.Globalization", "ThaiBuddhistCalendar");
