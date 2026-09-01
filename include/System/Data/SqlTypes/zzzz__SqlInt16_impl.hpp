#pragma once
// IWYU pragma private; include "System\Data\SqlTypes\SqlInt16.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt16_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlByte_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlDouble_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlInt64_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt16::*)(bool)>(&::System::Data::SqlTypes::SqlInt16::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60929f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt16::*)(int16_t)>(&::System::Data::SqlTypes::SqlInt16::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6092a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { ".ctor", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlInt16::*)()>(&::System::Data::SqlTypes::SqlInt16::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x608e228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Data::SqlTypes::SqlInt16::*)()>(&::System::Data::SqlTypes::SqlInt16::get_Value)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x608e238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_Implicit___System__Data__SqlTypes__SqlInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt16 (*)(int16_t)>(&::System::Data::SqlTypes::SqlInt16::op_Implicit___System__Data__SqlTypes__SqlInt16)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6092a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "op_Implicit", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlInt16::*)()>(&::System::Data::SqlTypes::SqlInt16::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6092a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_UnaryNegation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt16 (*)(::System::Data::SqlTypes::SqlInt16)>(&::System::Data::SqlTypes::SqlInt16::op_UnaryNegation)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6092ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt16 (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt16::op_Addition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6092b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt16 (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt16::op_Subtraction)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6092c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt16 (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt16::op_Multiply)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6092d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt16 (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt16::op_Division)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6092ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_Implicit___System__Data__SqlTypes__SqlInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt16 (*)(::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlInt16::op_Implicit___System__Data__SqlTypes__SqlInt16)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6093050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_Explicit___System__Data__SqlTypes__SqlInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt16 (*)(::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlInt16::op_Explicit___System__Data__SqlTypes__SqlInt16)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6093128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt16::op_Equality)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x609324c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt16::op_LessThan)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6093314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt16::op_GreaterThan)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60933dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt16::LessThan)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60934a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                             { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlInt16, ::System::Data::SqlTypes::SqlInt16)>(
    &::System::Data::SqlTypes::SqlInt16::GreaterThan)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x609350c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                             { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.ToSqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (::System::Data::SqlTypes::SqlInt16::*)()>(&::System::Data::SqlTypes::SqlInt16::ToSqlDouble)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6093574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "ToSqlDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.ToSqlInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (::System::Data::SqlTypes::SqlInt16::*)()>(&::System::Data::SqlTypes::SqlInt16::ToSqlInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60935d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "ToSqlInt64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlInt16::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlInt16::CompareTo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x60936ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlInt16::*)(::System::Data::SqlTypes::SqlInt16)>(&::System::Data::SqlTypes::SqlInt16::CompareTo)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x60937ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlInt16::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlInt16::Equals)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6093948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlInt16::*)()>(&::System::Data::SqlTypes::SqlInt16::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6093a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlInt16::*)()>(
    &::System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6093af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt16::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6093afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlInt16::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6093c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlInt16.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlInt16::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6093dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlInt16::setStaticF_s_MASKI2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_MASKI2", ::System::Data::SqlTypes::SqlInt16>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlInt16::getStaticF_s_MASKI2() {
  return ::cordl_internals::getStaticField<int32_t, "s_MASKI2", ::System::Data::SqlTypes::SqlInt16>();
}
inline void System::Data::SqlTypes::SqlInt16::setStaticF_Null(::System::Data::SqlTypes::SqlInt16 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt16, "Null", ::System::Data::SqlTypes::SqlInt16>(std::forward<::System::Data::SqlTypes::SqlInt16>(value));
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt16, "Null", ::System::Data::SqlTypes::SqlInt16>();
}
inline void System::Data::SqlTypes::SqlInt16::setStaticF_Zero(::System::Data::SqlTypes::SqlInt16 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt16, "Zero", ::System::Data::SqlTypes::SqlInt16>(std::forward<::System::Data::SqlTypes::SqlInt16>(value));
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt16, "Zero", ::System::Data::SqlTypes::SqlInt16>();
}
inline void System::Data::SqlTypes::SqlInt16::setStaticF_MinValue(::System::Data::SqlTypes::SqlInt16 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt16, "MinValue", ::System::Data::SqlTypes::SqlInt16>(std::forward<::System::Data::SqlTypes::SqlInt16>(value));
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt16, "MinValue", ::System::Data::SqlTypes::SqlInt16>();
}
inline void System::Data::SqlTypes::SqlInt16::setStaticF_MaxValue(::System::Data::SqlTypes::SqlInt16 value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlInt16, "MaxValue", ::System::Data::SqlTypes::SqlInt16>(std::forward<::System::Data::SqlTypes::SqlInt16>(value));
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlInt16, "MaxValue", ::System::Data::SqlTypes::SqlInt16>();
}
inline void System::Data::SqlTypes::SqlInt16::_ctor(bool fNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fNull);
}
inline void System::Data::SqlTypes::SqlInt16::_ctor(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { ".ctor", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlInt16::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int16_t System::Data::SqlTypes::SqlInt16::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::op_Implicit___System__Data__SqlTypes__SqlInt16(int16_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "op_Implicit", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt16>(nullptr, ___internal_method, x);
}
inline ::StringW System::Data::SqlTypes::SqlInt16::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::op_UnaryNegation(::System::Data::SqlTypes::SqlInt16 x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "op_UnaryNegation", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt16>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::op_Addition(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt16>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::op_Subtraction(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt16>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::op_Multiply(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt16>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::op_Division(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt16>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::op_Implicit___System__Data__SqlTypes__SqlInt16(::System::Data::SqlTypes::SqlByte x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "op_Implicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt16>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlInt16 System::Data::SqlTypes::SqlInt16::op_Explicit___System__Data__SqlTypes__SqlInt16(::System::Data::SqlTypes::SqlInt64 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt16>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt16::op_Equality(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt16::op_LessThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                           { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt16::op_GreaterThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt16::LessThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                           { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlInt16::GreaterThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(),
                                                           { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>(), ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlInt16::ToSqlDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "ToSqlDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlInt16::ToSqlInt64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "ToSqlInt64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlInt16::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlInt16::CompareTo(::System::Data::SqlTypes::SqlInt16 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt16>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlInt16::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlInt16::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlInt16::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlInt16::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlInt16>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlInt16::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlInt16::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlInt16::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlInt16::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlInt16::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlInt16::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_value", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlInt16::SqlInt16(bool m_fNotNull, int16_t m_value) noexcept {
  this->m_fNotNull = m_fNotNull;
  this->m_value = m_value;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlInt16::SqlInt16() {}
