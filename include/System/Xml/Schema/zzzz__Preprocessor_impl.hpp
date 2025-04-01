#pragma once
// IWYU pragma private; include "System/Xml/Schema/Preprocessor.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(
    ::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchemaCompilationSettings*)>(
    &::System::Xml::Schema::Preprocessor::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x4269f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*, ::StringW, bool)>(
    &::System::Xml::Schema::Preprocessor::Execute)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x426a04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::Preprocessor::Cleanup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x426d0cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "Cleanup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CleanupRedefine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaExternal*)>(
    &::System::Xml::Schema::Preprocessor::CleanupRedefine)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x426d748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CleanupRedefine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaExternal*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.set_XmlResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::XmlResolver*)>(
    &::System::Xml::Schema::Preprocessor::set_XmlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x426d7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "set_XmlResolver", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.set_ReaderSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::XmlReaderSettings*)>(
    &::System::Xml::Schema::Preprocessor::set_ReaderSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x426d7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "set_ReaderSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReaderSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.set_SchemaLocations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Collections::Hashtable*)>(
    &::System::Xml::Schema::Preprocessor::set_SchemaLocations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x426d7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "set_SchemaLocations", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.set_ChameleonSchemas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Collections::Hashtable*)>(
    &::System::Xml::Schema::Preprocessor::set_ChameleonSchemas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x426d800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "set_ChameleonSchemas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.get_RootSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::Preprocessor::*)()>(
    &::System::Xml::Schema::Preprocessor::get_RootSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x426d808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "get_RootSchema",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.BuildSchemaList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::Preprocessor::BuildSchemaList)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x426b290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "BuildSchemaList", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.LoadExternals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::Preprocessor::LoadExternals)> {
  constexpr static std::size_t size = 0xc58;
  constexpr static std::size_t addrs = 0x426a638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "LoadExternals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.GetBuildInSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (*)()>(&::System::Xml::Schema::Preprocessor::GetBuildInSchema)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x426d1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "GetBuildInSchema",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.BuildRefNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::Preprocessor::BuildRefNamespaces)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x426d878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "BuildRefNamespaces", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.ParseUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::StringW, ::StringW, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::ParseUri)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x426da98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "ParseUri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.Preprocess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*, ::StringW, ::System::Collections::ArrayList*)>(&::System::Xml::Schema::Preprocessor::Preprocess)> {
  constexpr static std::size_t size = 0x11c4;
  constexpr static std::size_t addrs = 0x426b408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "Preprocess", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CopyIncludedComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::Preprocessor::CopyIncludedComponents)> {
  constexpr static std::size_t size = 0x12c4;
  constexpr static std::size_t addrs = 0x426e08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CopyIncludedComponents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessRedefine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::RedefineEntry*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessRedefine)> {
  constexpr static std::size_t size = 0xb00;
  constexpr static std::size_t addrs = 0x426c5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessRedefine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RedefineEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.GetIncludedSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*, ::System::Collections::ArrayList*)>(
    &::System::Xml::Schema::Preprocessor::GetIncludedSet)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x4270b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "GetIncludedSet", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.GetParentSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::GetParentSchema)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4270a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "GetParentSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.SetSchemaDefaults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::Preprocessor::SetSchemaDefaults)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x426df80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "SetSchemaDefaults", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CountGroupSelfReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::Preprocessor::*)(
    ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaGroup*)>(&::System::Xml::Schema::Preprocessor::CountGroupSelfReference)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x4271268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CountGroupSelfReference", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CheckRefinedGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaGroup*)>(
    &::System::Xml::Schema::Preprocessor::CheckRefinedGroup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4270c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CheckRefinedGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CheckRefinedAttributeGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::Preprocessor::CheckRefinedAttributeGroup)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x4270cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CheckRefinedAttributeGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CheckRefinedSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(
    &::System::Xml::Schema::Preprocessor::CheckRefinedSimpleType)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x427115c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CheckRefinedSimpleType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.CheckRefinedComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(
    &::System::Xml::Schema::Preprocessor::CheckRefinedComplexType)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x4270e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CheckRefinedComplexType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAttribute)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x426f350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAttribute", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessLocalAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessLocalAttribute)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x4271a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessLocalAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAttributeContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAttribute*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAttributeContent)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x42717f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAttributeContent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAttributeGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAttributeGroup)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x426f4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAttributeGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessElement)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x42703c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessLocalElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessLocalElement)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x4272494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessLocalElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessElementContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaElement*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessElementContent)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x4272170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessElementContent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessIdentityConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessIdentityConstraint)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x4272824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessIdentityConstraint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessSimpleType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaSimpleType*, bool)>(
    &::System::Xml::Schema::Preprocessor::PreprocessSimpleType)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x426fe38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessSimpleType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessComplexType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaComplexType*, bool)>(
    &::System::Xml::Schema::Preprocessor::PreprocessComplexType)> {
  constexpr static std::size_t size = 0x88c;
  constexpr static std::size_t addrs = 0x426f5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessComplexType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaGroup*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessGroup)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x4270608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessNotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaNotation*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessNotation)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x42707cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessNotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaNotation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessParticle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaParticle*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessParticle)> {
  constexpr static std::size_t size = 0x8cc;
  constexpr static std::size_t addrs = 0x4272b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessParticle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(
    ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAttributes)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x4271e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.ValidateIdAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::ValidateIdAttribute)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x426dc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "ValidateIdAttribute", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.ValidateNameAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::ValidateNameAttribute)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x427154c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "ValidateNameAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.ValidateQNameAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(
    ::System::Xml::Schema::XmlSchemaObject*, ::StringW, ::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::Preprocessor::ValidateQNameAttribute)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x4271bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "ValidateQNameAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.ResolveSchemaLocationUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchema*, ::StringW)>(
    &::System::Xml::Schema::Preprocessor::ResolveSchemaLocationUri)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x426d810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "ResolveSchemaLocationUri", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.GetSchemaEntity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Xml::Schema::Preprocessor::*)(::System::Uri*)>(
    &::System::Xml::Schema::Preprocessor::GetSchemaEntity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x426d850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "GetSchemaEntity", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.GetChameleonSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::Preprocessor::*)(::StringW, ::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::Preprocessor::GetChameleonSchema)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x426a508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "GetChameleonSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.SetParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::Schema::Preprocessor::SetParent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x426dbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "SetParent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaObject*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAnnotation)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x426dbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAnnotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::Preprocessor.PreprocessAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::Preprocessor::*)(::System::Xml::Schema::XmlSchemaAnnotation*)>(
    &::System::Xml::Schema::Preprocessor::PreprocessAnnotation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4270a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAnnotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotation*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Xmlns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NsXsi)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rootSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentSchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___schemaLocations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___chameleonSchemas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___referenceNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___processedExternals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lockList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readerSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rootSchemaForRedefine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___redefinedList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlResolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::Preprocessor::setStaticF_builtInSchemaForXmlNS(::System::Xml::Schema::XmlSchema* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchema*, "builtInSchemaForXmlNS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get>(
      std::forward<::System::Xml::Schema::XmlSchema*>(value));
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::Preprocessor::getStaticF_builtInSchemaForXmlNS() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchema*, "builtInSchemaForXmlNS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get>();
}
inline void System::Xml::Schema::Preprocessor::_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                     ::System::Xml::Schema::ValidationEventHandler* eventHandler, ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable, schemaNames, eventHandler, compilationSettings);
}
inline bool System::Xml::Schema::Preprocessor::Execute(::System::Xml::Schema::XmlSchema* schema, ::StringW targetNamespace, bool loadExternals) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "Execute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, schema, targetNamespace, loadExternals);
}
inline void System::Xml::Schema::Preprocessor::Cleanup(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "Cleanup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::Preprocessor::CleanupRedefine(::System::Xml::Schema::XmlSchemaExternal* include) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CleanupRedefine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaExternal*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, include);
}
inline void System::Xml::Schema::Preprocessor::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "set_XmlResolver", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::Preprocessor::set_ReaderSettings(::System::Xml::XmlReaderSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "set_ReaderSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReaderSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::Preprocessor::set_SchemaLocations(::System::Collections::Hashtable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "set_SchemaLocations", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::Preprocessor::set_ChameleonSchemas(::System::Collections::Hashtable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "set_ChameleonSchemas", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::Preprocessor::get_RootSchema() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "get_RootSchema",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::Preprocessor::BuildSchemaList(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "BuildSchemaList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::Preprocessor::LoadExternals(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "LoadExternals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::Preprocessor::GetBuildInSchema() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "GetBuildInSchema",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(nullptr, ___internal_method);
}
inline void System::Xml::Schema::Preprocessor::BuildRefNamespaces(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "BuildRefNamespaces", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::Preprocessor::ParseUri(::StringW uri, ::StringW code, ::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "ParseUri", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri, code, sourceSchemaObject);
}
inline void System::Xml::Schema::Preprocessor::Preprocess(::System::Xml::Schema::XmlSchema* schema, ::StringW targetNamespace, ::System::Collections::ArrayList* imports) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "Preprocess", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema, targetNamespace, imports);
}
inline void System::Xml::Schema::Preprocessor::CopyIncludedComponents(::System::Xml::Schema::XmlSchema* includedSchema, ::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CopyIncludedComponents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, includedSchema, schema);
}
inline void System::Xml::Schema::Preprocessor::PreprocessRedefine(::System::Xml::Schema::RedefineEntry* redefineEntry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessRedefine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::RedefineEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, redefineEntry);
}
inline void System::Xml::Schema::Preprocessor::GetIncludedSet(::System::Xml::Schema::XmlSchema* schema, ::System::Collections::ArrayList* includesList) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "GetIncludedSet", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema, includesList);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::Preprocessor::GetParentSchema(::System::Xml::Schema::XmlSchemaObject* currentSchemaObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "GetParentSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(nullptr, ___internal_method, currentSchemaObject);
}
inline void System::Xml::Schema::Preprocessor::SetSchemaDefaults(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "SetSchemaDefaults", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema);
}
inline int32_t System::Xml::Schema::Preprocessor::CountGroupSelfReference(::System::Xml::Schema::XmlSchemaObjectCollection* items, ::System::Xml::XmlQualifiedName* name,
                                                                          ::System::Xml::Schema::XmlSchemaGroup* redefined) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CountGroupSelfReference", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, items, name, redefined);
}
inline void System::Xml::Schema::Preprocessor::CheckRefinedGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CheckRefinedGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group);
}
inline void System::Xml::Schema::Preprocessor::CheckRefinedAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CheckRefinedAttributeGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::Preprocessor::CheckRefinedSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* stype) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CheckRefinedSimpleType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stype);
}
inline void System::Xml::Schema::Preprocessor::CheckRefinedComplexType(::System::Xml::Schema::XmlSchemaComplexType* ctype) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "CheckRefinedComplexType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctype);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::Preprocessor::PreprocessLocalAttribute(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessLocalAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAttributeContent(::System::Xml::Schema::XmlSchemaAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAttributeContent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attribute);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAttributeGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeGroup);
}
inline void System::Xml::Schema::Preprocessor::PreprocessElement(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void System::Xml::Schema::Preprocessor::PreprocessLocalElement(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessLocalElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void System::Xml::Schema::Preprocessor::PreprocessElementContent(::System::Xml::Schema::XmlSchemaElement* element) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessElementContent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
inline void System::Xml::Schema::Preprocessor::PreprocessIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessIdentityConstraint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint);
}
inline void System::Xml::Schema::Preprocessor::PreprocessSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* simpleType, bool local) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessSimpleType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, simpleType, local);
}
inline void System::Xml::Schema::Preprocessor::PreprocessComplexType(::System::Xml::Schema::XmlSchemaComplexType* complexType, bool local) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessComplexType", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, complexType, local);
}
inline void System::Xml::Schema::Preprocessor::PreprocessGroup(::System::Xml::Schema::XmlSchemaGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group);
}
inline void System::Xml::Schema::Preprocessor::PreprocessNotation(::System::Xml::Schema::XmlSchemaNotation* notation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessNotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaNotation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, notation);
}
inline void System::Xml::Schema::Preprocessor::PreprocessParticle(::System::Xml::Schema::XmlSchemaParticle* particle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessParticle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, particle);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes, ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute,
                                                                    ::System::Xml::Schema::XmlSchemaObject* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnyAttribute*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes, anyAttribute, parent);
}
inline void System::Xml::Schema::Preprocessor::ValidateIdAttribute(::System::Xml::Schema::XmlSchemaObject* xso) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "ValidateIdAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xso);
}
inline void System::Xml::Schema::Preprocessor::ValidateNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "ValidateNameAttribute", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xso);
}
inline void System::Xml::Schema::Preprocessor::ValidateQNameAttribute(::System::Xml::Schema::XmlSchemaObject* xso, ::StringW attributeName, ::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "ValidateQNameAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xso, attributeName, value);
}
inline ::System::Uri* System::Xml::Schema::Preprocessor::ResolveSchemaLocationUri(::System::Xml::Schema::XmlSchema* enclosingSchema, ::StringW location) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "ResolveSchemaLocationUri", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method, enclosingSchema, location);
}
inline ::System::Object* System::Xml::Schema::Preprocessor::GetSchemaEntity(::System::Uri* ruri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "GetSchemaEntity", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, ruri);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::Preprocessor::GetChameleonSchema(::StringW targetNamespace, ::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "GetChameleonSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(this, ___internal_method, targetNamespace, schema);
}
inline void System::Xml::Schema::Preprocessor::SetParent(::System::Xml::Schema::XmlSchemaObject* child, ::System::Xml::Schema::XmlSchemaObject* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "SetParent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, child, parent);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAnnotation(::System::Xml::Schema::XmlSchemaObject* schemaObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAnnotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schemaObject);
}
inline void System::Xml::Schema::Preprocessor::PreprocessAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::Preprocessor*>::get(), "PreprocessAnnotation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, annotation);
}
inline ::System::Xml::Schema::Preprocessor* System::Xml::Schema::Preprocessor::New_ctor(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                                                        ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                                                                                        ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::Preprocessor*>(nameTable, schemaNames, eventHandler, compilationSettings));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::Preprocessor::Preprocessor() {}
