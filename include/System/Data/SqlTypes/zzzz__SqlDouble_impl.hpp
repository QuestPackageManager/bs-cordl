#pragma once
// IWYU pragma private; include "System\Data\SqlTypes\SqlDouble.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDouble_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlByte_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDecimal_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt16_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt32_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt64_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlMoney_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlSingle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDouble::*)(bool)>(&::System::Data::SqlTypes::SqlDouble::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x609035c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDouble::*)(double_t)>(&::System::Data::SqlTypes::SqlDouble::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6090368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDouble::*)()>(&::System::Data::SqlTypes::SqlDouble::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60903d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Data::SqlTypes::SqlDouble::*)()>(&::System::Data::SqlTypes::SqlDouble::get_Value)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x60903e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Implicit___System__Data__SqlTypes__SqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(double_t)>(&::System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6090428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlDouble::*)()>(&::System::Data::SqlTypes::SqlDouble::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x609044c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlDouble)>(&::System::Data::SqlTypes::SqlDouble::op_UnaryNegation)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60904f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble)>(
    &::System::Data::SqlTypes::SqlDouble::op_Addition)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x609059c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble)>(
    &::System::Data::SqlTypes::SqlDouble::op_Subtraction)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x60906cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble)>(
    &::System::Data::SqlTypes::SqlDouble::op_Multiply)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x60907fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble)>(
    &::System::Data::SqlTypes::SqlDouble::op_Division)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x609092c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Implicit___System__Data__SqlTypes__SqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x608646c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Implicit___System__Data__SqlTypes__SqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6090a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Implicit___System__Data__SqlTypes__SqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6090b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Implicit___System__Data__SqlTypes__SqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6090c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Implicit___System__Data__SqlTypes__SqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlSingle)>(
    &::System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6090d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Implicit___System__Data__SqlTypes__SqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlMoney)>(
    &::System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6090e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlMoney>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Implicit___System__Data__SqlTypes__SqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (*)(::System::Data::SqlTypes::SqlDecimal)>(
    &::System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x608f2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble)>(
    &::System::Data::SqlTypes::SqlDouble::op_Equality)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6090f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble)>(
    &::System::Data::SqlTypes::SqlDouble::op_LessThan)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x609106c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble)>(
    &::System::Data::SqlTypes::SqlDouble::op_GreaterThan)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6091148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble)>(
    &::System::Data::SqlTypes::SqlDouble::LessThan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6091224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                             { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlDouble, ::System::Data::SqlTypes::SqlDouble)>(
    &::System::Data::SqlTypes::SqlDouble::GreaterThan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60912a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                             { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.ToSqlSingle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlSingle (::System::Data::SqlTypes::SqlDouble::*)()>(&::System::Data::SqlTypes::SqlDouble::ToSqlSingle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6091324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "ToSqlSingle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDouble::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlDouble::CompareTo)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x609144c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDouble::*)(::System::Data::SqlTypes::SqlDouble)>(&::System::Data::SqlTypes::SqlDouble::CompareTo)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6091550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlDouble::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlDouble::Equals)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x60916c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlDouble::*)()>(&::System::Data::SqlTypes::SqlDouble::GetHashCode)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6091804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlDouble::*)()>(
    &::System::Data::SqlTypes::SqlDouble::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x609189c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDouble::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlDouble::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x60918a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlDouble::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlDouble::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x60919d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlDouble.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlDouble::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6091b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlDouble::setStaticF_Null(::System::Data::SqlTypes::SqlDouble value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDouble, "Null", ::System::Data::SqlTypes::SqlDouble>(std::forward<::System::Data::SqlTypes::SqlDouble>(value));
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDouble, "Null", ::System::Data::SqlTypes::SqlDouble>();
}
inline void System::Data::SqlTypes::SqlDouble::setStaticF_Zero(::System::Data::SqlTypes::SqlDouble value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDouble, "Zero", ::System::Data::SqlTypes::SqlDouble>(std::forward<::System::Data::SqlTypes::SqlDouble>(value));
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDouble, "Zero", ::System::Data::SqlTypes::SqlDouble>();
}
inline void System::Data::SqlTypes::SqlDouble::setStaticF_MinValue(::System::Data::SqlTypes::SqlDouble value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDouble, "MinValue", ::System::Data::SqlTypes::SqlDouble>(std::forward<::System::Data::SqlTypes::SqlDouble>(value));
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDouble, "MinValue", ::System::Data::SqlTypes::SqlDouble>();
}
inline void System::Data::SqlTypes::SqlDouble::setStaticF_MaxValue(::System::Data::SqlTypes::SqlDouble value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlDouble, "MaxValue", ::System::Data::SqlTypes::SqlDouble>(std::forward<::System::Data::SqlTypes::SqlDouble>(value));
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlDouble, "MaxValue", ::System::Data::SqlTypes::SqlDouble>();
}
inline void System::Data::SqlTypes::SqlDouble::_ctor(bool fNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fNull);
}
inline void System::Data::SqlTypes::SqlDouble::_ctor(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlDouble::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline double_t System::Data::SqlTypes::SqlDouble::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble(double_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x);
}
inline ::StringW System::Data::SqlTypes::SqlDouble::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_UnaryNegation(::System::Data::SqlTypes::SqlDouble x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Addition(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Subtraction(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                              { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Multiply(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Division(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlByte x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlInt16 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlInt32 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlInt64 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlSingle x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlSingle>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlMoney x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlMoney>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlDouble::op_Implicit___System__Data__SqlTypes__SqlDouble(::System::Data::SqlTypes::SqlDecimal x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDecimal>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDouble::op_Equality(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDouble::op_LessThan(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                           { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDouble::op_GreaterThan(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                              { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDouble::LessThan(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                           { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlDouble::GreaterThan(::System::Data::SqlTypes::SqlDouble x, ::System::Data::SqlTypes::SqlDouble y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(),
                                                           { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>(), ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlSingle System::Data::SqlTypes::SqlDouble::ToSqlSingle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "ToSqlSingle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlSingle>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlDouble::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlDouble::CompareTo(::System::Data::SqlTypes::SqlDouble value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlDouble>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlDouble::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlDouble::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlDouble::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlDouble::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlDouble::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlDouble::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlDouble>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlDouble::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlDouble::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlDouble::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlDouble::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlDouble::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlDouble::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_value", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlDouble::SqlDouble(bool m_fNotNull, double_t m_value) noexcept {
  this->m_fNotNull = m_fNotNull;
  this->m_value = m_value;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlDouble::SqlDouble() {}
