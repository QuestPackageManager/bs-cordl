#pragma once
// IWYU pragma private; include "System\Globalization\JapaneseCalendar.hpp"
#include "System/Globalization/zzzz__Calendar_impl.hpp"
#include "System/Globalization/zzzz__EraInfo_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Globalization/zzzz__JapaneseCalendar_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__EraInfo_def.hpp"
#include "System/Globalization/zzzz__GregorianCalendarHelper_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.get_MinSupportedDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::JapaneseCalendar::*)()>(&::System::Globalization::JapaneseCalendar::get_MinSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bcb964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.get_MaxSupportedDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::JapaneseCalendar::*)()>(&::System::Globalization::JapaneseCalendar::get_MaxSupportedDateTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bcb9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetEraInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Globalization::EraInfo*> (*)()>(&::System::Globalization::JapaneseCalendar::GetEraInfo)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x5bcba1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { "GetEraInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetErasFromRegistry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Globalization::EraInfo*> (*)()>(&::System::Globalization::JapaneseCalendar::GetErasFromRegistry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcbeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { "GetErasFromRegistry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetDefaultInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::Calendar* (*)()>(&::System::Globalization::JapaneseCalendar::GetDefaultInstance)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bcbec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { "GetDefaultInstance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::JapaneseCalendar::*)()>(&::System::Globalization::JapaneseCalendar::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5bcbf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.get_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::JapaneseCalendar::*)()>(&::System::Globalization::JapaneseCalendar::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcc134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetDaysInMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::JapaneseCalendar::*)(int32_t, int32_t, int32_t)>(&::System::Globalization::JapaneseCalendar::GetDaysInMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcc13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetDaysInYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::JapaneseCalendar::*)(int32_t, int32_t)>(&::System::Globalization::JapaneseCalendar::GetDaysInYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcc150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetDayOfMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::JapaneseCalendar::*)(::System::DateTime)>(&::System::Globalization::JapaneseCalendar::GetDayOfMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcc164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetDayOfWeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::System::Globalization::JapaneseCalendar::*)(::System::DateTime)>(
    &::System::Globalization::JapaneseCalendar::GetDayOfWeek)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcc178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetMonthsInYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::JapaneseCalendar::*)(int32_t, int32_t)>(&::System::Globalization::JapaneseCalendar::GetMonthsInYear)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bcc18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetEra
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::JapaneseCalendar::*)(::System::DateTime)>(&::System::Globalization::JapaneseCalendar::GetEra)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcc1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::JapaneseCalendar::*)(::System::DateTime)>(&::System::Globalization::JapaneseCalendar::GetMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcc1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.GetYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::JapaneseCalendar::*)(::System::DateTime)>(&::System::Globalization::JapaneseCalendar::GetYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcc1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.IsLeapYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::JapaneseCalendar::*)(int32_t, int32_t)>(&::System::Globalization::JapaneseCalendar::IsLeapYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcc1ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::JapaneseCalendar::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Globalization::JapaneseCalendar::ToDateTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bcc200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.ToFourDigitYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::JapaneseCalendar::*)(int32_t)>(&::System::Globalization::JapaneseCalendar::ToFourDigitYear)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5bcc220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.get_Eras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Globalization::JapaneseCalendar::*)()>(&::System::Globalization::JapaneseCalendar::get_Eras)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bcc350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.EraNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::Globalization::JapaneseCalendar::EraNames)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bc73b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { "EraNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.EnglishEraNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::System::Globalization::JapaneseCalendar::EnglishEraNames)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bc7490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { "EnglishEraNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.IsValidYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::JapaneseCalendar::*)(int32_t, int32_t)>(&::System::Globalization::JapaneseCalendar::IsValidYear)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bcc364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.get_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::JapaneseCalendar::*)()>(&::System::Globalization::JapaneseCalendar::get_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5bcc38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::JapaneseCalendar.set_TwoDigitYearMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::JapaneseCalendar::*)(int32_t)>(&::System::Globalization::JapaneseCalendar::set_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5bcc3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 29 }));
    return ___internal_method;
  }
};
constexpr ::System::Globalization::GregorianCalendarHelper*& System::Globalization::JapaneseCalendar::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Globalization::GregorianCalendarHelper* const& System::Globalization::JapaneseCalendar::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Globalization::JapaneseCalendar::__cordl_internal_set_helper(::System::Globalization::GregorianCalendarHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Globalization::JapaneseCalendar::setStaticF_calendarMinValue(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "calendarMinValue", ::System::Globalization::JapaneseCalendar*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Globalization::JapaneseCalendar::getStaticF_calendarMinValue() {
  return ::cordl_internals::getStaticField<::System::DateTime, "calendarMinValue", ::System::Globalization::JapaneseCalendar*>();
}
inline void System::Globalization::JapaneseCalendar::setStaticF_japaneseEraInfo(::ArrayW<::System::Globalization::EraInfo*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Globalization::EraInfo*>, "japaneseEraInfo", ::System::Globalization::JapaneseCalendar*>(
      std::forward<::ArrayW<::System::Globalization::EraInfo*>>(value));
}
inline ::ArrayW<::System::Globalization::EraInfo*> System::Globalization::JapaneseCalendar::getStaticF_japaneseEraInfo() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Globalization::EraInfo*>, "japaneseEraInfo", ::System::Globalization::JapaneseCalendar*>();
}
inline void System::Globalization::JapaneseCalendar::setStaticF_s_defaultInstance(::System::Globalization::Calendar* value) {
  ::cordl_internals::setStaticField<::System::Globalization::Calendar*, "s_defaultInstance", ::System::Globalization::JapaneseCalendar*>(std::forward<::System::Globalization::Calendar*>(value));
}
inline ::System::Globalization::Calendar* System::Globalization::JapaneseCalendar::getStaticF_s_defaultInstance() {
  return ::cordl_internals::getStaticField<::System::Globalization::Calendar*, "s_defaultInstance", ::System::Globalization::JapaneseCalendar*>();
}
inline ::System::DateTime System::Globalization::JapaneseCalendar::get_MinSupportedDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Globalization::JapaneseCalendar::get_MaxSupportedDateTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::ArrayW<::System::Globalization::EraInfo*> System::Globalization::JapaneseCalendar::GetEraInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { "GetEraInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::EraInfo*>>(nullptr, ___internal_method);
}
inline ::ArrayW<::System::Globalization::EraInfo*> System::Globalization::JapaneseCalendar::GetErasFromRegistry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { "GetErasFromRegistry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::EraInfo*>>(nullptr, ___internal_method);
}
inline ::System::Globalization::Calendar* System::Globalization::JapaneseCalendar::GetDefaultInstance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { "GetDefaultInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*>(nullptr, ___internal_method);
}
inline void System::Globalization::JapaneseCalendar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Globalization::JapaneseCalendar::get_ID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Globalization::JapaneseCalendar::GetDaysInMonth(int32_t year, int32_t month, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, month, era);
}
inline int32_t System::Globalization::JapaneseCalendar::GetDaysInYear(int32_t year, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::JapaneseCalendar::GetDayOfMonth(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::System::DayOfWeek System::Globalization::JapaneseCalendar::GetDayOfWeek(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(this, ___internal_method, time);
}
inline int32_t System::Globalization::JapaneseCalendar::GetMonthsInYear(int32_t year, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::JapaneseCalendar::GetEra(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline int32_t System::Globalization::JapaneseCalendar::GetMonth(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline int32_t System::Globalization::JapaneseCalendar::GetYear(::System::DateTime time) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline bool System::Globalization::JapaneseCalendar::IsLeapYear(int32_t year, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, era);
}
inline ::System::DateTime System::Globalization::JapaneseCalendar::ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond,
                                                                              int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, year, month, day, hour, minute, second, millisecond, era);
}
inline int32_t System::Globalization::JapaneseCalendar::ToFourDigitYear(int32_t year) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year);
}
inline ::ArrayW<int32_t> System::Globalization::JapaneseCalendar::get_Eras() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::JapaneseCalendar::EraNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { "EraNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::JapaneseCalendar::EnglishEraNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), { "EnglishEraNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline bool System::Globalization::JapaneseCalendar::IsValidYear(int32_t year, int32_t era) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::JapaneseCalendar::get_TwoDigitYearMax() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Globalization::JapaneseCalendar::set_TwoDigitYearMax(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Globalization::JapaneseCalendar*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Globalization::JapaneseCalendar* System::Globalization::JapaneseCalendar::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::JapaneseCalendar*>());
}
// Ctor Parameters []
constexpr ::System::Globalization::JapaneseCalendar::JapaneseCalendar() {}
