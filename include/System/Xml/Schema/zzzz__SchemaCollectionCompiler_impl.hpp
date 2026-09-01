#pragma once
// IWYU pragma private; include "System\Xml\Schema\SchemaCollectionCompiler.hpp"
#include "System/Xml/Schema/zzzz__BaseProcessor_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaCollectionCompiler_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__ParticleContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAll_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnyAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAny_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttributeGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaChoice_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexContentExtension_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexContentRestriction_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexContent_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroupRef_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSequence_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContentExtension_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContentRestriction_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroupV1Compat_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::XmlNameTable*, ::System::Xml::Schema::ValidationEventHandler*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x61eaa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::SchemaInfo*, bool)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::Execute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61eaae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                         { "Execute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Prepare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)()>(&::System::Xml::Schema::SchemaCollectionCompiler::Prepare)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x61eab44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "Prepare", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)()>(&::System::Xml::Schema::SchemaCollectionCompiler::Cleanup)> {
  constexpr static std::size_t size = 0xe0c;
  constexpr static std::size_t addrs = 0x61eaf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::SchemaCollectionCompiler::Cleanup)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x61ef018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "Cleanup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Compile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)()>(&::System::Xml::Schema::SchemaCollectionCompiler::Compile)> {
  constexpr static std::size_t size = 0x1e04;
  constexpr static std::size_t addrs = 0x61ebda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "Compile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Output
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::SchemaInfo*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::Output)> {
  constexpr static std::size_t size = 0xf00;
  constexpr static std::size_t addrs = 0x61edbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "Output", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaAttribute*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CleanupAttribute)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x61eeff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CleanupAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupAttributeGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CleanupAttributeGroup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x61eead0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CleanupAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CleanupComplexType)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x61eeb0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CleanupComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CleanupSimpleType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x61eee50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CleanupSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CleanupElement)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x61eee68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CleanupElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CleanupAttributes)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x61f3c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CleanupAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaGroup*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CleanupGroup)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x61eeaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "CleanupGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CleanupParticle)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x61f3ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CleanupParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileSubstitutionGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileSubstitutionGroup)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x61ef6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "CompileSubstitutionGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CheckSubstitutionGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaSubstitutionGroup*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CheckSubstitutionGroup)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x61f3a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "CheckSubstitutionGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaGroup*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileGroup)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x61efb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "CompileGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleType)> {
  constexpr static std::size_t size = 0x8d0;
  constexpr static std::size_t addrs = 0x61f10bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CompileSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileBaseMemberTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileBaseMemberTypes)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x61f4238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CompileBaseMemberTypes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CheckUnionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CheckUnionType)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x61f45e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "CheckUnionType",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<::System::Collections::ArrayList*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexType)> {
  constexpr static std::size_t size = 0xd14;
  constexpr static std::size_t addrs = 0x61f03a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CompileComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileSimpleContentExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleContentExtension)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x61f470c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
            { "CompileSimpleContentExtension", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileSimpleContentRestriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleContentRestriction)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x61f4944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                { "CompileSimpleContentRestriction",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentRestriction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileComplexContentExtension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentExtension*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContentExtension)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x61f4d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "CompileComplexContentExtension",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContentExtension*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileComplexContentRestriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentRestriction*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContentRestriction)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x61f50e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "CompileComplexContentRestriction",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContentRestriction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CheckParticleDerivation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CheckParticleDerivation)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61f38f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CheckParticleDerivation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileContentTypeParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaParticle*, bool)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileContentTypeParticle)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x61f6794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "CompileContentTypeParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaParticle*, bool, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeParticle)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x61f3e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                { "CannonicalizeParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaElement*, bool)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeElement)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x61f7a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "CannonicalizeElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeGroupRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaGroupRef*, bool, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeGroupRef)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x61f7be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                { "CannonicalizeGroupRef", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupRef*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAll*, bool, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeAll)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x61f81b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "CannonicalizeAll", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAll*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeChoice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaChoice*, bool, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeChoice)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x61f86b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                { "CannonicalizeChoice", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaSequence*, bool, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeSequence)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x61f8c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                { "CannonicalizeSequence", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsValidRestriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsValidRestriction)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x61f74f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                         { "IsValidRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsElementFromElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsElementFromElement)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x61f91ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                         { "IsElementFromElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsElementFromAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaAny*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsElementFromAny)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61f92f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                { "IsElementFromAny", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsAnyFromAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAny*, ::System::Xml::Schema::XmlSchemaAny*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsAnyFromAny)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61f934c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                { "IsAnyFromAny", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsGroupBaseFromAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaAny*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsGroupBaseFromAny)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x61f9398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                         { "IsGroupBaseFromAny", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsElementFromGroupBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaGroupBase*,
                                                                                                                 bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsElementFromGroupBase)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x61f95d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
            { "IsElementFromGroupBase", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsGroupBaseFromGroupBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaGroupBase*,
                                                                                                                 bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsGroupBaseFromGroupBase)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x61f98b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                         { "IsGroupBaseFromGroupBase",
                                           {},
                                           { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsSequenceFromAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaAll*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsSequenceFromAll)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x61f9b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                { "IsSequenceFromAll", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAll*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsSequenceFromChoice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaChoice*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsSequenceFromChoice)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x61f9ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                         { "IsSequenceFromChoice", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CalculateSequenceRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaSequence*, ::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::System::Xml::Schema::SchemaCollectionCompiler::CalculateSequenceRange)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x61faa28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                            { "CalculateSequenceRange",
                              {},
                              { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsValidOccurrenceRangeRestriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsValidOccurrenceRangeRestriction)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x61fa110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                         { "IsValidOccurrenceRangeRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsValidOccurrenceRangeRestriction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Decimal, ::System::Decimal, ::System::Decimal, ::System::Decimal)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsValidOccurrenceRangeRestriction)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61fa844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                         { "IsValidOccurrenceRangeRestriction",
                                           {},
                                           { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.GetMappingParticle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Xml::Schema::SchemaCollectionCompiler::GetMappingParticle)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x61fa930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                            { "GetMappingParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsParticleEmptiable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsParticleEmptiable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x61f9124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "IsParticleEmptiable", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CalculateEffectiveTotalRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::System::Xml::Schema::SchemaCollectionCompiler::CalculateEffectiveTotalRange)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x61fa154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                            { "CalculateEffectiveTotalRange",
                              {},
                              { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.PushComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::PushComplexType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x61fad08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "PushComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.GetSchemaContentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaContentType (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::GetSchemaContentType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61f6918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "GetSchemaContentType",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileAttributeGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileAttributeGroup)> {
  constexpr static std::size_t size = 0x774;
  constexpr static std::size_t addrs = 0x61efc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CompileAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileLocalAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*,
    ::System::Xml::Schema::XmlSchemaDerivationMethod)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileLocalAttributes)> {
  constexpr static std::size_t size = 0x13f0;
  constexpr static std::size_t addrs = 0x61f53a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "CompileLocalAttributes",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileAnyAttributeUnion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileAnyAttributeUnion)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x61fadc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                            { "CompileAnyAttributeUnion", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileAnyAttributeIntersection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileAnyAttributeIntersection)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x61fad28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
            { "CompileAnyAttributeIntersection", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileAttribute)> {
  constexpr static std::size_t size = 0xa80;
  constexpr static std::size_t addrs = 0x61f2684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CompileAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileIdentityConstraint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileIdentityConstraint)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x61f3104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                             { "CompileIdentityConstraint", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileElement)> {
  constexpr static std::size_t size = 0xcf8;
  constexpr static std::size_t addrs = 0x61f198c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CompileElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileComplexContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::ContentValidator* (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContent)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x61f6988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CompileComplexContent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.BuildParticleContentModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::ParticleContentValidator*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::SchemaCollectionCompiler::BuildParticleContentModel)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x61fae58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                            { "BuildParticleContentModel", {}, { ::i2c::type_of<::System::Xml::Schema::ParticleContentValidator*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileParticleElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileParticleElements)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x61fb348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                            { "CompileParticleElements", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileCompexTypeElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileCompexTypeElements)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x61f3814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                           { "CompileCompexTypeElements", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.GetSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::GetSimpleType)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x61f40d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "GetSimpleType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.GetComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::GetComplexType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x61f7430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "GetComplexType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.GetAnySchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::GetAnySchemaType)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x61f72b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "GetAnySchemaType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
constexpr bool& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_compileContentModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compileContentModel;
}
constexpr bool const& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_compileContentModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compileContentModel;
}
constexpr void System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_set_compileContentModel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compileContentModel = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_examplars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___examplars;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_examplars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___examplars;
}
constexpr void System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_set_examplars(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___examplars = value;
}
constexpr ::System::Collections::Stack*& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_complexTypeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexTypeStack;
}
constexpr ::System::Collections::Stack* const& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_complexTypeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexTypeStack;
}
constexpr void System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_set_complexTypeStack(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___complexTypeStack = value;
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_schema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_schema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr void System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schema = value;
}
inline void System::Xml::Schema::SchemaCollectionCompiler::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable, eventHandler);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::Execute(::System::Xml::Schema::XmlSchema* schema, ::System::Xml::Schema::SchemaInfo* schemaInfo, bool compileContentModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                       { "Execute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schema, schemaInfo, compileContentModel);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::Prepare() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "Prepare", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::Cleanup(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "Cleanup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, schema);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::Compile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "Compile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::Output(::System::Xml::Schema::SchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "Output", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemaInfo);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CleanupAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attribute);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CleanupAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CleanupComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, complexType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CleanupSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, simpleType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupElement(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "CleanupElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, element);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CleanupAttributes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, attributes);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "CleanupGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, group);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupParticle(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CleanupParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, particle);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat* substitutionGroup) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { "CompileSubstitutionGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, substitutionGroup);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CheckSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CheckSubstitutionGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, substitutionGroup);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "CompileGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CompileSimpleType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, simpleType);
}
inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*> System::Xml::Schema::SchemaCollectionCompiler::CompileBaseMemberTypes(::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CompileBaseMemberTypes", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*>>(this, ___internal_method, simpleType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CheckUnionType(::System::Xml::Schema::XmlSchemaSimpleType* unionMember, ::System::Collections::ArrayList* memberTypeDefinitions,
                                                                          ::System::Xml::Schema::XmlSchemaSimpleType* parentType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { "CheckUnionType",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>(), ::i2c::type_of<::System::Collections::ArrayList*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unionMember, memberTypeDefinitions, parentType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CompileComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                         ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleExtension) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
          { "CompileSimpleContentExtension", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, simpleExtension);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                           ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleRestriction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
          { "CompileSimpleContentRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleContentRestriction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, simpleRestriction);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                          ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                                          ::System::Xml::Schema::XmlSchemaComplexContentExtension* complexExtension) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { "CompileComplexContentExtension",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContentExtension*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, complexContent, complexExtension);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                            ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                                            ::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexRestriction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { "CompileComplexContentRestriction",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContentRestriction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, complexContent, complexRestriction);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CheckParticleDerivation(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CheckParticleDerivation", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CompileContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, bool substitution) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { "CompileContentTypeParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, particle, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, bool root,
                                                                                                                      bool substitution) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                              { "CannonicalizeParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, particle, root, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeElement(::System::Xml::Schema::XmlSchemaElement* element, bool substitution) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { "CannonicalizeElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, element, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeGroupRef(::System::Xml::Schema::XmlSchemaGroupRef* groupRef, bool root,
                                                                                                                      bool substitution) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                              { "CannonicalizeGroupRef", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupRef*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, groupRef, root, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeAll(::System::Xml::Schema::XmlSchemaAll* all, bool root, bool substitution) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { "CannonicalizeAll", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAll*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, all, root, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeChoice(::System::Xml::Schema::XmlSchemaChoice* choice, bool root, bool substitution) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                              { "CannonicalizeChoice", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, choice, root, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeSequence(::System::Xml::Schema::XmlSchemaSequence* sequence, bool root,
                                                                                                                      bool substitution) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                              { "CannonicalizeSequence", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*>(this, ___internal_method, sequence, root, substitution);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsValidRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                       { "IsValidRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedParticle, baseParticle);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsElementFromElement(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaElement* baseElement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                       { "IsElementFromElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedElement, baseElement);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsElementFromAny(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaAny* baseAny) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                              { "IsElementFromAny", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedElement, baseAny);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsAnyFromAny(::System::Xml::Schema::XmlSchemaAny* derivedAny, ::System::Xml::Schema::XmlSchemaAny* baseAny) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                              { "IsAnyFromAny", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedAny, baseAny);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsGroupBaseFromAny(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaAny* baseAny) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                              { "IsGroupBaseFromAny", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAny*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedGroupBase, baseAny);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsElementFromGroupBase(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase,
                                                                                  bool skipEmptableOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
          { "IsElementFromGroupBase", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedElement, baseGroupBase, skipEmptableOnly);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsGroupBaseFromGroupBase(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase,
                                                                                    ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
          { "IsGroupBaseFromGroupBase", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaGroupBase*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedGroupBase, baseGroupBase, skipEmptableOnly);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsSequenceFromAll(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaAll* baseAll) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                              { "IsSequenceFromAll", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAll*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedSequence, baseAll);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsSequenceFromChoice(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaChoice* baseChoice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                       { "IsSequenceFromChoice", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaChoice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedSequence, baseChoice);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CalculateSequenceRange(::System::Xml::Schema::XmlSchemaSequence* sequence, ::by_ref<::System::Decimal> minOccurs,
                                                                                  ::by_ref<::System::Decimal> maxOccurs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                          { "CalculateSequenceRange",
                            {},
                            { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSequence*>(), ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sequence, minOccurs, maxOccurs);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsValidOccurrenceRangeRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle,
                                                                                             ::System::Xml::Schema::XmlSchemaParticle* baseParticle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                          { "IsValidOccurrenceRangeRestriction", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, derivedParticle, baseParticle);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsValidOccurrenceRangeRestriction(::System::Decimal minOccurs, ::System::Decimal maxOccurs, ::System::Decimal baseMinOccurs,
                                                                                             ::System::Decimal baseMaxOccurs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                       { "IsValidOccurrenceRangeRestriction",
                                         {},
                                         { ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, minOccurs, maxOccurs, baseMinOccurs, baseMaxOccurs);
}
inline int32_t System::Xml::Schema::SchemaCollectionCompiler::GetMappingParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchemaObjectCollection* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                          { "GetMappingParticle", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, particle, collection);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsParticleEmptiable(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "IsParticleEmptiable", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CalculateEffectiveTotalRange(::System::Xml::Schema::XmlSchemaParticle* particle, ::by_ref<::System::Decimal> minOccurs,
                                                                                        ::by_ref<::System::Decimal> maxOccurs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                          { "CalculateEffectiveTotalRange",
                            {},
                            { ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>(), ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particle, minOccurs, maxOccurs);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::PushComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "PushComplexType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType);
}
inline ::System::Xml::Schema::XmlSchemaContentType System::Xml::Schema::SchemaCollectionCompiler::GetSchemaContentType(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                                                       ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                                                                       ::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { "GetSchemaContentType",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexContent*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContentType>(this, ___internal_method, complexType, complexContent, particle);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CompileAttributeGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttributeGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileLocalAttributes(::System::Xml::Schema::XmlSchemaComplexType* baseType, ::System::Xml::Schema::XmlSchemaComplexType* derivedType,
                                                                                  ::System::Xml::Schema::XmlSchemaObjectCollection* attributes,
                                                                                  ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute,
                                                                                  ::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { "CompileLocalAttributes",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectCollection*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaDerivationMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseType, derivedType, attributes, anyAttribute, derivedBy);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::SchemaCollectionCompiler::CompileAnyAttributeUnion(::System::Xml::Schema::XmlSchemaAnyAttribute* a,
                                                                                                                             ::System::Xml::Schema::XmlSchemaAnyAttribute* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                          { "CompileAnyAttributeUnion", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*>(this, ___internal_method, a, b);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::SchemaCollectionCompiler::CompileAnyAttributeIntersection(::System::Xml::Schema::XmlSchemaAnyAttribute* a,
                                                                                                                                    ::System::Xml::Schema::XmlSchemaAnyAttribute* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
          { "CompileAnyAttributeIntersection", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaAnyAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*>(this, ___internal_method, a, b);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileAttribute(::System::Xml::Schema::XmlSchemaAttribute* xa) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CompileAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xa);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* xi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                           { "CompileIdentityConstraint", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xi);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileElement(::System::Xml::Schema::XmlSchemaElement* xe) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "CompileElement", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xe);
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContent(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CompileComplexContent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ContentValidator*>(this, ___internal_method, complexType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::BuildParticleContentModel(::System::Xml::Schema::ParticleContentValidator* contentValidator,
                                                                                     ::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                          { "BuildParticleContentModel", {}, { ::i2c::type_of<::System::Xml::Schema::ParticleContentValidator*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentValidator, particle);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileParticleElements(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                          { "CompileParticleElements", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaParticle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType, particle);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileCompexTypeElements(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(),
                                                                                         { "CompileCompexTypeElements", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaComplexType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complexType);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::SchemaCollectionCompiler::GetSimpleType(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "GetSimpleType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Xml::Schema::SchemaCollectionCompiler::GetComplexType(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "GetComplexType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::SchemaCollectionCompiler::GetAnySchemaType(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaCollectionCompiler*>(), { "GetAnySchemaType", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::SchemaCollectionCompiler* System::Xml::Schema::SchemaCollectionCompiler::New_ctor(::System::Xml::XmlNameTable* nameTable,
                                                                                                                ::System::Xml::Schema::ValidationEventHandler* eventHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaCollectionCompiler*>(nameTable, eventHandler));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaCollectionCompiler::SchemaCollectionCompiler() {}
