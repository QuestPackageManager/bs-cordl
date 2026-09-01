#pragma once
// IWYU pragma private; include "System\Globalization\HijriCalendar.hpp"
#include "System/Globalization/zzzz__Calendar_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Globalization/zzzz__HijriCalendar_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
//  Writing Method size for method: ::System::Globalization::HijriCalendar.get_MinSupportedDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::HijriCalendar::*)()>(&::System::Globalization::HijriCalendar::get_MinSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bca3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.get_MaxSupportedDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::HijriCalendar::*)()>(&::System::Globalization::HijriCalendar::get_MaxSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bca414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::HijriCalendar::*)()>(&::System::Globalization::HijriCalendar::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bca470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.get_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)()>(&::System::Globalization::HijriCalendar::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bca488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetAbsoluteDateHijri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Globalization::HijriCalendar::*)(int32_t, int32_t, int32_t)>(&::System::Globalization::HijriCalendar::GetAbsoluteDateHijri)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bca490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(),
                                                             { "GetAbsoluteDateHijri", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.DaysUpToHijriYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Globalization::HijriCalendar::*)(int32_t)>(&::System::Globalization::HijriCalendar::DaysUpToHijriYear)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bca55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "DaysUpToHijriYear", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.get_HijriAdjustment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)()>(&::System::Globalization::HijriCalendar::get_HijriAdjustment)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bca614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "get_HijriAdjustment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetAdvanceHijriDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Globalization::HijriCalendar::GetAdvanceHijriDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bca680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "GetAdvanceHijriDate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.CheckTicksRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::System::Globalization::HijriCalendar::CheckTicksRange)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5bca688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "CheckTicksRange", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.CheckEraRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Globalization::HijriCalendar::CheckEraRange)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bca868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "CheckEraRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.CheckYearRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::System::Globalization::HijriCalendar::CheckYearRange)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5bca930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "CheckYearRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.CheckYearMonthRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::System::Globalization::HijriCalendar::CheckYearMonthRange)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5bcaa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(),
                                                             { "CheckYearMonthRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetDatePart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)(int64_t, int32_t)>(&::System::Globalization::HijriCalendar::GetDatePart)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5bcabe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetDayOfMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)(::System::DateTime)>(&::System::Globalization::HijriCalendar::GetDayOfMonth)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bcae4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetDayOfWeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::System::Globalization::HijriCalendar::*)(::System::DateTime)>(&::System::Globalization::HijriCalendar::GetDayOfWeek)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bcaed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetDaysInMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)(int32_t, int32_t, int32_t)>(&::System::Globalization::HijriCalendar::GetDaysInMonth)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bcaf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetDaysInYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)(int32_t, int32_t)>(&::System::Globalization::HijriCalendar::GetDaysInYear)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5bcb03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetEra
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)(::System::DateTime)>(&::System::Globalization::HijriCalendar::GetEra)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5bcb0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.get_Eras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Globalization::HijriCalendar::*)()>(&::System::Globalization::HijriCalendar::get_Eras)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5bcb178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)(::System::DateTime)>(&::System::Globalization::HijriCalendar::GetMonth)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bcb21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetMonthsInYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)(int32_t, int32_t)>(&::System::Globalization::HijriCalendar::GetMonthsInYear)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bcb2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.GetYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)(::System::DateTime)>(&::System::Globalization::HijriCalendar::GetYear)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bcb310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.IsLeapYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::HijriCalendar::*)(int32_t, int32_t)>(&::System::Globalization::HijriCalendar::IsLeapYear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5bcb394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::HijriCalendar::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Globalization::HijriCalendar::ToDateTime)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5bcb438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.get_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)()>(&::System::Globalization::HijriCalendar::get_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bcb5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.set_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::HijriCalendar::*)(int32_t)>(&::System::Globalization::HijriCalendar::set_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5bcb634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::HijriCalendar.ToFourDigitYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::HijriCalendar::*)(int32_t)>(&::System::Globalization::HijriCalendar::ToFourDigitYear)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5bcb734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 30 }));
    return ___internal_method;
  }
};
constexpr int32_t& System::Globalization::HijriCalendar::__cordl_internal_get_m_HijriAdvance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HijriAdvance;
}
constexpr int32_t const& System::Globalization::HijriCalendar::__cordl_internal_get_m_HijriAdvance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HijriAdvance;
}
constexpr void System::Globalization::HijriCalendar::__cordl_internal_set_m_HijriAdvance(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HijriAdvance = value;
}
inline void System::Globalization::HijriCalendar::setStaticF_HijriEra(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "HijriEra", ::System::Globalization::HijriCalendar*>(std::forward<int32_t>(value));
}
inline int32_t System::Globalization::HijriCalendar::getStaticF_HijriEra() {
  return ::cordl_internals::getStaticField<int32_t, "HijriEra", ::System::Globalization::HijriCalendar*>();
}
inline void System::Globalization::HijriCalendar::setStaticF_HijriMonthDays(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "HijriMonthDays", ::System::Globalization::HijriCalendar*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Globalization::HijriCalendar::getStaticF_HijriMonthDays() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "HijriMonthDays", ::System::Globalization::HijriCalendar*>();
}
inline void System::Globalization::HijriCalendar::setStaticF_calendarMinValue(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "calendarMinValue", ::System::Globalization::HijriCalendar*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Globalization::HijriCalendar::getStaticF_calendarMinValue() {
  return ::cordl_internals::getStaticField<::System::DateTime, "calendarMinValue", ::System::Globalization::HijriCalendar*>();
}
inline void System::Globalization::HijriCalendar::setStaticF_calendarMaxValue(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "calendarMaxValue", ::System::Globalization::HijriCalendar*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Globalization::HijriCalendar::getStaticF_calendarMaxValue() {
  return ::cordl_internals::getStaticField<::System::DateTime, "calendarMaxValue", ::System::Globalization::HijriCalendar*>();
}
inline ::System::DateTime System::Globalization::HijriCalendar::get_MinSupportedDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Globalization::HijriCalendar::get_MaxSupportedDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void System::Globalization::HijriCalendar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Globalization::HijriCalendar::get_ID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Globalization::HijriCalendar::GetAbsoluteDateHijri(int32_t y, int32_t m, int32_t d) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(),
                                                           { "GetAbsoluteDateHijri", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, y, m, d);
}
inline int64_t System::Globalization::HijriCalendar::DaysUpToHijriYear(int32_t HijriYear) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "DaysUpToHijriYear", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, HijriYear);
}
inline int32_t System::Globalization::HijriCalendar::get_HijriAdjustment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "get_HijriAdjustment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Globalization::HijriCalendar::GetAdvanceHijriDate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "GetAdvanceHijriDate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::Globalization::HijriCalendar::CheckTicksRange(int64_t ticks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "CheckTicksRange", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ticks);
}
inline void System::Globalization::HijriCalendar::CheckEraRange(int32_t era) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "CheckEraRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, era);
}
inline void System::Globalization::HijriCalendar::CheckYearRange(int32_t year, int32_t era) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(), { "CheckYearRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, year, era);
}
inline void System::Globalization::HijriCalendar::CheckYearMonthRange(int32_t year, int32_t month, int32_t era) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::HijriCalendar*>(),
                                                           { "CheckYearMonthRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, year, month, era);
}
inline int32_t System::Globalization::HijriCalendar::GetDatePart(int64_t ticks, int32_t part) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ticks, part);
}
inline int32_t System::Globalization::HijriCalendar::GetDayOfMonth(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::System::DayOfWeek System::Globalization::HijriCalendar::GetDayOfWeek(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(this, ___internal_method, time);
}
inline int32_t System::Globalization::HijriCalendar::GetDaysInMonth(int32_t year, int32_t month, int32_t era) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, month, era);
}
inline int32_t System::Globalization::HijriCalendar::GetDaysInYear(int32_t year, int32_t era) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::HijriCalendar::GetEra(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::ArrayW<int32_t> System::Globalization::HijriCalendar::get_Eras() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline int32_t System::Globalization::HijriCalendar::GetMonth(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline int32_t System::Globalization::HijriCalendar::GetMonthsInYear(int32_t year, int32_t era) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::HijriCalendar::GetYear(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline bool System::Globalization::HijriCalendar::IsLeapYear(int32_t year, int32_t era) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, era);
}
inline ::System::DateTime System::Globalization::HijriCalendar::ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, year, month, day, hour, minute, second, millisecond, era);
}
inline int32_t System::Globalization::HijriCalendar::get_TwoDigitYearMax() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Globalization::HijriCalendar::set_TwoDigitYearMax(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Globalization::HijriCalendar::ToFourDigitYear(int32_t year) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::HijriCalendar*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year);
}
inline ::System::Globalization::HijriCalendar* System::Globalization::HijriCalendar::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::HijriCalendar*>());
}
// Ctor Parameters []
constexpr ::System::Globalization::HijriCalendar::HijriCalendar() {}
