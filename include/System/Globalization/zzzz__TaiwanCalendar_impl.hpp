#pragma once
// IWYU pragma private; include "System/Globalization/TaiwanCalendar.hpp"
#include "System/Globalization/zzzz__Calendar_impl.hpp"
#include "System/Globalization/zzzz__EraInfo_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Globalization/zzzz__TaiwanCalendar_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__GregorianCalendarHelper_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.GetDefaultInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::Calendar* (*)()>(&::System::Globalization::TaiwanCalendar::GetDefaultInstance)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bcb630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { "GetDefaultInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.get_MinSupportedDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::TaiwanCalendar::*)()>(&::System::Globalization::TaiwanCalendar::get_MinSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bcb8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.get_MaxSupportedDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::TaiwanCalendar::*)()>(&::System::Globalization::TaiwanCalendar::get_MaxSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bcb900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TaiwanCalendar::*)()>(&::System::Globalization::TaiwanCalendar::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5bcb6e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.get_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TaiwanCalendar::*)()>(&::System::Globalization::TaiwanCalendar::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcb95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.GetDaysInMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TaiwanCalendar::*)(int32_t, int32_t, int32_t)>(&::System::Globalization::TaiwanCalendar::GetDaysInMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcb964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.GetDaysInYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TaiwanCalendar::*)(int32_t, int32_t)>(&::System::Globalization::TaiwanCalendar::GetDaysInYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcb978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.GetDayOfMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TaiwanCalendar::*)(::System::DateTime)>(&::System::Globalization::TaiwanCalendar::GetDayOfMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcb98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.GetDayOfWeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::System::Globalization::TaiwanCalendar::*)(::System::DateTime)>(&::System::Globalization::TaiwanCalendar::GetDayOfWeek)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcb9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.GetMonthsInYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TaiwanCalendar::*)(int32_t, int32_t)>(&::System::Globalization::TaiwanCalendar::GetMonthsInYear)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bcb9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.GetEra
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TaiwanCalendar::*)(::System::DateTime)>(&::System::Globalization::TaiwanCalendar::GetEra)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcb9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.GetMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TaiwanCalendar::*)(::System::DateTime)>(&::System::Globalization::TaiwanCalendar::GetMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcb9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.GetYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TaiwanCalendar::*)(::System::DateTime)>(&::System::Globalization::TaiwanCalendar::GetYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcba00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.IsLeapYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::TaiwanCalendar::*)(int32_t, int32_t)>(&::System::Globalization::TaiwanCalendar::IsLeapYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcba14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::TaiwanCalendar::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Globalization::TaiwanCalendar::ToDateTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bcba28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.get_Eras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Globalization::TaiwanCalendar::*)()>(&::System::Globalization::TaiwanCalendar::get_Eras)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcba48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.get_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TaiwanCalendar::*)()>(&::System::Globalization::TaiwanCalendar::get_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bcba5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.set_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::TaiwanCalendar::*)(int32_t)>(&::System::Globalization::TaiwanCalendar::set_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5bcbaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TaiwanCalendar.ToFourDigitYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::TaiwanCalendar::*)(int32_t)>(&::System::Globalization::TaiwanCalendar::ToFourDigitYear)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5bcbbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 30 }));
    return ___internal_method;
  }
};
constexpr ::System::Globalization::GregorianCalendarHelper*& System::Globalization::TaiwanCalendar::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Globalization::GregorianCalendarHelper* const& System::Globalization::TaiwanCalendar::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Globalization::TaiwanCalendar::__cordl_internal_set_helper(::System::Globalization::GregorianCalendarHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Globalization::TaiwanCalendar::setStaticF_taiwanEraInfo(::ArrayW<::System::Globalization::EraInfo*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::EraInfo*>, "taiwanEraInfo", ::System::Globalization::TaiwanCalendar*>(
      std::forward<::ArrayW<::System::Globalization::EraInfo*>>(value));
}
inline ::ArrayW<::System::Globalization::EraInfo*> System::Globalization::TaiwanCalendar::getStaticF_taiwanEraInfo() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::EraInfo*>, "taiwanEraInfo", ::System::Globalization::TaiwanCalendar*>();
}
inline void System::Globalization::TaiwanCalendar::setStaticF_s_defaultInstance(::System::Globalization::Calendar* value) {
  ::cordl_internals::setStaticField<::System::Globalization::Calendar*, "s_defaultInstance", ::System::Globalization::TaiwanCalendar*>(std::forward<::System::Globalization::Calendar*>(value));
}
inline ::System::Globalization::Calendar* System::Globalization::TaiwanCalendar::getStaticF_s_defaultInstance() {
  return ::cordl_internals::getStaticField<::System::Globalization::Calendar*, "s_defaultInstance", ::System::Globalization::TaiwanCalendar*>();
}
inline void System::Globalization::TaiwanCalendar::setStaticF_calendarMinValue(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "calendarMinValue", ::System::Globalization::TaiwanCalendar*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Globalization::TaiwanCalendar::getStaticF_calendarMinValue() {
  return ::cordl_internals::getStaticField<::System::DateTime, "calendarMinValue", ::System::Globalization::TaiwanCalendar*>();
}
inline ::System::Globalization::Calendar* System::Globalization::TaiwanCalendar::GetDefaultInstance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { "GetDefaultInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*>(nullptr, ___internal_method);
}
inline ::System::DateTime System::Globalization::TaiwanCalendar::get_MinSupportedDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Globalization::TaiwanCalendar::get_MaxSupportedDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void System::Globalization::TaiwanCalendar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Globalization::TaiwanCalendar::get_ID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Globalization::TaiwanCalendar::GetDaysInMonth(int32_t year, int32_t month, int32_t era) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, month, era);
}
inline int32_t System::Globalization::TaiwanCalendar::GetDaysInYear(int32_t year, int32_t era) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::TaiwanCalendar::GetDayOfMonth(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::System::DayOfWeek System::Globalization::TaiwanCalendar::GetDayOfWeek(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(this, ___internal_method, time);
}
inline int32_t System::Globalization::TaiwanCalendar::GetMonthsInYear(int32_t year, int32_t era) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::TaiwanCalendar::GetEra(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline int32_t System::Globalization::TaiwanCalendar::GetMonth(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline int32_t System::Globalization::TaiwanCalendar::GetYear(::System::DateTime time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline bool System::Globalization::TaiwanCalendar::IsLeapYear(int32_t year, int32_t era) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, era);
}
inline ::System::DateTime System::Globalization::TaiwanCalendar::ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, year, month, day, hour, minute, second, millisecond, era);
}
inline ::ArrayW<int32_t> System::Globalization::TaiwanCalendar::get_Eras() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline int32_t System::Globalization::TaiwanCalendar::get_TwoDigitYearMax() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Globalization::TaiwanCalendar::set_TwoDigitYearMax(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Globalization::TaiwanCalendar::ToFourDigitYear(int32_t year) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::TaiwanCalendar*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year);
}
inline ::System::Globalization::TaiwanCalendar* System::Globalization::TaiwanCalendar::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::TaiwanCalendar*>());
}
// Ctor Parameters []
constexpr ::System::Globalization::TaiwanCalendar::TaiwanCalendar() {}
