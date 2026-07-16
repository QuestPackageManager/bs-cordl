#pragma once
// IWYU pragma private; include "System/DateTimeOffset.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::DateTimeOffset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeOffset::*)(int64_t, ::System::TimeSpan)>(&::System::DateTimeOffset::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c29204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeOffset::*)(::System::DateTime)>(&::System::DateTimeOffset::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c29548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeOffset::*)(::System::DateTime, ::System::TimeSpan)>(&::System::DateTimeOffset::_ctor)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5c2966c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeOffset::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::TimeSpan)>(
    &::System::DateTimeOffset::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c29864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ".ctor",
                                                                                        {},
                                                                                        { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeOffset::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::TimeSpan)>(
    &::System::DateTimeOffset::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c29934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeOffset::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::Globalization::Calendar*,
                                                                                          ::System::TimeSpan)>(&::System::DateTimeOffset::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c29a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::Calendar*>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_Now
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)()>(&::System::DateTimeOffset::get_Now)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c29afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Now", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_DateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_DateTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c29b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_DateTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_UtcDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_UtcDateTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c29c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_UtcDateTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_LocalDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_LocalDateTime)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c29cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_LocalDateTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ToOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::DateTimeOffset::*)(::System::TimeSpan)>(&::System::DateTimeOffset::ToOffset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c29d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToOffset", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_ClockDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_ClockDateTime)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c29bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_ClockDateTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_Day
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_Day)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c29e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Day", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_Hour
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_Hour)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c29ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Hour", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_Millisecond
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_Millisecond)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c29f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Millisecond", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_Minute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_Minute)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2a030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Minute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_Month
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_Month)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2a0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Month", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_Offset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_Offset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c29e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Offset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_Second
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_Second)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2a168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Second", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_Ticks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_Ticks)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2a204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Ticks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_TimeOfDay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_TimeOfDay)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2a2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_TimeOfDay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.get_Year
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::get_Year)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2a33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Year", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.AddTicks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::DateTimeOffset::*)(int64_t)>(&::System::DateTimeOffset::AddTicks)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c2a3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "AddTicks", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::DateTimeOffset, ::System::DateTimeOffset)>(&::System::DateTimeOffset::Compare)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c2a4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "Compare", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.System_IComparable_CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTimeOffset::*)(::System::Object*)>(&::System::DateTimeOffset::System_IComparable_CompareTo)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c2a568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "System.IComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTimeOffset::*)(::System::DateTimeOffset)>(&::System::DateTimeOffset::CompareTo)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c2a6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "CompareTo", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DateTimeOffset::*)(::System::Object*)>(&::System::DateTimeOffset::Equals)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5c2a788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ::i2c::class_of<::System::DateTimeOffset>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DateTimeOffset::*)(::System::DateTimeOffset)>(&::System::DateTimeOffset::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c2a884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "Equals", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.FromFileTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(int64_t)>(&::System::DateTimeOffset::FromFileTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c2a938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "FromFileTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.FromUnixTimeSeconds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(int64_t)>(&::System::DateTimeOffset::FromUnixTimeSeconds)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5c2a9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "FromUnixTimeSeconds", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeOffset::*)(::System::Object*)>(
    &::System::DateTimeOffset::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c2ab18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeOffset::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::DateTimeOffset::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c2aca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeOffset::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::DateTimeOffset::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5c2ad78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::GetHashCode)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c2af0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ::i2c::class_of<::System::DateTimeOffset>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW, ::System::IFormatProvider*)>(&::System::DateTimeOffset::Parse)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c2afa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles)>(
    &::System::DateTimeOffset::Parse)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5c2b024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(),
                                         { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::StringW, ::StringW, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles)>(
    &::System::DateTimeOffset::ParseExact)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5c2b3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ParseExact",
                                                                                               {},
                                                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                                                 ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ToLocalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::ToLocalTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c2b6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToLocalTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ToLocalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::DateTimeOffset::*)(bool)>(&::System::DateTimeOffset::ToLocalTime)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c2b74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToLocalTime", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c2b80c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ::i2c::class_of<::System::DateTimeOffset>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::DateTimeOffset::*)(::System::IFormatProvider*)>(&::System::DateTimeOffset::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c2bbc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::DateTimeOffset::*)(::StringW, ::System::IFormatProvider*)>(&::System::DateTimeOffset::ToString)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c2bc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.TryFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DateTimeOffset::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>,
                                                                                          ::System::IFormatProvider*)>(&::System::DateTimeOffset::TryFormat)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c2bd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "TryFormat",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                          ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ToUniversalTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (::System::DateTimeOffset::*)()>(&::System::DateTimeOffset::ToUniversalTime)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5c2c090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToUniversalTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTimeOffset>)>(
    &::System::DateTimeOffset::TryParse)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5c2c108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "TryParse",
                                                                           {},
                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.TryParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTimeOffset>)>(
    &::System::DateTimeOffset::TryParseExact)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c2c434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "TryParseExact",
                                                                           {},
                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.TryParseExact
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<::StringW>, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles,
                                                                ::by_ref<::System::DateTimeOffset>)>(&::System::DateTimeOffset::TryParseExact)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c2c78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "TryParseExact",
                                                                           {},
                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                             ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ValidateOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::TimeSpan)>(&::System::DateTimeOffset::ValidateOffset)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5c292c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ValidateOffset", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ValidateDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeSpan)>(&::System::DateTimeOffset::ValidateDate)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c29424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ValidateDate", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.ValidateStyles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DateTimeStyles (*)(::System::Globalization::DateTimeStyles, ::StringW)>(&::System::DateTimeOffset::ValidateStyles)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5c2b1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ValidateStyles", {}, { ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.op_Implicit___System__DateTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeOffset (*)(::System::DateTime)>(&::System::DateTimeOffset::op_Implicit___System__DateTimeOffset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c2cac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "op_Implicit", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTimeOffset, ::System::DateTimeOffset)>(&::System::DateTimeOffset::op_Subtraction)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c2caf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "op_Subtraction", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTimeOffset, ::System::DateTimeOffset)>(&::System::DateTimeOffset::op_Equality)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c2cb9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "op_Equality", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeOffset.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTimeOffset, ::System::DateTimeOffset)>(&::System::DateTimeOffset::op_Inequality)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c2cc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "op_Inequality", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::DateTimeOffset>() } })));
    return ___internal_method;
  }
};
inline void System::DateTimeOffset::setStaticF_MinValue(::System::DateTimeOffset value) {
  ::cordl_internals::setStaticField<::System::DateTimeOffset, "MinValue", ::System::DateTimeOffset>(std::forward<::System::DateTimeOffset>(value));
}
inline ::System::DateTimeOffset System::DateTimeOffset::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::DateTimeOffset, "MinValue", ::System::DateTimeOffset>();
}
inline void System::DateTimeOffset::setStaticF_MaxValue(::System::DateTimeOffset value) {
  ::cordl_internals::setStaticField<::System::DateTimeOffset, "MaxValue", ::System::DateTimeOffset>(std::forward<::System::DateTimeOffset>(value));
}
inline ::System::DateTimeOffset System::DateTimeOffset::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::DateTimeOffset, "MaxValue", ::System::DateTimeOffset>();
}
inline void System::DateTimeOffset::setStaticF_UnixEpoch(::System::DateTimeOffset value) {
  ::cordl_internals::setStaticField<::System::DateTimeOffset, "UnixEpoch", ::System::DateTimeOffset>(std::forward<::System::DateTimeOffset>(value));
}
inline ::System::DateTimeOffset System::DateTimeOffset::getStaticF_UnixEpoch() {
  return ::cordl_internals::getStaticField<::System::DateTimeOffset, "UnixEpoch", ::System::DateTimeOffset>();
}
inline void System::DateTimeOffset::_ctor(int64_t ticks, ::System::TimeSpan offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ticks, offset);
}
inline void System::DateTimeOffset::_ctor(::System::DateTime dateTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dateTime);
}
inline void System::DateTimeOffset::_ctor(::System::DateTime dateTime, ::System::TimeSpan offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ".ctor", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dateTime, offset);
}
inline void System::DateTimeOffset::_ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, ::System::TimeSpan offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ".ctor",
                                                                                      {},
                                                                                      { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day, hour, minute, second, offset);
}
inline void System::DateTimeOffset::_ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::System::TimeSpan offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { ".ctor",
                                                                         {},
                                                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day, hour, minute, second, millisecond, offset);
}
inline void System::DateTimeOffset::_ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, ::System::Globalization::Calendar* calendar,
                                          ::System::TimeSpan offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::Calendar*>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, year, month, day, hour, minute, second, millisecond, calendar, offset);
}
inline ::System::DateTimeOffset System::DateTimeOffset::get_Now() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Now", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method);
}
inline ::System::DateTime System::DateTimeOffset::get_DateTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_DateTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline ::System::DateTime System::DateTimeOffset::get_UtcDateTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_UtcDateTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline ::System::DateTime System::DateTimeOffset::get_LocalDateTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_LocalDateTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline ::System::DateTimeOffset System::DateTimeOffset::ToOffset(::System::TimeSpan offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToOffset", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(*this, ___internal_method, offset);
}
inline ::System::DateTime System::DateTimeOffset::get_ClockDateTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_ClockDateTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline int32_t System::DateTimeOffset::get_Day() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Day", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::DateTimeOffset::get_Hour() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Hour", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::DateTimeOffset::get_Millisecond() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Millisecond", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::DateTimeOffset::get_Minute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Minute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::DateTimeOffset::get_Month() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Month", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::TimeSpan System::DateTimeOffset::get_Offset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Offset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method);
}
inline int32_t System::DateTimeOffset::get_Second() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Second", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int64_t System::DateTimeOffset::get_Ticks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Ticks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline ::System::TimeSpan System::DateTimeOffset::get_TimeOfDay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_TimeOfDay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(*this, ___internal_method);
}
inline int32_t System::DateTimeOffset::get_Year() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "get_Year", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::DateTimeOffset System::DateTimeOffset::AddTicks(int64_t ticks) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "AddTicks", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(*this, ___internal_method, ticks);
}
inline int32_t System::DateTimeOffset::Compare(::System::DateTimeOffset first, ::System::DateTimeOffset second) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "Compare", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, first, second);
}
inline int32_t System::DateTimeOffset::System_IComparable_CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "System.IComparable.CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, obj);
}
inline int32_t System::DateTimeOffset::CompareTo(::System::DateTimeOffset other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "CompareTo", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool System::DateTimeOffset::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DateTimeOffset>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::DateTimeOffset::Equals(::System::DateTimeOffset other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "Equals", {}, { ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::System::DateTimeOffset System::DateTimeOffset::FromFileTime(int64_t fileTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "FromFileTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, fileTime);
}
inline ::System::DateTimeOffset System::DateTimeOffset::FromUnixTimeSeconds(int64_t seconds) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "FromUnixTimeSeconds", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, seconds);
}
inline void System::DateTimeOffset::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender);
}
inline void System::DateTimeOffset::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                             ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline void System::DateTimeOffset::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline int32_t System::DateTimeOffset::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DateTimeOffset>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::DateTimeOffset System::DateTimeOffset::Parse(::StringW input, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, input, formatProvider);
}
inline ::System::DateTimeOffset System::DateTimeOffset::Parse(::StringW input, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(),
                                       { "Parse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, input, formatProvider, styles);
}
inline ::System::DateTimeOffset System::DateTimeOffset::ParseExact(::StringW input, ::StringW format, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ParseExact",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                                               ::i2c::type_of<::System::Globalization::DateTimeStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, input, format, formatProvider, styles);
}
inline ::System::DateTimeOffset System::DateTimeOffset::ToLocalTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToLocalTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(*this, ___internal_method);
}
inline ::System::DateTimeOffset System::DateTimeOffset::ToLocalTime(bool throwOnOverflow) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToLocalTime", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(*this, ___internal_method, throwOnOverflow);
}
inline ::StringW System::DateTimeOffset::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::DateTimeOffset>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::DateTimeOffset::ToString(::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToString", {}, { ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, formatProvider);
}
inline ::StringW System::DateTimeOffset::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline bool System::DateTimeOffset::TryFormat(::System::Span_1<char16_t> destination, ::by_ref<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format,
                                              ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "TryFormat",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                        ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, charsWritten, format, formatProvider);
}
inline ::System::DateTimeOffset System::DateTimeOffset::ToUniversalTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ToUniversalTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(*this, ___internal_method);
}
inline bool System::DateTimeOffset::TryParse(::StringW input, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles, ::by_ref<::System::DateTimeOffset> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "TryParse",
                                                                         {},
                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, formatProvider, styles, result);
}
inline bool System::DateTimeOffset::TryParseExact(::StringW input, ::StringW format, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles,
                                                  ::by_ref<::System::DateTimeOffset> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "TryParseExact",
                                                                         {},
                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, format, formatProvider, styles, result);
}
inline bool System::DateTimeOffset::TryParseExact(::StringW input, ::ArrayW<::StringW> formats, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles,
                                                  ::by_ref<::System::DateTimeOffset> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "TryParseExact",
                                                                         {},
                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::IFormatProvider*>(),
                                                                           ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, formats, formatProvider, styles, result);
}
inline int16_t System::DateTimeOffset::ValidateOffset(::System::TimeSpan offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ValidateOffset", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, offset);
}
inline ::System::DateTime System::DateTimeOffset::ValidateDate(::System::DateTime dateTime, ::System::TimeSpan offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ValidateDate", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateTime, offset);
}
inline ::System::Globalization::DateTimeStyles System::DateTimeOffset::ValidateStyles(::System::Globalization::DateTimeStyles style, ::StringW parameterName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "ValidateStyles", {}, { ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeStyles>(nullptr, ___internal_method, style, parameterName);
}
inline ::System::DateTimeOffset System::DateTimeOffset::op_Implicit___System__DateTimeOffset(::System::DateTime dateTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "op_Implicit", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeOffset>(nullptr, ___internal_method, dateTime);
}
inline ::System::TimeSpan System::DateTimeOffset::op_Subtraction(::System::DateTimeOffset left, ::System::DateTimeOffset right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "op_Subtraction", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, left, right);
}
inline bool System::DateTimeOffset::op_Equality(::System::DateTimeOffset left, ::System::DateTimeOffset right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "op_Equality", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::DateTimeOffset::op_Inequality(::System::DateTimeOffset left, ::System::DateTimeOffset right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::DateTimeOffset>(), { "op_Inequality", {}, { ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::DateTimeOffset>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::DateTimeOffset::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::DateTimeOffset::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr System::DateTimeOffset::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::DateTimeOffset::i___System__IFormattable() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::DateTimeOffset>"
constexpr System::DateTimeOffset::operator ::System::IComparable_1<::System::DateTimeOffset>*() {
  return static_cast<::System::IComparable_1<::System::DateTimeOffset>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::System::DateTimeOffset>"
constexpr ::System::IComparable_1<::System::DateTimeOffset>* System::DateTimeOffset::i___System__IComparable_1___System__DateTimeOffset_() {
  return static_cast<::System::IComparable_1<::System::DateTimeOffset>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::DateTimeOffset>"
constexpr System::DateTimeOffset::operator ::System::IEquatable_1<::System::DateTimeOffset>*() {
  return static_cast<::System::IEquatable_1<::System::DateTimeOffset>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::DateTimeOffset>"
constexpr ::System::IEquatable_1<::System::DateTimeOffset>* System::DateTimeOffset::i___System__IEquatable_1___System__DateTimeOffset_() {
  return static_cast<::System::IEquatable_1<::System::DateTimeOffset>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::DateTimeOffset::operator ::System::Runtime::Serialization::ISerializable*() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::DateTimeOffset::i___System__Runtime__Serialization__ISerializable() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::DateTimeOffset::operator ::System::Runtime::Serialization::IDeserializationCallback*() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::DateTimeOffset::i___System__Runtime__Serialization__IDeserializationCallback() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::ISpanFormattable"
constexpr System::DateTimeOffset::operator ::System::ISpanFormattable*() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* System::DateTimeOffset::i___System__ISpanFormattable() {
  return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dateTime", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_offsetMinutes", ty: "int16_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::DateTimeOffset::DateTimeOffset(::System::DateTime _dateTime, int16_t _offsetMinutes) noexcept {
  this->_dateTime = _dateTime;
  this->_offsetMinutes = _offsetMinutes;
}
// Ctor Parameters []
constexpr ::System::DateTimeOffset::DateTimeOffset() {}
