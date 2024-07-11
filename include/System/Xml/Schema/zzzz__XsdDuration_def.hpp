#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDuration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDuration)
namespace System::Xml::Schema {
struct __XsdDuration__DurationType;
}
namespace System::Xml::Schema {
struct __XsdDuration__Parts;
}
namespace System {
class Exception;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml::Schema {
struct __XsdDuration__DurationType;
}
namespace System::Xml::Schema {
struct __XsdDuration__Parts;
}
namespace System::Xml::Schema {
struct XsdDuration;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::__XsdDuration__DurationType);
MARK_VAL_T(::System::Xml::Schema::__XsdDuration__Parts);
MARK_VAL_T(::System::Xml::Schema::XsdDuration);
// Type: ::Parts
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::XsdDuration::Parts
struct CORDL_TYPE __XsdDuration__Parts {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XsdDuration__Parts_Unwrapped
  enum struct ____XsdDuration__Parts_Unwrapped : int32_t {
    __E_HasNone = static_cast<int32_t>(0x0),
    __E_HasYears = static_cast<int32_t>(0x1),
    __E_HasMonths = static_cast<int32_t>(0x2),
    __E_HasDays = static_cast<int32_t>(0x4),
    __E_HasHours = static_cast<int32_t>(0x8),
    __E_HasMinutes = static_cast<int32_t>(0x10),
    __E_HasSeconds = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XsdDuration__Parts_Unwrapped() const noexcept {
    return static_cast<____XsdDuration__Parts_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XsdDuration__Parts();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XsdDuration__Parts(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HasDays value: static_cast<int32_t>(0x4)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasDays;

  /// @brief Field HasHours value: static_cast<int32_t>(0x8)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasHours;

  /// @brief Field HasMinutes value: static_cast<int32_t>(0x10)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasMinutes;

  /// @brief Field HasMonths value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasMonths;

  /// @brief Field HasNone value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasNone;

  /// @brief Field HasSeconds value: static_cast<int32_t>(0x20)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasSeconds;

  /// @brief Field HasYears value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__XsdDuration__Parts const HasYears;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XsdDuration__Parts, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XsdDuration__Parts, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: ::DurationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::XsdDuration::DurationType
struct CORDL_TYPE __XsdDuration__DurationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XsdDuration__DurationType_Unwrapped
  enum struct ____XsdDuration__DurationType_Unwrapped : int32_t {
    __E_Duration = static_cast<int32_t>(0x0),
    __E_YearMonthDuration = static_cast<int32_t>(0x1),
    __E_DayTimeDuration = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XsdDuration__DurationType_Unwrapped() const noexcept {
    return static_cast<____XsdDuration__DurationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XsdDuration__DurationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XsdDuration__DurationType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DayTimeDuration value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::__XsdDuration__DurationType const DayTimeDuration;

  /// @brief Field Duration value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::__XsdDuration__DurationType const Duration;

  /// @brief Field YearMonthDuration value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::__XsdDuration__DurationType const YearMonthDuration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__XsdDuration__DurationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__XsdDuration__DurationType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::XsdDuration
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::XsdDuration
struct CORDL_TYPE XsdDuration {
public:
  // Declarations
  using DurationType = ::System::Xml::Schema::__XsdDuration__DurationType;

  using Parts = ::System::Xml::Schema::__XsdDuration__Parts;

  __declspec(property(get = get_Days)) int32_t Days;

  __declspec(property(get = get_Hours)) int32_t Hours;

  __declspec(property(get = get_IsNegative)) bool IsNegative;

  __declspec(property(get = get_Minutes)) int32_t Minutes;

  __declspec(property(get = get_Months)) int32_t Months;

  __declspec(property(get = get_Nanoseconds)) int32_t Nanoseconds;

  __declspec(property(get = get_Seconds)) int32_t Seconds;

  __declspec(property(get = get_Years)) int32_t Years;

  /// @brief Method ToString, addr 0x2e89b54, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2e89b5c, size 0x3fc, virtual false, abstract: false, final false
  inline ::StringW ToString(::System::Xml::Schema::__XsdDuration__DurationType durationType);

  /// @brief Method ToTimeSpan, addr 0x2e89618, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan ToTimeSpan();

  /// @brief Method ToTimeSpan, addr 0x2e89620, size 0x48, virtual false, abstract: false, final false
  inline ::System::TimeSpan ToTimeSpan(::System::Xml::Schema::__XsdDuration__DurationType durationType);

  /// @brief Method TryParse, addr 0x2e88ee4, size 0x6ec, virtual false, abstract: false, final false
  static inline ::System::Exception* TryParse(::StringW s, ::System::Xml::Schema::__XsdDuration__DurationType durationType, ByRef<::System::Xml::Schema::XsdDuration> result);

  /// @brief Method TryParse, addr 0x2e89f58, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Exception* TryParse(::StringW s, ByRef<::System::Xml::Schema::XsdDuration> result);

  /// @brief Method TryParseDigits, addr 0x2e89f64, size 0x1bc, virtual false, abstract: false, final false
  static inline ::StringW TryParseDigits(::StringW s, ByRef<int32_t> offset, bool eatDigits, ByRef<int32_t> result, ByRef<int32_t> numDigits);

  /// @brief Method TryToTimeSpan, addr 0x2e89668, size 0x4e0, virtual false, abstract: false, final false
  inline ::System::Exception* TryToTimeSpan(::System::Xml::Schema::__XsdDuration__DurationType durationType, ByRef<::System::TimeSpan> result);

  /// @brief Method TryToTimeSpan, addr 0x2e89b48, size 0xc, virtual false, abstract: false, final false
  inline ::System::Exception* TryToTimeSpan(ByRef<::System::TimeSpan> result);

  /// @brief Method .ctor, addr 0x2e88a80, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(bool isNegative, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t nanoseconds);

  /// @brief Method .ctor, addr 0x2e88e50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

  /// @brief Method .ctor, addr 0x2e88e58, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW s, ::System::Xml::Schema::__XsdDuration__DurationType durationType);

  /// @brief Method .ctor, addr 0x2e88bf8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::TimeSpan timeSpan);

  /// @brief Method .ctor, addr 0x2e88cd0, size 0x180, virtual false, abstract: false, final false
  inline void _ctor(::System::TimeSpan timeSpan, ::System::Xml::Schema::__XsdDuration__DurationType durationType);

  /// @brief Method get_Days, addr 0x2e895f8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Days();

  /// @brief Method get_Hours, addr 0x2e89600, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Hours();

  /// @brief Method get_IsNegative, addr 0x2e895dc, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsNegative();

  /// @brief Method get_Minutes, addr 0x2e89608, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Minutes();

  /// @brief Method get_Months, addr 0x2e895f0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Months();

  /// @brief Method get_Nanoseconds, addr 0x2e895d0, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Nanoseconds();

  /// @brief Method get_Seconds, addr 0x2e89610, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Seconds();

  /// @brief Method get_Years, addr 0x2e895e8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Years();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdDuration();

  // Ctor Parameters [CppParam { name: "years", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "months", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "days",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hours", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minutes", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "seconds", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nanoseconds", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr XsdDuration(int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, uint32_t nanoseconds) noexcept;

  /// @brief Field years, offset: 0x0, size: 0x4, def value: None
  int32_t years;

  /// @brief Field months, offset: 0x4, size: 0x4, def value: None
  int32_t months;

  /// @brief Field days, offset: 0x8, size: 0x4, def value: None
  int32_t days;

  /// @brief Field hours, offset: 0xc, size: 0x4, def value: None
  int32_t hours;

  /// @brief Field minutes, offset: 0x10, size: 0x4, def value: None
  int32_t minutes;

  /// @brief Field seconds, offset: 0x14, size: 0x4, def value: None
  int32_t seconds;

  /// @brief Field nanoseconds, offset: 0x18, size: 0x4, def value: None
  uint32_t nanoseconds;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdDuration, 0x1c>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, years) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, months) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, days) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, hours) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, minutes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, seconds) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, nanoseconds) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XsdDuration__DurationType, "System.Xml.Schema", "XsdDuration/DurationType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__XsdDuration__Parts, "System.Xml.Schema", "XsdDuration/Parts");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDuration, "System.Xml.Schema", "XsdDuration");
