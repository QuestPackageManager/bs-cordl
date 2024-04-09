#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2d0d3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (*)(::System::Xml::XmlReader*, ::System::Xml::Schema::ValidationEventHandler*)>(
    &::System::Xml::Schema::XmlSchema::Read)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2d0d548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.CompileSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Xml::Schema::XmlSchema::*)(::System::Xml::Schema::XmlSchemaCollection*, ::System::Xml::XmlResolver*, ::System::Xml::Schema::SchemaInfo*, ::StringW,
                                                           ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::XmlNameTable*, bool)>(&::System::Xml::Schema::XmlSchema::CompileSchema)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2d0d6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "CompileSchema", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaCollection*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.CompileSchemaInSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(
    ::System::Xml::XmlNameTable*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchemaCompilationSettings*)>(&::System::Xml::Schema::XmlSchema::CompileSchemaInSet)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2d0d8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "CompileSchemaInSet", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_AttributeFormDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaForm (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_AttributeFormDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(),
                                                                               "get_AttributeFormDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_AttributeFormDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::System::Xml::Schema::XmlSchemaForm)>(
    &::System::Xml::Schema::XmlSchema::set_AttributeFormDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_AttributeFormDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaForm>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_BlockDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDerivationMethod (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_BlockDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_BlockDefault",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_BlockDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::System::Xml::Schema::XmlSchemaDerivationMethod)>(
    &::System::Xml::Schema::XmlSchema::set_BlockDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_BlockDefault", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDerivationMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_FinalDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDerivationMethod (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_FinalDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_FinalDefault",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_FinalDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::System::Xml::Schema::XmlSchemaDerivationMethod)>(
    &::System::Xml::Schema::XmlSchema::set_FinalDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_FinalDefault", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDerivationMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_ElementFormDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaForm (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_ElementFormDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(),
                                                                               "get_ElementFormDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_ElementFormDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::System::Xml::Schema::XmlSchemaForm)>(
    &::System::Xml::Schema::XmlSchema::set_ElementFormDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_ElementFormDefault", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaForm>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_TargetNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_TargetNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_TargetNamespace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_TargetNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::StringW)>(&::System::Xml::Schema::XmlSchema::set_TargetNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_TargetNamespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Version",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::StringW)>(&::System::Xml::Schema::XmlSchema::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_Version", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_Includes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_Includes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Includes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_Items
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_Items)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Items",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_IsCompiledBySet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_IsCompiledBySet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0d9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_IsCompiledBySet",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_IsCompiledBySet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(bool)>(&::System::Xml::Schema::XmlSchema::set_IsCompiledBySet)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d0d9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_IsCompiledBySet",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_IsPreprocessed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_IsPreprocessed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0da04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_IsPreprocessed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_IsPreprocessed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(bool)>(&::System::Xml::Schema::XmlSchema::set_IsPreprocessed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d0da0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_IsPreprocessed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_IsRedefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_IsRedefined)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0da18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_IsRedefined",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_IsRedefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(bool)>(&::System::Xml::Schema::XmlSchema::set_IsRedefined)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d0da20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_IsRedefined",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_Attributes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d0da2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Attributes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_AttributeGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_AttributeGroups)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d0da98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_AttributeGroups",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_SchemaTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_SchemaTypes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d0db04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_SchemaTypes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_Elements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_Elements)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d0db70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Elements",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_Id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_Id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::StringW)>(&::System::Xml::Schema::XmlSchema::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_Id", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_Groups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_Groups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dbec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Groups",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_Notations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_Notations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Notations",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_IdentityConstraints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_IdentityConstraints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(),
                                                                               "get_IdentityConstraints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_BaseUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_BaseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_BaseUri",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_BaseUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::System::Uri*)>(&::System::Xml::Schema::XmlSchema::set_BaseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_BaseUri", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_SchemaId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_SchemaId)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d0dc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_SchemaId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_IsChameleon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_IsChameleon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_IsChameleon",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_IsChameleon
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(bool)>(&::System::Xml::Schema::XmlSchema::set_IsChameleon)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d0dc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_IsChameleon",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_Ids
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Hashtable* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_Ids)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dc98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Ids",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_Document
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_Document)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d0dca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Document",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_ErrorCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_ErrorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_ErrorCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_ErrorCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(int32_t)>(&::System::Xml::Schema::XmlSchema::set_ErrorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0dd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_ErrorCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::Clone)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d0dd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "Clone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.DeepClone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::DeepClone)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x2d0de24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "DeepClone",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_IdAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlSchema::*)()>(&::System::Xml::Schema::XmlSchema::get_IdAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0eb94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.set_IdAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::StringW)>(&::System::Xml::Schema::XmlSchema::set_IdAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0eb9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.SetIsCompiled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(bool)>(&::System::Xml::Schema::XmlSchema::SetIsCompiled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d0eba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "SetIsCompiled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.SetUnhandledAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(
    ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*>)>(&::System::Xml::Schema::XmlSchema::SetUnhandledAttributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d0ebb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.AddAnnotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::System::Xml::Schema::XmlSchemaAnnotation*)>(
    &::System::Xml::Schema::XmlSchema::AddAnnotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d0ebb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_ImportedSchemas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_ImportedSchemas)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d0ebd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_ImportedSchemas",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.get_ImportedNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::XmlSchema::*)()>(
    &::System::Xml::Schema::XmlSchema::get_ImportedNamespaces)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d0ec3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(),
                                                                               "get_ImportedNamespaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchema.GetExternalSchemasList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchema::*)(::System::Collections::IList*, ::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchema::GetExternalSchemasList)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d0eca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "GetExternalSchemasList", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaForm& System::Xml::Schema::XmlSchema::__cordl_internal_get_attributeFormDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeFormDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaForm const& System::Xml::Schema::XmlSchema::__cordl_internal_get_attributeFormDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeFormDefault;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_attributeFormDefault(::System::Xml::Schema::XmlSchemaForm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributeFormDefault = value;
}
constexpr ::System::Xml::Schema::XmlSchemaForm& System::Xml::Schema::XmlSchema::__cordl_internal_get_elementFormDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementFormDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaForm const& System::Xml::Schema::XmlSchema::__cordl_internal_get_elementFormDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementFormDefault;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_elementFormDefault(::System::Xml::Schema::XmlSchemaForm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementFormDefault = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& System::Xml::Schema::XmlSchema::__cordl_internal_get_blockDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& System::Xml::Schema::XmlSchema::__cordl_internal_get_blockDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockDefault;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_blockDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blockDefault = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& System::Xml::Schema::XmlSchema::__cordl_internal_get_finalDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalDefault;
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& System::Xml::Schema::XmlSchema::__cordl_internal_get_finalDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalDefault;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_finalDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finalDefault = value;
}
constexpr ::StringW& System::Xml::Schema::XmlSchema::__cordl_internal_get_targetNs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNs;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchema::__cordl_internal_get_targetNs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNs;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_targetNs(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetNs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::XmlSchema::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchema::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& System::Xml::Schema::XmlSchema::__cordl_internal_get_includes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_includes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includes;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_includes(::System::Xml::Schema::XmlSchemaObjectCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___includes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& System::Xml::Schema::XmlSchema::__cordl_internal_get_items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_items(::System::Xml::Schema::XmlSchemaObjectCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Xml::Schema::XmlSchema::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchema::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*>& System::Xml::Schema::XmlSchema::__cordl_internal_get_moreAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moreAttributes;
}
constexpr ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_moreAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moreAttributes;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_moreAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___moreAttributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Schema::XmlSchema::__cordl_internal_get_isCompiled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCompiled;
}
constexpr bool const& System::Xml::Schema::XmlSchema::__cordl_internal_get_isCompiled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCompiled;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_isCompiled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCompiled = value;
}
constexpr bool& System::Xml::Schema::XmlSchema::__cordl_internal_get_isCompiledBySet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCompiledBySet;
}
constexpr bool const& System::Xml::Schema::XmlSchema::__cordl_internal_get_isCompiledBySet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCompiledBySet;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_isCompiledBySet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCompiledBySet = value;
}
constexpr bool& System::Xml::Schema::XmlSchema::__cordl_internal_get_isPreprocessed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPreprocessed;
}
constexpr bool const& System::Xml::Schema::XmlSchema::__cordl_internal_get_isPreprocessed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPreprocessed;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_isPreprocessed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPreprocessed = value;
}
constexpr bool& System::Xml::Schema::XmlSchema::__cordl_internal_get_isRedefined() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRedefined;
}
constexpr bool const& System::Xml::Schema::XmlSchema::__cordl_internal_get_isRedefined() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRedefined;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_isRedefined(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRedefined = value;
}
constexpr int32_t& System::Xml::Schema::XmlSchema::__cordl_internal_get_errorCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCount;
}
constexpr int32_t const& System::Xml::Schema::XmlSchema::__cordl_internal_get_errorCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCount;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_errorCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorCount = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchema::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchema::__cordl_internal_get_attributeGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_attributeGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeGroups;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_attributeGroups(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchema::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_elements(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchema::__cordl_internal_get_types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___types;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___types;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_types(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___types)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchema::__cordl_internal_get_groups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_groups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groups;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_groups(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchema::__cordl_internal_get_notations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_notations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notations;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_notations(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___notations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchema::__cordl_internal_get_identityConstraints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identityConstraints;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectTable*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_identityConstraints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identityConstraints;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_identityConstraints(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___identityConstraints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::XmlSchema::__cordl_internal_get_importedSchemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___importedSchemas;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_importedSchemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___importedSchemas;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_importedSchemas(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___importedSchemas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::XmlSchema::__cordl_internal_get_importedNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___importedNamespaces;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_importedNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___importedNamespaces;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_importedNamespaces(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___importedNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::Schema::XmlSchema::__cordl_internal_get_schemaId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaId;
}
constexpr int32_t const& System::Xml::Schema::XmlSchema::__cordl_internal_get_schemaId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaId;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_schemaId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaId = value;
}
constexpr ::System::Uri*& System::Xml::Schema::XmlSchema::__cordl_internal_get_baseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_baseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_baseUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Schema::XmlSchema::__cordl_internal_get_isChameleon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isChameleon;
}
constexpr bool const& System::Xml::Schema::XmlSchema::__cordl_internal_get_isChameleon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isChameleon;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_isChameleon(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isChameleon = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchema::__cordl_internal_get_ids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ids;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_ids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ids;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_ids(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlDocument*& System::Xml::Schema::XmlSchema::__cordl_internal_get_document() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___document;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& System::Xml::Schema::XmlSchema::__cordl_internal_get_document() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___document;
}
constexpr void System::Xml::Schema::XmlSchema::__cordl_internal_set_document(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___document)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XmlSchema::setStaticF_globalIdCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "globalIdCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Xml::Schema::XmlSchema::getStaticF_globalIdCounter() {
  return ::cordl_internals::getStaticField<int32_t, "globalIdCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get>();
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchema::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchema*>());
}
inline void System::Xml::Schema::XmlSchema::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchema::Read(::System::Xml::XmlReader* reader, ::System::Xml::Schema::ValidationEventHandler* validationEventHandler) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(nullptr, ___internal_method, reader, validationEventHandler);
}
inline bool System::Xml::Schema::XmlSchema::CompileSchema(::System::Xml::Schema::XmlSchemaCollection* xsc, ::System::Xml::XmlResolver* resolver, ::System::Xml::Schema::SchemaInfo* schemaInfo,
                                                          ::StringW ns, ::System::Xml::Schema::ValidationEventHandler* validationEventHandler, ::System::Xml::XmlNameTable* nameTable,
                                                          bool CompileContentModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "CompileSchema", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaCollection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xsc, resolver, schemaInfo, ns, validationEventHandler, nameTable, CompileContentModel);
}
inline void System::Xml::Schema::XmlSchema::CompileSchemaInSet(::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::ValidationEventHandler* eventHandler,
                                                               ::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "CompileSchemaInSet", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaCompilationSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameTable, eventHandler, compilationSettings);
}
inline ::System::Xml::Schema::XmlSchemaForm System::Xml::Schema::XmlSchema::get_AttributeFormDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(),
                                                                             "get_AttributeFormDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaForm, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_AttributeFormDefault(::System::Xml::Schema::XmlSchemaForm value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_AttributeFormDefault", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaForm>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaDerivationMethod System::Xml::Schema::XmlSchema::get_BlockDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_BlockDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDerivationMethod, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_BlockDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_BlockDefault", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDerivationMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaDerivationMethod System::Xml::Schema::XmlSchema::get_FinalDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_FinalDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDerivationMethod, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_FinalDefault(::System::Xml::Schema::XmlSchemaDerivationMethod value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_FinalDefault", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaDerivationMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaForm System::Xml::Schema::XmlSchema::get_ElementFormDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_ElementFormDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaForm, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_ElementFormDefault(::System::Xml::Schema::XmlSchemaForm value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_ElementFormDefault", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaForm>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlSchema::get_TargetNamespace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_TargetNamespace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_TargetNamespace(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_TargetNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::XmlSchema::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Version",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_Version(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_Version", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaObjectCollection* System::Xml::Schema::XmlSchema::get_Includes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Includes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectCollection*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectCollection* System::Xml::Schema::XmlSchema::get_Items() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Items",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectCollection*, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchema::get_IsCompiledBySet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_IsCompiledBySet",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_IsCompiledBySet(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_IsCompiledBySet",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlSchema::get_IsPreprocessed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_IsPreprocessed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_IsPreprocessed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_IsPreprocessed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlSchema::get_IsRedefined() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_IsRedefined",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_IsRedefined(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_IsRedefined",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchema::get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Attributes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchema::get_AttributeGroups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_AttributeGroups",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchema::get_SchemaTypes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_SchemaTypes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchema::get_Elements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Elements",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlSchema::get_Id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_Id(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_Id", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchema::get_Groups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Groups",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchema::get_Notations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Notations",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchema::get_IdentityConstraints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(),
                                                                             "get_IdentityConstraints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*, false>(this, ___internal_method);
}
inline ::System::Uri* System::Xml::Schema::XmlSchema::get_BaseUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_BaseUri",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_BaseUri(::System::Uri* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_BaseUri", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlSchema::get_SchemaId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_SchemaId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchema::get_IsChameleon() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_IsChameleon",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_IsChameleon(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_IsChameleon",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Hashtable* System::Xml::Schema::XmlSchema::get_Ids() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Ids",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDocument* System::Xml::Schema::XmlSchema::get_Document() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_Document",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*, false>(this, ___internal_method);
}
inline int32_t System::Xml::Schema::XmlSchema::get_ErrorCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_ErrorCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_ErrorCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "set_ErrorCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchema::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "Clone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchema::DeepClone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "DeepClone",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*, false>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::XmlSchema::get_IdAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::set_IdAttribute(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchema::SetIsCompiled(bool isCompiled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "SetIsCompiled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isCompiled);
}
inline void System::Xml::Schema::XmlSchema::SetUnhandledAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> moreAttributes) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, moreAttributes);
}
inline void System::Xml::Schema::XmlSchema::AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, annotation);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::XmlSchema::get_ImportedSchemas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_ImportedSchemas",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Xml::Schema::XmlSchema::get_ImportedNamespaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "get_ImportedNamespaces",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchema::GetExternalSchemasList(::System::Collections::IList* extList, ::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchema*>::get(), "GetExternalSchemasList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, extList, schema);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchema::XmlSchema() {}
