#pragma once
// IWYU pragma private; include "System\Xml\Schema\SchemaCollectionPreprocessor.hpp"
#include "System/Xml/Schema/zzzz__BaseProcessor_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaCollectionPreprocessor_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaCollectionPreprocessor_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnyAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttributeGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaNotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaRedefine_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/zzzz__Uri_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor::SchemaCollectionPreprocessor_Compositor(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor::SchemaCollectionPreprocessor_Compositor() {}
constexpr ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor System::Xml::Schema::SchemaCollectionPreprocessor_Compositor::Root{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor System::Xml::Schema::SchemaCollectionPreprocessor_Compositor::Include{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor System::Xml::Schema::SchemaCollectionPreprocessor_Compositor::Import{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(
    ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*)>(&::System::Xml::Schema::SchemaCollectionPreprocessor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fb5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(),
                                                                                               ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(
    ::System::Xml::Schema::XmlSchema*, ::StringW, bool, ::System::Xml::Schema::XmlSchemaCollection*)>(&::System::Xml::Schema::SchemaCollectionPreprocessor::Execute)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x61fb5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "Execute",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::Cleanup)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x61fb7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(), { "Cleanup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.set_XmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::XmlResolver*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::set_XmlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61fe98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.LoadExternals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaCollection*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::LoadExternals)> {
  constexpr static std::size_t size = 0x968;
  constexpr static std::size_t addrs = 0x61fba1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                { "LoadExternals", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.BuildRefNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::BuildRefNamespaces)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x61feb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "BuildRefNamespaces", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.Preprocess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(
    ::System::Xml::Schema::XmlSchema*, ::StringW, ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor)>(&::System::Xml::Schema::SchemaCollectionPreprocessor::Preprocess)> {
  constexpr static std::size_t size = 0x239c;
  constexpr static std::size_t addrs = 0x61fc5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "Preprocess",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>(),
                                                                                               ::i2c::type_of<::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessRedefine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaRedefine*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessRedefine)> {
  constexpr static std::size_t size = 0x1040;
  constexpr static std::size_t addrs = 0x61fee68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessRedefine", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaRedefine*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.CountGroupSelfReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(
    ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaCollectionPreprocessor::CountGroupSelfReference)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6201cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                            { "CountGroupSelfReference", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.CheckRefinedGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaGroup*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedGroup)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6201688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "CheckRefinedGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.CheckRefinedAttributeGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedAttributeGroup)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6201730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                             { "CheckRefinedAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.CheckRefinedSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedSimpleType)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6201be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "CheckRefinedSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.CheckRefinedComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedComplexType)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x62018b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "CheckRefinedComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttribute)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x61ffea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessLocalAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessLocalAttribute)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x62024c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessLocalAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessAttributeContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttributeContent)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6202268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessAttributeContent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessAttributeGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttributeGroup)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6200024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessElement)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6200f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessLocalElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessLocalElement)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x6202eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessLocalElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessElementContent)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6202b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessElementContent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessIdentityConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessIdentityConstraint)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x620324c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                             { "PreprocessIdentityConstraint", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaSimpleType*, bool)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessSimpleType)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x620096c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                             { "PreprocessSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaComplexType*, bool)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessComplexType)> {
  constexpr static std::size_t size = 0x848;
  constexpr static std::size_t addrs = 0x6200124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                             { "PreprocessComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaGroup*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessGroup)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6201204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessNotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaNotation*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessNotation)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x62013d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessNotation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaNotation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessParticle)> {
  constexpr static std::size_t size = 0x93c;
  constexpr static std::size_t addrs = 0x62035d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(
    ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttributes)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x6202820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                             { "PreprocessAttributes",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.ValidateIdAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::ValidateIdAttribute)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x61fc384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "ValidateIdAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.ValidateNameAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::ValidateNameAttribute)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x6201fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "ValidateNameAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.ValidateQNameAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(
    ::System::Xml::Schema::XmlSchemaObject*, ::StringW, ::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaCollectionPreprocessor::ValidateQNameAttribute)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6202680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
            { "ValidateQNameAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.SetParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::SetParent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61fed6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                { "SetParent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.PreprocessAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAnnotation)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x61fed80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                           { "PreprocessAnnotation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.ResolveSchemaLocationUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Xml::Schema::XmlSchema*, ::StringW)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::ResolveSchemaLocationUri)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x61fe994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                             { "ResolveSchemaLocationUri", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionPreprocessor.GetSchemaEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Xml::Schema::SchemaCollectionPreprocessor::*)(::System::Uri*)>(
    &::System::Xml::Schema::SchemaCollectionPreprocessor::GetSchemaEntity)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x61fea3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(), { "GetSchemaEntity", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_schema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_schema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schema = value;
}
constexpr ::StringW& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_targetNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespace;
}
constexpr ::StringW const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_targetNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespace;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_targetNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetNamespace = value;
}
constexpr bool& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_buildinIncluded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildinIncluded;
}
constexpr bool const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_buildinIncluded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildinIncluded;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_buildinIncluded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buildinIncluded = value;
}
constexpr ::System::Xml::Schema::XmlSchemaForm& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_elementFormDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementFormDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaForm const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_elementFormDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementFormDefault;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_elementFormDefault(::System::Xml::Schema::XmlSchemaForm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementFormDefault = value;
}
constexpr ::System::Xml::Schema::XmlSchemaForm& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_attributeFormDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeFormDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaForm const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_attributeFormDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeFormDefault;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_attributeFormDefault(::System::Xml::Schema::XmlSchemaForm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeFormDefault = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_blockDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_blockDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockDefault;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_blockDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockDefault = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_finalDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_finalDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalDefault;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_finalDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finalDefault = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_schemaLocations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaLocations;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_schemaLocations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaLocations;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_schemaLocations(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaLocations = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_referenceNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referenceNamespaces;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_referenceNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referenceNamespaces;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_referenceNamespaces(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___referenceNamespaces = value;
}
constexpr ::StringW& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_Xmlns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Xmlns;
}
constexpr ::StringW const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_Xmlns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Xmlns;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_Xmlns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Xmlns = value;
}
constexpr ::System::Xml::XmlResolver*& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_xmlResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr ::System::Xml::XmlResolver* const& System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_get_xmlResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr void System::Xml::Schema::SchemaCollectionPreprocessor::__cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlResolver = value;
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                                     ::System::Xml::Schema::ValidationEventHandler* eventHandler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(),
                                                                                             ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, schemaNames, eventHandler);
}
inline bool System::Xml::Schema::SchemaCollectionPreprocessor::Execute(::System::Xml::Schema::XmlSchema* schema, ::StringW targetNamespace, bool loadExternals,
                                                                       ::System::Xml::Schema::XmlSchemaCollection* xsc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "Execute",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schema, targetNamespace, loadExternals, xsc);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::Cleanup(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(), { "Cleanup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::LoadExternals(::System::Xml::Schema::XmlSchema* schema, ::System::Xml::Schema::XmlSchemaCollection* xsc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                              { "LoadExternals", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema, xsc);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::BuildRefNamespaces(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "BuildRefNamespaces", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::Preprocess(::System::Xml::Schema::XmlSchema* schema, ::StringW targetNamespace,
                                                                          ::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor compositor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                          { "Preprocess",
                            {},
                            { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema, targetNamespace, compositor);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessRedefine(::System::Xml::Schema::XmlSchemaRedefine* redefine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessRedefine", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaRedefine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, redefine);
}
inline int32_t System::Xml::Schema::SchemaCollectionPreprocessor::CountGroupSelfReference(::System::Xml::Schema::XmlSchemaObjectCollection* items, ::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                          { "CountGroupSelfReference", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, items, name);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "CheckRefinedGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "CheckRefinedAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* stype) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "CheckRefinedSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stype);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::CheckRefinedComplexType(::System::Xml::Schema::XmlSchemaComplexType* ctype) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "CheckRefinedComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctype);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessLocalAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessLocalAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttributeContent(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessAttributeContent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessElement(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessLocalElement(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessLocalElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessElementContent(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessElementContent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                           { "PreprocessIdentityConstraint", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType, bool local) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                           { "PreprocessSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simpleType, local);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType, bool local) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                           { "PreprocessComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, local);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessNotation(::System::Xml::Schema::XmlSchemaNotation* notation) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessNotation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaNotation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notation);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessParticle(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes,
                                                                                    ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, ::System::Xml::Schema::XmlSchemaObject* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                           { "PreprocessAttributes",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes, anyAttribute, parent);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::ValidateIdAttribute(::System::Xml::Schema::XmlSchemaObject* xso) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "ValidateIdAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xso);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::ValidateNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "ValidateNameAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xso);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::ValidateQNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso, ::StringW attributeName, ::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
          { "ValidateQNameAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xso, attributeName, value);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::SetParent(::System::Xml::Schema::XmlSchemaObject* child, ::System::Xml::Schema::XmlSchemaObject* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                              { "SetParent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child, parent);
}
inline void System::Xml::Schema::SchemaCollectionPreprocessor::PreprocessAnnotation(::System::Xml::Schema::XmlSchemaObject* schemaObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                                                         { "PreprocessAnnotation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaObject);
}
inline ::System::Uri* System::Xml::Schema::SchemaCollectionPreprocessor::ResolveSchemaLocationUri(::System::Xml::Schema::XmlSchema* enclosingSchema, ::StringW location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(),
                                                           { "ResolveSchemaLocationUri", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, enclosingSchema, location);
}
inline ::System::IO::Stream* System::Xml::Schema::SchemaCollectionPreprocessor::GetSchemaEntity(::System::Uri* ruri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionPreprocessor*>(), { "GetSchemaEntity", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, ruri);
}
inline ::System::Xml::Schema::SchemaCollectionPreprocessor* System::Xml::Schema::SchemaCollectionPreprocessor::New_ctor(::System::Xml::XmlNameTable* nameTable,
                                                                                                                        ::System::Xml::Schema::SchemaNames* schemaNames,
                                                                                                                        ::System::Xml::Schema::ValidationEventHandler* eventHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaCollectionPreprocessor*>(nameTable, schemaNames, eventHandler));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaCollectionPreprocessor::SchemaCollectionPreprocessor() {}
