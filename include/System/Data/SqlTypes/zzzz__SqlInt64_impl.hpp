#pragma once
// IWYU pragma private; include "System\Data\SqlTypes\SqlInt64.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt64_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlByte_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDecimal_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDouble_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt16_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt32_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt64::*)(bool)>(&::System::Data::SqlTypes::SqlInt64::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60954e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt64::*)(int64_t)>(&::System::Data::SqlTypes::SqlInt64::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60954f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlInt64::*)()>(&::System::Data::SqlTypes::SqlInt64::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6086088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::SqlTypes::SqlInt64::*)()>(&::System::Data::SqlTypes::SqlInt64::get_Value)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6086098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Implicit___System__Data__SqlTypes__SqlInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(int64_t)>(&::System::Data::SqlTypes::SqlInt64::op_Implicit___System__Data__SqlTypes__SqlInt64)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6095500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlInt64::*)()>(&::System::Data::SqlTypes::SqlInt64::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x609550c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(::System::Data::SqlTypes::SqlInt64)>(&::System::Data::SqlTypes::SqlInt64::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x60955b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt64::op_Addition)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6095640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt64::op_Subtraction)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x609578c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt64::op_Multiply)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x60958c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt64::op_Division)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6095a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt64::op_Modulus)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6095b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                             { "op_Modulus", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Implicit___System__Data__SqlTypes__SqlInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlInt64::op_Implicit___System__Data__SqlTypes__SqlInt64)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x608659c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Implicit___System__Data__SqlTypes__SqlInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt64::op_Implicit___System__Data__SqlTypes__SqlInt64)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x609362c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Implicit___System__Data__SqlTypes__SqlInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlInt64::op_Implicit___System__Data__SqlTypes__SqlInt64)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6094c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Explicit___System__Data__SqlTypes__SqlInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (*)(::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlInt64::op_Explicit___System__Data__SqlTypes__SqlInt64)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x608f434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.SameSignLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, int64_t)>(&::System::Data::SqlTypes::SqlInt64::SameSignLong)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x609577c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "SameSignLong", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt64::op_Equality)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6095cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt64::op_LessThan)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6095d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt64::op_GreaterThan)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6095e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt64::LessThan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6095f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                             { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt64, ::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt64::GreaterThan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6095fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                             { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.ToSqlByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlByte (::System::Data::SqlTypes::SqlInt64::*)()>(&::System::Data::SqlTypes::SqlInt64::ToSqlByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6096040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "ToSqlByte", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.ToSqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (::System::Data::SqlTypes::SqlInt64::*)()>(&::System::Data::SqlTypes::SqlInt64::ToSqlDouble)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60960a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "ToSqlDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.ToSqlInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt16 (::System::Data::SqlTypes::SqlInt64::*)()>(&::System::Data::SqlTypes::SqlInt64::ToSqlInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6096100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "ToSqlInt16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.ToSqlInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt32 (::System::Data::SqlTypes::SqlInt64::*)()>(&::System::Data::SqlTypes::SqlInt64::ToSqlInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6096160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "ToSqlInt32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.ToSqlDecimal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDecimal (::System::Data::SqlTypes::SqlInt64::*)()>(&::System::Data::SqlTypes::SqlInt64::ToSqlDecimal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60961c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "ToSqlDecimal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlInt64::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlInt64::CompareTo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x609624c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlInt64::*)(::System::Data::SqlTypes::SqlInt64)>(&::System::Data::SqlTypes::SqlInt64::CompareTo)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6096350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlInt64::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlInt64::Equals)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x60964c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlInt64::*)()>(&::System::Data::SqlTypes::SqlInt64::GetHashCode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6096604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlInt64::*)()>(
    &::System::Data::SqlTypes::SqlInt64::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6096688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt64::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlInt64::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6096690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt64::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlInt64::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x60967cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt64.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlInt64::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6096958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlInt64::setStaticF_s_lLowIntMask(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_lLowIntMask", ::System::Data::SqlTypes::SqlInt64>(std::forward<int64_t>(value));
}
inline int64_t System::Data::SqlTypes::SqlInt64::getStaticF_s_lLowIntMask() {
  return ::cordl_internals::getStaticField<int64_t, "s_lLowIntMask", ::System::Data::SqlTypes::SqlInt64>();
}
inline void System::Data::SqlTypes::SqlInt64::setStaticF_s_lHighIntMask(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_lHighIntMask", ::System::Data::SqlTypes::SqlInt64>(std::forward<int64_t>(value));
}
inline int64_t System::Data::SqlTypes::SqlInt64::getStaticF_s_lHighIntMask() {
  return ::cordl_internals::getStaticField<int64_t, "s_lHighIntMask", ::System::Data::SqlTypes::SqlInt64>();
}
inline void System::Data::SqlTypes::SqlInt64::setStaticF_Null(::System::Data::SqlTypes::SqlInt64 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt64, "Null", ::System::Data::SqlTypes::SqlInt64>(std::forward<::System::Data::SqlTypes::SqlInt64>(value));
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt64, "Null", ::System::Data::SqlTypes::SqlInt64>();
}
inline void System::Data::SqlTypes::SqlInt64::setStaticF_Zero(::System::Data::SqlTypes::SqlInt64 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt64, "Zero", ::System::Data::SqlTypes::SqlInt64>(std::forward<::System::Data::SqlTypes::SqlInt64>(value));
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt64, "Zero", ::System::Data::SqlTypes::SqlInt64>();
}
inline void System::Data::SqlTypes::SqlInt64::setStaticF_MinValue(::System::Data::SqlTypes::SqlInt64 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt64, "MinValue", ::System::Data::SqlTypes::SqlInt64>(std::forward<::System::Data::SqlTypes::SqlInt64>(value));
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt64, "MinValue", ::System::Data::SqlTypes::SqlInt64>();
}
inline void System::Data::SqlTypes::SqlInt64::setStaticF_MaxValue(::System::Data::SqlTypes::SqlInt64 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt64, "MaxValue", ::System::Data::SqlTypes::SqlInt64>(std::forward<::System::Data::SqlTypes::SqlInt64>(value));
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt64, "MaxValue", ::System::Data::SqlTypes::SqlInt64>();
}
inline void System::Data::SqlTypes::SqlInt64::_ctor(bool fNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fNull);
}
inline void System::Data::SqlTypes::SqlInt64::_ctor(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlInt64::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int64_t System::Data::SqlTypes::SqlInt64::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_Implicit___System__Data__SqlTypes__SqlInt64(int64_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_Implicit", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x);
}
inline ::StringW System::Data::SqlTypes::SqlInt64::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_UnaryNegation(::System::Data::SqlTypes::SqlInt64 x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_Addition(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_Subtraction(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_Multiply(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_Division(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_Modulus(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                           { "op_Modulus", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_Implicit___System__Data__SqlTypes__SqlInt64(::System::Data::SqlTypes::SqlByte x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_Implicit___System__Data__SqlTypes__SqlInt64(::System::Data::SqlTypes::SqlInt16 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_Implicit___System__Data__SqlTypes__SqlInt64(::System::Data::SqlTypes::SqlInt32 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt64::op_Explicit___System__Data__SqlTypes__SqlInt64(::System::Data::SqlTypes::SqlDecimal x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(nullptr, ___internal_method, x);
}
inline bool System::Data::SqlTypes::SqlInt64::SameSignLong(int64_t x, int64_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "SameSignLong", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt64::op_Equality(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt64::op_LessThan(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                           { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt64::op_GreaterThan(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt64::LessThan(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                           { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt64::GreaterThan(::System::Data::SqlTypes::SqlInt64 x, ::System::Data::SqlTypes::SqlInt64 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(),
                                                           { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlInt64::ToSqlByte() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "ToSqlByte", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlByte>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlInt64::ToSqlDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "ToSqlDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt64::ToSqlInt16() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "ToSqlInt16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt16>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt64::ToSqlInt32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "ToSqlInt32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt32>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlDecimal System::Data::SqlTypes::SqlInt64::ToSqlDecimal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "ToSqlDecimal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDecimal>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlInt64::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlInt64::CompareTo(::System::Data::SqlTypes::SqlInt64 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlInt64::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlInt64::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlInt64::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlInt64::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlInt64::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlInt64::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt64>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlInt64::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlInt64::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlInt64::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlInt64::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlInt64::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlInt64::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_value", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlInt64::SqlInt64(bool m_fNotNull, int64_t m_value) noexcept {
  this->m_fNotNull = m_fNotNull;
  this->m_value = m_value;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlInt64::SqlInt64() {}
