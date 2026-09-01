#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlFormatReaderInterpreter.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatReaderInterpreter_def.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataObject_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::ClassDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x617d2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::CollectionDataContract*, bool)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x617d300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadFromXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*,
                                                                     ::ArrayW<::System::Xml::XmlDictionaryString*>, ::ArrayW<::System::Xml::XmlDictionaryString*>)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadFromXml)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x617d30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                            { "ReadFromXml",
                              {},
                              { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadCollectionFromXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*,
                                                                     ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                     ::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollectionFromXml)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x617df4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                { "ReadCollectionFromXml",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadGetOnlyCollectionFromXml
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
    ::System::Runtime::Serialization::CollectionDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadGetOnlyCollectionFromXml)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x617e7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                { "ReadGetOnlyCollectionFromXml",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                    ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.CreateObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::ClassDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::CreateObject)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x617d608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                           { "CreateObject", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.InvokeOnDeserializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::ClassDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeOnDeserializing)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x617d854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                             { "InvokeOnDeserializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.InvokeOnDeserialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::ClassDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeOnDeserialized)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x617de00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                             { "InvokeOnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.HasFactoryMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::ClassDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::HasFactoryMethod)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x617d9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                           { "HasFactoryMethod", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.InvokeFactoryMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::ClassDataContract*, ::StringW)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeFactoryMethod)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x617dce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                             { "InvokeFactoryMethod", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadISerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::ClassDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadISerializable)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x617da20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                           { "ReadISerializable", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::ClassDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadClass)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x617db8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                           { "ReadClass", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*, ::System::Runtime::Serialization::ExtensionDataObject*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadMembers)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x617ea08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                         { "ReadMembers", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>(), ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    int32_t, ::System::Runtime::Serialization::ClassDataContract*, ::ArrayW<bool>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadMembers)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x617ec3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                             { "ReadMembers",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>(), ::i2c::type_of<::ArrayW<bool>>(),
                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.GetRequiredMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*, ::by_ref<int32_t>)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::GetRequiredMembers)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x617eb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                { "GetRequiredMembers", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.GetRequiredMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::ClassDataContract*, ::ArrayW<bool>)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::GetRequiredMembers)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x617f420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                { "GetRequiredMembers", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>(), ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Type*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadValue)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x617ee60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                             { "ReadValue", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.InternalDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Type*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::InternalDeserialize)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x617f530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                             { "InternalDeserialize", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.WrapNullableObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Type*, ::System::Object*, ::System::Type*, int32_t)>(
        &::System::Runtime::Serialization::XmlFormatReaderInterpreter::WrapNullableObject)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x617f72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                            { "WrapNullableObject", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollection)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x617df74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                           { "ReadCollection", {}, { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadGetOnlyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadGetOnlyCollection)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x617e7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                             { "ReadGetOnlyCollection", {}, { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.TryReadPrimitiveArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Type*, ::System::Type*, int32_t, ::by_ref<bool>)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::TryReadPrimitiveArray)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x617f910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                            { "TryReadPrimitiveArray", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadCollectionItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::CollectionDataContract*, ::System::Type*, ::StringW, ::StringW)>(
        &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollectionItem)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x617fc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                           { "ReadCollectionItem",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.StoreCollectionValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Object*, ::System::Type*, ::System::Object*,
                                                                                                                              ::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::StoreCollectionValue)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x617fd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                             { "StoreCollectionValue",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.HandleUnexpectedItemInCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::by_ref<int32_t>)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::HandleUnexpectedItemInCollection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x617fff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                           { "HandleUnexpectedItemInCollection", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::IsStartElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x617fc6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                { "IsStartElement", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.IsStartElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)()>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::IsStartElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6180070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(), { "IsStartElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.IsEndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)()>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::IsEndElement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x617ffd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(), { "IsEndElement", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_is_get_only_collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_get_only_collection;
}
constexpr bool const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_is_get_only_collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_get_only_collection;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_is_get_only_collection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_get_only_collection = value;
}
constexpr ::System::Runtime::Serialization::ClassDataContract*& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_classContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___classContract;
}
constexpr ::System::Runtime::Serialization::ClassDataContract* const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_classContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___classContract;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_classContract(::System::Runtime::Serialization::ClassDataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___classContract = value;
}
constexpr ::System::Runtime::Serialization::CollectionDataContract*& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_collectionContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionContract;
}
constexpr ::System::Runtime::Serialization::CollectionDataContract* const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_collectionContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionContract;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_collectionContract(::System::Runtime::Serialization::CollectionDataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collectionContract = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_objectLocal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectLocal;
}
constexpr ::System::Object* const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_objectLocal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectLocal;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_objectLocal(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectLocal = value;
}
constexpr ::System::Type*& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_objectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_objectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objectType;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_objectType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objectType = value;
}
constexpr ::System::Runtime::Serialization::XmlReaderDelegator*& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_xmlReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlReader;
}
constexpr ::System::Runtime::Serialization::XmlReaderDelegator* const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_xmlReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlReader;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_xmlReader(::System::Runtime::Serialization::XmlReaderDelegator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlReader = value;
}
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContext*& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContext* const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_context(::System::Runtime::Serialization::XmlObjectSerializerReadContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_memberNames(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberNames = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_memberNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_memberNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNamespaces;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_memberNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___memberNamespaces = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_itemName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemName;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_itemName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemName;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_itemName(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemName = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_itemNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemNamespace;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_itemNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemNamespace;
}
constexpr void System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_itemNamespace(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemNamespace = value;
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::_ctor(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::_ctor(::System::Runtime::Serialization::CollectionDataContract* collectionContract, bool isGetOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectionContract, isGetOnly);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadFromXml(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                 ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                                 ::ArrayW<::System::Xml::XmlDictionaryString*> memberNames,
                                                                                                 ::ArrayW<::System::Xml::XmlDictionaryString*> memberNamespaces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                       { "ReadFromXml",
                                         {},
                                         { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                           ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, context, memberNames, memberNamespaces);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollectionFromXml(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                           ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                                           ::System::Xml::XmlDictionaryString* itemName,
                                                                                                           ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                                           ::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                              { "ReadCollectionFromXml",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, context, itemName, itemNamespace, collectionContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadGetOnlyCollectionFromXml(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                     ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                                     ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                                     ::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                              { "ReadGetOnlyCollectionFromXml",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>(),
                                                  ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlReader, context, itemName, itemNamespace, collectionContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::CreateObject(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                         { "CreateObject", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeOnDeserializing(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                         { "InvokeOnDeserializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeOnDeserialized(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                         { "InvokeOnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classContract);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::HasFactoryMethod(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                         { "HasFactoryMethod", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, classContract);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeFactoryMethod(::System::Runtime::Serialization::ClassDataContract* classContract, ::StringW objectId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                           { "InvokeFactoryMethod", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, classContract, objectId);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadISerializable(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                         { "ReadISerializable", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadClass(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                         { "ReadClass", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadMembers(::System::Runtime::Serialization::ClassDataContract* classContract,
                                                                                    ::System::Runtime::Serialization::ExtensionDataObject* extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                       { "ReadMembers", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>(), ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, classContract, extensionData);
}
inline int32_t System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadMembers(int32_t index, ::System::Runtime::Serialization::ClassDataContract* classContract,
                                                                                       ::ArrayW<bool> requiredMembers, ::by_ref<int32_t> memberIndex, ::by_ref<int32_t> requiredIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                           { "ReadMembers",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>(), ::i2c::type_of<::ArrayW<bool>>(),
                                                               ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index, classContract, requiredMembers, memberIndex, requiredIndex);
}
inline ::ArrayW<bool> System::Runtime::Serialization::XmlFormatReaderInterpreter::GetRequiredMembers(::System::Runtime::Serialization::ClassDataContract* contract,
                                                                                                     ::by_ref<int32_t> firstRequiredMember) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                              { "GetRequiredMembers", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method, contract, firstRequiredMember);
}
inline int32_t System::Runtime::Serialization::XmlFormatReaderInterpreter::GetRequiredMembers(::System::Runtime::Serialization::ClassDataContract* contract, ::ArrayW<bool> requiredMembers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                              { "GetRequiredMembers", {}, { ::i2c::type_of<::System::Runtime::Serialization::ClassDataContract*>(), ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, contract, requiredMembers);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadValue(::System::Type* type, ::StringW name, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                           { "ReadValue", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::InternalDeserialize(::System::Type* type, ::StringW name, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                           { "InternalDeserialize", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::WrapNullableObject(::System::Type* innerType, ::System::Object* innerValue, ::System::Type* outerType,
                                                                                                        int32_t nullables) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                          { "WrapNullableObject", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, innerType, innerValue, outerType, nullables);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollection(::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                         { "ReadCollection", {}, { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectionContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadGetOnlyCollection(::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                           { "ReadGetOnlyCollection", {}, { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectionContract);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::TryReadPrimitiveArray(::System::Type* type, ::System::Type* itemType, int32_t size, ::by_ref<bool> readResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                          { "TryReadPrimitiveArray", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, itemType, size, readResult);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollectionItem(::System::Runtime::Serialization::CollectionDataContract* collectionContract,
                                                                                                        ::System::Type* itemType, ::StringW itemName, ::StringW itemNs) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                         { "ReadCollectionItem",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                             ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, collectionContract, itemType, itemName, itemNs);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::StoreCollectionValue(::System::Object* collection, ::System::Type* valueType, ::System::Object* value,
                                                                                             ::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                           { "StoreCollectionValue",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection, valueType, value, collectionContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::HandleUnexpectedItemInCollection(::by_ref<int32_t> iterator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                                                                         { "HandleUnexpectedItemInCollection", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iterator);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::IsStartElement(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(),
                                              { "IsStartElement", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, ns);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::IsStartElement() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(), { "IsStartElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::IsEndElement() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(), { "IsEndElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatReaderInterpreter*
System::Runtime::Serialization::XmlFormatReaderInterpreter::New_ctor(::System::Runtime::Serialization::ClassDataContract* classContract) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(classContract));
}
inline ::System::Runtime::Serialization::XmlFormatReaderInterpreter*
System::Runtime::Serialization::XmlFormatReaderInterpreter::New_ctor(::System::Runtime::Serialization::CollectionDataContract* collectionContract, bool isGetOnly) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(collectionContract, isGetOnly));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatReaderInterpreter::XmlFormatReaderInterpreter() {}
