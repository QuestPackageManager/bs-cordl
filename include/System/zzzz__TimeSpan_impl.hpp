#pragma once
// IWYU pragma private; include "System/TimeSpan.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::TimeSpan._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeSpan::*)(int64_t)>(&::System::TimeSpan::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5c84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeSpan::*)(int32_t, int32_t, int32_t)>(&::System::TimeSpan::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c5c854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeSpan::*)(int32_t, int32_t, int32_t, int32_t, int32_t)>(&::System::TimeSpan::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c5c970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(),
                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_Ticks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_Ticks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5ca28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Ticks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_Days
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_Days)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c5ca30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Days", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_Hours
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_Hours)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c5ca5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Hours", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_Milliseconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_Milliseconds)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c5caa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Milliseconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_Minutes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_Minutes)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c5caec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Minutes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_Seconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_Seconds)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c5cb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Seconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_TotalDays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_TotalDays)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5cb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_TotalDays", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_TotalHours
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_TotalHours)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5cb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_TotalHours", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_TotalMilliseconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_TotalMilliseconds)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c5cbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_TotalMilliseconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_TotalMinutes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_TotalMinutes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5cbe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_TotalMinutes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.get_TotalSeconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::TimeSpan::*)()>(&::System::TimeSpan::get_TotalSeconds)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5cc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_TotalSeconds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeSpan::*)(::System::TimeSpan)>(&::System::TimeSpan::Add)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c5cc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Add", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeSpan::Compare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c5cc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Compare", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeSpan::*)(::System::Object*)>(&::System::TimeSpan::CompareTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c5cc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeSpan::*)(::System::TimeSpan)>(&::System::TimeSpan::CompareTo)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c5cd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "CompareTo", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.FromDays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(double_t)>(&::System::TimeSpan::FromDays)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c5cd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromDays", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.Duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeSpan::*)()>(&::System::TimeSpan::Duration)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c5cec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeSpan::*)(::System::Object*)>(&::System::TimeSpan::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c5cf7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { ::i2c::class_of<::System::TimeSpan>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeSpan::*)(::System::TimeSpan)>(&::System::TimeSpan::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c5cff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Equals", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeSpan::*)()>(&::System::TimeSpan::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c5d008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { ::i2c::class_of<::System::TimeSpan>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.FromHours
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(double_t)>(&::System::TimeSpan::FromHours)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c5d014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromHours", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.Interval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(double_t, int32_t)>(&::System::TimeSpan::Interval)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c5cdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Interval", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.FromMilliseconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(double_t)>(&::System::TimeSpan::FromMilliseconds)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c5d07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromMilliseconds", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.FromMinutes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(double_t)>(&::System::TimeSpan::FromMinutes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c5d0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromMinutes", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.Negate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeSpan::*)()>(&::System::TimeSpan::Negate)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c5d144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Negate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.FromSeconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(double_t)>(&::System::TimeSpan::FromSeconds)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c5d1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromSeconds", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeSpan::*)(::System::TimeSpan)>(&::System::TimeSpan::Subtract)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c5d25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Subtract", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.FromTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(int64_t)>(&::System::TimeSpan::FromTicks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c5d2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromTicks", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.TimeToTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::System::TimeSpan::TimeToTicks)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c5c8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "TimeToTicks", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::StringW)>(&::System::TimeSpan::Parse)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c5d2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::StringW, ::System::IFormatProvider*)>(&::System::TimeSpan::Parse)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c5d340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.TryParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::IFormatProvider*, ::by_ref<::System::TimeSpan>)>(&::System::TimeSpan::TryParseExact)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c5d3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::TimeSpan>(),
            { "TryParseExact", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TimeSpan::*)()>(&::System::TimeSpan::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c5d474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { ::i2c::class_of<::System::TimeSpan>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TimeSpan::*)(::StringW)>(&::System::TimeSpan::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c5d4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "ToString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TimeSpan::*)(::StringW, ::System::IFormatProvider*)>(&::System::TimeSpan::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c5d550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeSpan::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(
    &::System::TimeSpan::TryFormat)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c5d5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "TryFormat",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                           ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan)>(&::System::TimeSpan::op_UnaryNegation)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c5d670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeSpan::op_Subtraction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c5d720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_Subtraction", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeSpan::op_Addition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c5d78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_Addition", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeSpan::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c5d7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_Equality", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeSpan::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c5d804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_Inequality", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeSpan::op_LessThan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c5d810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_LessThan", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeSpan::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c5d81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeSpan::op_GreaterThan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c5d828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_GreaterThan", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeSpan.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeSpan::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c5d834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
inline void System::TimeSpan::setStaticF_Zero(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "Zero", ::System::TimeSpan>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::TimeSpan::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "Zero", ::System::TimeSpan>();
}
inline void System::TimeSpan::setStaticF_MaxValue(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "MaxValue", ::System::TimeSpan>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::TimeSpan::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "MaxValue", ::System::TimeSpan>();
}
inline void System::TimeSpan::setStaticF_MinValue(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "MinValue", ::System::TimeSpan>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::TimeSpan::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "MinValue", ::System::TimeSpan>();
}
inline void System::TimeSpan::_ctor(int64_t ticks) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ticks);
}
inline void System::TimeSpan::_ctor(int32_t hours, int32_t minutes, int32_t seconds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, hours, minutes, seconds);
}
inline void System::TimeSpan::_ctor(int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, days, hours, minutes, seconds, milliseconds);
}
inline int64_t System::TimeSpan::get_Ticks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Ticks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int32_t System::TimeSpan::get_Days() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Days", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::TimeSpan::get_Hours() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Hours", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::TimeSpan::get_Milliseconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Milliseconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::TimeSpan::get_Minutes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Minutes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::TimeSpan::get_Seconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_Seconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline double_t System::TimeSpan::get_TotalDays() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_TotalDays", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t System::TimeSpan::get_TotalHours() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_TotalHours", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t System::TimeSpan::get_TotalMilliseconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_TotalMilliseconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t System::TimeSpan::get_TotalMinutes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_TotalMinutes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t System::TimeSpan::get_TotalSeconds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "get_TotalSeconds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::System::TimeSpan System::TimeSpan::Add(::System::TimeSpan ts) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Add", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method, ts);
}
inline int32_t System::TimeSpan::Compare(::System::TimeSpan t1, ::System::TimeSpan t2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Compare", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t1, t2);
}
inline int32_t System::TimeSpan::CompareTo(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::TimeSpan::CompareTo(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "CompareTo", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline ::System::TimeSpan System::TimeSpan::FromDays(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromDays", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::TimeSpan::Duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method);
}
inline bool System::TimeSpan::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TimeSpan>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool System::TimeSpan::Equals(::System::TimeSpan obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Equals", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t System::TimeSpan::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TimeSpan>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::TimeSpan System::TimeSpan::FromHours(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromHours", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::TimeSpan::Interval(double_t value, int32_t scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Interval", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value, scale);
}
inline ::System::TimeSpan System::TimeSpan::FromMilliseconds(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromMilliseconds", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::TimeSpan::FromMinutes(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromMinutes", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::TimeSpan::Negate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Negate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method);
}
inline ::System::TimeSpan System::TimeSpan::FromSeconds(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromSeconds", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline ::System::TimeSpan System::TimeSpan::Subtract(::System::TimeSpan ts) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Subtract", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method, ts);
}
inline ::System::TimeSpan System::TimeSpan::FromTicks(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "FromTicks", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, value);
}
inline int64_t System::TimeSpan::TimeToTicks(int32_t hour, int32_t minute, int32_t second) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "TimeToTicks", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, hour, minute, second);
}
inline ::System::TimeSpan System::TimeSpan::Parse(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, s);
}
inline ::System::TimeSpan System::TimeSpan::Parse(::StringW input, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, input, formatProvider);
}
inline bool System::TimeSpan::TryParseExact(::StringW input, ::StringW format, ::System::IFormatProvider* formatProvider, ::by_ref<::System::TimeSpan> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::TimeSpan>(),
          { "TryParseExact", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, format, formatProvider, result);
}
inline ::StringW System::TimeSpan::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TimeSpan>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::TimeSpan::ToString(::StringW format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "ToString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format);
}
inline ::StringW System::TimeSpan::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline bool System::TimeSpan::TryFormat(::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "TryFormat",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                         ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, charsWritten, format, formatProvider);
}
inline ::System::TimeSpan System::TimeSpan::op_UnaryNegation(::System::TimeSpan t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, t);
}
inline ::System::TimeSpan System::TimeSpan::op_Subtraction(::System::TimeSpan t1, ::System::TimeSpan t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_Subtraction", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, t1, t2);
}
inline ::System::TimeSpan System::TimeSpan::op_Addition(::System::TimeSpan t1, ::System::TimeSpan t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_Addition", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, t1, t2);
}
inline bool System::TimeSpan::op_Equality(::System::TimeSpan t1, ::System::TimeSpan t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_Equality", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::TimeSpan::op_Inequality(::System::TimeSpan t1, ::System::TimeSpan t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_Inequality", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::TimeSpan::op_LessThan(::System::TimeSpan t1, ::System::TimeSpan t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_LessThan", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::TimeSpan::op_LessThanOrEqual(::System::TimeSpan t1, ::System::TimeSpan t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::TimeSpan::op_GreaterThan(::System::TimeSpan t1, ::System::TimeSpan t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_GreaterThan", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::TimeSpan::op_GreaterThanOrEqual(::System::TimeSpan t1, ::System::TimeSpan t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeSpan>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::TimeSpan::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::TimeSpan::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::TimeSpan>"
constexpr System::TimeSpan::operator ::System::IComparable_1<::System::TimeSpan>*() {
  return static_cast<::System::IComparable_1<::System::TimeSpan>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::System::TimeSpan>"
constexpr ::System::IComparable_1<::System::TimeSpan>* System::TimeSpan::i___System__IComparable_1___System__TimeSpan_() {
  return static_cast<::System::IComparable_1<::System::TimeSpan>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TimeSpan>"
constexpr System::TimeSpan::operator ::System::IEquatable_1<::System::TimeSpan>*() {
  return static_cast<::System::IEquatable_1<::System::TimeSpan>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::TimeSpan>"
constexpr ::System::IEquatable_1<::System::TimeSpan>* System::TimeSpan::i___System__IEquatable_1___System__TimeSpan_() {
  return static_cast<::System::IEquatable_1<::System::TimeSpan>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr System::TimeSpan::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::TimeSpan::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::ISpanFormattable"
constexpr System::TimeSpan::operator ::System::ISpanFormattable*() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* System::TimeSpan::i___System__ISpanFormattable() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ticks", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TimeSpan::TimeSpan(int64_t _ticks) noexcept {
  this->_ticks = _ticks;
}
// Ctor Parameters []
constexpr ::System::TimeSpan::TimeSpan() {}
