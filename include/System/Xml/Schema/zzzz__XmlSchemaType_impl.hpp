#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaType.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.GetBuiltInSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6236b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "GetBuiltInSimpleType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.GetBuiltInSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (*)(::System::Xml::Schema::XmlTypeCode)>(
    &::System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6236c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "GetBuiltInSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlTypeCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.GetBuiltInComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaType::GetBuiltInComplexType)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6236cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "GetBuiltInComplexType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaType::*)()>(&::System::Xml::Schema::XmlSchemaType::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6236f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.set_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaType::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6236f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_Final
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDerivationMethod (::System::Xml::Schema::XmlSchemaType::*)()>(
    &::System::Xml::Schema::XmlSchemaType::get_Final)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6236f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_Final", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.set_Final
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaDerivationMethod)>(
    &::System::Xml::Schema::XmlSchemaType::set_Final)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6236f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "set_Final", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_QualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XmlSchemaType::*)()>(&::System::Xml::Schema::XmlSchemaType::get_QualifiedName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6235e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_QualifiedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_FinalResolved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDerivationMethod (::System::Xml::Schema::XmlSchemaType::*)()>(
    &::System::Xml::Schema::XmlSchemaType::get_FinalResolved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6236f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_FinalResolved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_BaseXmlSchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::Schema::XmlSchemaType::*)()>(
    &::System::Xml::Schema::XmlSchemaType::get_BaseXmlSchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6236f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_BaseXmlSchemaType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_DerivedBy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDerivationMethod (::System::Xml::Schema::XmlSchemaType::*)()>(
    &::System::Xml::Schema::XmlSchemaType::get_DerivedBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6236f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_DerivedBy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_Datatype
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (::System::Xml::Schema::XmlSchemaType::*)()>(&::System::Xml::Schema::XmlSchemaType::get_Datatype)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6236f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_Datatype", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_IsMixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaType::*)()>(&::System::Xml::Schema::XmlSchemaType::get_IsMixed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6236f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.set_IsMixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(bool)>(&::System::Xml::Schema::XmlSchemaType::set_IsMixed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6236f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_TypeCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlTypeCode (::System::Xml::Schema::XmlSchemaType::*)()>(&::System::Xml::Schema::XmlSchemaType::get_TypeCode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6236f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_TypeCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_ValueConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlValueConverter* (::System::Xml::Schema::XmlSchemaType::*)()>(
    &::System::Xml::Schema::XmlSchemaType::get_ValueConverter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6237018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_ValueConverter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_SchemaContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaContentType (::System::Xml::Schema::XmlSchemaType::*)()>(
    &::System::Xml::Schema::XmlSchemaType::get_SchemaContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6237094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_SchemaContentType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.SetQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XmlSchemaType::SetQualifiedName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x623709c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetQualifiedName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.SetFinalResolved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaDerivationMethod)>(
    &::System::Xml::Schema::XmlSchemaType::SetFinalResolved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62370a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(),
                                                                                           { "SetFinalResolved", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.SetBaseSchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::XmlSchemaType::SetBaseSchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62370b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetBaseSchemaType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.SetDerivedBy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaDerivationMethod)>(
    &::System::Xml::Schema::XmlSchemaType::SetDerivedBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62370b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetDerivedBy", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.SetDatatype
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(&::System::Xml::Schema::XmlSchemaType::SetDatatype)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62370c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetDatatype", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_ElementDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (::System::Xml::Schema::XmlSchemaType::*)()>(&::System::Xml::Schema::XmlSchemaType::get_ElementDecl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62370c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_ElementDecl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.set_ElementDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::SchemaElementDecl*)>(
    &::System::Xml::Schema::XmlSchemaType::set_ElementDecl)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62370d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "set_ElementDecl", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_Redefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::Schema::XmlSchemaType::*)()>(&::System::Xml::Schema::XmlSchemaType::get_Redefined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62370e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_Redefined", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.set_Redefined
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaType*)>(&::System::Xml::Schema::XmlSchemaType::set_Redefined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62370e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "set_Redefined", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.SetContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::System::Xml::Schema::XmlSchemaContentType)>(
    &::System::Xml::Schema::XmlSchemaType::SetContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62370f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetContentType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.IsDerivedFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::Schema::XmlSchemaType*, ::System::Xml::Schema::XmlSchemaType*, ::System::Xml::Schema::XmlSchemaDerivationMethod)>(
    &::System::Xml::Schema::XmlSchemaType::IsDerivedFrom)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x62370f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(),
                                                             { "IsDerivedFrom",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.IsDerivedFromDatatype
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaDatatype*,
                                                                ::System::Xml::Schema::XmlSchemaDerivationMethod)>(&::System::Xml::Schema::XmlSchemaType::IsDerivedFromDatatype)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6237310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(),
                                                             { "IsDerivedFromDatatype",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.get_NameAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaType::*)()>(&::System::Xml::Schema::XmlSchemaType::get_NameAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62373f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType.set_NameAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaType::set_NameAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62373f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { ::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaType::*)()>(&::System::Xml::Schema::XmlSchemaType::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x623630c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::XmlSchemaType::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_final() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___final;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_final() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___final;
}
constexpr void System::Xml::Schema::XmlSchemaType::__cordl_internal_set_final(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___final = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_derivedBy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___derivedBy;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_derivedBy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___derivedBy;
}
constexpr void System::Xml::Schema::XmlSchemaType::__cordl_internal_set_derivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___derivedBy = value;
}
constexpr ::System::Xml::Schema::XmlSchemaType*& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_baseSchemaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseSchemaType;
}
constexpr ::System::Xml::Schema::XmlSchemaType* const& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_baseSchemaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseSchemaType;
}
constexpr void System::Xml::Schema::XmlSchemaType::__cordl_internal_set_baseSchemaType(::System::Xml::Schema::XmlSchemaType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseSchemaType = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype*& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_datatype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___datatype;
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype* const& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_datatype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___datatype;
}
constexpr void System::Xml::Schema::XmlSchemaType::__cordl_internal_set_datatype(::System::Xml::Schema::XmlSchemaDatatype* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___datatype = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_finalResolved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalResolved;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_finalResolved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalResolved;
}
constexpr void System::Xml::Schema::XmlSchemaType::__cordl_internal_set_finalResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finalResolved = value;
}
constexpr ::System::Xml::Schema::SchemaElementDecl*& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_elementDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDecl;
}
constexpr ::System::Xml::Schema::SchemaElementDecl* const& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_elementDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDecl;
}
constexpr void System::Xml::Schema::XmlSchemaType::__cordl_internal_set_elementDecl(::System::Xml::Schema::SchemaElementDecl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementDecl = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_qname() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qname;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_qname() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qname;
}
constexpr void System::Xml::Schema::XmlSchemaType::__cordl_internal_set_qname(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qname = value;
}
constexpr ::System::Xml::Schema::XmlSchemaType*& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_redefined() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefined;
}
constexpr ::System::Xml::Schema::XmlSchemaType* const& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_redefined() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefined;
}
constexpr void System::Xml::Schema::XmlSchemaType::__cordl_internal_set_redefined(::System::Xml::Schema::XmlSchemaType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___redefined = value;
}
constexpr ::System::Xml::Schema::XmlSchemaContentType& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_contentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr ::System::Xml::Schema::XmlSchemaContentType const& System::Xml::Schema::XmlSchemaType::__cordl_internal_get_contentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr void System::Xml::Schema::XmlSchemaType::__cordl_internal_set_contentType(::System::Xml::Schema::XmlSchemaContentType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentType = value;
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType(::System::Xml::XmlQualifiedName* qualifiedName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "GetBuiltInSimpleType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*>(nullptr, ___internal_method, qualifiedName);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::XmlSchemaType::GetBuiltInSimpleType(::System::Xml::Schema::XmlTypeCode typeCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "GetBuiltInSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlTypeCode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*>(nullptr, ___internal_method, typeCode);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Xml::Schema::XmlSchemaType::GetBuiltInComplexType(::System::Xml::XmlQualifiedName* qualifiedName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "GetBuiltInComplexType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*>(nullptr, ___internal_method, qualifiedName);
}
inline ::StringW System::Xml::Schema::XmlSchemaType::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaType::set_Name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "set_Name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaDerivationMethod System::Xml::Schema::XmlSchemaType::get_Final() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_Final", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDerivationMethod>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaType::set_Final(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "set_Final", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaType::get_QualifiedName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_QualifiedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaDerivationMethod System::Xml::Schema::XmlSchemaType::get_FinalResolved() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_FinalResolved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDerivationMethod>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::XmlSchemaType::get_BaseXmlSchemaType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_BaseXmlSchemaType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaDerivationMethod System::Xml::Schema::XmlSchemaType::get_DerivedBy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_DerivedBy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDerivationMethod>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XmlSchemaType::get_Datatype() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_Datatype", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaType::get_IsMixed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaType::set_IsMixed(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlTypeCode System::Xml::Schema::XmlSchemaType::get_TypeCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_TypeCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlTypeCode>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlSchemaType::get_ValueConverter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_ValueConverter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaContentType System::Xml::Schema::XmlSchemaType::get_SchemaContentType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_SchemaContentType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContentType>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaType::SetQualifiedName(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetQualifiedName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaType::SetFinalResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetFinalResolved", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaType::SetBaseSchemaType(::System::Xml::Schema::XmlSchemaType* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetBaseSchemaType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaType::SetDerivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetDerivedBy", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaType::SetDatatype(::System::Xml::Schema::XmlSchemaDatatype* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetDatatype", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::XmlSchemaType::get_ElementDecl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_ElementDecl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaType::set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "set_ElementDecl", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::XmlSchemaType::get_Redefined() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "get_Redefined", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaType::set_Redefined(::System::Xml::Schema::XmlSchemaType* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "set_Redefined", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaType::SetContentType(::System::Xml::Schema::XmlSchemaContentType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { "SetContentType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaContentType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlSchemaType::IsDerivedFrom(::System::Xml::Schema::XmlSchemaType* derivedType, ::System::Xml::Schema::XmlSchemaType* baseType,
                                                              ::System::Xml::Schema::XmlSchemaDerivationMethod except) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(),
                                                           { "IsDerivedFrom",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, derivedType, baseType, except);
}
inline bool System::Xml::Schema::XmlSchemaType::IsDerivedFromDatatype(::System::Xml::Schema::XmlSchemaDatatype* derivedDataType, ::System::Xml::Schema::XmlSchemaDatatype* baseDataType,
                                                                      ::System::Xml::Schema::XmlSchemaDerivationMethod except) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(),
                                                           { "IsDerivedFromDatatype",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, derivedDataType, baseDataType, except);
}
inline ::StringW System::Xml::Schema::XmlSchemaType::get_NameAttribute() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaType::set_NameAttribute(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaType::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaType*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::XmlSchemaType::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaType*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaType::XmlSchemaType() {}
