#pragma once
// IWYU pragma private; include "System\Xml\Schema\XsdDuration.hpp"
#include "System/Xml/Schema/zzzz__XsdDuration_def.hpp"
#include "System/Xml/Schema/zzzz__XsdDuration_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XsdDuration_Parts::XsdDuration_Parts(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdDuration_Parts::XsdDuration_Parts() {}
constexpr ::System::Xml::Schema::XsdDuration_Parts System::Xml::Schema::XsdDuration_Parts::HasNone{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::XsdDuration_Parts System::Xml::Schema::XsdDuration_Parts::HasYears{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::XsdDuration_Parts System::Xml::Schema::XsdDuration_Parts::HasMonths{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::Schema::XsdDuration_Parts System::Xml::Schema::XsdDuration_Parts::HasDays{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::Schema::XsdDuration_Parts System::Xml::Schema::XsdDuration_Parts::HasHours{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::Schema::XsdDuration_Parts System::Xml::Schema::XsdDuration_Parts::HasMinutes{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::Schema::XsdDuration_Parts System::Xml::Schema::XsdDuration_Parts::HasSeconds{ static_cast<int32_t>(0x20) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XsdDuration_DurationType::XsdDuration_DurationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdDuration_DurationType::XsdDuration_DurationType() {}
constexpr ::System::Xml::Schema::XsdDuration_DurationType System::Xml::Schema::XsdDuration_DurationType::Duration{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::XsdDuration_DurationType System::Xml::Schema::XsdDuration_DurationType::YearMonthDuration{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::XsdDuration_DurationType System::Xml::Schema::XsdDuration_DurationType::DayTimeDuration{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDuration::*)(bool, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Xml::Schema::XsdDuration::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6270290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDuration::*)(::System::TimeSpan)>(&::System::Xml::Schema::XsdDuration::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62703ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { ".ctor", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDuration::*)(::System::TimeSpan, ::System::Xml::Schema::XsdDuration_DurationType)>(
    &::System::Xml::Schema::XsdDuration::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x62703f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDuration::*)(::StringW)>(&::System::Xml::Schema::XsdDuration::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62705c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XsdDuration::*)(::StringW, ::System::Xml::Schema::XsdDuration_DurationType)>(
    &::System::Xml::Schema::XsdDuration::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x62705cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_IsNegative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6270d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_IsNegative", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Years
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Years)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6270d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Years", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Months
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Months)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6270d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Months", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Days
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Days)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6270d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Days", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Hours
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Hours)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6270d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Hours", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Minutes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Minutes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6270d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Minutes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Seconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Seconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6270d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Seconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.get_Nanoseconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::get_Nanoseconds)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6270d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Nanoseconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.ToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::ToTimeSpan)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6270da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "ToTimeSpan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.ToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Xml::Schema::XsdDuration::*)(::System::Xml::Schema::XsdDuration_DurationType)>(
    &::System::Xml::Schema::XsdDuration::ToTimeSpan)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6270da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "ToTimeSpan", {}, { ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.TryToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::XsdDuration::*)(::by_ref<::System::TimeSpan>)>(
    &::System::Xml::Schema::XsdDuration::TryToTimeSpan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6271460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "TryToTimeSpan", {}, { ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.TryToTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Xml::Schema::XsdDuration::*)(::System::Xml::Schema::XsdDuration_DurationType, ::by_ref<::System::TimeSpan>)>(
    &::System::Xml::Schema::XsdDuration::TryToTimeSpan)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x6270df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(),
                                                { "TryToTimeSpan", {}, { ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XsdDuration::*)()>(&::System::Xml::Schema::XsdDuration::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x627146c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { ::i2c::class_of<::System::Xml::Schema::XsdDuration>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XsdDuration::*)(::System::Xml::Schema::XsdDuration_DurationType)>(
    &::System::Xml::Schema::XsdDuration::ToString)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x6271474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "ToString", {}, { ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::by_ref<::System::Xml::Schema::XsdDuration>)>(&::System::Xml::Schema::XsdDuration::TryParse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62718d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(),
                                                             { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XsdDuration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::StringW, ::System::Xml::Schema::XsdDuration_DurationType, ::by_ref<::System::Xml::Schema::XsdDuration>)>(
    &::System::Xml::Schema::XsdDuration::TryParse)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x6270640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::XsdDuration>(),
            { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XsdDuration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XsdDuration.TryParseDigits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>, bool, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Xml::Schema::XsdDuration::TryParseDigits)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x62718dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "TryParseDigits",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(),
                                                                                                           ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XsdDuration::_ctor(bool isNegative, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t nanoseconds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { ".ctor",
                                                                                   {},
                                                                                   { ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, isNegative, years, months, days, hours, minutes, seconds, nanoseconds);
}
inline void System::Xml::Schema::XsdDuration::_ctor(::System::TimeSpan timeSpan) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { ".ctor", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timeSpan);
}
inline void System::Xml::Schema::XsdDuration::_ctor(::System::TimeSpan timeSpan, ::System::Xml::Schema::XsdDuration_DurationType durationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timeSpan, durationType);
}
inline void System::Xml::Schema::XsdDuration::_ctor(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, s);
}
inline void System::Xml::Schema::XsdDuration::_ctor(::StringW s, ::System::Xml::Schema::XsdDuration_DurationType durationType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, s, durationType);
}
inline bool System::Xml::Schema::XsdDuration::get_IsNegative() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_IsNegative", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDuration::get_Years() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Years", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDuration::get_Months() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Months", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDuration::get_Days() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Days", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDuration::get_Hours() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Hours", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDuration::get_Minutes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Minutes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDuration::get_Seconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Seconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::Xml::Schema::XsdDuration::get_Nanoseconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "get_Nanoseconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::Schema::XsdDuration::ToTimeSpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "ToTimeSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method);
}
inline ::System::TimeSpan System::Xml::Schema::XsdDuration::ToTimeSpan(::System::Xml::Schema::XsdDuration_DurationType durationType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "ToTimeSpan", {}, { ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method, durationType);
}
inline ::System::Exception* System::Xml::Schema::XsdDuration::TryToTimeSpan(::by_ref<::System::TimeSpan> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "TryToTimeSpan", {}, { ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method, result);
}
inline ::System::Exception* System::Xml::Schema::XsdDuration::TryToTimeSpan(::System::Xml::Schema::XsdDuration_DurationType durationType, ::by_ref<::System::TimeSpan> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(),
                                              { "TryToTimeSpan", {}, { ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method, durationType, result);
}
inline ::StringW System::Xml::Schema::XsdDuration::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XsdDuration>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XsdDuration::ToString(::System::Xml::Schema::XsdDuration_DurationType durationType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "ToString", {}, { ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, durationType);
}
inline ::System::Exception* System::Xml::Schema::XsdDuration::TryParse(::StringW s, ::by_ref<::System::Xml::Schema::XsdDuration> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XsdDuration>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, result);
}
inline ::System::Exception* System::Xml::Schema::XsdDuration::TryParse(::StringW s, ::System::Xml::Schema::XsdDuration_DurationType durationType, ::by_ref<::System::Xml::Schema::XsdDuration> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::XsdDuration>(),
          { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XsdDuration_DurationType>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XsdDuration>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, s, durationType, result);
}
inline ::StringW System::Xml::Schema::XsdDuration::TryParseDigits(::StringW s, ::by_ref<int32_t> offset, bool eatDigits, ::by_ref<int32_t> result, ::by_ref<int32_t> numDigits) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XsdDuration>(), { "TryParseDigits",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>(),
                                                                                                         ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, s, offset, eatDigits, result, numDigits);
}
// Ctor Parameters [CppParam { name: "years", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "months", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "days", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hours", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minutes", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "seconds", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nanoseconds", ty: "uint32_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::System::Xml::Schema::XsdDuration::XsdDuration(int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, uint32_t nanoseconds) noexcept {
  this->years = years;
  this->months = months;
  this->days = days;
  this->hours = hours;
  this->minutes = minutes;
  this->seconds = seconds;
  this->nanoseconds = nanoseconds;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XsdDuration::XsdDuration() {}
