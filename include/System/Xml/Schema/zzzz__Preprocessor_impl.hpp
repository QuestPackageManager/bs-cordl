#pragma once
// IWYU pragma private; include "System\Xml\Schema\Preprocessor.hpp"
#include "System/Xml/Schema/zzzz__BaseProcessor_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_impl.hpp"
#include "System/Xml/Schema/zzzz__Preprocessor_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__SortedList_def.hpp"
#include "System/Xml/Schema/zzzz__RedefineEntry_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnyAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttributeGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaExternal_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaNotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(
    ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchemaCompilationSettings*)>(
    &::System::Xml::Schema::Preprocessor::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x61e0e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(),
                                                    ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*, ::StringW, bool)>(
    &::System::Xml::Schema::Preprocessor::Execute)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x61e0f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                             { "Execute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::Preprocessor::Cleanup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x61e40b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "Cleanup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CleanupRedefine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaExternal*)>(
    &::System::Xml::Schema::Preprocessor::CleanupRedefine)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x61e4768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "CleanupRedefine", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaExternal*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.set_XmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::XmlResolver*)>(&::System::Xml::Schema::Preprocessor::set_XmlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61e480c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.set_ReaderSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::XmlReaderSettings*)>(&::System::Xml::Schema::Preprocessor::set_ReaderSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61e4814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "set_ReaderSettings", {}, { ::i2c::type_of<::System::Xml::XmlReaderSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.set_SchemaLocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Collections::Hashtable*)>(&::System::Xml::Schema::Preprocessor::set_SchemaLocations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61e481c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "set_SchemaLocations", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.set_ChameleonSchemas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Collections::Hashtable*)>(&::System::Xml::Schema::Preprocessor::set_ChameleonSchemas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61e4824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "set_ChameleonSchemas", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.get_RootSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::Preprocessor::*)()>(&::System::Xml::Schema::Preprocessor::get_RootSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61e482c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "get_RootSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.BuildSchemaList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::Preprocessor::BuildSchemaList)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x61e2174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "BuildSchemaList", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.LoadExternals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::Preprocessor::LoadExternals)> {
  constexpr static std::size_t size = 0xc58;
  constexpr static std::size_t addrs = 0x61e151c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "LoadExternals", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.GetBuildInSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (*)()>(&::System::Xml::Schema::Preprocessor::GetBuildInSchema)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x61e4188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "GetBuildInSchema", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.BuildRefNamespaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::Preprocessor::BuildRefNamespaces)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x61e4898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "BuildRefNamespaces", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.ParseUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::StringW, ::StringW, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::ParseUri)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x61e4ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                { "ParseUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.Preprocess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*, ::StringW, ::System::Collections::ArrayList*)>(
    &::System::Xml::Schema::Preprocessor::Preprocess)> {
  constexpr static std::size_t size = 0x122c;
  constexpr static std::size_t addrs = 0x61e22f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                            { "Preprocess", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CopyIncludedComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::Preprocessor::CopyIncludedComponents)> {
  constexpr static std::size_t size = 0x1154;
  constexpr static std::size_t addrs = 0x61e50f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                { "CopyIncludedComponents", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessRedefine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::RedefineEntry*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessRedefine)> {
  constexpr static std::size_t size = 0xb98;
  constexpr static std::size_t addrs = 0x61e351c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessRedefine", {}, { ::i2c::type_of<::System::Xml::Schema::RedefineEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.GetIncludedSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*, ::System::Collections::ArrayList*)>(
    &::System::Xml::Schema::Preprocessor::GetIncludedSet)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x61e7afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                             { "GetIncludedSet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.GetParentSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (*)(::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::Schema::Preprocessor::GetParentSchema)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x61e7a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "GetParentSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.SetSchemaDefaults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::Preprocessor::SetSchemaDefaults)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x61e4fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "SetSchemaDefaults", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CountGroupSelfReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::Preprocessor::*)(
    ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaGroup*)>(&::System::Xml::Schema::Preprocessor::CountGroupSelfReference)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x61e829c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                             { "CountGroupSelfReference",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CheckRefinedGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaGroup*)>(
    &::System::Xml::Schema::Preprocessor::CheckRefinedGroup)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61e7c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "CheckRefinedGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CheckRefinedAttributeGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::Preprocessor::CheckRefinedAttributeGroup)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x61e7ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "CheckRefinedAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CheckRefinedSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(
    &::System::Xml::Schema::Preprocessor::CheckRefinedSimpleType)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x61e8190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                                                           { "CheckRefinedSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CheckRefinedComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::Preprocessor::CheckRefinedComplexType)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x61e7e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                                                           { "CheckRefinedComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAttribute)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x61e624c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessLocalAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessLocalAttribute)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x61e8a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                                                           { "PreprocessLocalAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAttributeContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAttributeContent)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x61e8828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                                                           { "PreprocessAttributeContent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAttributeGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAttributeGroup)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x61e63c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                                                           { "PreprocessAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessElement)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x61e7334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessLocalElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessLocalElement)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x61e9538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessLocalElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessElementContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessElementContent)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x61e91e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessElementContent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessIdentityConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessIdentityConstraint)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x61e98d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                             { "PreprocessIdentityConstraint", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaSimpleType*, bool)>(
    &::System::Xml::Schema::Preprocessor::PreprocessSimpleType)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x61e6d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                             { "PreprocessSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaComplexType*, bool)>(
    &::System::Xml::Schema::Preprocessor::PreprocessComplexType)> {
  constexpr static std::size_t size = 0x854;
  constexpr static std::size_t addrs = 0x61e64cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                             { "PreprocessComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaGroup*)>(&::System::Xml::Schema::Preprocessor::PreprocessGroup)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x61e75a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessNotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaNotation*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessNotation)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x61e7778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessNotation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaNotation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessParticle)> {
  constexpr static std::size_t size = 0x8fc;
  constexpr static std::size_t addrs = 0x61e9c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*,
                                                                                                     ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAttributes)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x61e8e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                             { "PreprocessAttributes",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.ValidateIdAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::ValidateIdAttribute)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x61e4cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "ValidateIdAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.ValidateNameAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::ValidateNameAttribute)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x61e858c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "ValidateNameAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.ValidateQNameAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaObject*, ::StringW, ::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::Preprocessor::ValidateQNameAttribute)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x61e8c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
            { "ValidateQNameAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.ResolveSchemaLocationUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*, ::StringW)>(
    &::System::Xml::Schema::Preprocessor::ResolveSchemaLocationUri)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x61e4834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                             { "ResolveSchemaLocationUri", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.GetSchemaEntity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::Preprocessor::*)(::System::Uri*)>(&::System::Xml::Schema::Preprocessor::GetSchemaEntity)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x61e4874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "GetSchemaEntity", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.GetChameleonSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::Preprocessor::*)(::StringW, ::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::Preprocessor::GetChameleonSchema)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x61e13e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                             { "GetChameleonSchema", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.SetParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::SetParent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61e4c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                { "SetParent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAnnotation)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x61e4c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessAnnotation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAnnotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAnnotation*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAnnotation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61e79f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessAnnotation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotation*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::Preprocessor::__cordl_internal_get_Xmlns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Xmlns;
}
constexpr ::StringW const& System::Xml::Schema::Preprocessor::__cordl_internal_get_Xmlns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Xmlns;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_Xmlns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Xmlns = value;
}
constexpr ::StringW& System::Xml::Schema::Preprocessor::__cordl_internal_get_NsXsi() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr ::StringW const& System::Xml::Schema::Preprocessor::__cordl_internal_get_NsXsi() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NsXsi;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_NsXsi(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NsXsi = value;
}
constexpr ::StringW& System::Xml::Schema::Preprocessor::__cordl_internal_get_targetNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespace;
}
constexpr ::StringW const& System::Xml::Schema::Preprocessor::__cordl_internal_get_targetNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespace;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_targetNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetNamespace = value;
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::Preprocessor::__cordl_internal_get_rootSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSchema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_rootSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSchema;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_rootSchema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootSchema = value;
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::Preprocessor::__cordl_internal_get_currentSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentSchema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_currentSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentSchema;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_currentSchema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentSchema = value;
}
constexpr ::System::Xml::Schema::XmlSchemaForm& System::Xml::Schema::Preprocessor::__cordl_internal_get_elementFormDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementFormDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaForm const& System::Xml::Schema::Preprocessor::__cordl_internal_get_elementFormDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementFormDefault;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_elementFormDefault(::System::Xml::Schema::XmlSchemaForm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementFormDefault = value;
}
constexpr ::System::Xml::Schema::XmlSchemaForm& System::Xml::Schema::Preprocessor::__cordl_internal_get_attributeFormDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeFormDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaForm const& System::Xml::Schema::Preprocessor::__cordl_internal_get_attributeFormDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeFormDefault;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_attributeFormDefault(::System::Xml::Schema::XmlSchemaForm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeFormDefault = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& System::Xml::Schema::Preprocessor::__cordl_internal_get_blockDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& System::Xml::Schema::Preprocessor::__cordl_internal_get_blockDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockDefault;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_blockDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockDefault = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& System::Xml::Schema::Preprocessor::__cordl_internal_get_finalDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& System::Xml::Schema::Preprocessor::__cordl_internal_get_finalDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalDefault;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_finalDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finalDefault = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::Preprocessor::__cordl_internal_get_schemaLocations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaLocations;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_schemaLocations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaLocations;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_schemaLocations(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaLocations = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::Preprocessor::__cordl_internal_get_chameleonSchemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chameleonSchemas;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_chameleonSchemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chameleonSchemas;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_chameleonSchemas(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chameleonSchemas = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::Preprocessor::__cordl_internal_get_referenceNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referenceNamespaces;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_referenceNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referenceNamespaces;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_referenceNamespaces(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___referenceNamespaces = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::Preprocessor::__cordl_internal_get_processedExternals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processedExternals;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_processedExternals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___processedExternals;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_processedExternals(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___processedExternals = value;
}
constexpr ::System::Collections::SortedList*& System::Xml::Schema::Preprocessor::__cordl_internal_get_lockList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockList;
}
constexpr ::System::Collections::SortedList* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_lockList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockList;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_lockList(::System::Collections::SortedList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lockList = value;
}
constexpr ::System::Xml::XmlReaderSettings*& System::Xml::Schema::Preprocessor::__cordl_internal_get_readerSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerSettings;
}
constexpr ::System::Xml::XmlReaderSettings* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_readerSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerSettings;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_readerSettings(::System::Xml::XmlReaderSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readerSettings = value;
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::Preprocessor::__cordl_internal_get_rootSchemaForRedefine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSchemaForRedefine;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_rootSchemaForRedefine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootSchemaForRedefine;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_rootSchemaForRedefine(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootSchemaForRedefine = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::Preprocessor::__cordl_internal_get_redefinedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefinedList;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_redefinedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___redefinedList;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_redefinedList(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___redefinedList = value;
}
constexpr ::System::Xml::XmlResolver*& System::Xml::Schema::Preprocessor::__cordl_internal_get_xmlResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr ::System::Xml::XmlResolver* const& System::Xml::Schema::Preprocessor::__cordl_internal_get_xmlResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr void System::Xml::Schema::Preprocessor::__cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlResolver = value;
}
inline void System::Xml::Schema::Preprocessor::setStaticF_builtInSchemaForXmlNS(::System::Xml::Schema::XmlSchema* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchema*, "builtInSchemaForXmlNS", ::System::Xml::Schema::Preprocessor*>(std::forward<::System::Xml::Schema::XmlSchema*>(value));
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::Preprocessor::getStaticF_builtInSchemaForXmlNS() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchema*, "builtInSchemaForXmlNS", ::System::Xml::Schema::Preprocessor*>();
}
inline void System::Xml::Schema::Preprocessor::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                     ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(),
                                                  ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, schemaNames, eventHandler, compilationSettings);
}
inline bool System::Xml::Schema::Preprocessor::Execute(::System::Xml::Schema::XmlSchema* schema, ::StringW targetNamespace, bool loadExternals) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                           { "Execute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schema, targetNamespace, loadExternals);
}
inline void System::Xml::Schema::Preprocessor::Cleanup(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "Cleanup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::Preprocessor::CleanupRedefine(::System::Xml::Schema::XmlSchemaExternal* include) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "CleanupRedefine", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaExternal*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, include);
}
inline void System::Xml::Schema::Preprocessor::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::Preprocessor::set_ReaderSettings(::System::Xml::XmlReaderSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "set_ReaderSettings", {}, { ::i2c::type_of<::System::Xml::XmlReaderSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::Preprocessor::set_SchemaLocations(::System::Collections::Hashtable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "set_SchemaLocations", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::Preprocessor::set_ChameleonSchemas(::System::Collections::Hashtable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "set_ChameleonSchemas", {}, { ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::Preprocessor::get_RootSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "get_RootSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method);
}
inline void System::Xml::Schema::Preprocessor::BuildSchemaList(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "BuildSchemaList", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::Preprocessor::LoadExternals(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "LoadExternals", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::Preprocessor::GetBuildInSchema() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "GetBuildInSchema", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(nullptr, ___internal_method);
}
inline void System::Xml::Schema::Preprocessor::BuildRefNamespaces(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "BuildRefNamespaces", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::Preprocessor::ParseUri(::StringW uri, ::StringW code, ::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                              { "ParseUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, code, sourceSchemaObject);
}
inline void System::Xml::Schema::Preprocessor::Preprocess(::System::Xml::Schema::XmlSchema* schema, ::StringW targetNamespace, ::System::Collections::ArrayList* imports) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                          { "Preprocess", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema, targetNamespace, imports);
}
inline void System::Xml::Schema::Preprocessor::CopyIncludedComponents(::System::Xml::Schema::XmlSchema* includedSchema, ::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                              { "CopyIncludedComponents", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, includedSchema, schema);
}
inline void System::Xml::Schema::Preprocessor::PreprocessRedefine(::System::Xml::Schema::RedefineEntry* redefineEntry) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessRedefine", {}, { ::i2c::type_of<::System::Xml::Schema::RedefineEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, redefineEntry);
}
inline void System::Xml::Schema::Preprocessor::GetIncludedSet(::System::Xml::Schema::XmlSchema* schema, ::System::Collections::ArrayList* includesList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                           { "GetIncludedSet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema, includesList);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::Preprocessor::GetParentSchema(::System::Xml::Schema::XmlSchemaObject* currentSchemaObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "GetParentSchema", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(nullptr, ___internal_method, currentSchemaObject);
}
inline void System::Xml::Schema::Preprocessor::SetSchemaDefaults(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "SetSchemaDefaults", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline int32_t System::Xml::Schema::Preprocessor::CountGroupSelfReference(::System::Xml::Schema::XmlSchemaObjectCollection* items, ::System::Xml::XmlQualifiedName* name,
                                                                          ::System::Xml::Schema::XmlSchemaGroup* redefined) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                           { "CountGroupSelfReference",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, items, name, redefined);
}
inline void System::Xml::Schema::Preprocessor::CheckRefinedGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "CheckRefinedGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void System::Xml::Schema::Preprocessor::CheckRefinedAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                                                         { "CheckRefinedAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::Preprocessor::CheckRefinedSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* stype) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "CheckRefinedSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stype);
}
inline void System::Xml::Schema::Preprocessor::CheckRefinedComplexType(::System::Xml::Schema::XmlSchemaComplexType* ctype) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                                                         { "CheckRefinedComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ctype);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::Preprocessor::PreprocessLocalAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessLocalAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAttributeContent(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                                                         { "PreprocessAttributeContent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                                                         { "PreprocessAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::Preprocessor::PreprocessElement(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Xml::Schema::Preprocessor::PreprocessLocalElement(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessLocalElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Xml::Schema::Preprocessor::PreprocessElementContent(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessElementContent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Xml::Schema::Preprocessor::PreprocessIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessIdentityConstraint", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint);
}
inline void System::Xml::Schema::Preprocessor::PreprocessSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType, bool local) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                           { "PreprocessSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simpleType, local);
}
inline void System::Xml::Schema::Preprocessor::PreprocessComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType, bool local) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                           { "PreprocessComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, local);
}
inline void System::Xml::Schema::Preprocessor::PreprocessGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void System::Xml::Schema::Preprocessor::PreprocessNotation(::System::Xml::Schema::XmlSchemaNotation* notation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessNotation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaNotation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notation);
}
inline void System::Xml::Schema::Preprocessor::PreprocessParticle(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute,
                                                                    ::System::Xml::Schema::XmlSchemaObject* parent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                           { "PreprocessAttributes",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes, anyAttribute, parent);
}
inline void System::Xml::Schema::Preprocessor::ValidateIdAttribute(::System::Xml::Schema::XmlSchemaObject* xso) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "ValidateIdAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xso);
}
inline void System::Xml::Schema::Preprocessor::ValidateNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "ValidateNameAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xso);
}
inline void System::Xml::Schema::Preprocessor::ValidateQNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso, ::StringW attributeName, ::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
          { "ValidateQNameAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xso, attributeName, value);
}
inline ::System::Uri* System::Xml::Schema::Preprocessor::ResolveSchemaLocationUri(::System::Xml::Schema::XmlSchema* enclosingSchema, ::StringW location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                           { "ResolveSchemaLocationUri", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, enclosingSchema, location);
}
inline ::System::Object* System::Xml::Schema::Preprocessor::GetSchemaEntity(::System::Uri* ruri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "GetSchemaEntity", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, ruri);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::Preprocessor::GetChameleonSchema(::StringW targetNamespace, ::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                                           { "GetChameleonSchema", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, targetNamespace, schema);
}
inline void System::Xml::Schema::Preprocessor::SetParent(::System::Xml::Schema::XmlSchemaObject* child, ::System::Xml::Schema::XmlSchemaObject* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(),
                                              { "SetParent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child, parent);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAnnotation(::System::Xml::Schema::XmlSchemaObject* schemaObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessAnnotation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaObject);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::Preprocessor*>(), { "PreprocessAnnotation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnnotation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, annotation);
}
inline ::System::Xml::Schema::Preprocessor* System::Xml::Schema::Preprocessor::New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                                                        ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                                                                                        ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::Preprocessor*>(nameTable, schemaNames, eventHandler, compilationSettings));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Preprocessor::Preprocessor() {}
