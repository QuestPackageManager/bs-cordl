#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaCollectionCompiler.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::XmlNameTable*, ::System::Xml::Schema::ValidationEventHandler*)>(&::System::Xml::Schema::SchemaCollectionCompiler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4215bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::SchemaInfo*, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::Execute)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4215c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Prepare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)()>(
    &::System::Xml::Schema::SchemaCollectionCompiler::Prepare)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x4215cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(),
                                                                               "Prepare", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)()>(
    &::System::Xml::Schema::SchemaCollectionCompiler::Cleanup)> {
  constexpr static std::size_t size = 0xefc;
  constexpr static std::size_t addrs = 0x421614c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(),
                                                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::SchemaCollectionCompiler::Cleanup)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x421a5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "Cleanup", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Compile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)()>(
    &::System::Xml::Schema::SchemaCollectionCompiler::Compile)> {
  constexpr static std::size_t size = 0x2058;
  constexpr static std::size_t addrs = 0x4217048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(),
                                                                               "Compile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.Output
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::SchemaInfo*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::Output)> {
  constexpr static std::size_t size = 0x101c;
  constexpr static std::size_t addrs = 0x42190a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "Output", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CleanupAttribute)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x421a5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupAttributeGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CleanupAttributeGroup)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x421a0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupAttributeGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CleanupComplexType)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x421a11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupComplexType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CleanupSimpleType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x421a440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupSimpleType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CleanupElement)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x421a458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CleanupAttributes)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x421edbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaGroup*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CleanupGroup)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x421a0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CleanupParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CleanupParticle)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x421ee80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupParticle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileSubstitutionGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileSubstitutionGroup)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x421ac0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileSubstitutionGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CheckSubstitutionGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaSubstitutionGroup*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CheckSubstitutionGroup)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x421ebe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CheckSubstitutionGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaGroup*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileGroup)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x421b08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleType)> {
  constexpr static std::size_t size = 0x8bc;
  constexpr static std::size_t addrs = 0x421c574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileSimpleType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileBaseMemberTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileBaseMemberTypes)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x421f37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileBaseMemberTypes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CheckUnionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CheckUnionType)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x421f71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CheckUnionType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexType)> {
  constexpr static std::size_t size = 0xcd0;
  constexpr static std::size_t addrs = 0x421b8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileComplexType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileSimpleContentExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentExtension*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleContentExtension)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x421f834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileSimpleContentExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileSimpleContentRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaSimpleContentRestriction*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleContentRestriction)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x421fa74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileSimpleContentRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentRestriction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileComplexContentExtension
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentExtension*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContentExtension)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x421fe98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileComplexContentExtension", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContentExtension*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileComplexContentRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaComplexContentRestriction*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContentRestriction)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x4220260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileComplexContentRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContentRestriction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CheckParticleDerivation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CheckParticleDerivation)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x421eabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CheckParticleDerivation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileContentTypeParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaParticle*, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileContentTypeParticle)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x4221a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileContentTypeParticle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaParticle*, bool, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeParticle)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x421efe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeParticle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaElement*, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeElement)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x4222e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeGroupRef
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaGroupRef*, bool, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeGroupRef)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x4222f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeGroupRef", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupRef*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAll*, bool, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeAll)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x42234a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAll*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeChoice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaChoice*, bool, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeChoice)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x4223938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeChoice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CannonicalizeSequence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaSequence*, bool, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeSequence)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x4223e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeSequence", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsValidRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsValidRestriction)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x4222844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsValidRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsElementFromElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaElement*)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsElementFromElement)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x422439c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsElementFromElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsElementFromAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaAny*)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsElementFromAny)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x42244b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsElementFromAny", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsAnyFromAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaAny*, ::System::Xml::Schema::XmlSchemaAny*)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsAnyFromAny)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x422450c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsAnyFromAny", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsGroupBaseFromAny
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaAny*)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsGroupBaseFromAny)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x4224558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsGroupBaseFromAny", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsElementFromGroupBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaGroupBase*, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsElementFromGroupBase)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x4224760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsElementFromGroupBase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsGroupBaseFromGroupBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaGroupBase*, ::System::Xml::Schema::XmlSchemaGroupBase*, bool)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsGroupBaseFromGroupBase)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x4224ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsGroupBaseFromGroupBase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsSequenceFromAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaAll*)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsSequenceFromAll)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x4224d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsSequenceFromAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAll*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsSequenceFromChoice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaSequence*, ::System::Xml::Schema::XmlSchemaChoice*)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsSequenceFromChoice)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x4225048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsSequenceFromChoice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CalculateSequenceRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaSequence*, ByRef<::System::Decimal>, ByRef<::System::Decimal>)>(&::System::Xml::Schema::SchemaCollectionCompiler::CalculateSequenceRange)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x4225c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CalculateSequenceRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsValidOccurrenceRangeRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsValidOccurrenceRangeRestriction)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x4225248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsValidOccurrenceRangeRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsValidOccurrenceRangeRestriction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Decimal, ::System::Decimal, ::System::Decimal, ::System::Decimal)>(&::System::Xml::Schema::SchemaCollectionCompiler::IsValidOccurrenceRangeRestriction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4225a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsValidOccurrenceRangeRestriction", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.GetMappingParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Xml::Schema::SchemaCollectionCompiler::GetMappingParticle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x4225b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "GetMappingParticle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.IsParticleEmptiable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::IsParticleEmptiable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x42242d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsParticleEmptiable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CalculateEffectiveTotalRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaParticle*, ByRef<::System::Decimal>, ByRef<::System::Decimal>)>(&::System::Xml::Schema::SchemaCollectionCompiler::CalculateEffectiveTotalRange)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x422528c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CalculateEffectiveTotalRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.PushComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::PushComplexType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4225ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "PushComplexType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.GetSchemaContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaContentType (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexContent*, ::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::GetSchemaContentType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4221b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "GetSchemaContentType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileAttributeGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileAttributeGroup)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x421b158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileAttributeGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileLocalAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*,
    ::System::Xml::Schema::XmlSchemaDerivationMethod)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileLocalAttributes)> {
  constexpr static std::size_t size = 0x14f4;
  constexpr static std::size_t addrs = 0x4220538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileLocalAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDerivationMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileAnyAttributeUnion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileAnyAttributeUnion)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x42260b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileAnyAttributeUnion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileAnyAttributeIntersection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAnyAttribute* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaAnyAttribute*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileAnyAttributeIntersection)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4226020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileAnyAttributeIntersection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileAttribute)> {
  constexpr static std::size_t size = 0x92c;
  constexpr static std::size_t addrs = 0x421da44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileIdentityConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileIdentityConstraint)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x421e370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileIdentityConstraint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileElement)> {
  constexpr static std::size_t size = 0xc14;
  constexpr static std::size_t addrs = 0x421ce30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileComplexContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::ContentValidator* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContent)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x4221c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileComplexContent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.BuildParticleContentModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::ParticleContentValidator*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::SchemaCollectionCompiler::BuildParticleContentModel)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x4226148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "BuildParticleContentModel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileParticleElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(
    ::System::Xml::Schema::XmlSchemaComplexType*, ::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Xml::Schema::SchemaCollectionCompiler::CompileParticleElements)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x422663c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileParticleElements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.CompileCompexTypeElements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::SchemaCollectionCompiler::CompileCompexTypeElements)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x421e9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileCompexTypeElements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.GetSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaSimpleType* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaCollectionCompiler::GetSimpleType)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x421f230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "GetSimpleType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.GetComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaComplexType* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaCollectionCompiler::GetComplexType)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x4222790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "GetComplexType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaCollectionCompiler.GetAnySchemaType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaType* (
    ::System::Xml::Schema::SchemaCollectionCompiler::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaCollectionCompiler::GetAnySchemaType)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x422262c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "GetAnySchemaType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
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
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_examplars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___examplars;
}
constexpr void System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_set_examplars(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___examplars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Stack*& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_complexTypeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexTypeStack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> const& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_complexTypeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___complexTypeStack;
}
constexpr void System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_set_complexTypeStack(::System::Collections::Stack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___complexTypeStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_schema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchema*> const& System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_get_schema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schema;
}
constexpr void System::Xml::Schema::SchemaCollectionCompiler::__cordl_internal_set_schema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::Schema::SchemaCollectionCompiler* System::Xml::Schema::SchemaCollectionCompiler::New_ctor(::System::Xml::XmlNameTable* nameTable,
                                                                                                                ::System::Xml::Schema::ValidationEventHandler* eventHandler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::SchemaCollectionCompiler*>(nameTable, eventHandler));
}
inline void System::Xml::Schema::SchemaCollectionCompiler::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable, eventHandler);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::Execute(::System::Xml::Schema::XmlSchema* schema, ::System::Xml::Schema::SchemaInfo* schemaInfo, bool compileContentModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, schema, schemaInfo, compileContentModel);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::Prepare() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "Prepare",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "Cleanup",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::Cleanup(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "Cleanup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, schema);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::Compile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "Compile",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::Output(::System::Xml::Schema::SchemaInfo* schemaInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "Output", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schemaInfo);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attribute);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupAttributeGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupComplexType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, complexType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupSimpleType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, simpleType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupElement(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, element);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributes);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, group);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CleanupParticle(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CleanupParticle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, particle);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat* substitutionGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileSubstitutionGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, substitutionGroup);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CheckSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CheckSubstitutionGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, substitutionGroup);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileSimpleType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, simpleType);
}
inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>
System::Xml::Schema::SchemaCollectionCompiler::CompileBaseMemberTypes(::System::Xml::Schema::XmlSchemaSimpleType* simpleType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileBaseMemberTypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>, false>(this, ___internal_method, simpleType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CheckUnionType(::System::Xml::Schema::XmlSchemaSimpleType* unionMember, ::System::Collections::ArrayList* memberTypeDefinitions,
                                                                          ::System::Xml::Schema::XmlSchemaSimpleType* parentType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CheckUnionType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unionMember, memberTypeDefinitions, parentType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileComplexType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                         ::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleExtension) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileSimpleContentExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentExtension*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, simpleExtension);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileSimpleContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                           ::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleRestriction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileSimpleContentRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleContentRestriction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, simpleRestriction);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContentExtension(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                          ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                                          ::System::Xml::Schema::XmlSchemaComplexContentExtension* complexExtension) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileComplexContentExtension", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContentExtension*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, complexContent, complexExtension);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContentRestriction(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                            ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                                            ::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexRestriction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileComplexContentRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContentRestriction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, complexContent, complexRestriction);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CheckParticleDerivation(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CheckParticleDerivation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CompileContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, bool substitution) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileContentTypeParticle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, particle, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeParticle(::System::Xml::Schema::XmlSchemaParticle* particle, bool root,
                                                                                                                      bool substitution) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeParticle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, particle, root, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeElement(::System::Xml::Schema::XmlSchemaElement* element, bool substitution) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, element, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeGroupRef(::System::Xml::Schema::XmlSchemaGroupRef* groupRef, bool root,
                                                                                                                      bool substitution) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeGroupRef", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupRef*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, groupRef, root, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeAll(::System::Xml::Schema::XmlSchemaAll* all, bool root, bool substitution) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAll*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, all, root, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeChoice(::System::Xml::Schema::XmlSchemaChoice* choice, bool root, bool substitution) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeChoice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, choice, root, substitution);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::SchemaCollectionCompiler::CannonicalizeSequence(::System::Xml::Schema::XmlSchemaSequence* sequence, bool root,
                                                                                                                      bool substitution) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CannonicalizeSequence", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, sequence, root, substitution);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsValidRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle, ::System::Xml::Schema::XmlSchemaParticle* baseParticle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsValidRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedParticle, baseParticle);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsElementFromElement(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaElement* baseElement) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsElementFromElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedElement, baseElement);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsElementFromAny(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaAny* baseAny) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsElementFromAny", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedElement, baseAny);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsAnyFromAny(::System::Xml::Schema::XmlSchemaAny* derivedAny, ::System::Xml::Schema::XmlSchemaAny* baseAny) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsAnyFromAny", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedAny, baseAny);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsGroupBaseFromAny(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, ::System::Xml::Schema::XmlSchemaAny* baseAny) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsGroupBaseFromAny", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAny*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedGroupBase, baseAny);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsElementFromGroupBase(::System::Xml::Schema::XmlSchemaElement* derivedElement, ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase,
                                                                                  bool skipEmptableOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsElementFromGroupBase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedElement, baseGroupBase, skipEmptableOnly);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsGroupBaseFromGroupBase(::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase,
                                                                                    ::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsGroupBaseFromGroupBase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroupBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedGroupBase, baseGroupBase, skipEmptableOnly);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsSequenceFromAll(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaAll* baseAll) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsSequenceFromAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAll*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedSequence, baseAll);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsSequenceFromChoice(::System::Xml::Schema::XmlSchemaSequence* derivedSequence, ::System::Xml::Schema::XmlSchemaChoice* baseChoice) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsSequenceFromChoice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaChoice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedSequence, baseChoice);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CalculateSequenceRange(::System::Xml::Schema::XmlSchemaSequence* sequence, ByRef<::System::Decimal> minOccurs,
                                                                                  ByRef<::System::Decimal> maxOccurs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CalculateSequenceRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSequence*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sequence, minOccurs, maxOccurs);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsValidOccurrenceRangeRestriction(::System::Xml::Schema::XmlSchemaParticle* derivedParticle,
                                                                                             ::System::Xml::Schema::XmlSchemaParticle* baseParticle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsValidOccurrenceRangeRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, derivedParticle, baseParticle);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsValidOccurrenceRangeRestriction(::System::Decimal minOccurs, ::System::Decimal maxOccurs, ::System::Decimal baseMinOccurs,
                                                                                             ::System::Decimal baseMaxOccurs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsValidOccurrenceRangeRestriction", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, minOccurs, maxOccurs, baseMinOccurs, baseMaxOccurs);
}
inline int32_t System::Xml::Schema::SchemaCollectionCompiler::GetMappingParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchemaObjectCollection* collection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "GetMappingParticle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, particle, collection);
}
inline bool System::Xml::Schema::SchemaCollectionCompiler::IsParticleEmptiable(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "IsParticleEmptiable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CalculateEffectiveTotalRange(::System::Xml::Schema::XmlSchemaParticle* particle, ByRef<::System::Decimal> minOccurs,
                                                                                        ByRef<::System::Decimal> maxOccurs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CalculateEffectiveTotalRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle, minOccurs, maxOccurs);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::PushComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "PushComplexType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType);
}
inline ::System::Xml::Schema::XmlSchemaContentType System::Xml::Schema::SchemaCollectionCompiler::GetSchemaContentType(::System::Xml::Schema::XmlSchemaComplexType* complexType,
                                                                                                                       ::System::Xml::Schema::XmlSchemaComplexContent* complexContent,
                                                                                                                       ::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "GetSchemaContentType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaContentType, false>(this, ___internal_method, complexType, complexContent, particle);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileAttributeGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileLocalAttributes(::System::Xml::Schema::XmlSchemaComplexType* baseType, ::System::Xml::Schema::XmlSchemaComplexType* derivedType,
                                                                                  ::System::Xml::Schema::XmlSchemaObjectCollection* attributes,
                                                                                  ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute,
                                                                                  ::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileLocalAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDerivationMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseType, derivedType, attributes, anyAttribute, derivedBy);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::SchemaCollectionCompiler::CompileAnyAttributeUnion(::System::Xml::Schema::XmlSchemaAnyAttribute* a,
                                                                                                                             ::System::Xml::Schema::XmlSchemaAnyAttribute* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileAnyAttributeUnion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*, false>(this, ___internal_method, a, b);
}
inline ::System::Xml::Schema::XmlSchemaAnyAttribute* System::Xml::Schema::SchemaCollectionCompiler::CompileAnyAttributeIntersection(::System::Xml::Schema::XmlSchemaAnyAttribute* a,
                                                                                                                                    ::System::Xml::Schema::XmlSchemaAnyAttribute* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileAnyAttributeIntersection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnyAttribute*, false>(this, ___internal_method, a, b);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileAttribute(::System::Xml::Schema::XmlSchemaAttribute* xa) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xa);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* xi) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileIdentityConstraint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xi);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileElement(::System::Xml::Schema::XmlSchemaElement* xe) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xe);
}
inline ::System::Xml::Schema::ContentValidator* System::Xml::Schema::SchemaCollectionCompiler::CompileComplexContent(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileComplexContent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ContentValidator*, false>(this, ___internal_method, complexType);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::BuildParticleContentModel(::System::Xml::Schema::ParticleContentValidator* contentValidator,
                                                                                     ::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "BuildParticleContentModel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentValidator, particle);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileParticleElements(::System::Xml::Schema::XmlSchemaComplexType* complexType, ::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileParticleElements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, particle);
}
inline void System::Xml::Schema::SchemaCollectionCompiler::CompileCompexTypeElements(::System::Xml::Schema::XmlSchemaComplexType* complexType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "CompileCompexTypeElements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType);
}
inline ::System::Xml::Schema::XmlSchemaSimpleType* System::Xml::Schema::SchemaCollectionCompiler::GetSimpleType(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "GetSimpleType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaSimpleType*, false>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaComplexType* System::Xml::Schema::SchemaCollectionCompiler::GetComplexType(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "GetComplexType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaComplexType*, false>(this, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaType* System::Xml::Schema::SchemaCollectionCompiler::GetAnySchemaType(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::SchemaCollectionCompiler*>::get(), "GetAnySchemaType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaType*, false>(this, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaCollectionCompiler::SchemaCollectionCompiler() {}
