#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlFormatReaderInterpreter.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc87a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::CollectionDataContract*, bool)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fc87a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadFromXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*,
                                                                     ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>,
                                                                     ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadFromXml)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5fc87b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadFromXml", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadCollectionFromXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*,
                                                                     ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
                                                                     ::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollectionFromXml)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fc93f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadCollectionFromXml", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadGetOnlyCollectionFromXml
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*,
    ::System::Runtime::Serialization::CollectionDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadGetOnlyCollectionFromXml)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fc9c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadGetOnlyCollectionFromXml",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.CreateObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::CreateObject)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5fc8ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "CreateObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.InvokeOnDeserializing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeOnDeserializing)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5fc8cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "InvokeOnDeserializing", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.InvokeOnDeserialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeOnDeserialized)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5fc92a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "InvokeOnDeserialized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.HasFactoryMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::HasFactoryMethod)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fc8e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "HasFactoryMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.InvokeFactoryMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*, ::StringW)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeFactoryMethod)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5fc9190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "InvokeFactoryMethod", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadISerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadISerializable)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5fc8ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadISerializable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadClass)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5fc9034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadClass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*, ::System::Runtime::Serialization::ExtensionDataObject*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadMembers)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fc9eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ExtensionDataObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    int32_t, ::System::Runtime::Serialization::ClassDataContract*, ::ArrayW<bool, ::Array<bool>*>, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadMembers)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5fca0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.GetRequiredMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool, ::Array<bool>*> (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*, ::ByRef<int32_t>)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::GetRequiredMembers)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5fc9ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "GetRequiredMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.GetRequiredMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::ClassDataContract*, ::ArrayW<bool, ::Array<bool>*>)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::GetRequiredMembers)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fca8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "GetRequiredMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Type*, ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadValue)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x5fca308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.InternalDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Type*, ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::InternalDeserialize)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5fca9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "InternalDeserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.WrapNullableObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Type*, ::System::Object*, ::System::Type*, int32_t)>(
        &::System::Runtime::Serialization::XmlFormatReaderInterpreter::WrapNullableObject)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5fcabd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "WrapNullableObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::CollectionDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollection)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x5fc941c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadCollection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadGetOnlyCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Runtime::Serialization::CollectionDataContract*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadGetOnlyCollection)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5fc9c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadGetOnlyCollection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.TryReadPrimitiveArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Type*, ::System::Type*, int32_t, ::ByRef<bool>)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::TryReadPrimitiveArray)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5fcadb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "TryReadPrimitiveArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.ReadCollectionItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::System::Runtime::Serialization::CollectionDataContract*, ::System::Type*, ::StringW, ::StringW)>(
        &::System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollectionItem)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fcb128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadCollectionItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.StoreCollectionValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Object*, ::System::Type*, ::System::Object*, ::System::Runtime::Serialization::CollectionDataContract*)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::StoreCollectionValue)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5fcb238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "StoreCollectionValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.HandleUnexpectedItemInCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(::ByRef<int32_t>)>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::HandleUnexpectedItemInCollection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5fcb49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "HandleUnexpectedItemInCollection",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)(
    ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(&::System::Runtime::Serialization::XmlFormatReaderInterpreter::IsStartElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fcb114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "IsStartElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)()>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::IsStartElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fcb518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "IsStartElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlFormatReaderInterpreter.IsEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlFormatReaderInterpreter::*)()>(
    &::System::Runtime::Serialization::XmlFormatReaderInterpreter::IsEndElement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fcb478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "IsEndElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___classContract)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___collectionContract)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectLocal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___objectType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>& System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_memberNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const&
System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_memberNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNames;
}
constexpr void
System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_memberNames(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>&
System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_memberNamespaces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNamespaces;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> const&
System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_get_memberNamespaces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___memberNamespaces;
}
constexpr void
System::Runtime::Serialization::XmlFormatReaderInterpreter::__cordl_internal_set_memberNamespaces(::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___memberNamespaces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::_ctor(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::_ctor(::System::Runtime::Serialization::CollectionDataContract* collectionContract, bool isGetOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collectionContract, isGetOnly);
}
inline ::System::Object*
System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadFromXml(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                        ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                        ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNames,
                                                                        ::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*> memberNamespaces) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadFromXml", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlDictionaryString*, ::Array<::System::Xml::XmlDictionaryString*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, context, memberNames, memberNamespaces);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollectionFromXml(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                           ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                                           ::System::Xml::XmlDictionaryString* itemName,
                                                                                                           ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                                           ::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadCollectionFromXml", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, context, itemName, itemNamespace, collectionContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadGetOnlyCollectionFromXml(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                     ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context,
                                                                                                     ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace,
                                                                                                     ::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadGetOnlyCollectionFromXml",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlReader, context, itemName, itemNamespace, collectionContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::CreateObject(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "CreateObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeOnDeserializing(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "InvokeOnDeserializing", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeOnDeserialized(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "InvokeOnDeserialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classContract);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::HasFactoryMethod(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "HasFactoryMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, classContract);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::InvokeFactoryMethod(::System::Runtime::Serialization::ClassDataContract* classContract, ::StringW objectId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "InvokeFactoryMethod", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, classContract, objectId);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadISerializable(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadISerializable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadClass(::System::Runtime::Serialization::ClassDataContract* classContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadClass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadMembers(::System::Runtime::Serialization::ClassDataContract* classContract,
                                                                                    ::System::Runtime::Serialization::ExtensionDataObject* extensionData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ExtensionDataObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, classContract, extensionData);
}
inline int32_t System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadMembers(int32_t index, ::System::Runtime::Serialization::ClassDataContract* classContract,
                                                                                       ::ArrayW<bool, ::Array<bool>*> requiredMembers, ::ByRef<int32_t> memberIndex, ::ByRef<int32_t> requiredIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index, classContract, requiredMembers, memberIndex, requiredIndex);
}
inline ::ArrayW<bool, ::Array<bool>*> System::Runtime::Serialization::XmlFormatReaderInterpreter::GetRequiredMembers(::System::Runtime::Serialization::ClassDataContract* contract,
                                                                                                                     ::ByRef<int32_t> firstRequiredMember) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "GetRequiredMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(this, ___internal_method, contract, firstRequiredMember);
}
inline int32_t System::Runtime::Serialization::XmlFormatReaderInterpreter::GetRequiredMembers(::System::Runtime::Serialization::ClassDataContract* contract,
                                                                                              ::ArrayW<bool, ::Array<bool>*> requiredMembers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "GetRequiredMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, contract, requiredMembers);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadValue(::System::Type* type, ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::InternalDeserialize(::System::Type* type, ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "InternalDeserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, type, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::WrapNullableObject(::System::Type* innerType, ::System::Object* innerValue, ::System::Type* outerType,
                                                                                                        int32_t nullables) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "WrapNullableObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, innerType, innerValue, outerType, nullables);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollection(::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadCollection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collectionContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadGetOnlyCollection(::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadGetOnlyCollection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collectionContract);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::TryReadPrimitiveArray(::System::Type* type, ::System::Type* itemType, int32_t size, ::ByRef<bool> readResult) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "TryReadPrimitiveArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, itemType, size, readResult);
}
inline ::System::Object* System::Runtime::Serialization::XmlFormatReaderInterpreter::ReadCollectionItem(::System::Runtime::Serialization::CollectionDataContract* collectionContract,
                                                                                                        ::System::Type* itemType, ::StringW itemName, ::StringW itemNs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "ReadCollectionItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, collectionContract, itemType, itemName, itemNs);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::StoreCollectionValue(::System::Object* collection, ::System::Type* valueType, ::System::Object* value,
                                                                                             ::System::Runtime::Serialization::CollectionDataContract* collectionContract) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "StoreCollectionValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection, valueType, value, collectionContract);
}
inline void System::Runtime::Serialization::XmlFormatReaderInterpreter::HandleUnexpectedItemInCollection(::ByRef<int32_t> iterator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "HandleUnexpectedItemInCollection",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iterator);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::IsStartElement(::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "IsStartElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, ns);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::IsStartElement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "IsStartElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlFormatReaderInterpreter::IsEndElement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>::get(), "IsEndElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatReaderInterpreter*
System::Runtime::Serialization::XmlFormatReaderInterpreter::New_ctor(::System::Runtime::Serialization::ClassDataContract* classContract) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(classContract));
}
inline ::System::Runtime::Serialization::XmlFormatReaderInterpreter*
System::Runtime::Serialization::XmlFormatReaderInterpreter::New_ctor(::System::Runtime::Serialization::CollectionDataContract* collectionContract, bool isGetOnly) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlFormatReaderInterpreter*>(collectionContract, isGetOnly));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlFormatReaderInterpreter::XmlFormatReaderInterpreter() {}
