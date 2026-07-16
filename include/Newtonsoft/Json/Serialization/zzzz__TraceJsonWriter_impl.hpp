#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/TraceJsonWriter.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__TraceJsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::Newtonsoft::Json::JsonWriter*)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5d58bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.GetSerializedJsonMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::GetSerializedJsonMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d58d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { "GetSerializedJsonMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Decimal)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d58db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 99 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<::System::Decimal>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d58e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 116 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(bool)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d58f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<bool>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d58fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 110 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint8_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d59088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 97 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<uint8_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d590f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 114 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(char16_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d591bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 96 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<char16_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d5922c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 113 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::ArrayW<uint8_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5d592f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 121 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::DateTime)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d5936c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 100 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<::System::DateTime>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d593dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 117 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::DateTimeOffset)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d594ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 101 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<::System::DateTimeOffset>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d59524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 118 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(double_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d59618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<double_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d59688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 109 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteUndefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteUndefined)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d59758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 83 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d597b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(float_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d59818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 91 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<float_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d59888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 108 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Guid)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d5994c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 102 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<::System::Guid>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d599c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 119 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int32_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d59ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 87 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d59b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 104 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int64_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d59bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 89 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<int64_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d59c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 106 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d59d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 123 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int8_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d59e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 98 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<int8_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d59eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 115 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(int16_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d59f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 94 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<int16_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d59fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 111 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d5a0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 86 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::TimeSpan)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d5a114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 103 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<::System::TimeSpan>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d5a184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 120 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint32_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d5a254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 88 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<uint32_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d5a2c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 105 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint64_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d5a388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 90 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<uint64_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d5a3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 107 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Uri*)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d5a4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 122 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(uint16_t)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d5a5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 95 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::System::Nullable_1<uint16_t>)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d5a614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 112 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteWhitespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteWhitespace)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d5a6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 125 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteComment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteComment)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d5a734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 124 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d5a790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 70 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteEndArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndArray)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d5a7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 71 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteStartConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartConstructor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d5a82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 72 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteEndConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndConstructor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d5a88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 73 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d5a8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WritePropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW, bool)>(
    &::Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d5a938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartObject)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d5a9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 68 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteEndObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndObject)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d5a9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 69 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteRawValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRawValue)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d5aa40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 85 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.WriteRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)(::StringW)>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRaw)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d5aab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 84 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::Close)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d5ab00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonWriter::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonWriter::Flush)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d5ab4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 66 }));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::JsonWriter*& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__innerWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerWriter;
}
constexpr ::Newtonsoft::Json::JsonWriter* const& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__innerWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____innerWriter;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_set__innerWriter(::Newtonsoft::Json::JsonWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____innerWriter = value;
}
constexpr ::Newtonsoft::Json::JsonTextWriter*& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__textWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textWriter;
}
constexpr ::Newtonsoft::Json::JsonTextWriter* const& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__textWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textWriter;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_set__textWriter(::Newtonsoft::Json::JsonTextWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textWriter = value;
}
constexpr ::System::IO::StringWriter*& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__sw() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sw;
}
constexpr ::System::IO::StringWriter* const& Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_get__sw() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sw;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonWriter::__cordl_internal_set__sw(::System::IO::StringWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sw = value;
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::_ctor(::Newtonsoft::Json::JsonWriter* innerWriter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerWriter);
}
inline ::StringW Newtonsoft::Json::Serialization::TraceJsonWriter::GetSerializedJsonMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), { "GetSerializedJsonMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Decimal value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 99 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<::System::Decimal> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 116 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<bool> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 110 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(uint8_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 97 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<uint8_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 114 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(char16_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 96 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<char16_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 113 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::ArrayW<uint8_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 121 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::DateTime value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 100 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<::System::DateTime> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 117 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::DateTimeOffset value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 101 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<::System::DateTimeOffset> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 118 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(double_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<double_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 109 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteUndefined() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 83 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteNull() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 91 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<float_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 108 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Guid value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 102 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<::System::Guid> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 119 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 87 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<int32_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 104 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 89 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<int64_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 106 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 123 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(int8_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 98 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<int8_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 115 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(int16_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 94 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<int16_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 111 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 86 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::TimeSpan value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 103 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<::System::TimeSpan> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 120 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(uint32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 88 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<uint32_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 105 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(uint64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 90 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<uint64_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 107 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Uri* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 122 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(uint16_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 95 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteValue(::System::Nullable_1<uint16_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 112 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteWhitespace(::StringW ws) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 125 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ws);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteComment(::StringW text) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 124 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartArray() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 70 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndArray() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 71 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartConstructor(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 72 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndConstructor() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 73 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName(::StringW name) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WritePropertyName(::StringW name, bool escape) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, escape);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteStartObject() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 68 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteEndObject() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 69 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRawValue(::StringW json) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 85 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::WriteRaw(::StringW json) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonWriter::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::TraceJsonWriter* Newtonsoft::Json::Serialization::TraceJsonWriter::New_ctor(::Newtonsoft::Json::JsonWriter* innerWriter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::TraceJsonWriter*>(innerWriter));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::TraceJsonWriter::TraceJsonWriter() {}
