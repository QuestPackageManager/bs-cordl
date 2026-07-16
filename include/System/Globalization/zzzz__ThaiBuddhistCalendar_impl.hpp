#pragma once
// IWYU pragma private; include "System/Globalization/ThaiBuddhistCalendar.hpp"
#include "System/Globalization/zzzz__Calendar_impl.hpp"
#include "System/Globalization/zzzz__EraInfo_impl.hpp"
#include "System/Globalization/zzzz__ThaiBuddhistCalendar_def.hpp"
#include "System/Globalization/zzzz__GregorianCalendarHelper_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.get_MinSupportedDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::ThaiBuddhistCalendar::*)()>(
    &::System::Globalization::ThaiBuddhistCalendar::get_MinSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bcd630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.get_MaxSupportedDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::ThaiBuddhistCalendar::*)()>(
    &::System::Globalization::ThaiBuddhistCalendar::get_MaxSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bcd68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::ThaiBuddhistCalendar::*)()>(&::System::Globalization::ThaiBuddhistCalendar::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5bcd6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.get_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ThaiBuddhistCalendar::*)()>(&::System::Globalization::ThaiBuddhistCalendar::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcd788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.GetDaysInMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ThaiBuddhistCalendar::*)(int32_t, int32_t, int32_t)>(
    &::System::Globalization::ThaiBuddhistCalendar::GetDaysInMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcd790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.GetDaysInYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ThaiBuddhistCalendar::*)(int32_t, int32_t)>(&::System::Globalization::ThaiBuddhistCalendar::GetDaysInYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcd7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.GetDayOfMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ThaiBuddhistCalendar::*)(::System::DateTime)>(&::System::Globalization::ThaiBuddhistCalendar::GetDayOfMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcd7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.GetDayOfWeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::System::Globalization::ThaiBuddhistCalendar::*)(::System::DateTime)>(
    &::System::Globalization::ThaiBuddhistCalendar::GetDayOfWeek)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcd7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.GetMonthsInYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ThaiBuddhistCalendar::*)(int32_t, int32_t)>(&::System::Globalization::ThaiBuddhistCalendar::GetMonthsInYear)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bcd7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.GetEra
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ThaiBuddhistCalendar::*)(::System::DateTime)>(&::System::Globalization::ThaiBuddhistCalendar::GetEra)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcd804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.GetMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ThaiBuddhistCalendar::*)(::System::DateTime)>(&::System::Globalization::ThaiBuddhistCalendar::GetMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcd818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.GetYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ThaiBuddhistCalendar::*)(::System::DateTime)>(&::System::Globalization::ThaiBuddhistCalendar::GetYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcd82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.IsLeapYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::ThaiBuddhistCalendar::*)(int32_t, int32_t)>(&::System::Globalization::ThaiBuddhistCalendar::IsLeapYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcd840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::ThaiBuddhistCalendar::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Globalization::ThaiBuddhistCalendar::ToDateTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bcd854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.get_Eras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Globalization::ThaiBuddhistCalendar::*)()>(&::System::Globalization::ThaiBuddhistCalendar::get_Eras)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcd874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.get_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ThaiBuddhistCalendar::*)()>(&::System::Globalization::ThaiBuddhistCalendar::get_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bcd888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.set_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::ThaiBuddhistCalendar::*)(int32_t)>(&::System::Globalization::ThaiBuddhistCalendar::set_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5bcd8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::ThaiBuddhistCalendar.ToFourDigitYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::ThaiBuddhistCalendar::*)(int32_t)>(&::System::Globalization::ThaiBuddhistCalendar::ToFourDigitYear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5bcd9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 30 }));
    return ___internal_method;
  }
};
constexpr ::System::Globalization::GregorianCalendarHelper*& System::Globalization::ThaiBuddhistCalendar::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Globalization::GregorianCalendarHelper* const& System::Globalization::ThaiBuddhistCalendar::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Globalization::ThaiBuddhistCalendar::__cordl_internal_set_helper(::System::Globalization::GregorianCalendarHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Globalization::ThaiBuddhistCalendar::setStaticF_thaiBuddhistEraInfo(::ArrayW<::System::Globalization::EraInfo*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::EraInfo*>, "thaiBuddhistEraInfo", ::System::Globalization::ThaiBuddhistCalendar*>(
      std::forward<::ArrayW<::System::Globalization::EraInfo*>>(value));
}
inline ::ArrayW<::System::Globalization::EraInfo*> System::Globalization::ThaiBuddhistCalendar::getStaticF_thaiBuddhistEraInfo() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::EraInfo*>, "thaiBuddhistEraInfo", ::System::Globalization::ThaiBuddhistCalendar*>();
}
inline ::System::DateTime System::Globalization::ThaiBuddhistCalendar::get_MinSupportedDateTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Globalization::ThaiBuddhistCalendar::get_MaxSupportedDateTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void System::Globalization::ThaiBuddhistCalendar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Globalization::ThaiBuddhistCalendar::get_ID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Globalization::ThaiBuddhistCalendar::GetDaysInMonth(int32_t year, int32_t month, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, month, era);
}
inline int32_t System::Globalization::ThaiBuddhistCalendar::GetDaysInYear(int32_t year, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::ThaiBuddhistCalendar::GetDayOfMonth(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::System::DayOfWeek System::Globalization::ThaiBuddhistCalendar::GetDayOfWeek(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(this, ___internal_method, time);
}
inline int32_t System::Globalization::ThaiBuddhistCalendar::GetMonthsInYear(int32_t year, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::ThaiBuddhistCalendar::GetEra(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline int32_t System::Globalization::ThaiBuddhistCalendar::GetMonth(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline int32_t System::Globalization::ThaiBuddhistCalendar::GetYear(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline bool System::Globalization::ThaiBuddhistCalendar::IsLeapYear(int32_t year, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, era);
}
inline ::System::DateTime System::Globalization::ThaiBuddhistCalendar::ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond,
                                                                                  int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, year, month, day, hour, minute, second, millisecond, era);
}
inline ::ArrayW<int32_t> System::Globalization::ThaiBuddhistCalendar::get_Eras() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline int32_t System::Globalization::ThaiBuddhistCalendar::get_TwoDigitYearMax() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Globalization::ThaiBuddhistCalendar::set_TwoDigitYearMax(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Globalization::ThaiBuddhistCalendar::ToFourDigitYear(int32_t year) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::ThaiBuddhistCalendar*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year);
}
inline ::System::Globalization::ThaiBuddhistCalendar* System::Globalization::ThaiBuddhistCalendar::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::ThaiBuddhistCalendar*>());
}
// Ctor Parameters []
constexpr ::System::Globalization::ThaiBuddhistCalendar::ThaiBuddhistCalendar() {}
