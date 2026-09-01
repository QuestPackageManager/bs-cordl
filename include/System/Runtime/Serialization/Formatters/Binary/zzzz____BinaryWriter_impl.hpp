#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\__BinaryWriter.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryArray_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssembly_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryMethodCall_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryMethodReturn_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectString_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectWithMapTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectWithMap_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObject_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberPrimitiveTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberPrimitiveUnTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberReference_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__NameInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectNull_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectWriter_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__WriteObjectInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterTypeStyle_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::IO::Stream*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Runtime::Serialization::Formatters::FormatterTypeStyle)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b5c364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::FormatterTypeStyle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBegin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5c724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteBegin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteEnd)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b5c728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(bool)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBoolean)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5c744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteBoolean", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(uint8_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b56ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteByte", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::ArrayW<uint8_t>)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBytes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5c764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBytes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5c784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                             { "WriteBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(char16_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteChar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5c7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::ArrayW<char16_t>)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteChars)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5c7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::System::Decimal)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDecimal)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b5c7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteDecimal", {}, { ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(float_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSingle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5c8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteSingle", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(double_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5c904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteDouble", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(int16_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5c924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteInt16", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5702c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteInt32", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(int64_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5c944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteInt64", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(int8_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b5c964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteSByte", {}, { ::i2c::type_of<int8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5700c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::System::TimeSpan)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteTimeSpan)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b5c980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteTimeSpan", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::System::DateTime)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDateTime)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5b5c9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteDateTime", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(uint16_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5ca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteUInt16", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(uint32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5ca98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteUInt32", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(uint64_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b5cab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteUInt64", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteObjectEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
                                                                                                                                      ::System::Runtime::Serialization::Formatters::Binary::NameInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5cad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                           { "WriteObjectEnd",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteSerializationHeaderEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSerializationHeaderEnd)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b5cadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteSerializationHeaderEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteSerializationHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSerializationHeader)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b5cb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                { "WriteSerializationHeader", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteMethodCall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMethodCall)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b5cbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteMethodCall", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteMethodReturn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMethodReturn)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b5cc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteMethodReturn", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, int32_t, ::ArrayW<::StringW>, ::ArrayW<::System::Type*>,
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObject)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5b5cc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                         { "WriteObject",
                                           {},
                                           { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                             ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                             ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteObjectString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(int32_t, ::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b5d1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                           { "WriteObjectString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteSingleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, int32_t, int32_t, ::System::Array*)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSingleArray)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5b5d234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                           { "WriteSingleArray",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteArrayAsBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::System::Array*, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteArrayAsBytes)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5b5d544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                           { "WriteArrayAsBytes", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteJaggedArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, int32_t, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteJaggedArray)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5b5d688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                            { "WriteJaggedArray",
                              {},
                              { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteRectangleArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, int32_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteRectangleArray)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5b5d808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
            { "WriteRectangleArray",
              {},
              { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteObjectByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, int32_t, int32_t, ::ArrayW<uint8_t>)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectByteArray)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b5d960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                           { "WriteObjectByteArray",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMember)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5b5d9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                             { "WriteMember",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteNullMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
                                                                                                                                      ::System::Runtime::Serialization::Formatters::Binary::NameInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteNullMember)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b5dac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                           { "WriteNullMember",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteMemberObjectRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, int32_t)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberObjectRef)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b5db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                { "WriteMemberObjectRef", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteMemberNested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::System::Runtime::Serialization::Formatters::Binary::NameInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberNested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b5dbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                             { "WriteMemberNested", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteMemberString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::StringW)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b5dbf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                             { "WriteMemberString",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, ::System::Object*)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItem)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5b5dc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                             { "WriteItem",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteNullItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::System::Runtime::Serialization::Formatters::Binary::NameInfo*,
                                                                                                                                      ::System::Runtime::Serialization::Formatters::Binary::NameInfo*)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteNullItem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5dc7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                           { "WriteNullItem",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteDelayedNullItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDelayedNullItem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b5dc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteDelayedNullItem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteItemEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItemEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b5dc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteItemEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.InternalWriteItemNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::InternalWriteItemNull)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b5d130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "InternalWriteItemNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteItemObjectRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::NameInfo*, int32_t)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItemObjectRef)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b5dca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                { "WriteItemObjectRef", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(::System::Type*, ::StringW, int32_t, bool)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteAssembly)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b5dcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                { "WriteAssembly", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter.WriteValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::*)(
    ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Object*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteValue)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0x5b5796c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                            { "WriteValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_sout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sout;
}
constexpr ::System::IO::Stream* const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_sout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sout;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_sout(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sout = value;
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_formatterTypeStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatterTypeStyle;
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterTypeStyle const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_formatterTypeStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___formatterTypeStyle;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_formatterTypeStyle(::System::Runtime::Serialization::Formatters::FormatterTypeStyle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___formatterTypeStyle = value;
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_objectMapTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectMapTable;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_objectMapTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectMapTable;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_objectMapTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectMapTable = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_objectWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectWriter;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_objectWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectWriter;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_objectWriter(::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectWriter = value;
}
constexpr ::System::IO::BinaryWriter*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_dataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataWriter;
}
constexpr ::System::IO::BinaryWriter* const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_dataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataWriter;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_dataWriter(::System::IO::BinaryWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataWriter = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_m_nestedObjectCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nestedObjectCount;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_m_nestedObjectCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_nestedObjectCount;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_m_nestedObjectCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_nestedObjectCount = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_nullCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nullCount;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_nullCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nullCount;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_nullCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nullCount = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryMethodCall() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryMethodCall;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryMethodCall() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryMethodCall;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_binaryMethodCall(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryMethodCall = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryMethodReturn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryMethodReturn;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryMethodReturn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryMethodReturn;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_binaryMethodReturn(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryMethodReturn = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObject;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject* const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObject;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_binaryObject(::System::Runtime::Serialization::Formatters::Binary::BinaryObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryObject = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryObjectWithMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObjectWithMap;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryObjectWithMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObjectWithMap;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_binaryObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryObjectWithMap = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*&
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryObjectWithMapTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObjectWithMapTyped;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryObjectWithMapTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObjectWithMapTyped;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_binaryObjectWithMapTyped(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryObjectWithMapTyped = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryObjectString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObjectString;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryObjectString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObjectString;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_binaryObjectString(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryObjectString = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArray*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryArray;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArray* const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryArray;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_binaryArray(::System::Runtime::Serialization::Formatters::Binary::BinaryArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryArray = value;
}
constexpr ::ArrayW<uint8_t>& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_byteBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteBuffer = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_chunkSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkSize;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_chunkSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chunkSize;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_chunkSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chunkSize = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*&
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_memberPrimitiveUnTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveUnTyped;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_memberPrimitiveUnTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveUnTyped;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_memberPrimitiveUnTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberPrimitiveUnTyped = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_memberPrimitiveTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveTyped;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_memberPrimitiveTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveTyped;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_memberPrimitiveTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberPrimitiveTyped = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_objectNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectNull;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull* const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_objectNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectNull;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_objectNull(::System::Runtime::Serialization::Formatters::Binary::ObjectNull* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectNull = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_memberReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberReference;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_memberReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberReference;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_memberReference(::System::Runtime::Serialization::Formatters::Binary::MemberReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberReference = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly*& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryAssembly;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* const& System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_get_binaryAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryAssembly;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__cordl_internal_set_binaryAssembly(::System::Runtime::Serialization::Formatters::Binary::BinaryAssembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryAssembly = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::_ctor(::System::IO::Stream* sout, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                                                                                      ::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::FormatterTypeStyle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sout, objectWriter, formatterTypeStyle);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBegin() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteBegin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBoolean(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteBoolean", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteByte(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteByte", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBytes(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteBytes(::ArrayW<uint8_t> byteA, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                           { "WriteBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byteA, offset, size);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteChar(char16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteChars(::ArrayW<char16_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDecimal(::System::Decimal value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteDecimal", {}, { ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSingle(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteSingle", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDouble(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteDouble", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt16(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteInt16", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt32(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteInt32", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteInt64(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteInt64", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSByte(int8_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteSByte", {}, { ::i2c::type_of<int8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteString(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteTimeSpan(::System::TimeSpan value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteTimeSpan", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDateTime(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteDateTime", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt16(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteUInt16", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt32(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteUInt32", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteUInt64(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteUInt64", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectEnd(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                               ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                         { "WriteObjectEnd",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNameInfo, typeNameInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSerializationHeaderEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteSerializationHeaderEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSerializationHeader(int32_t topId, int32_t headerId, int32_t minorVersion, int32_t majorVersion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                              { "WriteSerializationHeader", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topId, headerId, minorVersion, majorVersion);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMethodCall() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteMethodCall", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMethodReturn() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteMethodReturn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObject(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo,
                                                                                            ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, int32_t numMembers,
                                                                                            ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type*> memberTypes,
                                                                                            ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*> memberObjectInfos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                       { "WriteObject",
                                         {},
                                         { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                           ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                           ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameInfo, typeNameInfo, numMembers, memberNames, memberTypes, memberObjectInfos);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectString(int32_t objectId, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                         { "WriteObjectString", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objectId, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteSingleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                                 ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                                                                                                 ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                                 ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length,
                                                                                                 int32_t lowerBound, ::System::Array* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                       { "WriteSingleArray",
                         {},
                         { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                           ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNameInfo, arrayNameInfo, objectInfo, arrayElemTypeNameInfo, length, lowerBound, array);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteArrayAsBytes(::System::Array* array, int32_t typeLength) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                         { "WriteArrayAsBytes", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, typeLength);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteJaggedArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                                 ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                                                                                                 ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                                 ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t length,
                                                                                                 int32_t lowerBound) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                          { "WriteJaggedArray",
                            {},
                            { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(),
                              ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNameInfo, arrayNameInfo, objectInfo, arrayElemTypeNameInfo, length, lowerBound);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteRectangleArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                                    ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                                                                                                    ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                                    ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo, int32_t rank,
                                                                                                    ::ArrayW<int32_t> lengthA, ::ArrayW<int32_t> lowerBoundA) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                       { "WriteRectangleArray",
                         {},
                         { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                           ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNameInfo, arrayNameInfo, objectInfo, arrayElemTypeNameInfo, rank, lengthA, lowerBoundA);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteObjectByteArray(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                                     ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayNameInfo,
                                                                                                     ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo,
                                                                                                     ::System::Runtime::Serialization::Formatters::Binary::NameInfo* arrayElemTypeNameInfo,
                                                                                                     int32_t length, int32_t lowerBound, ::ArrayW<uint8_t> byteA) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                       { "WriteObjectByteArray",
                         {},
                         { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                           ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                           ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNameInfo, arrayNameInfo, objectInfo, arrayElemTypeNameInfo, length, lowerBound, byteA);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                            ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                           { "WriteMember",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNameInfo, typeNameInfo, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteNullMember(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                                ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                         { "WriteNullMember",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNameInfo, typeNameInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo, int32_t idRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                              { "WriteMemberObjectRef", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNameInfo, idRef);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberNested(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                           { "WriteMemberNested", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNameInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteMemberString(::System::Runtime::Serialization::Formatters::Binary::NameInfo* memberNameInfo,
                                                                                                  ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                           { "WriteMemberString",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberNameInfo, typeNameInfo, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo,
                                                                                          ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                           { "WriteItem",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemNameInfo, typeNameInfo, value);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteNullItem(::System::Runtime::Serialization::Formatters::Binary::NameInfo* itemNameInfo,
                                                                                              ::System::Runtime::Serialization::Formatters::Binary::NameInfo* typeNameInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                                                                         { "WriteNullItem",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemNameInfo, typeNameInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteDelayedNullItem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteDelayedNullItem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItemEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "WriteItemEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::InternalWriteItemNull() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(), { "InternalWriteItemNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteItemObjectRef(::System::Runtime::Serialization::Formatters::Binary::NameInfo* nameInfo, int32_t idRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                              { "WriteItemObjectRef", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameInfo, idRef);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteAssembly(::System::Type* type, ::StringW assemblyString, int32_t assemId, bool isNew) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                              { "WriteAssembly", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, assemblyString, assemId, isNew);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::WriteValue(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(),
                                       { "WriteValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, value);
}
inline ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*
System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::New_ctor(::System::IO::Stream* sout, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter,
                                                                             ::System::Runtime::Serialization::Formatters::FormatterTypeStyle formatterTypeStyle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>(sout, objectWriter, formatterTypeStyle));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter::__BinaryWriter() {}
