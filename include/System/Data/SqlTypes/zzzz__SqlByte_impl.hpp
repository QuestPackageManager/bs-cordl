#pragma once
// IWYU pragma private; include "System\Data\SqlTypes\SqlByte.hpp"
#include "System/Data/SqlTypes/zzzz__SqlByte_def.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Data/SqlTypes/zzzz__SqlBoolean_def.hpp"
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
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlByte::*)(bool)>(&::System::Data::SqlTypes::SqlByte::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6085950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlByte::*)(uint8_t)>(&::System::Data::SqlTypes::SqlByte::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6085958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.get_IsNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlByte::*)()>(&::System::Data::SqlTypes::SqlByte::get_IsNull)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6085968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "get_IsNull", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Data::SqlTypes::SqlByte::*)()>(&::System::Data::SqlTypes::SqlByte::get_Value)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6085978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.op_Implicit___System__Data__SqlTypes__SqlByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlByte (*)(uint8_t)>(&::System::Data::SqlTypes::SqlByte::op_Implicit___System__Data__SqlTypes__SqlByte)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6085a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "op_Implicit", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SqlTypes::SqlByte::*)()>(&::System::Data::SqlTypes::SqlByte::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6085a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlByte (*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlByte::op_Addition)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6085ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                             { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlByte (*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlByte::op_Subtraction)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6085bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.op_Multiply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlByte (*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlByte::op_Multiply)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6085d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                             { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.op_Division
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlByte (*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlByte::op_Division)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6085e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                             { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.op_Explicit___System__Data__SqlTypes__SqlByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlByte (*)(::System::Data::SqlTypes::SqlInt64)>(
    &::System::Data::SqlTypes::SqlByte::op_Explicit___System__Data__SqlTypes__SqlByte)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6085f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlByte::op_Equality)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60860dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.op_LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlByte::op_LessThan)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60861a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                             { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.op_GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlByte::op_GreaterThan)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6086274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                             { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.LessThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlByte::LessThan)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6086340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                             { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.GreaterThan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlBoolean (*)(::System::Data::SqlTypes::SqlByte, ::System::Data::SqlTypes::SqlByte)>(
    &::System::Data::SqlTypes::SqlByte::GreaterThan)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60863a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                             { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.ToSqlDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlDouble (::System::Data::SqlTypes::SqlByte::*)()>(&::System::Data::SqlTypes::SqlByte::ToSqlDouble)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6086410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "ToSqlDouble", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.ToSqlInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SqlTypes::SqlInt64 (::System::Data::SqlTypes::SqlByte::*)()>(&::System::Data::SqlTypes::SqlByte::ToSqlInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6086540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "ToSqlInt64", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlByte::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlByte::CompareTo)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6086660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlByte::*)(::System::Data::SqlTypes::SqlByte)>(&::System::Data::SqlTypes::SqlByte::CompareTo)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6086760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlByte::*)(::System::Object*)>(&::System::Data::SqlTypes::SqlByte::Equals)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x60868bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlByte::*)()>(&::System::Data::SqlTypes::SqlByte::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60869ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.System_Xml_Serialization_IXmlSerializable_GetSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Data::SqlTypes::SqlByte::*)()>(
    &::System::Data::SqlTypes::SqlByte::System_Xml_Serialization_IXmlSerializable_GetSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6086a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.System_Xml_Serialization_IXmlSerializable_ReadXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlByte::*)(::System::Xml::XmlReader*)>(
    &::System::Data::SqlTypes::SqlByte::System_Xml_Serialization_IXmlSerializable_ReadXml)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6086a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.System_Xml_Serialization_IXmlSerializable_WriteXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlByte::*)(::System::Xml::XmlWriter*)>(
    &::System::Data::SqlTypes::SqlByte::System_Xml_Serialization_IXmlSerializable_WriteXml)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6086bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlByte.GetXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Data::SqlTypes::SqlByte::GetXsdType)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6086d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
inline void System::Data::SqlTypes::SqlByte::setStaticF_s_iBitNotByteMax(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_iBitNotByteMax", ::System::Data::SqlTypes::SqlByte>(std::forward<int32_t>(value));
}
inline int32_t System::Data::SqlTypes::SqlByte::getStaticF_s_iBitNotByteMax() {
  return ::cordl_internals::getStaticField<int32_t, "s_iBitNotByteMax", ::System::Data::SqlTypes::SqlByte>();
}
inline void System::Data::SqlTypes::SqlByte::setStaticF_Null(::System::Data::SqlTypes::SqlByte value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlByte, "Null", ::System::Data::SqlTypes::SqlByte>(std::forward<::System::Data::SqlTypes::SqlByte>(value));
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlByte::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlByte, "Null", ::System::Data::SqlTypes::SqlByte>();
}
inline void System::Data::SqlTypes::SqlByte::setStaticF_Zero(::System::Data::SqlTypes::SqlByte value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlByte, "Zero", ::System::Data::SqlTypes::SqlByte>(std::forward<::System::Data::SqlTypes::SqlByte>(value));
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlByte::getStaticF_Zero() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlByte, "Zero", ::System::Data::SqlTypes::SqlByte>();
}
inline void System::Data::SqlTypes::SqlByte::setStaticF_MinValue(::System::Data::SqlTypes::SqlByte value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlByte, "MinValue", ::System::Data::SqlTypes::SqlByte>(std::forward<::System::Data::SqlTypes::SqlByte>(value));
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlByte::getStaticF_MinValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlByte, "MinValue", ::System::Data::SqlTypes::SqlByte>();
}
inline void System::Data::SqlTypes::SqlByte::setStaticF_MaxValue(::System::Data::SqlTypes::SqlByte value) {
  ::cordl_internals::setStaticField<::System::Data::SqlTypes::SqlByte, "MaxValue", ::System::Data::SqlTypes::SqlByte>(std::forward<::System::Data::SqlTypes::SqlByte>(value));
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlByte::getStaticF_MaxValue() {
  return ::cordl_internals::getStaticField<::System::Data::SqlTypes::SqlByte, "MaxValue", ::System::Data::SqlTypes::SqlByte>();
}
inline void System::Data::SqlTypes::SqlByte::_ctor(bool fNull) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fNull);
}
inline void System::Data::SqlTypes::SqlByte::_ctor(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlByte::get_IsNull() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "get_IsNull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint8_t System::Data::SqlTypes::SqlByte::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlByte::op_Implicit___System__Data__SqlTypes__SqlByte(uint8_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "op_Implicit", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlByte>(nullptr, ___internal_method, x);
}
inline ::StringW System::Data::SqlTypes::SqlByte::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlByte::op_Addition(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                           { "op_Addition", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlByte>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlByte::op_Subtraction(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlByte>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlByte::op_Multiply(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                           { "op_Multiply", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlByte>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlByte::op_Division(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                           { "op_Division", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlByte>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlByte System::Data::SqlTypes::SqlByte::op_Explicit___System__Data__SqlTypes__SqlByte(::System::Data::SqlTypes::SqlInt64 x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "op_Explicit", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlInt64>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlByte>(nullptr, ___internal_method, x);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlByte::op_Equality(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                           { "op_Equality", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlByte::op_LessThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                           { "op_LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlByte::op_GreaterThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                           { "op_GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlByte::LessThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                           { "LessThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlBoolean System::Data::SqlTypes::SqlByte::GreaterThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(),
                                                           { "GreaterThan", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>(), ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlBoolean>(nullptr, ___internal_method, x, y);
}
inline ::System::Data::SqlTypes::SqlDouble System::Data::SqlTypes::SqlByte::ToSqlDouble() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "ToSqlDouble", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlDouble>(*this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlInt64 System::Data::SqlTypes::SqlByte::ToSqlInt64() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "ToSqlInt64", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SqlTypes::SqlInt64>(*this, ___internal_method);
}
inline int32_t System::Data::SqlTypes::SqlByte::CompareTo(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlByte::CompareTo(::System::Data::SqlTypes::SqlByte value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "CompareTo", {}, { ::i2c::type_of<::System::Data::SqlTypes::SqlByte>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Data::SqlTypes::SqlByte::Equals(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Data::SqlTypes::SqlByte::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Data::SqlTypes::SqlByte::System_Xml_Serialization_IXmlSerializable_GetSchema() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "System.Xml.Serialization.IXmlSerializable.GetSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(*this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlByte::System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "System.Xml.Serialization.IXmlSerializable.ReadXml", {}, { ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void System::Data::SqlTypes::SqlByte::System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "System.Xml.Serialization.IXmlSerializable.WriteXml", {}, { ::i2c::type_of<::System::Xml::XmlWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SqlTypes::SqlByte::GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlByte>(), { "GetXsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, schemaSet);
}
/// @brief Convert operator to "::System::Data::SqlTypes::INullable"
constexpr System::Data::SqlTypes::SqlByte::operator ::System::Data::SqlTypes::INullable*() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Data::SqlTypes::INullable"
constexpr ::System::Data::SqlTypes::INullable* System::Data::SqlTypes::SqlByte::i___System__Data__SqlTypes__INullable() {
  return static_cast<::System::Data::SqlTypes::INullable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr System::Data::SqlTypes::SqlByte::operator ::System::IComparable*() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::SqlTypes::SqlByte::i___System__IComparable() {
  return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
constexpr System::Data::SqlTypes::SqlByte::operator ::System::Xml::Serialization::IXmlSerializable*() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
constexpr ::System::Xml::Serialization::IXmlSerializable* System::Data::SqlTypes::SqlByte::i___System__Xml__Serialization__IXmlSerializable() {
  return static_cast<::System::Xml::Serialization::IXmlSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_value", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlByte::SqlByte(bool m_fNotNull, uint8_t m_value) noexcept {
  this->m_fNotNull = m_fNotNull;
  this->m_value = m_value;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlByte::SqlByte() {}
