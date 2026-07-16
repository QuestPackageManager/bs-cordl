#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaElementDecl.hpp"
#include "System/Xml/Schema/zzzz__CompiledIdentityConstraint_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__CompiledIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnyAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeInfo_def.hpp"
#include "System/Xml/zzzz__IDtdAttributeListInfo_def.hpp"
#include "System/Xml/zzzz__IDtdDefaultAttributeInfo_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x61feabc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::Schema::XmlSchemaDatatype*)>(
    &::System::Xml::Schema::SchemaElementDecl::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x61febc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::XmlQualifiedName*, ::StringW)>(
    &::System::Xml::Schema::SchemaElementDecl::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x61fed18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.CreateAnyTypeElementDecl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (*)()>(&::System::Xml::Schema::SchemaElementDecl::CreateAnyTypeElementDecl)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x61fee38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "CreateAnyTypeElementDecl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaElementDecl::*)()>(
    &::System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fef14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "System.Xml.IDtdAttributeListInfo.get_HasNonCDataAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.System_Xml_IDtdAttributeListInfo_LookupAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::IDtdAttributeInfo* (::System::Xml::Schema::SchemaElementDecl::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_LookupAttribute)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x61fef1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(),
                                                             { "System.Xml.IDtdAttributeListInfo.LookupAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* (::System::Xml::Schema::SchemaElementDecl::*)()>(
    &::System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fefd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "System.Xml.IDtdAttributeListInfo.LookupDefaultAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_IsIdDeclared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::get_IsIdDeclared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fefe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_IsIdDeclared", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.set_IsIdDeclared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(bool)>(&::System::Xml::Schema::SchemaElementDecl::set_IsIdDeclared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fefe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_IsIdDeclared", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_HasNonCDataAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::get_HasNonCDataAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61feff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_HasNonCDataAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.set_HasNonCDataAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(bool)>(&::System::Xml::Schema::SchemaElementDecl::set_HasNonCDataAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61feff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_HasNonCDataAttribute", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaElementDecl* (::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::Clone)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61ff000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_IsAbstract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::get_IsAbstract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_IsAbstract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.set_IsAbstract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(bool)>(&::System::Xml::Schema::SchemaElementDecl::set_IsAbstract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_IsAbstract", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_IsNillable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::get_IsNillable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_IsNillable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.set_IsNillable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(bool)>(&::System::Xml::Schema::SchemaElementDecl::set_IsNillable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_IsNillable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_Block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDerivationMethod (::System::Xml::Schema::SchemaElementDecl::*)()>(
    &::System::Xml::Schema::SchemaElementDecl::get_Block)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_Block", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.set_Block
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::Schema::XmlSchemaDerivationMethod)>(
    &::System::Xml::Schema::SchemaElementDecl::set_Block)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_Block", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_IsNotationDeclared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::get_IsNotationDeclared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_IsNotationDeclared", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.set_IsNotationDeclared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(bool)>(&::System::Xml::Schema::SchemaElementDecl::set_IsNotationDeclared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_IsNotationDeclared", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_HasDefaultAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::get_HasDefaultAttribute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61ff0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_HasDefaultAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_HasRequiredAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::get_HasRequiredAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_HasRequiredAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_ContentValidator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::ContentValidator* (::System::Xml::Schema::SchemaElementDecl::*)()>(
    &::System::Xml::Schema::SchemaElementDecl::get_ContentValidator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_ContentValidator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.set_ContentValidator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::Schema::ContentValidator*)>(
    &::System::Xml::Schema::SchemaElementDecl::set_ContentValidator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(),
                                                                                           { "set_ContentValidator", {}, { ::i2c::type_of<::System::Xml::Schema::ContentValidator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_AnyAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (::System::Xml::Schema::SchemaElementDecl::*)()>(
    &::System::Xml::Schema::SchemaElementDecl::get_AnyAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_AnyAttribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.set_AnyAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*)>(
    &::System::Xml::Schema::SchemaElementDecl::set_AnyAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(),
                                                                                           { "set_AnyAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_Constraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*> (::System::Xml::Schema::SchemaElementDecl::*)()>(
    &::System::Xml::Schema::SchemaElementDecl::get_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_Constraints", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.set_Constraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*>)>(
    &::System::Xml::Schema::SchemaElementDecl::set_Constraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(),
                                                             { "set_Constraints", {}, { ::i2c::type_of<::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_SchemaElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Xml::Schema::SchemaElementDecl::*)()>(
    &::System::Xml::Schema::SchemaElementDecl::get_SchemaElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff0ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_SchemaElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.set_SchemaElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::SchemaElementDecl::set_SchemaElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff0f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_SchemaElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.AddAttDef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::Schema::SchemaAttDef*)>(
    &::System::Xml::Schema::SchemaElementDecl::AddAttDef)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x61ff0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "AddAttDef", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.GetAttDef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaAttDef* (::System::Xml::Schema::SchemaElementDecl::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::SchemaElementDecl::GetAttDef)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x61ff280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "GetAttDef", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_DefaultAttDefs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>* (::System::Xml::Schema::SchemaElementDecl::*)()>(
    &::System::Xml::Schema::SchemaElementDecl::get_DefaultAttDefs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff2fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_DefaultAttDefs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_AttDefs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* (
    ::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::get_AttDefs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_AttDefs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.get_ProhibitedAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* (
    ::System::Xml::Schema::SchemaElementDecl::*)()>(&::System::Xml::Schema::SchemaElementDecl::get_ProhibitedAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61ff30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_ProhibitedAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaElementDecl.CheckAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaElementDecl::*)(::System::Collections::Hashtable*, bool)>(
    &::System::Xml::Schema::SchemaElementDecl::CheckAttributes)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x61ff314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "CheckAttributes", {}, { ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*&
System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_attdefs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attdefs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* const&
System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_attdefs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attdefs;
}
constexpr void
System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_attdefs(::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attdefs = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>*& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_defaultAttdefs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAttdefs;
}
constexpr ::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_defaultAttdefs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultAttdefs;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_defaultAttdefs(::System::Collections::Generic::List_1<::System::Xml::IDtdDefaultAttributeInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultAttdefs = value;
}
constexpr bool& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_isIdDeclared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isIdDeclared;
}
constexpr bool const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_isIdDeclared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isIdDeclared;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_isIdDeclared(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isIdDeclared = value;
}
constexpr bool& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_hasNonCDataAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasNonCDataAttribute;
}
constexpr bool const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_hasNonCDataAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasNonCDataAttribute;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_hasNonCDataAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasNonCDataAttribute = value;
}
constexpr bool& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_isAbstract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAbstract;
}
constexpr bool const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_isAbstract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAbstract;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_isAbstract(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isAbstract = value;
}
constexpr bool& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_isNillable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNillable;
}
constexpr bool const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_isNillable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNillable;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_isNillable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isNillable = value;
}
constexpr bool& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_hasRequiredAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasRequiredAttribute;
}
constexpr bool const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_hasRequiredAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasRequiredAttribute;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_hasRequiredAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasRequiredAttribute = value;
}
constexpr bool& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_isNotationDeclared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNotationDeclared;
}
constexpr bool const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_isNotationDeclared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNotationDeclared;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_isNotationDeclared(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isNotationDeclared = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>*&
System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_prohibitedAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prohibitedAttributes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* const&
System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_prohibitedAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prohibitedAttributes;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_prohibitedAttributes(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prohibitedAttributes = value;
}
constexpr ::System::Xml::Schema::ContentValidator*& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_contentValidator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentValidator;
}
constexpr ::System::Xml::Schema::ContentValidator* const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_contentValidator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentValidator;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_contentValidator(::System::Xml::Schema::ContentValidator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentValidator = value;
}
constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_anyAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyAttribute;
}
constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_anyAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anyAttribute;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___anyAttribute = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_block() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___block;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_block() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___block;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_block(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___block = value;
}
constexpr ::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*>& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_constraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constraints;
}
constexpr ::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*> const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_constraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constraints;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_constraints(::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___constraints = value;
}
constexpr ::System::Xml::Schema::XmlSchemaElement*& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_schemaElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaElement;
}
constexpr ::System::Xml::Schema::XmlSchemaElement* const& System::Xml::Schema::SchemaElementDecl::__cordl_internal_get_schemaElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaElement;
}
constexpr void System::Xml::Schema::SchemaElementDecl::__cordl_internal_set_schemaElement(::System::Xml::Schema::XmlSchemaElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaElement = value;
}
inline void System::Xml::Schema::SchemaElementDecl::setStaticF_Empty(::System::Xml::Schema::SchemaElementDecl* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::SchemaElementDecl*, "Empty", ::System::Xml::Schema::SchemaElementDecl*>(std::forward<::System::Xml::Schema::SchemaElementDecl*>(value));
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::SchemaElementDecl::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::SchemaElementDecl*, "Empty", ::System::Xml::Schema::SchemaElementDecl*>();
}
inline void System::Xml::Schema::SchemaElementDecl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::_ctor(::System::Xml::Schema::XmlSchemaDatatype* dtype) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDatatype*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dtype);
}
inline void System::Xml::Schema::SchemaElementDecl::_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, prefix);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::SchemaElementDecl::CreateAnyTypeElementDecl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "CreateAnyTypeElementDecl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(nullptr, ___internal_method);
}
inline bool System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "System.Xml.IDtdAttributeListInfo.get_HasNonCDataAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::IDtdAttributeInfo* System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_LookupAttribute(::StringW prefix, ::StringW localName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(),
                                                           { "System.Xml.IDtdAttributeListInfo.LookupAttribute", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::IDtdAttributeInfo*>(this, ___internal_method, prefix, localName);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>* System::Xml::Schema::SchemaElementDecl::System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "System.Xml.IDtdAttributeListInfo.LookupDefaultAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Xml::IDtdDefaultAttributeInfo*>*>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaElementDecl::get_IsIdDeclared() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_IsIdDeclared", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::set_IsIdDeclared(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_IsIdDeclared", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::SchemaElementDecl::get_HasNonCDataAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_HasNonCDataAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::set_HasNonCDataAttribute(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_HasNonCDataAttribute", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::SchemaElementDecl::Clone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaElementDecl*>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaElementDecl::get_IsAbstract() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_IsAbstract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::set_IsAbstract(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_IsAbstract", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::SchemaElementDecl::get_IsNillable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_IsNillable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::set_IsNillable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_IsNillable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaDerivationMethod System::Xml::Schema::SchemaElementDecl::get_Block() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_Block", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDerivationMethod>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::set_Block(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_Block", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::SchemaElementDecl::get_IsNotationDeclared() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_IsNotationDeclared", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::set_IsNotationDeclared(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_IsNotationDeclared", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::SchemaElementDecl::get_HasDefaultAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_HasDefaultAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Schema::SchemaElementDecl::get_HasRequiredAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_HasRequiredAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::SchemaElementDecl::get_ContentValidator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_ContentValidator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ContentValidator*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::set_ContentValidator(::System::Xml::Schema::ContentValidator* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_ContentValidator", {}, { ::i2c::type_of<::System::Xml::Schema::ContentValidator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::SchemaElementDecl::get_AnyAttribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_AnyAttribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_AnyAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*> System::Xml::Schema::SchemaElementDecl::get_Constraints() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_Constraints", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*>>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::set_Constraints(::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(),
                                                           { "set_Constraints", {}, { ::i2c::type_of<::ArrayW<::System::Xml::Schema::CompiledIdentityConstraint*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Xml::Schema::SchemaElementDecl::get_SchemaElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_SchemaElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::set_SchemaElement(::System::Xml::Schema::XmlSchemaElement* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "set_SchemaElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaElementDecl::AddAttDef(::System::Xml::Schema::SchemaAttDef* attdef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "AddAttDef", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attdef);
}
inline ::System::Xml::Schema::SchemaAttDef* System::Xml::Schema::SchemaElementDecl::GetAttDef(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "GetAttDef", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaAttDef*>(this, ___internal_method, qname);
}
inline ::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>* System::Xml::Schema::SchemaElementDecl::get_DefaultAttDefs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_DefaultAttDefs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Xml::IDtdDefaultAttributeInfo*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>* System::Xml::Schema::SchemaElementDecl::get_AttDefs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_AttDefs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::SchemaAttDef*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>* System::Xml::Schema::SchemaElementDecl::get_ProhibitedAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(), { "get_ProhibitedAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*>*>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaElementDecl::CheckAttributes(::System::Collections::Hashtable* presence, bool standalone) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaElementDecl*>(),
                                                                                         { "CheckAttributes", {}, { ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, presence, standalone);
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::SchemaElementDecl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaElementDecl*>());
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::SchemaElementDecl::New_ctor(::System::Xml::Schema::XmlSchemaDatatype* dtype) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaElementDecl*>(dtype));
}
inline ::System::Xml::Schema::SchemaElementDecl* System::Xml::Schema::SchemaElementDecl::New_ctor(::System::Xml::XmlQualifiedName* name, ::StringW prefix) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaElementDecl*>(name, prefix));
}
/// @brief Convert operator to "::System::Xml::IDtdAttributeListInfo"
constexpr System::Xml::Schema::SchemaElementDecl::operator ::System::Xml::IDtdAttributeListInfo*() noexcept {
  return static_cast<::System::Xml::IDtdAttributeListInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Xml::IDtdAttributeListInfo"
constexpr ::System::Xml::IDtdAttributeListInfo* System::Xml::Schema::SchemaElementDecl::i___System__Xml__IDtdAttributeListInfo() noexcept {
  return static_cast<::System::Xml::IDtdAttributeListInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaElementDecl::SchemaElementDecl() {}
