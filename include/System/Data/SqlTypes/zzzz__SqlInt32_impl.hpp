#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlInt32.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt32_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlByte_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDouble_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt16_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt64_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt32::*)(bool)>(&::System::Data::SqlTypes::SqlInt32::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x608e6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt32::*)(int32_t)>(&::System::Data::SqlTypes::SqlInt32::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x608e6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlInt32::*)()>(&::System::Data::SqlTypes::SqlInt32::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6088b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlInt32::*)()>(&::System::Data::SqlTypes::SqlInt32::get_Value)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6088b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_Implicit___System__Data__SqlTypes__SqlInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt32 (*)(int32_t)>(&::System::Data::SqlTypes::SqlInt32::op_Implicit___System__Data__SqlTypes__SqlInt32)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x608e6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlInt32::*)()>(&::System::Data::SqlTypes::SqlInt32::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x608e6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt32 (*)(::System::Data::SqlTypes::SqlInt32)>(&::System::Data::SqlTypes::SqlInt32::op_UnaryNegation)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x608e788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt32 (*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlInt32::op_Addition)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x608e828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt32 (*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlInt32::op_Subtraction)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x608e96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt32 (*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlInt32::op_Multiply)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x608eaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt32 (*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlInt32::op_Division)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x608ebf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_Implicit___System__Data__SqlTypes__SqlInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt32 (*)(::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlInt32::op_Implicit___System__Data__SqlTypes__SqlInt32)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x608ed60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_Implicit___System__Data__SqlTypes__SqlInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt32 (*)(::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt32::op_Implicit___System__Data__SqlTypes__SqlInt32)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x608ee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_Explicit___System__Data__SqlTypes__SqlInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt32 (*)(::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt32::op_Explicit___System__Data__SqlTypes__SqlInt32)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x608ef14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.SameSignInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::System::Data::SqlTypes::SqlInt32::SameSignInt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x608e960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "SameSignInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlInt32::op_Equality)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x608f038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlInt32::op_LessThan)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x608f104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlInt32::op_GreaterThan)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x608f1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlInt32::LessThan)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x608f29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                             { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt32, ::System::Data::SqlTypes::SqlInt32)>(
    &::System::Data::SqlTypes::SqlInt32::GreaterThan)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x608f304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                             { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.ToSqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (::System::Data::SqlTypes::SqlInt32::*)()>(&::System::Data::SqlTypes::SqlInt32::ToSqlDouble)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x608f36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "ToSqlDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.ToSqlInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (::System::Data::SqlTypes::SqlInt32::*)()>(&::System::Data::SqlTypes::SqlInt32::ToSqlInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x608f3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "ToSqlInt64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlInt32::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlInt32::CompareTo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x608f4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlInt32::*)(::System::Data::SqlTypes::SqlInt32)>(&::System::Data::SqlTypes::SqlInt32::CompareTo)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x608f5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlInt32::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlInt32::Equals)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x608f740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlInt32::*)()>(&::System::Data::SqlTypes::SqlInt32::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x608f86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlInt32::*)()>(
    &::System::Data::SqlTypes::SqlInt32::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x608f8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt32::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlInt32::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x608f8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt32::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlInt32::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x608fa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt32.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlInt32::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x608fbbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlInt32::setStaticF_s_iIntMin(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_iIntMin", ::System::Data::SqlTypes::SqlInt32>(std::forward<int64_t>(value));
}
inline int64_t System::Data::SqlTypes::SqlInt32::getStaticF_s_iIntMin() {
  return ::cordl_internals::getStaticField<int64_t, "s_iIntMin", ::System::Data::SqlTypes::SqlInt32>();
}
inline void System::Data::SqlTypes::SqlInt32::setStaticF_s_lBitNotIntMax(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_lBitNotIntMax", ::System::Data::SqlTypes::SqlInt32>(std::forward<int64_t>(value));
}
inline int64_t System::Data::SqlTypes::SqlInt32::getStaticF_s_lBitNotIntMax() {
  return ::cordl_internals::getStaticField<int64_t, "s_lBitNotIntMax", ::System::Data::SqlTypes::SqlInt32>();
}
inline void System::Data::SqlTypes::SqlInt32::setStaticF_Null(::System::Data::SqlTypes::SqlInt32 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt32, "Null", ::System::Data::SqlTypes::SqlInt32>(std::forward<::System::Data::SqlTypes::SqlInt32>(value));
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt32, "Null", ::System::Data::SqlTypes::SqlInt32>();
}
inline void System::Data::SqlTypes::SqlInt32::setStaticF_Zero(::System::Data::SqlTypes::SqlInt32 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt32, "Zero", ::System::Data::SqlTypes::SqlInt32>(std::forward<::System::Data::SqlTypes::SqlInt32>(value));
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt32, "Zero", ::System::Data::SqlTypes::SqlInt32>();
}
inline void System::Data::SqlTypes::SqlInt32::setStaticF_MinValue(::System::Data::SqlTypes::SqlInt32 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt32, "MinValue", ::System::Data::SqlTypes::SqlInt32>(std::forward<::System::Data::SqlTypes::SqlInt32>(value));
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt32, "MinValue", ::System::Data::SqlTypes::SqlInt32>();
}
inline void System::Data::SqlTypes::SqlInt32::setStaticF_MaxValue(::System::Data::SqlTypes::SqlInt32 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt32, "MaxValue", ::System::Data::SqlTypes::SqlInt32>(std::forward<::System::Data::SqlTypes::SqlInt32>(value));
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt32, "MaxValue", ::System::Data::SqlTypes::SqlInt32>();
}
inline void System::Data::SqlTypes::SqlInt32::_ctor(bool fNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fNull);
}
inline void System::Data::SqlTypes::SqlInt32::_ctor(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlInt32::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlInt32::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::op_Implicit___System__Data__SqlTypes__SqlInt32(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt32>(nullptr, ___internal_method, x);
}
inline ::StringW System::Data::SqlTypes::SqlInt32::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::op_UnaryNegation(::System::Data::SqlTypes::SqlInt32 x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt32>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::op_Addition(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt32>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::op_Subtraction(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt32>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::op_Multiply(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt32>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::op_Division(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt32>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::op_Implicit___System__Data__SqlTypes__SqlInt32(::System::Data::SqlTypes::SqlByte x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt32>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::op_Implicit___System__Data__SqlTypes__SqlInt32(::System::Data::SqlTypes::SqlInt16 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt32>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlInt32 System::Data::SqlTypes::SqlInt32::op_Explicit___System__Data__SqlTypes__SqlInt32(::System::Data::SqlTypes::SqlInt64 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt32>(nullptr, ___internal_method, x);
}
inline bool System::Data::SqlTypes::SqlInt32::SameSignInt(int32_t x, int32_t y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "SameSignInt", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt32::op_Equality(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt32::op_LessThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                           { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt32::op_GreaterThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt32::LessThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                           { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt32::GreaterThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(),
                                                           { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlInt32::ToSqlDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "ToSqlDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt32::ToSqlInt64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "ToSqlInt64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlInt32::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlInt32::CompareTo(::System::Data::SqlTypes::SqlInt32 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt32>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlInt32::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlInt32::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlInt32::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlInt32::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlInt32::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlInt32::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt32>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlInt32::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlInt32::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlInt32::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlInt32::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlInt32::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlInt32::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlInt32::SqlInt32(bool m_fNotNull, int32_t m_value) noexcept {
  this->m_fNotNull = m_fNotNull;
  this->m_value = m_value;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlInt32::SqlInt32() {}
