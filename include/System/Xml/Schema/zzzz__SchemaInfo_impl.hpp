#pragma once
// IWYU pragma private; include "System\Xml\Schema\SchemaInfo.hpp"
#include "System/Xml/Schema/zzzz__SchemaType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Xml/Schema/zzzz__AttributeMatchState_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaEntity_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNotation_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeListInfo_def.hpp"
#include "System/Xml/zzzz__IDtdEntityInfo_def.hpp"
#include "System/Xml/zzzz__IDtdInfo_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6205128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_DocTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_DocTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6205364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_DocTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.set_DocTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaInfo::set_DocTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x620536c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "set_DocTypeName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.set_InternalDtdSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(::StringW)>(&::System::Xml::Schema::SchemaInfo::set_InternalDtdSubset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6205374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "set_InternalDtdSubset", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_ElementDecls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* (
    ::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_ElementDecls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x620537c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_ElementDecls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_UndeclaredElementDecls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* (
    ::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_UndeclaredElementDecls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6205384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_UndeclaredElementDecls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_GeneralEntities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* (
    ::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_GeneralEntities)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x620538c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_GeneralEntities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_ParameterEntities
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* (
    ::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_ParameterEntities)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6205430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_ParameterEntities", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_SchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaType (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62054d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_SchemaType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.set_SchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(::System::Xml::Schema::SchemaType)>(&::System::Xml::Schema::SchemaInfo::set_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62054dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "set_SchemaType", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_TargetNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, bool>* (::System::Xml::Schema::SchemaInfo::*)()>(
    &::System::Xml::Schema::SchemaInfo::get_TargetNamespaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62054e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_TargetNamespaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_ElementDeclsByType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* (
    ::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_ElementDeclsByType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62054ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_ElementDeclsByType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_AttributeDecls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* (
    ::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_AttributeDecls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62054f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_AttributeDecls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_Notations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* (::System::Xml::Schema::SchemaInfo::*)()>(
    &::System::Xml::Schema::SchemaInfo::get_Notations)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62054fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_Notations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.get_ErrorCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::get_ErrorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62055a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_ErrorCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.set_ErrorCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(int32_t)>(&::System::Xml::Schema::SchemaInfo::set_ErrorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62055a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "set_ErrorCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.GetElementDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (::System::Xml::Schema::SchemaInfo::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::SchemaInfo::GetElementDecl)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62055b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "GetElementDecl", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.GetTypeDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (::System::Xml::Schema::SchemaInfo::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::SchemaInfo::GetTypeDecl)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x620562c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "GetTypeDecl", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.GetElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Xml::Schema::SchemaInfo::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::SchemaInfo::GetElement)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x62056a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "GetElement", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.HasSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaInfo::*)(::StringW)>(&::System::Xml::Schema::SchemaInfo::HasSchema)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62056c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "HasSchema", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaInfo::*)(::StringW)>(&::System::Xml::Schema::SchemaInfo::Contains)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x620573c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.GetAttributeXdr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaAttDef* (
    ::System::Xml::Schema::SchemaInfo::*)(::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaInfo::GetAttributeXdr)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x62057b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(),
                                                { "GetAttributeXdr", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.GetAttributeXsd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaAttDef* (
    ::System::Xml::Schema::SchemaInfo::*)(::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaObject*,
                                          ::by_ref<::System::Xml::Schema::AttributeMatchState>)>(&::System::Xml::Schema::SchemaInfo::GetAttributeXsd)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x6205928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(),
                                                { "GetAttributeXsd",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(),
                                                    ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::AttributeMatchState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.GetAttributeXsd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaAttDef* (
    ::System::Xml::Schema::SchemaInfo::*)(::System::Xml::Schema::SchemaElementDecl*, ::System::Xml::XmlQualifiedName*, ::by_ref<bool>)>(&::System::Xml::Schema::SchemaInfo::GetAttributeXsd)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6205b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(),
            { "GetAttributeXsd", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)(::System::Xml::Schema::SchemaInfo*, ::System::Xml::Schema::ValidationEventHandler*)>(
    &::System::Xml::Schema::SchemaInfo::Add)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x6205c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(),
                                                { "Add", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::Finish)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x62065c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_HasDefaultAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasDefaultAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6206738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.get_HasDefaultAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_HasNonCDataAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasNonCDataAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6206740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.get_HasNonCDataAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_LookupAttributeList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IDtdAttributeListInfo* (::System::Xml::Schema::SchemaInfo::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupAttributeList)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6206748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.LookupAttributeList", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_LookupEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IDtdEntityInfo* (::System::Xml::Schema::SchemaInfo::*)(::StringW)>(
    &::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupEntity)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6206818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.LookupEntity", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62068e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaInfo.System_Xml_IDtdInfo_get_InternalDtdSubset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaInfo::*)()>(&::System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_InternalDtdSubset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62068e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.get_InternalDtdSubset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_elementDecls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDecls;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_elementDecls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDecls;
}
constexpr void
System::Xml::Schema::SchemaInfo::__cordl_internal_set_elementDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementDecls = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_undeclaredElementDecls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___undeclaredElementDecls;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_undeclaredElementDecls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___undeclaredElementDecls;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_undeclaredElementDecls(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___undeclaredElementDecls = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_generalEntities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalEntities;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_generalEntities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generalEntities;
}
constexpr void
System::Xml::Schema::SchemaInfo::__cordl_internal_set_generalEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generalEntities = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_parameterEntities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameterEntities;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_parameterEntities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameterEntities;
}
constexpr void
System::Xml::Schema::SchemaInfo::__cordl_internal_set_parameterEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameterEntities = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaInfo::__cordl_internal_get_docTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypeName;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_docTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypeName;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_docTypeName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___docTypeName = value;
}
constexpr ::StringW& System::Xml::Schema::SchemaInfo::__cordl_internal_get_internalDtdSubset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalDtdSubset;
}
constexpr ::StringW const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_internalDtdSubset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalDtdSubset;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_internalDtdSubset(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalDtdSubset = value;
}
constexpr bool& System::Xml::Schema::SchemaInfo::__cordl_internal_get_hasNonCDataAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasNonCDataAttributes;
}
constexpr bool const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_hasNonCDataAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasNonCDataAttributes;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_hasNonCDataAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasNonCDataAttributes = value;
}
constexpr bool& System::Xml::Schema::SchemaInfo::__cordl_internal_get_hasDefaultAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDefaultAttributes;
}
constexpr bool const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_hasDefaultAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDefaultAttributes;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_hasDefaultAttributes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasDefaultAttributes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>*& System::Xml::Schema::SchemaInfo::__cordl_internal_get_targetNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespaces;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, bool>* const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_targetNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespaces;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_targetNamespaces(::System::Collections::Generic::Dictionary_2<::StringW, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetNamespaces = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_attributeDecls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeDecls;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_attributeDecls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeDecls;
}
constexpr void
System::Xml::Schema::SchemaInfo::__cordl_internal_set_attributeDecls(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeDecls = value;
}
constexpr int32_t& System::Xml::Schema::SchemaInfo::__cordl_internal_get_errorCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCount;
}
constexpr int32_t const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_errorCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCount;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_errorCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorCount = value;
}
constexpr ::System::Xml::Schema::SchemaType& System::Xml::Schema::SchemaInfo::__cordl_internal_get_schemaType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr ::System::Xml::Schema::SchemaType const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_schemaType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaType;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_schemaType(::System::Xml::Schema::SchemaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaType = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_elementDeclsByType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDeclsByType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* const&
System::Xml::Schema::SchemaInfo::__cordl_internal_get_elementDeclsByType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementDeclsByType;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_elementDeclsByType(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementDeclsByType = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>*& System::Xml::Schema::SchemaInfo::__cordl_internal_get_notations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notations;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* const& System::Xml::Schema::SchemaInfo::__cordl_internal_get_notations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notations;
}
constexpr void System::Xml::Schema::SchemaInfo::__cordl_internal_set_notations(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notations = value;
}
inline void System::Xml::Schema::SchemaInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaInfo::get_DocTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_DocTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaInfo::set_DocTypeName(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "set_DocTypeName", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaInfo::set_InternalDtdSubset(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "set_InternalDtdSubset", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* System::Xml::Schema::SchemaInfo::get_ElementDecls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_ElementDecls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* System::Xml::Schema::SchemaInfo::get_UndeclaredElementDecls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_UndeclaredElementDecls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* System::Xml::Schema::SchemaInfo::get_GeneralEntities() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_GeneralEntities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>* System::Xml::Schema::SchemaInfo::get_ParameterEntities() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_ParameterEntities", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaEntity*>*>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaType System::Xml::Schema::SchemaInfo::get_SchemaType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_SchemaType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaType>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaInfo::set_SchemaType(::System::Xml::Schema::SchemaType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "set_SchemaType", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, bool>* System::Xml::Schema::SchemaInfo::get_TargetNamespaces() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_TargetNamespaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, bool>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>* System::Xml::Schema::SchemaInfo::get_ElementDeclsByType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_ElementDeclsByType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaElementDecl*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* System::Xml::Schema::SchemaInfo::get_AttributeDecls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_AttributeDecls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>* System::Xml::Schema::SchemaInfo::get_Notations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_Notations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Xml::Schema::SchemaNotation*>*>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::SchemaInfo::get_ErrorCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "get_ErrorCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaInfo::set_ErrorCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "set_ErrorCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::SchemaInfo::GetElementDecl(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "GetElementDecl", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(this, ___internal_method, qname);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::SchemaInfo::GetTypeDecl(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "GetTypeDecl", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(this, ___internal_method, qname);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::SchemaInfo::GetElement(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "GetElement", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method, qname);
}
inline bool System::Xml::Schema::SchemaInfo::HasSchema(::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "HasSchema", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ns);
}
inline bool System::Xml::Schema::SchemaInfo::Contains(::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ns);
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaInfo::GetAttributeXdr(::System::Xml::Schema::SchemaElementDecl* ed, ::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(),
                                              { "GetAttributeXdr", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaAttDef*>(this, ___internal_method, ed, qname);
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaInfo::GetAttributeXsd(::System::Xml::Schema::SchemaElementDecl* ed, ::System::Xml::XmlQualifiedName* qname,
                                                                                             ::System::Xml::Schema::XmlSchemaObject* partialValidationType,
                                                                                             ::by_ref<::System::Xml::Schema::AttributeMatchState> attributeMatchState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(),
                                                           { "GetAttributeXsd",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::AttributeMatchState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaAttDef*>(this, ___internal_method, ed, qname, partialValidationType, attributeMatchState);
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaInfo::GetAttributeXsd(::System::Xml::Schema::SchemaElementDecl* ed, ::System::Xml::XmlQualifiedName* qname,
                                                                                             ::by_ref<bool> skip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(),
          { "GetAttributeXsd", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaElementDecl*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaAttDef*>(this, ___internal_method, ed, qname, skip);
}
inline void System::Xml::Schema::SchemaInfo::Add(::System::Xml::Schema::SchemaInfo* sinfo, ::System::Xml::Schema::ValidationEventHandler* eventhandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(),
                                                           { "Add", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sinfo, eventhandler);
}
inline void System::Xml::Schema::SchemaInfo::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasDefaultAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.get_HasDefaultAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_HasNonCDataAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.get_HasNonCDataAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::IDtdAttributeListInfo* System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupAttributeList(::StringW prefix, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.LookupAttributeList", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdAttributeListInfo*>(this, ___internal_method, prefix, localName);
}
inline ::System::Xml::IDtdEntityInfo* System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_LookupEntity(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.LookupEntity", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdEntityInfo*>(this, ___internal_method, name);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaInfo::System_Xml_IDtdInfo_get_InternalDtdSubset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaInfo*>(), { "System.Xml.IDtdInfo.get_InternalDtdSubset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaInfo* System::Xml::Schema::SchemaInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaInfo*>());
}
/// @brief Convert operator to "::System::Xml::IDtdInfo"
constexpr System::Xml::Schema::SchemaInfo::operator ::System::Xml::IDtdInfo*() noexcept {
  return static_cast<::System::Xml::IDtdInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdInfo"
constexpr ::System::Xml::IDtdInfo* System::Xml::Schema::SchemaInfo::i___System__Xml__IDtdInfo() noexcept {
  return static_cast<::System::Xml::IDtdInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaInfo::SchemaInfo() {}
