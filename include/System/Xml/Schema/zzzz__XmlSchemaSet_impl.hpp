#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaSet.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__SortedList_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventArgs_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaCompilationSettings_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectTable_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_InternalSyncObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62343f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_InternalSyncObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x623445c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::Schema::XmlSchemaSet::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x62344bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.add_ValidationEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::ValidationEventHandler*)>(
    &::System::Xml::Schema::XmlSchemaSet::add_ValidationEventHandler)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6234730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "add_ValidationEventHandler", {}, { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.remove_ValidationEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::ValidationEventHandler*)>(
    &::System::Xml::Schema::XmlSchemaSet::remove_ValidationEventHandler)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x62347f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "remove_ValidationEventHandler", {}, { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_IsCompiled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::get_IsCompiled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6234884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_IsCompiled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.set_XmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::XmlResolver*)>(&::System::Xml::Schema::XmlSchemaSet::set_XmlResolver)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x623488c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_CompilationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaCompilationSettings* (::System::Xml::Schema::XmlSchemaSet::*)()>(
    &::System::Xml::Schema::XmlSchemaSet::get_CompilationSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62348a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_CompilationSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.set_CompilationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchemaCompilationSettings*)>(
    &::System::Xml::Schema::XmlSchemaSet::set_CompilationSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62348ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "set_CompilationSettings", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::get_Count)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x62348b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_GlobalElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchemaSet::*)()>(
    &::System::Xml::Schema::XmlSchemaSet::get_GlobalElements)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x62348d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_GlobalElements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_GlobalAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchemaSet::*)()>(
    &::System::Xml::Schema::XmlSchemaSet::get_GlobalAttributes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6234938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_GlobalAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_GlobalTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchemaSet::*)()>(
    &::System::Xml::Schema::XmlSchemaSet::get_GlobalTypes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x623499c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_GlobalTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_SubstitutionGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchemaSet::*)()>(
    &::System::Xml::Schema::XmlSchemaSet::get_SubstitutionGroups)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6234a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_SubstitutionGroups", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_SchemaLocations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Hashtable* (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::get_SchemaLocations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6234a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_SchemaLocations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_TypeExtensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObjectTable* (::System::Xml::Schema::XmlSchemaSet::*)()>(
    &::System::Xml::Schema::XmlSchemaSet::get_TypeExtensions)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6234a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_TypeExtensions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchemaSet*)>(&::System::Xml::Schema::XmlSchemaSet::Add)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x6234ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Add", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchemaSet::Add)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6236ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Add", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.RemoveRecursive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::XmlSchemaSet::RemoveRecursive)> {
  constexpr static std::size_t size = 0x9f4;
  constexpr static std::size_t addrs = 0x6237058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "RemoveRecursive", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.Contains
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaSet::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaSet::Contains)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6237e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.Compile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::Compile)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x6237ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Compile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.Reprocess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchemaSet::Reprocess)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x62383a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Reprocess", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::ArrayW<::System::Xml::Schema::XmlSchema*>, int32_t)>(
    &::System::Xml::Schema::XmlSchemaSet::CopyTo)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6239cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Xml::Schema::XmlSchema*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.Schemas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::Schemas)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6239e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Schemas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.Schemas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ICollection* (::System::Xml::Schema::XmlSchemaSet::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaSet::Schemas)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6239a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Schemas", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchemaSet::*)(::StringW, ::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchemaSet::Add)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6236e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::StringW, ::System::Xml::XmlReader*, ::System::Collections::Hashtable*)>(
    &::System::Xml::Schema::XmlSchemaSet::Add)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x623a1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.FindSchemaByNSAndUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (
    ::System::Xml::Schema::XmlSchemaSet::*)(::System::Uri*, ::StringW, ::ArrayW<::System::Collections::DictionaryEntry>)>(&::System::Xml::Schema::XmlSchemaSet::FindSchemaByNSAndUrl)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6236c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                            { "FindSchemaByNSAndUrl", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Collections::DictionaryEntry>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.AddSchemaToSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchema*)>(&::System::Xml::Schema::XmlSchemaSet::AddSchemaToSet)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6239e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "AddSchemaToSet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.ProcessNewSubstitutionGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchemaObjectTable*, bool)>(
    &::System::Xml::Schema::XmlSchemaSet::ProcessNewSubstitutionGroups)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x623a970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                             { "ProcessNewSubstitutionGroups", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.ResolveSubstitutionGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchemaSubstitutionGroup*, ::System::Xml::Schema::XmlSchemaObjectTable*)>(
    &::System::Xml::Schema::XmlSchemaSet::ResolveSubstitutionGroup)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x623ae20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
            { "ResolveSubstitutionGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchema*, bool)>(
    &::System::Xml::Schema::XmlSchemaSet::Remove)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x6237b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Remove", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.ClearTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::ClearTables)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6238344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "ClearTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.PreprocessSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaSet::*)(::by_ref<::System::Xml::Schema::XmlSchema*>, ::StringW)>(
    &::System::Xml::Schema::XmlSchemaSet::PreprocessSchema)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6239be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                             { "PreprocessSchema", {}, { ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchema*>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.ParseSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchema* (::System::Xml::Schema::XmlSchemaSet::*)(::StringW, ::System::Xml::XmlReader*)>(
    &::System::Xml::Schema::XmlSchemaSet::ParseSchema)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x623a800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                                                           { "ParseSchema", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.CopyFromCompiledSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchemaSet*)>(
    &::System::Xml::Schema::XmlSchemaSet::CopyFromCompiledSet)> {
  constexpr static std::size_t size = 0x186c;
  constexpr static std::size_t addrs = 0x62353c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "CopyFromCompiledSet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_CompiledInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaInfo* (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::get_CompiledInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623b680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_CompiledInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_ReaderSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlReaderSettings* (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::get_ReaderSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623b688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_ReaderSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.GetResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlResolver* (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::GetResolver)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x623b690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "GetResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.GetEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::ValidationEventHandler* (::System::Xml::Schema::XmlSchemaSet::*)()>(
    &::System::Xml::Schema::XmlSchemaSet::GetEventHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623b6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "GetEventHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.GetSchemaNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::SchemaNames* (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::XmlNameTable*)>(
    &::System::Xml::Schema::XmlSchemaSet::GetSchemaNames)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x623b510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "GetSchemaNames", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.IsSchemaLoaded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaSet::*)(::System::Uri*, ::StringW, ::by_ref<::System::Xml::Schema::XmlSchema*>)>(
    &::System::Xml::Schema::XmlSchemaSet::IsSchemaLoaded)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x623a570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                         { "IsSchemaLoaded", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchema*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.GetSchemaByUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaSet::*)(::System::Uri*, ::by_ref<::System::Xml::Schema::XmlSchema*>)>(
    &::System::Xml::Schema::XmlSchemaSet::GetSchemaByUri)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x623b6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                             { "GetSchemaByUri", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchema*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.GetTargetNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchemaSet::GetTargetNamespace)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6237a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "GetTargetNamespace", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.get_SortedSchemas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::SortedList* (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::get_SortedSchemas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623b7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_SortedSchemas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.RemoveSchemaFromCaches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchemaSet::RemoveSchemaFromCaches)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x6239468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "RemoveSchemaFromCaches", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.RemoveSchemaFromGlobalTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchema*)>(
    &::System::Xml::Schema::XmlSchemaSet::RemoveSchemaFromGlobalTables)> {
  constexpr static std::size_t size = 0x9e4;
  constexpr static std::size_t addrs = 0x6238a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "RemoveSchemaFromGlobalTables", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.AddToTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::XmlQualifiedName*,
                                                                                                     ::System::Xml::Schema::XmlSchemaObject*)>(&::System::Xml::Schema::XmlSchemaSet::AddToTable)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x623b214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                             { "AddToTable",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.VerifyTables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)()>(&::System::Xml::Schema::XmlSchemaSet::VerifyTables)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x623b5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "VerifyTables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.InternalValidationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Object*, ::System::Xml::Schema::ValidationEventArgs*)>(
    &::System::Xml::Schema::XmlSchemaSet::InternalValidationCallback)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x623b804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                { "InternalValidationCallback", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSet.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSet::*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::XmlSchemaSet::SendValidationEvent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6237a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                         { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNameTable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameTable = value;
}
constexpr ::System::Xml::Schema::SchemaNames*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemaNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr ::System::Xml::Schema::SchemaNames* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemaNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaNames;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_schemaNames(::System::Xml::Schema::SchemaNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaNames = value;
}
constexpr ::System::Collections::SortedList*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemas;
}
constexpr ::System::Collections::SortedList* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemas;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_schemas(::System::Collections::SortedList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemas = value;
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_internalEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalEventHandler;
}
constexpr ::System::Xml::Schema::ValidationEventHandler* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_internalEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalEventHandler;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_internalEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalEventHandler = value;
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_eventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventHandler;
}
constexpr ::System::Xml::Schema::ValidationEventHandler* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_eventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eventHandler;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_eventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eventHandler = value;
}
constexpr bool& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_isCompiled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCompiled;
}
constexpr bool const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_isCompiled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCompiled;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_isCompiled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCompiled = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemaLocations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaLocations;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemaLocations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaLocations;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_schemaLocations(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaLocations = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_chameleonSchemas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chameleonSchemas;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_chameleonSchemas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chameleonSchemas;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_chameleonSchemas(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chameleonSchemas = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_targetNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespaces;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_targetNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetNamespaces;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_targetNamespaces(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetNamespaces = value;
}
constexpr bool& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_compileAll() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compileAll;
}
constexpr bool const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_compileAll() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compileAll;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_compileAll(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compileAll = value;
}
constexpr ::System::Xml::Schema::SchemaInfo*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_cachedCompiledInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedCompiledInfo;
}
constexpr ::System::Xml::Schema::SchemaInfo* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_cachedCompiledInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedCompiledInfo;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_cachedCompiledInfo(::System::Xml::Schema::SchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedCompiledInfo = value;
}
constexpr ::System::Xml::XmlReaderSettings*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_readerSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerSettings;
}
constexpr ::System::Xml::XmlReaderSettings* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_readerSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readerSettings;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_readerSettings(::System::Xml::XmlReaderSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readerSettings = value;
}
constexpr ::System::Xml::Schema::XmlSchema*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemaForSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaForSchema;
}
constexpr ::System::Xml::Schema::XmlSchema* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemaForSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaForSchema;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_schemaForSchema(::System::Xml::Schema::XmlSchema* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaForSchema = value;
}
constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_compilationSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compilationSettings;
}
constexpr ::System::Xml::Schema::XmlSchemaCompilationSettings* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_compilationSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compilationSettings;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_compilationSettings(::System::Xml::Schema::XmlSchemaCompilationSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___compilationSettings = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_elements(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elements = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributes = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemaTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaTypes;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_schemaTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___schemaTypes;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_schemaTypes(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___schemaTypes = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_substitutionGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___substitutionGroups;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_substitutionGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___substitutionGroups;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_substitutionGroups(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___substitutionGroups = value;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_typeExtensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeExtensions;
}
constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_typeExtensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeExtensions;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_typeExtensions(::System::Xml::Schema::XmlSchemaObjectTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeExtensions = value;
}
constexpr ::System::Object*& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_internalSyncObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalSyncObject;
}
constexpr ::System::Object* const& System::Xml::Schema::XmlSchemaSet::__cordl_internal_get_internalSyncObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalSyncObject;
}
constexpr void System::Xml::Schema::XmlSchemaSet::__cordl_internal_set_internalSyncObject(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalSyncObject = value;
}
inline ::System::Object* System::Xml::Schema::XmlSchemaSet::get_InternalSyncObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_InternalSyncObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSet::_ctor(::System::Xml::XmlNameTable* nameTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameTable);
}
inline void System::Xml::Schema::XmlSchemaSet::add_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                                                         { "add_ValidationEventHandler", {}, { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaSet::remove_ValidationEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "remove_ValidationEventHandler", {}, { ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XmlSchemaSet::get_IsCompiled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_IsCompiled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSet::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaCompilationSettings* System::Xml::Schema::XmlSchemaSet::get_CompilationSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_CompilationSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaCompilationSettings*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSet::set_CompilationSettings(::System::Xml::Schema::XmlSchemaCompilationSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "set_CompilationSettings", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaCompilationSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Xml::Schema::XmlSchemaSet::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaSet::get_GlobalElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_GlobalElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaSet::get_GlobalAttributes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_GlobalAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaSet::get_GlobalTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_GlobalTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaSet::get_SubstitutionGroups() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_SubstitutionGroups", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*>(this, ___internal_method);
}
inline ::System::Collections::Hashtable* System::Xml::Schema::XmlSchemaSet::get_SchemaLocations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_SchemaLocations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Hashtable*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectTable* System::Xml::Schema::XmlSchemaSet::get_TypeExtensions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_TypeExtensions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectTable*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSet::Add(::System::Xml::Schema::XmlSchemaSet* schemas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Add", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemas);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaSet::Add(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Add", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, schema);
}
inline bool System::Xml::Schema::XmlSchemaSet::RemoveRecursive(::System::Xml::Schema::XmlSchema* schemaToRemove) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "RemoveRecursive", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schemaToRemove);
}
inline bool System::Xml::Schema::XmlSchemaSet::Contains(::StringW targetNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Contains", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetNamespace);
}
inline void System::Xml::Schema::XmlSchemaSet::Compile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Compile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaSet::Reprocess(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Reprocess", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::XmlSchemaSet::CopyTo(::ArrayW<::System::Xml::Schema::XmlSchema*> schemas, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Xml::Schema::XmlSchema*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schemas, index);
}
inline ::System::Collections::ICollection* System::Xml::Schema::XmlSchemaSet::Schemas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Schemas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Xml::Schema::XmlSchemaSet::Schemas(::StringW targetNamespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Schemas", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method, targetNamespace);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaSet::Add(::StringW targetNamespace, ::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, targetNamespace, schema);
}
inline void System::Xml::Schema::XmlSchemaSet::Add(::StringW targetNamespace, ::System::Xml::XmlReader* reader, ::System::Collections::Hashtable* validatedNamespaces) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                              { "Add", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetNamespace, reader, validatedNamespaces);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaSet::FindSchemaByNSAndUrl(::System::Uri* schemaUri, ::StringW ns,
                                                                                                 ::ArrayW<::System::Collections::DictionaryEntry> locationsTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                          { "FindSchemaByNSAndUrl", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Collections::DictionaryEntry>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, schemaUri, ns, locationsTable);
}
inline void System::Xml::Schema::XmlSchemaSet::AddSchemaToSet(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "AddSchemaToSet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::XmlSchemaSet::ProcessNewSubstitutionGroups(::System::Xml::Schema::XmlSchemaObjectTable* substitutionGroupsTable, bool resolve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                           { "ProcessNewSubstitutionGroups", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, substitutionGroupsTable, resolve);
}
inline void System::Xml::Schema::XmlSchemaSet::ResolveSubstitutionGroup(::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup, ::System::Xml::Schema::XmlSchemaObjectTable* substTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                       { "ResolveSubstitutionGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, substitutionGroup, substTable);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaSet::Remove(::System::Xml::Schema::XmlSchema* schema, bool forceCompile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "Remove", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, schema, forceCompile);
}
inline void System::Xml::Schema::XmlSchemaSet::ClearTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "ClearTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaSet::PreprocessSchema(::by_ref<::System::Xml::Schema::XmlSchema*> schema, ::StringW targetNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                           { "PreprocessSchema", {}, { ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchema*>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schema, targetNamespace);
}
inline ::System::Xml::Schema::XmlSchema* System::Xml::Schema::XmlSchemaSet::ParseSchema(::StringW targetNamespace, ::System::Xml::XmlReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "ParseSchema", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchema*>(this, ___internal_method, targetNamespace, reader);
}
inline void System::Xml::Schema::XmlSchemaSet::CopyFromCompiledSet(::System::Xml::Schema::XmlSchemaSet* otherSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "CopyFromCompiledSet", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherSet);
}
inline ::System::Xml::Schema::SchemaInfo* System::Xml::Schema::XmlSchemaSet::get_CompiledInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_CompiledInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaInfo*>(this, ___internal_method);
}
inline ::System::Xml::XmlReaderSettings* System::Xml::Schema::XmlSchemaSet::get_ReaderSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_ReaderSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReaderSettings*>(this, ___internal_method);
}
inline ::System::Xml::XmlResolver* System::Xml::Schema::XmlSchemaSet::GetResolver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "GetResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlResolver*>(this, ___internal_method);
}
inline ::System::Xml::Schema::ValidationEventHandler* System::Xml::Schema::XmlSchemaSet::GetEventHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "GetEventHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::ValidationEventHandler*>(this, ___internal_method);
}
inline ::System::Xml::Schema::SchemaNames* System::Xml::Schema::XmlSchemaSet::GetSchemaNames(::System::Xml::XmlNameTable* nt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "GetSchemaNames", {}, { ::i2c::type_of<::System::Xml::XmlNameTable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::SchemaNames*>(this, ___internal_method, nt);
}
inline bool System::Xml::Schema::XmlSchemaSet::IsSchemaLoaded(::System::Uri* schemaUri, ::StringW targetNamespace, ::by_ref<::System::Xml::Schema::XmlSchema*> schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                       { "IsSchemaLoaded", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchema*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schemaUri, targetNamespace, schema);
}
inline bool System::Xml::Schema::XmlSchemaSet::GetSchemaByUri(::System::Uri* schemaUri, ::by_ref<::System::Xml::Schema::XmlSchema*> schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                           { "GetSchemaByUri", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Xml::Schema::XmlSchema*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, schemaUri, schema);
}
inline ::StringW System::Xml::Schema::XmlSchemaSet::GetTargetNamespace(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "GetTargetNamespace", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, schema);
}
inline ::System::Collections::SortedList* System::Xml::Schema::XmlSchemaSet::get_SortedSchemas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "get_SortedSchemas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::SortedList*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSet::RemoveSchemaFromCaches(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "RemoveSchemaFromCaches", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline void System::Xml::Schema::XmlSchemaSet::RemoveSchemaFromGlobalTables(::System::Xml::Schema::XmlSchema* schema) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "RemoveSchemaFromGlobalTables", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchema*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, schema);
}
inline bool System::Xml::Schema::XmlSchemaSet::AddToTable(::System::Xml::Schema::XmlSchemaObjectTable* table, ::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaObject* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                                           { "AddToTable",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::XmlSchemaObjectTable*>(), ::i2c::type_of<::System::Xml::XmlQualifiedName*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XmlSchemaObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, table, qname, item);
}
inline void System::Xml::Schema::XmlSchemaSet::VerifyTables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(), { "VerifyTables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSet::InternalValidationCallback(::System::Object* sender, ::System::Xml::Schema::ValidationEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                              { "InternalValidationCallback", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline void System::Xml::Schema::XmlSchemaSet::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSet*>(),
                                       { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, severity);
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaSet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaSet*>());
}
inline ::System::Xml::Schema::XmlSchemaSet* System::Xml::Schema::XmlSchemaSet::New_ctor(::System::Xml::XmlNameTable* nameTable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaSet*>(nameTable));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSet::XmlSchemaSet() {}
