#pragma once
// IWYU pragma private; include "System/Xml/Schema/Compiler.hpp"
#include "System/Xml/Schema/zzzz__BaseProcessor_impl.hpp"
#include "System/Xml/Schema/zzzz__Compiler_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__Stack_def.hpp"
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__ParticleContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaDeclBase_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAll_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnyAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAny_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttributeGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaChoice_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
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
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContentExtension_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleContentRestriction_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::Compiler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::XmlNameTable*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaCompilationSettings*)>(
    &::System::Xml::Schema::Compiler::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x429405c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSet*, ::System::Xml::Schema::SchemaInfo*)>(
    &::System::Xml::Schema::Compiler::Execute)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4294214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.Prepare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchema*, bool)>(
    &::System::Xml::Schema::Compiler::Prepare)> {
  constexpr static std::size_t size = 0x16fc;
  constexpr static std::size_t addrs = 0x429734c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "Prepare", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.UpdateSForSSimpleTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)()>(&::System::Xml::Schema::Compiler::UpdateSForSSimpleTypes)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x4299158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(),
                                                                               "UpdateSForSSimpleTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.Output
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::SchemaInfo*)>(
    &::System::Xml::Schema::Compiler::Output)> {
  constexpr static std::size_t size = 0x10b0;
  constexpr static std::size_t addrs = 0x429629c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "Output", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.ImportAllCompiledSchemas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSet*)>(
    &::System::Xml::Schema::Compiler::ImportAllCompiledSchemas)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x42992a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "ImportAllCompiledSchemas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.Compile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)()>(&::System::Xml::Schema::Compiler::Compile)> {
  constexpr static std::size_t size = 0x200c;
  constexpr static std::size_t addrs = 0x4294290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "Compile",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::Compiler::CleanupAttribute)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4298bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupAttributeGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::Compiler::CleanupAttributeGroup)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4298c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupAttributeGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::Compiler::CleanupComplexType)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x4298c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupComplexType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(
    &::System::Xml::Schema::Compiler::CleanupSimpleType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x42990a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupSimpleType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::Compiler::CleanupElement)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x4298a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(
    &::System::Xml::Schema::Compiler::CleanupAttributes)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x429dcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaGroup*)>(
    &::System::Xml::Schema::Compiler::CleanupGroup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4298bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CleanupParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::Compiler::CleanupParticle)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x429dd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupParticle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.ProcessSubstitutionGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)()>(&::System::Xml::Schema::Compiler::ProcessSubstitutionGroups)> {
  constexpr static std::size_t size = 0x86c;
  constexpr static std::size_t addrs = 0x429cd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(),
                                                                               "ProcessSubstitutionGroups", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileSubstitutionGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSubstitutionGroup*)>(
    &::System::Xml::Schema::Compiler::CompileSubstitutionGroup)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x429df34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileSubstitutionGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.RecursivelyCheckRedefinedGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaGroup*, ::System::Xml::Schema::XmlSchemaGroup*)>(&::System::Xml::Schema::Compiler::RecursivelyCheckRedefinedGroups)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x429db98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "RecursivelyCheckRedefinedGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.RecursivelyCheckRedefinedAttributeGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaAttributeGroup*, ::System::Xml::Schema::XmlSchemaAttributeGroup*)>(&::System::Xml::Schema::Compiler::RecursivelyCheckRedefinedAttributeGroups)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x429dc48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "RecursivelyCheckRedefinedAttributeGroups", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaGroup*)>(
    &::System::Xml::Schema::Compiler::CompileGroup)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x42993b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(
    &::System::Xml::Schema::Compiler::CompileSimpleType)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x429a7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileSimpleType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileBaseMemberTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> (
    ::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::Compiler::CompileBaseMemberTypes)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x429f338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileBaseMemberTypes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CheckUnionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::Compiler::CheckUnionType)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x429f6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CheckUnionType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::Compiler::CompileComplexType)> {
  constexpr static std::size_t size = 0xaac;
  constexpr static std::size_t addrs = 0x4299cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileComplexType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileSimpleContentExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*)>(&::System::Xml::Schema::Compiler::CompileSimpleContentExtension)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x429f7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileSimpleContentExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileSimpleContentRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*)>(&::System::Xml::Schema::Compiler::CompileSimpleContentRestriction)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x429fa30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileSimpleContentRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentRestriction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileComplexContentExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentExtension*)>(
    &::System::Xml::Schema::Compiler::CompileComplexContentExtension)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x429fe54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileComplexContentExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContentExtension*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileComplexContentRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentRestriction*)>(
    &::System::Xml::Schema::Compiler::CompileComplexContentRestriction)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x42a01c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileComplexContentRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContentRestriction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CheckParticleDerivation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::Compiler::CheckParticleDerivation)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x429d5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CheckParticleDerivation", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CheckParticleDerivation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::CheckParticleDerivation)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x429e7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CheckParticleDerivation", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileContentTypeParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::CompileContentTypeParticle)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x42a19f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileContentTypeParticle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*, bool)>(&::System::Xml::Schema::Compiler::CannonicalizeParticle)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x429e43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeParticle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Xml::Schema::Compiler::CannonicalizeElement)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x42a45e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeGroupRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaGroupRef*, bool)>(&::System::Xml::Schema::Compiler::CannonicalizeGroupRef)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x42a34a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeGroupRef", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupRef*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAll*, bool)>(&::System::Xml::Schema::Compiler::CannonicalizeAll)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x42a39bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeAll", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAll*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeChoice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaChoice*, bool)>(&::System::Xml::Schema::Compiler::CannonicalizeChoice)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x42a3c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeChoice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizeSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSequence*, bool)>(&::System::Xml::Schema::Compiler::CannonicalizeSequence)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x42a4134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeSequence", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CannonicalizePointlessRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::CannonicalizePointlessRoot)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x42a280c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizePointlessRoot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsValidRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::IsValidRestriction)> {
  constexpr static std::size_t size = 0xa38;
  constexpr static std::size_t addrs = 0x42a2a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsValidRestriction", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsElementFromElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaElement*)>(&::System::Xml::Schema::Compiler::IsElementFromElement)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x42a490c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsElementFromElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsElementFromAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaAny*)>(&::System::Xml::Schema::Compiler::IsElementFromAny)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x42a4af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsElementFromAny", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsAnyFromAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAny*, ::System::Xml::Schema::XmlSchemaAny*)>(&::System::Xml::Schema::Compiler::IsAnyFromAny)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x42a4c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsAnyFromAny", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsGroupBaseFromAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaAny*)>(&::System::Xml::Schema::Compiler::IsGroupBaseFromAny)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x42a4d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsGroupBaseFromAny", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsElementFromGroupBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaGroupBase*)>(&::System::Xml::Schema::Compiler::IsElementFromGroupBase)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x42a5148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsElementFromGroupBase", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsChoiceFromChoiceSubstGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaChoice*, ::System::Xml::Schema::XmlSchemaChoice*)>(&::System::Xml::Schema::Compiler::IsChoiceFromChoiceSubstGroup)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x42a5f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsChoiceFromChoiceSubstGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsGroupBaseFromGroupBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaGroupBase*, bool)>(&::System::Xml::Schema::Compiler::IsGroupBaseFromGroupBase)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x42a5950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsGroupBaseFromGroupBase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsSequenceFromAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaAll*)>(&::System::Xml::Schema::Compiler::IsSequenceFromAll)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x42a5c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsSequenceFromAll", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAll*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsSequenceFromChoice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaChoice*)>(&::System::Xml::Schema::Compiler::IsSequenceFromChoice)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x42a60b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsSequenceFromChoice", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsValidOccurrenceRangeRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::IsValidOccurrenceRangeRestriction)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x42a63fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsValidOccurrenceRangeRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsValidOccurrenceRangeRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(
    ::System::Decimal, ::System::Decimal, ::System::Decimal, ::System::Decimal)>(&::System::Xml::Schema::Compiler::IsValidOccurrenceRangeRestriction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x42a6d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsValidOccurrenceRangeRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.GetMappingParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Xml::Schema::Compiler::GetMappingParticle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x42a6e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "GetMappingParticle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsParticleEmptiable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::Compiler::IsParticleEmptiable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x42a4848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsParticleEmptiable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CalculateEffectiveTotalRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ::ByRef<::System::Decimal>, ::ByRef<::System::Decimal>)>(&::System::Xml::Schema::Compiler::CalculateEffectiveTotalRange)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x42a659c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CalculateEffectiveTotalRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.PushComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::Compiler::PushComplexType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x42a6f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "PushComplexType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.GetSchemaContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaContentType (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::Compiler::GetSchemaContentType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x42a1b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "GetSchemaContentType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileAttributeGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::Compiler::CompileAttributeGroup)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x4299478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileAttributeGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileLocalAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*,
    ::System::Xml::Schema::XmlSchemaDerivationMethod)>(&::System::Xml::Schema::Compiler::CompileLocalAttributes)> {
  constexpr static std::size_t size = 0x157c;
  constexpr static std::size_t addrs = 0x42a0478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileLocalAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDerivationMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CheckAtrributeGroupRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaAttributeGroup*, ::System::Xml::Schema::XmlSchemaAttributeGroup*)>(&::System::Xml::Schema::Compiler::CheckAtrributeGroupRestriction)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x429e8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CheckAtrributeGroupRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsProcessContentsRestricted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(
        &::System::Xml::Schema::Compiler::IsProcessContentsRestricted)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x42a7088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsProcessContentsRestricted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileAnyAttributeUnion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (
    ::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(&::System::Xml::Schema::Compiler::CompileAnyAttributeUnion)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x42a6ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileAnyAttributeUnion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileAnyAttributeIntersection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(
        &::System::Xml::Schema::Compiler::CompileAnyAttributeIntersection)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x42a6f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileAnyAttributeIntersection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::Compiler::CompileAttribute)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x429bde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.SetDefaultFixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaAttribute*, ::System::Xml::Schema::SchemaAttDef*)>(&::System::Xml::Schema::Compiler::SetDefaultFixed)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x42a7164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "SetDefaultFixed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileIdentityConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(
    &::System::Xml::Schema::Compiler::CompileIdentityConstraint)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x429c5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileIdentityConstraint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::Compiler::CompileElement)> {
  constexpr static std::size_t size = 0xd48;
  constexpr static std::size_t addrs = 0x429b098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileComplexContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Schema::ContentValidator* (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::Compiler::CompileComplexContent)> {
  constexpr static std::size_t size = 0xa4c;
  constexpr static std::size_t addrs = 0x42a1bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileComplexContent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.BuildParticleContentModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::ParticleContentValidator*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::BuildParticleContentModel)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x42a7308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "BuildParticleContentModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileParticleElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::Compiler::CompileParticleElements)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x42a7808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileParticleElements", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileParticleElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::Compiler::CompileParticleElements)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x429e658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileParticleElements", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CompileComplexTypeElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::Compiler::CompileComplexTypeElements)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x429cc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileComplexTypeElements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.GetSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (::System::Xml::Schema::Compiler::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::Compiler::GetSimpleType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x429f260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "GetSimpleType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.GetComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (::System::Xml::Schema::Compiler::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::Compiler::GetComplexType)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x42a2764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "GetComplexType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.GetAnySchemaType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (::System::Xml::Schema::Compiler::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::Compiler::GetAnySchemaType)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x42a260c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "GetAnySchemaType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.CopyPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Compiler::*)(
    ::System::Xml::Schema::XmlSchemaAnnotated*, ::System::Xml::Schema::XmlSchemaAnnotated*, bool)>(&::System::Xml::Schema::Compiler::CopyPosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x42a47ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CopyPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Compiler.IsFixedEqual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Xml::Schema::Compiler::*)(::System::Xml::Schema::SchemaDeclBase*, ::System::Xml::Schema::SchemaDeclBase*)>(&::System::Xml::Schema::Compiler::IsFixedEqual)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x42a6440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsFixedEqual", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaDeclBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaDeclBase*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::Compiler::__cordl_internal_get_restrictionErrorMsg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restrictionErrorMsg;
}
constexpr ::StringW const& System::Xml::Schema::Compiler::__cordl_internal_get_restrictionErrorMsg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___restrictionErrorMsg;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_restrictionErrorMsg(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___restrictionErrorMsg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_attributeGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroups;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_attributeGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroups;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_attributeGroups(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_elements(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_schemaTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaTypes;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_schemaTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaTypes;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_schemaTypes(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_groups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groups;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_groups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groups;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_groups(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_notations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notations;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_notations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notations;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_notations(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___notations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_examplars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___examplars;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_examplars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___examplars;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_examplars(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___examplars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::Compiler::__cordl_internal_get_identityConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identityConstraints;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::Compiler::__cordl_internal_get_identityConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identityConstraints;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_identityConstraints(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___identityConstraints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Stack*& System::Xml::Schema::Compiler::__cordl_internal_get_complexTypeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexTypeStack;
}
constexpr ::System::Collections::Stack* const& System::Xml::Schema::Compiler::__cordl_internal_get_complexTypeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexTypeStack;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_complexTypeStack(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___complexTypeStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::Compiler::__cordl_internal_get_schemasToCompile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemasToCompile;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::Compiler::__cordl_internal_get_schemasToCompile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemasToCompile;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_schemasToCompile(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemasToCompile)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::Compiler::__cordl_internal_get_importedSchemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___importedSchemas;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::Compiler::__cordl_internal_get_importedSchemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___importedSchemas;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_importedSchemas(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___importedSchemas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::Compiler::__cordl_internal_get_schemaForSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaForSchema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::Compiler::__cordl_internal_get_schemaForSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaForSchema;
}
constexpr void System::Xml::Schema::Compiler::__cordl_internal_set_schemaForSchema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaForSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::Compiler::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchema* schemaForSchema,
                                                 ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable, eventHandler, schemaForSchema, compilationSettings);
}
inline bool System::Xml::Schema::Compiler::Execute(::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Xml::Schema::SchemaInfo* schemaCompiledInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, schemaSet, schemaCompiledInfo);
}
inline void System::Xml::Schema::Compiler::Prepare(::System::Xml::Schema::XmlSchema* schema, bool cleanup) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "Prepare", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema, cleanup);
}
inline void System::Xml::Schema::Compiler::UpdateSForSSimpleTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "UpdateSForSSimpleTypes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::Compiler::Output(::System::Xml::Schema::SchemaInfo* schemaInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "Output", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schemaInfo);
}
inline void System::Xml::Schema::Compiler::ImportAllCompiledSchemas(::System::Xml::Schema::XmlSchemaSet* schemaSet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "ImportAllCompiledSchemas", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schemaSet);
}
inline bool System::Xml::Schema::Compiler::Compile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "Compile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::Compiler::CleanupAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::Compiler::CleanupAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupAttributeGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::Compiler::CleanupComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupComplexType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType);
}
inline void System::Xml::Schema::Compiler::CleanupSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupSimpleType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, simpleType);
}
inline void System::Xml::Schema::Compiler::CleanupElement(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void System::Xml::Schema::Compiler::CleanupAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes);
}
inline void System::Xml::Schema::Compiler::CleanupGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group);
}
inline void System::Xml::Schema::Compiler::CleanupParticle(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CleanupParticle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::Compiler::ProcessSubstitutionGroups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(),
                                                                             "ProcessSubstitutionGroups", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::Compiler::CompileSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileSubstitutionGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, substitutionGroup);
}
inline void System::Xml::Schema::Compiler::RecursivelyCheckRedefinedGroups(::System::Xml::Schema::XmlSchemaGroup* redefinedGroup, ::System::Xml::Schema::XmlSchemaGroup* baseGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "RecursivelyCheckRedefinedGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, redefinedGroup, baseGroup);
}
inline void System::Xml::Schema::Compiler::RecursivelyCheckRedefinedAttributeGroups(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup,
                                                                                    ::System::Xml::Schema::XmlSchemaAttributeGroup* baseAttributeGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "RecursivelyCheckRedefinedAttributeGroups", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeGroup, baseAttributeGroup);
}
inline void System::Xml::Schema::Compiler::CompileGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group);
}
inline void System::Xml::Schema::Compiler::CompileSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileSimpleType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, simpleType);
}
inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>
System::Xml::Schema::Compiler::CompileBaseMemberTypes(::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileBaseMemberTypes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>, false>(this, ___internal_method, simpleType);
}
inline void System::Xml::Schema::Compiler::CheckUnionType(::System::Xml::Schema::XmlSchemaSimpleType* unionMember, ::System::Collections::ArrayList* memberTypeDefinitions,
                                                          ::System::Xml::Schema::XmlSchemaSimpleType* parentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CheckUnionType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unionMember, memberTypeDefinitions, parentType);
}
inline void System::Xml::Schema::Compiler::CompileComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileComplexType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType);
}
inline void System::Xml::Schema::Compiler::CompileSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                         ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleExtension) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileSimpleContentExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, simpleExtension);
}
inline void System::Xml::Schema::Compiler::CompileSimpleContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                           ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleRestriction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileSimpleContentRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentRestriction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, simpleRestriction);
}
inline void System::Xml::Schema::Compiler::CompileComplexContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                          ::System::Xml::Schema::XmlSchemaComplexContentExtension* complexExtension) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileComplexContentExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContentExtension*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, complexContent, complexExtension);
}
inline void System::Xml::Schema::Compiler::CompileComplexContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                            ::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexRestriction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileComplexContentRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContentRestriction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, complexContent, complexRestriction);
}
inline void System::Xml::Schema::Compiler::CheckParticleDerivation(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CheckParticleDerivation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType);
}
inline void System::Xml::Schema::Compiler::CheckParticleDerivation(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CheckParticleDerivation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, derivedParticle, baseParticle);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CompileContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileContentTypeParticle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, particle);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, bool root) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeParticle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, particle, root);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeElement(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, element);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeGroupRef(::System::Xml::Schema::XmlSchemaGroupRef* groupRef, bool root) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeGroupRef", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupRef*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, groupRef, root);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeAll(::System::Xml::Schema::XmlSchemaAll* all, bool root) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeAll", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAll*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, all, root);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeChoice(::System::Xml::Schema::XmlSchemaChoice* choice, bool root) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeChoice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, choice, root);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizeSequence(::System::Xml::Schema::XmlSchemaSequence* sequence, bool root) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizeSequence", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, sequence, root);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::Compiler::CannonicalizePointlessRoot(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CannonicalizePointlessRoot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, particle);
}
inline bool System::Xml::Schema::Compiler::IsValidRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsValidRestriction", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedParticle, baseParticle);
}
inline bool System::Xml::Schema::Compiler::IsElementFromElement(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaElement* baseElement) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsElementFromElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedElement, baseElement);
}
inline bool System::Xml::Schema::Compiler::IsElementFromAny(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaAny* baseAny) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsElementFromAny", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedElement, baseAny);
}
inline bool System::Xml::Schema::Compiler::IsAnyFromAny(::System::Xml::Schema::XmlSchemaAny* derivedAny, ::System::Xml::Schema::XmlSchemaAny* baseAny) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsAnyFromAny", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedAny, baseAny);
}
inline bool System::Xml::Schema::Compiler::IsGroupBaseFromAny(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaAny* baseAny) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsGroupBaseFromAny", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedGroupBase, baseAny);
}
inline bool System::Xml::Schema::Compiler::IsElementFromGroupBase(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsElementFromGroupBase", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedElement, baseGroupBase);
}
inline bool System::Xml::Schema::Compiler::IsChoiceFromChoiceSubstGroup(::System::Xml::Schema::XmlSchemaChoice* derivedChoice, ::System::Xml::Schema::XmlSchemaChoice* baseChoice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsChoiceFromChoiceSubstGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedChoice, baseChoice);
}
inline bool System::Xml::Schema::Compiler::IsGroupBaseFromGroupBase(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase,
                                                                    bool skipEmptableOnly) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsGroupBaseFromGroupBase", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedGroupBase, baseGroupBase, skipEmptableOnly);
}
inline bool System::Xml::Schema::Compiler::IsSequenceFromAll(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaAll* baseAll) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsSequenceFromAll", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAll*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedSequence, baseAll);
}
inline bool System::Xml::Schema::Compiler::IsSequenceFromChoice(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaChoice* baseChoice) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsSequenceFromChoice", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedSequence, baseChoice);
}
inline bool System::Xml::Schema::Compiler::IsValidOccurrenceRangeRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsValidOccurrenceRangeRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedParticle, baseParticle);
}
inline bool System::Xml::Schema::Compiler::IsValidOccurrenceRangeRestriction(::System::Decimal minOccurs, ::System::Decimal maxOccurs, ::System::Decimal baseMinOccurs,
                                                                             ::System::Decimal baseMaxOccurs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsValidOccurrenceRangeRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, minOccurs, maxOccurs, baseMinOccurs, baseMaxOccurs);
}
inline int32_t System::Xml::Schema::Compiler::GetMappingParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchemaObjectCollection* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "GetMappingParticle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, particle, collection);
}
inline bool System::Xml::Schema::Compiler::IsParticleEmptiable(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsParticleEmptiable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::Compiler::CalculateEffectiveTotalRange(::System::Xml::Schema::XmlSchemaParticle* particle, ::ByRef<::System::Decimal> minOccurs,
                                                                        ::ByRef<::System::Decimal> maxOccurs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CalculateEffectiveTotalRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle, minOccurs, maxOccurs);
}
inline void System::Xml::Schema::Compiler::PushComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "PushComplexType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType);
}
inline ::System::Xml::Schema::XmlSchemaContentType System::Xml::Schema::Compiler::GetSchemaContentType(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                                       ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                                                       ::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "GetSchemaContentType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContentType, false>(this, ___internal_method, complexType, complexContent, particle);
}
inline void System::Xml::Schema::Compiler::CompileAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileAttributeGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::Compiler::CompileLocalAttributes(::System::Xml::Schema::XmlSchemaComplexType* baseType, ::System::Xml::Schema::XmlSchemaComplexType* derivedType,
                                                                  ::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute,
                                                                  ::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileLocalAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDerivationMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseType, derivedType, attributes, anyAttribute, derivedBy);
}
inline void System::Xml::Schema::Compiler::CheckAtrributeGroupRestriction(::System::Xml::Schema::XmlSchemaAttributeGroup* baseAttributeGroup,
                                                                          ::System::Xml::Schema::XmlSchemaAttributeGroup* derivedAttributeGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CheckAtrributeGroupRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseAttributeGroup, derivedAttributeGroup);
}
inline bool System::Xml::Schema::Compiler::IsProcessContentsRestricted(::System::Xml::Schema::XmlSchemaComplexType* baseType, ::System::Xml::Schema::XmlSchemaAnyAttribute* derivedAttributeWildcard,
                                                                       ::System::Xml::Schema::XmlSchemaAnyAttribute* baseAttributeWildcard) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsProcessContentsRestricted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, baseType, derivedAttributeWildcard, baseAttributeWildcard);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::Compiler::CompileAnyAttributeUnion(::System::Xml::Schema::XmlSchemaAnyAttribute* a,
                                                                                                             ::System::Xml::Schema::XmlSchemaAnyAttribute* b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileAnyAttributeUnion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*, false>(this, ___internal_method, a, b);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::Compiler::CompileAnyAttributeIntersection(::System::Xml::Schema::XmlSchemaAnyAttribute* a,
                                                                                                                    ::System::Xml::Schema::XmlSchemaAnyAttribute* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileAnyAttributeIntersection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*, false>(this, ___internal_method, a, b);
}
inline void System::Xml::Schema::Compiler::CompileAttribute(::System::Xml::Schema::XmlSchemaAttribute* xa) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xa);
}
inline void System::Xml::Schema::Compiler::SetDefaultFixed(::System::Xml::Schema::XmlSchemaAttribute* xa, ::System::Xml::Schema::SchemaAttDef* decl) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "SetDefaultFixed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xa, decl);
}
inline void System::Xml::Schema::Compiler::CompileIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* xi) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileIdentityConstraint", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xi);
}
inline void System::Xml::Schema::Compiler::CompileElement(::System::Xml::Schema::XmlSchemaElement* xe) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xe);
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::Compiler::CompileComplexContent(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileComplexContent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ContentValidator*, false>(this, ___internal_method, complexType);
}
inline bool System::Xml::Schema::Compiler::BuildParticleContentModel(::System::Xml::Schema::ParticleContentValidator* contentValidator, ::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "BuildParticleContentModel", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, contentValidator, particle);
}
inline void System::Xml::Schema::Compiler::CompileParticleElements(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileParticleElements", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, particle);
}
inline void System::Xml::Schema::Compiler::CompileParticleElements(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileParticleElements", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::Compiler::CompileComplexTypeElements(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CompileComplexTypeElements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::Compiler::GetSimpleType(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "GetSimpleType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*, false>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Xml::Schema::Compiler::GetComplexType(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "GetComplexType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*, false>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::Compiler::GetAnySchemaType(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "GetAnySchemaType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*, false>(this, ___internal_method, name);
}
inline void System::Xml::Schema::Compiler::CopyPosition(::System::Xml::Schema::XmlSchemaAnnotated* to, ::System::Xml::Schema::XmlSchemaAnnotated* from, bool copyParent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "CopyPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, to, from, copyParent);
}
inline bool System::Xml::Schema::Compiler::IsFixedEqual(::System::Xml::Schema::SchemaDeclBase* baseDecl, ::System::Xml::Schema::SchemaDeclBase* derivedDecl) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Compiler*>::get(), "IsFixedEqual", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaDeclBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaDeclBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, baseDecl, derivedDecl);
}
inline ::System::Xml::Schema::Compiler* System::Xml::Schema::Compiler::New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                                                                                ::System::Xml::Schema::XmlSchema* schemaForSchema,
                                                                                ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::Compiler*>(nameTable, eventHandler, schemaForSchema, compilationSettings));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Compiler::Compiler() {}
