#pragma once
// IWYU pragma private; include "System\Globalization\GregorianCalendar.hpp"
#include "System/Globalization/zzzz__Calendar_impl.hpp"
#include "System/Globalization/zzzz__GregorianCalendarTypes_impl.hpp"
#include "System/Globalization/zzzz__GregorianCalendar_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__GregorianCalendarTypes_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.OnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::GregorianCalendar::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::System::Globalization::GregorianCalendar::OnDeserialized)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bc768c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(),
                                                                                           { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.get_MinSupportedDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::GregorianCalendar::*)()>(&::System::Globalization::GregorianCalendar::get_MinSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bc7750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.get_MaxSupportedDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::GregorianCalendar::*)()>(&::System::Globalization::GregorianCalendar::get_MaxSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bc77ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetDefaultInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::Calendar* (*)()>(&::System::Globalization::GregorianCalendar::GetDefaultInstance)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5bc7808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { "GetDefaultInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::GregorianCalendar::*)()>(&::System::Globalization::GregorianCalendar::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bc78c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::GregorianCalendar::*)(::System::Globalization::GregorianCalendarTypes)>(
    &::System::Globalization::GregorianCalendar::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5bc78e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::GregorianCalendarTypes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.get_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)()>(&::System::Globalization::GregorianCalendar::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc7a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetDatePart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)(int64_t, int32_t)>(&::System::Globalization::GregorianCalendar::GetDatePart)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5bc7a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetAbsoluteDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::System::Globalization::GregorianCalendar::GetAbsoluteDate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5bc7c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(),
                                                             { "GetAbsoluteDate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetDayOfMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)(::System::DateTime)>(&::System::Globalization::GregorianCalendar::GetDayOfMonth)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bc7df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetDayOfWeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::System::Globalization::GregorianCalendar::*)(::System::DateTime)>(
    &::System::Globalization::GregorianCalendar::GetDayOfWeek)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bc7e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetDaysInMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)(int32_t, int32_t, int32_t)>(
    &::System::Globalization::GregorianCalendar::GetDaysInMonth)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5bc7f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetDaysInYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)(int32_t, int32_t)>(&::System::Globalization::GregorianCalendar::GetDaysInYear)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5bc81b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetEra
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)(::System::DateTime)>(&::System::Globalization::GregorianCalendar::GetEra)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc831c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.get_Eras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Globalization::GregorianCalendar::*)()>(&::System::Globalization::GregorianCalendar::get_Eras)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bc8324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)(::System::DateTime)>(&::System::Globalization::GregorianCalendar::GetMonth)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bc838c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetMonthsInYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)(int32_t, int32_t)>(&::System::Globalization::GregorianCalendar::GetMonthsInYear)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5bc8410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.GetYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)(::System::DateTime)>(&::System::Globalization::GregorianCalendar::GetYear)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bc8540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.IsLeapYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::GregorianCalendar::*)(int32_t, int32_t)>(&::System::Globalization::GregorianCalendar::IsLeapYear)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5bc85c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::GregorianCalendar::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Globalization::GregorianCalendar::ToDateTime)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5bc8740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.TryToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::GregorianCalendar::*)(
    int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::by_ref<::System::DateTime>)>(&::System::Globalization::GregorianCalendar::TryToDateTime)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5bc87d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.get_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)()>(&::System::Globalization::GregorianCalendar::get_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bc88cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.set_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::GregorianCalendar::*)(int32_t)>(&::System::Globalization::GregorianCalendar::set_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5bc8910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::GregorianCalendar.ToFourDigitYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::GregorianCalendar::*)(int32_t)>(&::System::Globalization::GregorianCalendar::ToFourDigitYear)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5bc8a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 30 }));
    return ___internal_method;
  }
};
constexpr ::System::Globalization::GregorianCalendarTypes& System::Globalization::GregorianCalendar::__cordl_internal_get_m_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_type;
}
constexpr ::System::Globalization::GregorianCalendarTypes const& System::Globalization::GregorianCalendar::__cordl_internal_get_m_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_type;
}
constexpr void System::Globalization::GregorianCalendar::__cordl_internal_set_m_type(::System::Globalization::GregorianCalendarTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_type = value;
}
inline void System::Globalization::GregorianCalendar::setStaticF_DaysToMonth365(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "DaysToMonth365", ::System::Globalization::GregorianCalendar*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Globalization::GregorianCalendar::getStaticF_DaysToMonth365() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DaysToMonth365", ::System::Globalization::GregorianCalendar*>();
}
inline void System::Globalization::GregorianCalendar::setStaticF_DaysToMonth366(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "DaysToMonth366", ::System::Globalization::GregorianCalendar*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Globalization::GregorianCalendar::getStaticF_DaysToMonth366() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DaysToMonth366", ::System::Globalization::GregorianCalendar*>();
}
inline void System::Globalization::GregorianCalendar::setStaticF_s_defaultInstance(::System::Globalization::Calendar* value) {
  ::cordl_internals::setStaticField<::System::Globalization::Calendar*, "s_defaultInstance", ::System::Globalization::GregorianCalendar*>(std::forward<::System::Globalization::Calendar*>(value));
}
inline ::System::Globalization::Calendar* System::Globalization::GregorianCalendar::getStaticF_s_defaultInstance() {
  return ::cordl_internals::getStaticField<::System::Globalization::Calendar*, "s_defaultInstance", ::System::Globalization::GregorianCalendar*>();
}
inline void System::Globalization::GregorianCalendar::OnDeserialized(::System::Runtime::Serialization::StreamingContext ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(),
                                                                                         { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctx);
}
inline ::System::DateTime System::Globalization::GregorianCalendar::get_MinSupportedDateTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Globalization::GregorianCalendar::get_MaxSupportedDateTime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::Globalization::Calendar* System::Globalization::GregorianCalendar::GetDefaultInstance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { "GetDefaultInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*>(nullptr, ___internal_method);
}
inline void System::Globalization::GregorianCalendar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Globalization::GregorianCalendar::_ctor(::System::Globalization::GregorianCalendarTypes type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(), { ".ctor", {}, { ::i2c::type_of<::System::Globalization::GregorianCalendarTypes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline int32_t System::Globalization::GregorianCalendar::get_ID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Globalization::GregorianCalendar::GetDatePart(int64_t ticks, int32_t part) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ticks, part);
}
inline int64_t System::Globalization::GregorianCalendar::GetAbsoluteDate(int32_t year, int32_t month, int32_t day) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::GregorianCalendar*>(),
                                                           { "GetAbsoluteDate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, year, month, day);
}
inline int32_t System::Globalization::GregorianCalendar::GetDayOfMonth(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::System::DayOfWeek System::Globalization::GregorianCalendar::GetDayOfWeek(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(this, ___internal_method, time);
}
inline int32_t System::Globalization::GregorianCalendar::GetDaysInMonth(int32_t year, int32_t month, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, month, era);
}
inline int32_t System::Globalization::GregorianCalendar::GetDaysInYear(int32_t year, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::GregorianCalendar::GetEra(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::ArrayW<int32_t> System::Globalization::GregorianCalendar::get_Eras() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline int32_t System::Globalization::GregorianCalendar::GetMonth(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline int32_t System::Globalization::GregorianCalendar::GetMonthsInYear(int32_t year, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::GregorianCalendar::GetYear(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline bool System::Globalization::GregorianCalendar::IsLeapYear(int32_t year, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, era);
}
inline ::System::DateTime System::Globalization::GregorianCalendar::ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond,
                                                                               int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, year, month, day, hour, minute, second, millisecond, era);
}
inline bool System::Globalization::GregorianCalendar::TryToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era,
                                                                    ::by_ref<::System::DateTime> result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, month, day, hour, minute, second, millisecond, era, result);
}
inline int32_t System::Globalization::GregorianCalendar::get_TwoDigitYearMax() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Globalization::GregorianCalendar::set_TwoDigitYearMax(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Globalization::GregorianCalendar::ToFourDigitYear(int32_t year) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::GregorianCalendar*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year);
}
inline ::System::Globalization::GregorianCalendar* System::Globalization::GregorianCalendar::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::GregorianCalendar*>());
}
inline ::System::Globalization::GregorianCalendar* System::Globalization::GregorianCalendar::New_ctor(::System::Globalization::GregorianCalendarTypes type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::GregorianCalendar*>(type));
}
// Ctor Parameters []
constexpr ::System::Globalization::GregorianCalendar::GregorianCalendar() {}
