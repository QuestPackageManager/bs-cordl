#pragma once
// IWYU pragma private; include "System/DateTime.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(int64_t)>(&::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c243b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(uint64_t)>(&::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c24438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(int64_t, ::System::DateTimeKind)>(&::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c23680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::DateTimeKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(int64_t, ::System::DateTimeKind, bool)>(&::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c23760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::DateTimeKind>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(int32_t, int32_t, int32_t)>(&::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c24440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c2466c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::DateTime>(),
            { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::DateTimeKind)>(&::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c247f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor",
                                                                                         {},
                                                                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTimeKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c24918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor",
                                                                                         {},
                                                                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::DateTimeKind)>(
    &::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5c24ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor",
                                                                     {},
                                                                     { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTimeKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::Globalization::Calendar*)>(
    &::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5c24d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::Calendar*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::DateTime::_ctor)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5c24f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_InternalTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::DateTime::*)()>(&::System::DateTime::get_InternalTicks)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c25218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_InternalTicks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_InternalKind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::DateTime::*)()>(&::System::DateTime::get_InternalKind)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c25224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_InternalKind", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(::System::TimeSpan)>(&::System::DateTime::Add)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c25230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Add", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(double_t, int32_t)>(&::System::DateTime::Add)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c253a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Add", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.AddDays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(double_t)>(&::System::DateTime::AddDays)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c254d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddDays", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.AddMilliseconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(double_t)>(&::System::DateTime::AddMilliseconds)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c25548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddMilliseconds", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.AddMinutes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(double_t)>(&::System::DateTime::AddMinutes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c255b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddMinutes", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.AddMonths
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(int32_t)>(&::System::DateTime::AddMonths)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5c25620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddMonths", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.AddSeconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(double_t)>(&::System::DateTime::AddSeconds)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c25ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddSeconds", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.AddTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(int64_t)>(&::System::DateTime::AddTicks)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5c25298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddTicks", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.AddYears
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(int32_t)>(&::System::DateTime::AddYears)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c25c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddYears", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::DateTime, ::System::DateTime)>(&::System::DateTime::Compare)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c25cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Compare", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)(::System::Object*)>(&::System::DateTime::CompareTo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c25d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)(::System::DateTime)>(&::System::DateTime::CompareTo)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c25e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "CompareTo", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.DateToTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::System::DateTime::DateToTicks)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c244c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "DateToTicks", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.TimeToTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::System::DateTime::TimeToTicks)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c2471c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "TimeToTicks", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.DaysInMonth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::DateTime::DaysInMonth)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5c25a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "DaysInMonth", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DateTime::*)(::System::Object*)>(&::System::DateTime::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c25f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ::i2c::class_of<::System::DateTime>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DateTime::*)(::System::DateTime)>(&::System::DateTime::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c26048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Equals", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.FromBinary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::System::DateTime::FromBinary)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5c260b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "FromBinary", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.FromBinaryRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::System::DateTime::FromBinaryRaw)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c26328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "FromBinaryRaw", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.FromFileTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::System::DateTime::FromFileTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c263ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "FromFileTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.FromFileTimeUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::System::DateTime::FromFileTimeUtc)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c2641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "FromFileTimeUtc", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::DateTime::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c26528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.SpecifyKind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::DateTimeKind)>(&::System::DateTime::SpecifyKind)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c2662c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "SpecifyKind", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTimeKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Date
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)()>(&::System::DateTime::get_Date)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c266a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Date", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.GetDatePart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)(int32_t)>(&::System::DateTime::GetDatePart)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5c26730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "GetDatePart", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.GetDatePart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTime::*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::DateTime::GetDatePart)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5c25860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                                                { "GetDatePart", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Day
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)()>(&::System::DateTime::get_Day)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c26938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Day", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_DayOfWeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::System::DateTime::*)()>(&::System::DateTime::get_DayOfWeek)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c26994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_DayOfWeek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)()>(&::System::DateTime::GetHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c26a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ::i2c::class_of<::System::DateTime>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Hour
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)()>(&::System::DateTime::get_Hour)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c26a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Hour", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.IsAmbiguousDaylightSavingTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DateTime::*)()>(&::System::DateTime::IsAmbiguousDaylightSavingTime)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c26b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "IsAmbiguousDaylightSavingTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Kind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeKind (::System::DateTime::*)()>(&::System::DateTime::get_Kind)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c235b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Kind", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Millisecond
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)()>(&::System::DateTime::get_Millisecond)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c26b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Millisecond", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Minute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)()>(&::System::DateTime::get_Minute)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c26c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Minute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Month
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)()>(&::System::DateTime::get_Month)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c26c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Month", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Now
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)()>(&::System::DateTime::get_Now)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5c26cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Now", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Second
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)()>(&::System::DateTime::get_Second)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c26eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Second", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Ticks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::DateTime::*)()>(&::System::DateTime::get_Ticks)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c23624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Ticks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_TimeOfDay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::DateTime::*)()>(&::System::DateTime::get_TimeOfDay)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c26f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_TimeOfDay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_Year
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)()>(&::System::DateTime::get_Year)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c23208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Year", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.IsLeapYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::DateTime::IsLeapYear)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c25ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "IsLeapYear", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::DateTime::Parse)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c26fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW, ::System::IFormatProvider*)>(&::System::DateTime::Parse)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c271a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles)>(&::System::DateTime::Parse)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c2728c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                                         { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW, ::StringW, ::System::IFormatProvider*)>(&::System::DateTime::ParseExact)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c273b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ParseExact", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW, ::StringW, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles)>(
    &::System::DateTime::ParseExact)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5c275e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ParseExact",
                                                                                         {},
                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW, ::ArrayW<::StringW>, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles)>(
    &::System::DateTime::ParseExact)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c2772c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ParseExact",
                                                                                  {},
                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                                    ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.Subtract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::DateTime::*)(::System::DateTime)>(&::System::DateTime::Subtract)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c27978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Subtract", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ToLocalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)()>(&::System::DateTime::ToLocalTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c264cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToLocalTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ToLocalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(bool)>(&::System::DateTime::ToLocalTime)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5c279e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToLocalTime", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::DateTime::*)()>(&::System::DateTime::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c27ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ::i2c::class_of<::System::DateTime>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::DateTime::*)(::StringW)>(&::System::DateTime::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c27c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c27cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::DateTime::*)(::StringW, ::System::IFormatProvider*)>(&::System::DateTime::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c27d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DateTime::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(
    &::System::DateTime::TryFormat)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c27dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "TryFormat",
                                                                                         {},
                                                                                         { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                           ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ToUniversalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)()>(&::System::DateTime::ToUniversalTime)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c27f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToUniversalTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>)>(
    &::System::DateTime::TryParse)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c27f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "TryParse",
                                                                                  {},
                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                                    ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.TryParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>)>(
    &::System::DateTime::TryParseExact)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5c28200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "TryParseExact",
                                                                                  {},
                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                                    ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeSpan)>(&::System::DateTime::op_Addition)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c2849c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_Addition", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeSpan)>(&::System::DateTime::op_Subtraction)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c23264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_Subtraction", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::DateTime)>(&::System::DateTime::op_Subtraction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c285a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_Subtraction", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::DateTime)>(&::System::DateTime::op_Equality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c2860c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_Equality", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::DateTime)>(&::System::DateTime::op_Inequality)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c28678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_Inequality", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::DateTime)>(&::System::DateTime::op_LessThan)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c233d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_LessThan", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.op_LessThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::DateTime)>(&::System::DateTime::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c286e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::DateTime)>(&::System::DateTime::op_GreaterThan)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c23360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_GreaterThan", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.op_GreaterThanOrEqual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::DateTime)>(&::System::DateTime::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c23440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.GetTypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (::System::DateTime::*)()>(&::System::DateTime::GetTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c28754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "GetTypeCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c2875c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToBoolean", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c287e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToChar", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c28864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToSByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c288e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c2896c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c289f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToUInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c28a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c28af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToUInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c28b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c28c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToUInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c28c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToSingle", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c28d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToDouble", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c28d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToDecimal", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTime::*)(::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c28e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToDateTime", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.System_IConvertible_ToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::DateTime::*)(::System::Type*, ::System::IFormatProvider*)>(&::System::DateTime::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c28e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.TryCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::by_ref<::System::DateTime>)>(&::System::DateTime::TryCreate)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5c28ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                                                             { "TryCreate",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.get_UtcNow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)()>(&::System::DateTime::get_UtcNow)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c26e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_UtcNow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.GetSystemTimeAsFileTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::System::DateTime::GetSystemTimeAsFileTime)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c290bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "GetSystemTimeAsFileTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTime.ToBinaryRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::DateTime::*)()>(&::System::DateTime::ToBinaryRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c29104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToBinaryRaw", {}, {} })));
    return ___internal_method;
  }
};
inline void System::DateTime::setStaticF_s_daysToMonth365(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_daysToMonth365", ::System::DateTime>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::DateTime::getStaticF_s_daysToMonth365() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_daysToMonth365", ::System::DateTime>();
}
inline void System::DateTime::setStaticF_s_daysToMonth366(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_daysToMonth366", ::System::DateTime>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::DateTime::getStaticF_s_daysToMonth366() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_daysToMonth366", ::System::DateTime>();
}
inline void System::DateTime::setStaticF_MinValue(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "MinValue", ::System::DateTime>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::DateTime::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::DateTime, "MinValue", ::System::DateTime>();
}
inline void System::DateTime::setStaticF_MaxValue(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "MaxValue", ::System::DateTime>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::DateTime::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::DateTime, "MaxValue", ::System::DateTime>();
}
inline void System::DateTime::setStaticF_UnixEpoch(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "UnixEpoch", ::System::DateTime>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::DateTime::getStaticF_UnixEpoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "UnixEpoch", ::System::DateTime>();
}
inline void System::DateTime::_ctor(int64_t ticks) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ticks);
}
inline void System::DateTime::_ctor(uint64_t dateData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dateData);
}
inline void System::DateTime::_ctor(int64_t ticks, ::System::DateTimeKind kind) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::DateTimeKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ticks, kind);
}
inline void System::DateTime::_ctor(int64_t ticks, ::System::DateTimeKind kind, bool isAmbiguousDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::DateTimeKind>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ticks, kind, isAmbiguousDst);
}
inline void System::DateTime::_ctor(int32_t year, int32_t month, int32_t day) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day);
}
inline void System::DateTime::_ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::DateTime>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day, hour, minute, second);
}
inline void System::DateTime::_ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, ::System::DateTimeKind kind) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor",
                                                                                       {},
                                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTimeKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day, hour, minute, second, kind);
}
inline void System::DateTime::_ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor",
                                                                                       {},
                                                                                       { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                         ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day, hour, minute, second, millisecond);
}
inline void System::DateTime::_ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::System::DateTimeKind kind) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { ".ctor",
                                                                   {},
                                                                   { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTimeKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day, hour, minute, second, millisecond, kind);
}
inline void System::DateTime::_ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::System::Globalization::Calendar* calendar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::Calendar*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day, hour, minute, second, millisecond, calendar);
}
inline void System::DateTime::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline int64_t System::DateTime::get_InternalTicks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_InternalTicks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline uint64_t System::DateTime::get_InternalKind() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_InternalKind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::System::DateTime System::DateTime::Add(::System::TimeSpan value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Add", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, value);
}
inline ::System::DateTime System::DateTime::Add(double_t value, int32_t scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Add", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, value, scale);
}
inline ::System::DateTime System::DateTime::AddDays(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddDays", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, value);
}
inline ::System::DateTime System::DateTime::AddMilliseconds(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddMilliseconds", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, value);
}
inline ::System::DateTime System::DateTime::AddMinutes(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddMinutes", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, value);
}
inline ::System::DateTime System::DateTime::AddMonths(int32_t months) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddMonths", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, months);
}
inline ::System::DateTime System::DateTime::AddSeconds(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddSeconds", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, value);
}
inline ::System::DateTime System::DateTime::AddTicks(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddTicks", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, value);
}
inline ::System::DateTime System::DateTime::AddYears(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "AddYears", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, value);
}
inline int32_t System::DateTime::Compare(::System::DateTime t1, ::System::DateTime t2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Compare", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t1, t2);
}
inline int32_t System::DateTime::CompareTo(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::DateTime::CompareTo(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "CompareTo", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int64_t System::DateTime::DateToTicks(int32_t year, int32_t month, int32_t day) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "DateToTicks", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, year, month, day);
}
inline int64_t System::DateTime::TimeToTicks(int32_t hour, int32_t minute, int32_t second) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "TimeToTicks", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, hour, minute, second);
}
inline int32_t System::DateTime::DaysInMonth(int32_t year, int32_t month) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "DaysInMonth", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, year, month);
}
inline bool System::DateTime::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DateTime>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool System::DateTime::Equals(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Equals", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline ::System::DateTime System::DateTime::FromBinary(int64_t dateData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "FromBinary", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateData);
}
inline ::System::DateTime System::DateTime::FromBinaryRaw(int64_t dateData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "FromBinaryRaw", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateData);
}
inline ::System::DateTime System::DateTime::FromFileTime(int64_t fileTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "FromFileTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, fileTime);
}
inline ::System::DateTime System::DateTime::FromFileTimeUtc(int64_t fileTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "FromFileTimeUtc", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, fileTime);
}
inline void System::DateTime::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                       ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline ::System::DateTime System::DateTime::SpecifyKind(::System::DateTime value, ::System::DateTimeKind kind) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "SpecifyKind", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTimeKind>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value, kind);
}
inline ::System::DateTime System::DateTime::get_Date() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Date", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline int32_t System::DateTime::GetDatePart(int32_t part) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "GetDatePart", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, part);
}
inline void System::DateTime::GetDatePart(::by_ref<int32_t> year, ::by_ref<int32_t> month, ::by_ref<int32_t> day) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                                                           { "GetDatePart", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day);
}
inline int32_t System::DateTime::get_Day() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Day", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::DayOfWeek System::DateTime::get_DayOfWeek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_DayOfWeek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(*this, ___internal_method);
}
inline int32_t System::DateTime::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DateTime>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::DateTime::get_Hour() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Hour", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::DateTime::IsAmbiguousDaylightSavingTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "IsAmbiguousDaylightSavingTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::DateTimeKind System::DateTime::get_Kind() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Kind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeKind>(*this, ___internal_method);
}
inline int32_t System::DateTime::get_Millisecond() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Millisecond", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::DateTime::get_Minute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Minute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::DateTime::get_Month() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Month", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::DateTime System::DateTime::get_Now() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Now", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method);
}
inline int32_t System::DateTime::get_Second() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Second", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int64_t System::DateTime::get_Ticks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Ticks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline ::System::TimeSpan System::DateTime::get_TimeOfDay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_TimeOfDay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method);
}
inline int32_t System::DateTime::get_Year() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_Year", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::DateTime::IsLeapYear(int32_t year) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "IsLeapYear", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, year);
}
inline ::System::DateTime System::DateTime::Parse(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s);
}
inline ::System::DateTime System::DateTime::Parse(::StringW s, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, provider);
}
inline ::System::DateTime System::DateTime::Parse(::StringW s, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                                       { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, provider, styles);
}
inline ::System::DateTime System::DateTime::ParseExact(::StringW s, ::StringW format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ParseExact", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, format, provider);
}
inline ::System::DateTime System::DateTime::ParseExact(::StringW s, ::StringW format, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ParseExact",
                                                                                       {},
                                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                                         ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, format, provider, style);
}
inline ::System::DateTime System::DateTime::ParseExact(::StringW s, ::ArrayW<::StringW> formats, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ParseExact",
                                                                                       {},
                                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                                         ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, formats, provider, style);
}
inline ::System::TimeSpan System::DateTime::Subtract(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "Subtract", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method, value);
}
inline ::System::DateTime System::DateTime::ToLocalTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToLocalTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline ::System::DateTime System::DateTime::ToLocalTime(bool throwOnOverflow) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToLocalTime", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, throwOnOverflow);
}
inline ::StringW System::DateTime::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DateTime>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::DateTime::ToString(::StringW format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format);
}
inline ::StringW System::DateTime::ToString(::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, provider);
}
inline ::StringW System::DateTime::ToString(::StringW format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, provider);
}
inline bool System::DateTime::TryFormat(::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "TryFormat",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                         ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, charsWritten, format, provider);
}
inline ::System::DateTime System::DateTime::ToUniversalTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToUniversalTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline bool System::DateTime::TryParse(::StringW s, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles styles, ::by_ref<::System::DateTime> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "TryParse",
                                                                                {},
                                                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                                  ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, provider, styles, result);
}
inline bool System::DateTime::TryParseExact(::StringW s, ::StringW format, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style, ::by_ref<::System::DateTime> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "TryParseExact",
                                                                                {},
                                                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                                  ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, format, provider, style, result);
}
inline ::System::DateTime System::DateTime::op_Addition(::System::DateTime d, ::System::TimeSpan t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_Addition", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, d, t);
}
inline ::System::DateTime System::DateTime::op_Subtraction(::System::DateTime d, ::System::TimeSpan t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_Subtraction", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, d, t);
}
inline ::System::TimeSpan System::DateTime::op_Subtraction(::System::DateTime d1, ::System::DateTime d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_Subtraction", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, d1, d2);
}
inline bool System::DateTime::op_Equality(::System::DateTime d1, ::System::DateTime d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_Equality", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::DateTime::op_Inequality(::System::DateTime d1, ::System::DateTime d2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_Inequality", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::DateTime::op_LessThan(::System::DateTime t1, ::System::DateTime t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_LessThan", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::DateTime::op_LessThanOrEqual(::System::DateTime t1, ::System::DateTime t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_LessThanOrEqual", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::DateTime::op_GreaterThan(::System::DateTime t1, ::System::DateTime t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_GreaterThan", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::DateTime::op_GreaterThanOrEqual(::System::DateTime t1, ::System::DateTime t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "op_GreaterThanOrEqual", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline ::System::TypeCode System::DateTime::GetTypeCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "GetTypeCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(*this, ___internal_method);
}
inline bool System::DateTime::System_IConvertible_ToBoolean(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToBoolean", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, provider);
}
inline char16_t System::DateTime::System_IConvertible_ToChar(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToChar", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method, provider);
}
inline int8_t System::DateTime::System_IConvertible_ToSByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToSByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(*this, ___internal_method, provider);
}
inline uint8_t System::DateTime::System_IConvertible_ToByte(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToByte", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, provider);
}
inline int16_t System::DateTime::System_IConvertible_ToInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method, provider);
}
inline uint16_t System::DateTime::System_IConvertible_ToUInt16(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToUInt16", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, provider);
}
inline int32_t System::DateTime::System_IConvertible_ToInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, provider);
}
inline uint32_t System::DateTime::System_IConvertible_ToUInt32(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToUInt32", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, provider);
}
inline int64_t System::DateTime::System_IConvertible_ToInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, provider);
}
inline uint64_t System::DateTime::System_IConvertible_ToUInt64(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToUInt64", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, provider);
}
inline float_t System::DateTime::System_IConvertible_ToSingle(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToSingle", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, provider);
}
inline double_t System::DateTime::System_IConvertible_ToDouble(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToDouble", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, provider);
}
inline ::System::Decimal System::DateTime::System_IConvertible_ToDecimal(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToDecimal", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(*this, ___internal_method, provider);
}
inline ::System::DateTime System::DateTime::System_IConvertible_ToDateTime(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToDateTime", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, provider);
}
inline ::System::Object* System::DateTime::System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "System.IConvertible.ToType", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, type, provider);
}
inline bool System::DateTime::TryCreate(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::by_ref<::System::DateTime> result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(),
                                                           { "TryCreate",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, year, month, day, hour, minute, second, millisecond, result);
}
inline ::System::DateTime System::DateTime::get_UtcNow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "get_UtcNow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method);
}
inline int64_t System::DateTime::GetSystemTimeAsFileTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "GetSystemTimeAsFileTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t System::DateTime::ToBinaryRaw() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTime>(), { "ToBinaryRaw", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::DateTime::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::DateTime::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr System::DateTime::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::DateTime::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IConvertible"
constexpr System::DateTime::operator ::System::IConvertible*() {
  return static_cast<::System::IConvertible*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* System::DateTime::i___System__IConvertible() {
  return static_cast<::System::IConvertible*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::DateTime>"
constexpr System::DateTime::operator ::System::IComparable_1<::System::DateTime>*() {
  return static_cast<::System::IComparable_1<::System::DateTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::System::DateTime>"
constexpr ::System::IComparable_1<::System::DateTime>* System::DateTime::i___System__IComparable_1___System__DateTime_() {
  return static_cast<::System::IComparable_1<::System::DateTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::DateTime>"
constexpr System::DateTime::operator ::System::IEquatable_1<::System::DateTime>*() {
  return static_cast<::System::IEquatable_1<::System::DateTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::DateTime>"
constexpr ::System::IEquatable_1<::System::DateTime>* System::DateTime::i___System__IEquatable_1___System__DateTime_() {
  return static_cast<::System::IEquatable_1<::System::DateTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::DateTime::operator ::System::Runtime::Serialization::ISerializable*() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::DateTime::i___System__Runtime__Serialization__ISerializable() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::ISpanFormattable"
constexpr System::DateTime::operator ::System::ISpanFormattable*() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* System::DateTime::i___System__ISpanFormattable() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dateData", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTime::DateTime(uint64_t _dateData) noexcept {
  this->_dateData = _dateData;
}
// Ctor Parameters []
constexpr ::System::DateTime::DateTime() {}
