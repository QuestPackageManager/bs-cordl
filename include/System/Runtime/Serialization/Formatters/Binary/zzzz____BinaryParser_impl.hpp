#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\__BinaryParser.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryCrossAppDomainString_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectString_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectWithMapTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObjectWithMap_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryObject_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberPrimitiveTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberPrimitiveUnTyped_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MemberReference_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnd_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectNull_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectProgress_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectReader_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerStack_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SizedArray_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::IO::Stream*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5b67384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_SystemAssemblyInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* (
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_SystemAssemblyInfo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b67480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "get_SystemAssemblyInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_ObjectMapIdTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::Formatters::Binary::SizedArray* (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_ObjectMapIdTable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b67524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "get_ObjectMapIdTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_AssemIdToAssemblyTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::Formatters::Binary::SizedArray* (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_AssemIdToAssemblyTable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b675f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "get_AssemIdToAssemblyTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.get_prs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ParseRecord* (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_prs)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b676d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "get_prs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::Run)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x5b60e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "Run", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBegin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBegin)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6772c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadBegin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadEnd)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b69348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBoolean
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBoolean)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b696dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadBoolean", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b696f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b69714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadBytes", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5b69734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b697ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadChar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChars)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b697c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadChars", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDecimal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b697e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSingle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b698a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadSingle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDouble)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b698c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b698e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadInt16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b69904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadInt32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b69924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadInt64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadSByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSByte)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b69944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadSByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b69960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadTimeSpan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadTimeSpan)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b69980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadTimeSpan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDateTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b699a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadDateTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadUInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b69a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadUInt16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadUInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt32)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b69a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadUInt32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadUInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt64)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b69a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadUInt64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadSerializationHeaderRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSerializationHeaderRecord)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5b67730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadSerializationHeaderRecord", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadAssembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadAssembly)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5b677e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadAssembly", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObject)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x5b67a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadCrossAppDomainMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadCrossAppDomainMap)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5b67d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadCrossAppDomainMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b67f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadObjectWithMap", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x5b69ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadObjectWithMap", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMapTyped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b67f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadObjectWithMapTyped", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectWithMapTyped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5b6a0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadObjectWithMapTyped", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectString)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x5b68020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadObjectString", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMemberPrimitiveTyped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveTyped)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5b68aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadMemberPrimitiveTyped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArray)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x5b68558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadArray", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadArrayAsBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArrayAsBytes)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5b6a4e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadArrayAsBytes", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMemberPrimitiveUnTyped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveUnTyped)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5b6934c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadMemberPrimitiveUnTyped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMemberReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberReference)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5b68e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadMemberReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadObjectNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectNull)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5b6900c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadObjectNull", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadMessageEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMessageEnd)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b691fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadMessageEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE)>(
        &::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadValue)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5b6a738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "ReadValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.GetOp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* (
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)()>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::GetOp)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5b69bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "GetOp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser.PutOp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::*)(
    ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*)>(&::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::PutOp)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5b69644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                             { "PutOp", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectReader;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectReader;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_objectReader(::System::Runtime::Serialization::Formatters::Binary::ObjectReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectReader = value;
}
constexpr ::System::IO::Stream*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_input() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr ::System::IO::Stream* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_input() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___input;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_input(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___input = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_topId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_topId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_topId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topId = value;
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_headerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerId;
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_headerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_headerId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headerId = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SizedArray*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectMapIdTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectMapIdTable;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SizedArray* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectMapIdTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectMapIdTable;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_objectMapIdTable(::System::Runtime::Serialization::Formatters::Binary::SizedArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectMapIdTable = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SizedArray*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_assemIdToAssemblyTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemIdToAssemblyTable;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SizedArray* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_assemIdToAssemblyTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemIdToAssemblyTable;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_assemIdToAssemblyTable(::System::Runtime::Serialization::Formatters::Binary::SizedArray* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemIdToAssemblyTable = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_stack(::System::Runtime::Serialization::Formatters::Binary::SerStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stack = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_expectedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedType;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_expectedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedType;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_expectedType(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expectedType = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_expectedTypeInformation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedTypeInformation;
}
constexpr ::System::Object* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_expectedTypeInformation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectedTypeInformation;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_expectedTypeInformation(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expectedTypeInformation = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_PRS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PRS;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_PRS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PRS;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_PRS(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PRS = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_systemAssemblyInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemAssemblyInfo;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_systemAssemblyInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemAssemblyInfo;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_systemAssemblyInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___systemAssemblyInfo = value;
}
constexpr ::System::IO::BinaryReader*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_dataReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataReader;
}
constexpr ::System::IO::BinaryReader* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_dataReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataReader;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_dataReader(::System::IO::BinaryReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataReader = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_opPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opPool;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_opPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opPool;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_opPool(::System::Runtime::Serialization::Formatters::Binary::SerStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opPool = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_binaryObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObject;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObject* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_binaryObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryObject;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_binaryObject(::System::Runtime::Serialization::Formatters::Binary::BinaryObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryObject = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_bowm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bowm;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_bowm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bowm;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_bowm(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bowm = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_bowmt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bowmt;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_bowmt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bowmt;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_bowmt(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bowmt = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectString;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectString;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_objectString(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectString = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString*&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_crossAppDomainString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crossAppDomainString;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_crossAppDomainString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___crossAppDomainString;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_crossAppDomainString(::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___crossAppDomainString = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberPrimitiveTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveTyped;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberPrimitiveTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveTyped;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_memberPrimitiveTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberPrimitiveTyped = value;
}
constexpr ::ArrayW<uint8_t>& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_byteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_byteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byteBuffer;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_byteBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byteBuffer = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped*&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberPrimitiveUnTyped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveUnTyped;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberPrimitiveUnTyped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberPrimitiveUnTyped;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_memberPrimitiveUnTyped(::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberPrimitiveUnTyped = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberReference;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MemberReference* const&
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_memberReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberReference;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_memberReference(::System::Runtime::Serialization::Formatters::Binary::MemberReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberReference = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull*& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectNull;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ObjectNull* const& System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_get_objectNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectNull;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__cordl_internal_set_objectNull(::System::Runtime::Serialization::Formatters::Binary::ObjectNull* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectNull = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::setStaticF_encoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "encoding", ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::getStaticF_encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "encoding", ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>();
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::setStaticF_messageEnd(::System::Runtime::Serialization::Formatters::Binary::MessageEnd* value) {
  ::cordl_internals::setStaticField<::System::Runtime::Serialization::Formatters::Binary::MessageEnd*, "messageEnd", ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(
      std::forward<::System::Runtime::Serialization::Formatters::Binary::MessageEnd*>(value));
}
inline ::System::Runtime::Serialization::Formatters::Binary::MessageEnd* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::getStaticF_messageEnd() {
  return ::cordl_internals::getStaticField<::System::Runtime::Serialization::Formatters::Binary::MessageEnd*, "messageEnd", ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>();
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::_ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, objectReader);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_SystemAssemblyInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "get_SystemAssemblyInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_ObjectMapIdTable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "get_ObjectMapIdTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::SizedArray*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_AssemIdToAssemblyTable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "get_AssemIdToAssemblyTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::SizedArray*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::get_prs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "get_prs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::Run() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "Run", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBegin() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadBegin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBoolean() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadBoolean", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint8_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadByte() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes(int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadBytes", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, length);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadBytes(::ArrayW<uint8_t> byteA, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, byteA, offset, size);
}
inline char16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChar() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadChar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
inline ::ArrayW<char16_t> System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadChars(int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadChars", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(this, ___internal_method, length);
}
inline ::System::Decimal System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDecimal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal>(this, ___internal_method);
}
inline float_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSingle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadSingle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDouble() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt16() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadInt16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt32() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadInt32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadInt64() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadInt64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int8_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSByte() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadSByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int8_t>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadTimeSpan() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadTimeSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::DateTime System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadDateTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadDateTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline uint16_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt16() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadUInt16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint32_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt32() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadUInt32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint64_t System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadUInt64() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadUInt64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadSerializationHeaderRecord() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadSerializationHeaderRecord", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadAssembly(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadAssembly", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadCrossAppDomainMap() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadCrossAppDomainMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadObjectWithMap", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* record) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadObjectWithMap", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadObjectWithMapTyped", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* record) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadObjectWithMapTyped", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, record);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectString(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadObjectString", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveTyped() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadMemberPrimitiveTyped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArray(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadArray", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadArrayAsBytes(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadArrayAsBytes", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pr);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberPrimitiveUnTyped() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadMemberPrimitiveUnTyped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMemberReference() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadMemberReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadObjectNull(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadObjectNull", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryHeaderEnum);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadMessageEnd() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "ReadMessageEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::ReadValue(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "ReadValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, code);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* System::Runtime::Serialization::Formatters::Binary::__BinaryParser::GetOp() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(), { "GetOp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::__BinaryParser::PutOp(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* op) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(),
                                                           { "PutOp", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*
System::Runtime::Serialization::Formatters::Binary::__BinaryParser::New_ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>(stream, objectReader));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser::__BinaryParser() {}
