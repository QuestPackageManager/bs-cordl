#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\CollectionDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionKind_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataContract_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataContractAttribute_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionKind_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractPairKey_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__KeyValue_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationMode_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatCollectionReaderDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatCollectionWriterDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlFormatGetOnlyCollectionReaderDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_KnownInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_KnownInterfaces)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x613cd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_KnownInterfaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::CollectionKind, ::System::Type*, ::System::Runtime::Serialization::CollectionDataContractAttribute*)>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::Init)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x613d76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContractAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x613dfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(
    ::System::Type*, ::System::Runtime::Serialization::DataContract*)>(&::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x613e380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(
    ::System::Type*, ::System::Runtime::Serialization::CollectionKind, ::System::Type*, ::System::Reflection::MethodInfo*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x613e58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(
    ::System::Type*, ::System::Runtime::Serialization::CollectionKind, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::ConstructorInfo*)>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x613e830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(),
                                                                 ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(),
                                                                 ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(
    ::System::Type*, ::System::Runtime::Serialization::CollectionKind, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::ConstructorInfo*,
    bool)>(&::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x613e924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(),
                                                    ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(::System::Type*, ::StringW)>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x613e948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_Kind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::CollectionKind (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_Kind)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613e9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_Kind", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_ItemType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_ItemType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613e9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_ItemType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_ItemContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_ItemContract)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x613e9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_ItemContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_SharedTypeContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_SharedTypeContract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ec60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_SharedTypeContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.set_SharedTypeContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::DataContract*)>(&::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_SharedTypeContract)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ec68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { "set_SharedTypeContract", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_ItemName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_ItemName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ec70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_ItemName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_IsConstructorCheckRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_IsConstructorCheckRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ec78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_IsConstructorCheckRequired", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.set_IsConstructorCheckRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(bool)>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_IsConstructorCheckRequired)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ec80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { "set_IsConstructorCheckRequired", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_CollectionItemName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_CollectionItemName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ec88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_CollectionItemName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_KeyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_KeyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ec90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_KeyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_ValueName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_ValueName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ec98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_ValueName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_IsDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_IsDictionary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x613ebc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_IsDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_SerializationExceptionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_SerializationExceptionMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613eca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_SerializationExceptionMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_DeserializationExceptionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_DeserializationExceptionMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613eca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_DeserializationExceptionMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_ChildElementNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_ChildElementNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ecb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_ChildElementNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.set_ChildElementNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_ChildElementNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ecb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { "set_ChildElementNamespace", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_IsItemTypeNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_IsItemTypeNullable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ecc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_IsItemTypeNullable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_GetEnumeratorMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_GetEnumeratorMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ecc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_GetEnumeratorMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_AddMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_AddMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ecd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_AddMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_Constructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_Constructor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613ecd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_Constructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x613ece0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                            { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_InvalidCollectionInSharedContractMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_InvalidCollectionInSharedContractMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613eea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { "get_InvalidCollectionInSharedContractMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_XmlFormatWriterDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_XmlFormatWriterDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613eea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_XmlFormatWriterDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.set_XmlFormatWriterDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*)>(
        &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_XmlFormatWriterDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613eeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { "set_XmlFormatWriterDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_XmlFormatReaderDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_XmlFormatReaderDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613eeb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_XmlFormatReaderDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.set_XmlFormatReaderDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*)>(
        &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_XmlFormatReaderDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613eec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { "set_XmlFormatReaderDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.get_XmlFormatGetOnlyCollectionReaderDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_XmlFormatGetOnlyCollectionReaderDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613eec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                             { "get_XmlFormatGetOnlyCollectionReaderDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper.set_XmlFormatGetOnlyCollectionReaderDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::*)(::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*)>(
        &::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_XmlFormatGetOnlyCollectionReaderDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613eed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                         { "set_XmlFormatGetOnlyCollectionReaderDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_itemType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemType;
}
constexpr ::System::Type* const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_itemType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemType;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_itemType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemType = value;
}
constexpr bool& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_isItemTypeNullable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isItemTypeNullable;
}
constexpr bool const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_isItemTypeNullable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isItemTypeNullable;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_isItemTypeNullable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isItemTypeNullable = value;
}
constexpr ::System::Runtime::Serialization::CollectionKind& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_kind() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kind;
}
constexpr ::System::Runtime::Serialization::CollectionKind const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_kind() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kind;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_kind(::System::Runtime::Serialization::CollectionKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kind = value;
}
constexpr ::System::Reflection::MethodInfo*& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_getEnumeratorMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getEnumeratorMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_getEnumeratorMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getEnumeratorMethod;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_getEnumeratorMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getEnumeratorMethod = value;
}
constexpr ::System::Reflection::MethodInfo*& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_addMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addMethod;
}
constexpr ::System::Reflection::MethodInfo* const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_addMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addMethod;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_addMethod(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addMethod = value;
}
constexpr ::System::Reflection::ConstructorInfo*& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_constructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constructor;
}
constexpr ::System::Reflection::ConstructorInfo* const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_constructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constructor;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_constructor(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___constructor = value;
}
constexpr ::StringW& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_serializationExceptionMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationExceptionMessage;
}
constexpr ::StringW const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_serializationExceptionMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializationExceptionMessage;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_serializationExceptionMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializationExceptionMessage = value;
}
constexpr ::StringW& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_deserializationExceptionMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deserializationExceptionMessage;
}
constexpr ::StringW const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_deserializationExceptionMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deserializationExceptionMessage;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_deserializationExceptionMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deserializationExceptionMessage = value;
}
constexpr ::System::Runtime::Serialization::DataContract*& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_itemContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemContract;
}
constexpr ::System::Runtime::Serialization::DataContract* const&
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_itemContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemContract;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_itemContract(::System::Runtime::Serialization::DataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemContract = value;
}
constexpr ::System::Runtime::Serialization::DataContract*& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_sharedTypeContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedTypeContract;
}
constexpr ::System::Runtime::Serialization::DataContract* const&
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_sharedTypeContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedTypeContract;
}
constexpr void
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_sharedTypeContract(::System::Runtime::Serialization::DataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedTypeContract = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*&
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_knownDataContracts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownDataContracts;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* const&
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_knownDataContracts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownDataContracts;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_knownDataContracts(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___knownDataContracts = value;
}
constexpr bool& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_isKnownTypeAttributeChecked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isKnownTypeAttributeChecked;
}
constexpr bool const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_isKnownTypeAttributeChecked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isKnownTypeAttributeChecked;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_isKnownTypeAttributeChecked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isKnownTypeAttributeChecked = value;
}
constexpr ::StringW& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_itemName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemName;
}
constexpr ::StringW const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_itemName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemName;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_itemName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemName = value;
}
constexpr bool& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_itemNameSetExplicit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemNameSetExplicit;
}
constexpr bool const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_itemNameSetExplicit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemNameSetExplicit;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_itemNameSetExplicit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemNameSetExplicit = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_collectionItemName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionItemName;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_collectionItemName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionItemName;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_collectionItemName(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collectionItemName = value;
}
constexpr ::StringW& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_keyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyName;
}
constexpr ::StringW const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_keyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyName;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_keyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyName = value;
}
constexpr ::StringW& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_valueName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueName;
}
constexpr ::StringW const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_valueName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueName;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_valueName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueName = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_childElementNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespace;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_childElementNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespace;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_childElementNamespace(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___childElementNamespace = value;
}
constexpr ::StringW& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_invalidCollectionInSharedContractMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalidCollectionInSharedContractMessage;
}
constexpr ::StringW const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_invalidCollectionInSharedContractMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalidCollectionInSharedContractMessage;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_invalidCollectionInSharedContractMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invalidCollectionInSharedContractMessage = value;
}
constexpr ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*&
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_xmlFormatReaderDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlFormatReaderDelegate;
}
constexpr ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* const&
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_xmlFormatReaderDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlFormatReaderDelegate;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_xmlFormatReaderDelegate(
    ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlFormatReaderDelegate = value;
}
constexpr ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*&
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_xmlFormatGetOnlyCollectionReaderDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlFormatGetOnlyCollectionReaderDelegate;
}
constexpr ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* const&
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_xmlFormatGetOnlyCollectionReaderDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlFormatGetOnlyCollectionReaderDelegate;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_xmlFormatGetOnlyCollectionReaderDelegate(
    ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlFormatGetOnlyCollectionReaderDelegate = value;
}
constexpr ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*&
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_xmlFormatWriterDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlFormatWriterDelegate;
}
constexpr ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* const&
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_xmlFormatWriterDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlFormatWriterDelegate;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_xmlFormatWriterDelegate(
    ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlFormatWriterDelegate = value;
}
constexpr bool& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_isConstructorCheckRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConstructorCheckRequired;
}
constexpr bool const& System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_get_isConstructorCheckRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConstructorCheckRequired;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::__cordl_internal_set_isConstructorCheckRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isConstructorCheckRequired = value;
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::setStaticF__knownInterfaces(::ArrayW<::System::Type*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "_knownInterfaces", ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(
      std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::getStaticF__knownInterfaces() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "_knownInterfaces", ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>();
}
inline ::ArrayW<::System::Type*> System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_KnownInterfaces() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_KnownInterfaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method);
}
inline void
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::Init(::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType,
                                                                                                  ::System::Runtime::Serialization::CollectionDataContractAttribute* collectionContractAttribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::CollectionDataContractAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kind, itemType, collectionContractAttribute);
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor(::System::Type* type, ::System::Runtime::Serialization::DataContract* itemContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, itemContract);
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind,
                                                                                                               ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                                                                                                               ::StringW serializationExceptionMessage, ::StringW deserializationExceptionMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, kind, itemType, getEnumeratorMethod, serializationExceptionMessage, deserializationExceptionMessage);
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind,
                                                                                                               ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                                                                                                               ::System::Reflection::MethodInfo* addMethod,
                                                                                                               ::System::Reflection::ConstructorInfo* constructor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                              ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, kind, itemType, getEnumeratorMethod, addMethod, constructor);
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind,
                                                                                                               ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                                                                                                               ::System::Reflection::MethodInfo* addMethod,
                                                                                                               ::System::Reflection::ConstructorInfo* constructor, bool isConstructorCheckRequired) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(),
                                                               ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, kind, itemType, getEnumeratorMethod, addMethod, constructor, isConstructorCheckRequired);
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::_ctor(::System::Type* type, ::StringW invalidCollectionInSharedContractMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, invalidCollectionInSharedContractMessage);
}
inline ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_Kind() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_Kind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::CollectionKind>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_ItemType() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_ItemType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_ItemContract() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_ItemContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_SharedTypeContract() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_SharedTypeContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_SharedTypeContract(::System::Runtime::Serialization::DataContract* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { "set_SharedTypeContract", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_ItemName() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_ItemName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_IsConstructorCheckRequired() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_IsConstructorCheckRequired", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_IsConstructorCheckRequired(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { "set_IsConstructorCheckRequired", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_CollectionItemName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_CollectionItemName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_KeyName() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_KeyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_ValueName() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_ValueName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_IsDictionary() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_IsDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_SerializationExceptionMessage() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_SerializationExceptionMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_DeserializationExceptionMessage() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_DeserializationExceptionMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_ChildElementNamespace() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_ChildElementNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_ChildElementNamespace(::System::Xml::XmlDictionaryString* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { "set_ChildElementNamespace", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_IsItemTypeNullable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_IsItemTypeNullable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_GetEnumeratorMethod() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_GetEnumeratorMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_AddMethod() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_AddMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_Constructor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_Constructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_KnownDataContracts() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_InvalidCollectionInSharedContractMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { "get_InvalidCollectionInSharedContractMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_XmlFormatWriterDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_XmlFormatWriterDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*>(this, ___internal_method);
}
inline void
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_XmlFormatWriterDelegate(::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { "set_XmlFormatWriterDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_XmlFormatReaderDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(), { "get_XmlFormatReaderDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*>(this, ___internal_method);
}
inline void
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_XmlFormatReaderDelegate(::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { "set_XmlFormatReaderDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::get_XmlFormatGetOnlyCollectionReaderDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                                           { "get_XmlFormatGetOnlyCollectionReaderDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::set_XmlFormatGetOnlyCollectionReaderDelegate(
    ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(),
                                       { "set_XmlFormatGetOnlyCollectionReaderDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(type));
}
inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::New_ctor(::System::Type* type, ::System::Runtime::Serialization::DataContract* itemContract) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(type, itemContract));
}
inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind,
                                                                                                      ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                                                                                                      ::StringW serializationExceptionMessage, ::StringW deserializationExceptionMessage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(
                                              type, kind, itemType, getEnumeratorMethod, serializationExceptionMessage, deserializationExceptionMessage));
}
inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind,
                                                                                                      ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                                                                                                      ::System::Reflection::MethodInfo* addMethod, ::System::Reflection::ConstructorInfo* constructor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(type, kind, itemType, getEnumeratorMethod,
                                                                                                                                                          addMethod, constructor));
}
inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind,
                                                                                                      ::System::Type* itemType, ::System::Reflection::MethodInfo* getEnumeratorMethod,
                                                                                                      ::System::Reflection::MethodInfo* addMethod, ::System::Reflection::ConstructorInfo* constructor,
                                                                                                      bool isConstructorCheckRequired) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(
                                              type, kind, itemType, getEnumeratorMethod, addMethod, constructor, isConstructorCheckRequired));
}
inline ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*
System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::New_ctor(::System::Type* type, ::StringW invalidCollectionInSharedContractMessage) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*>(type, invalidCollectionInSharedContractMessage));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper::CollectionDataContract_CollectionDataContractCriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::*)(::System::Collections::IDictionaryEnumerator*)>(
    &::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613eed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionaryEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x613eee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x613eee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*> (
    ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::*)()>(&::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x613ef88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x613f0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x613f11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IDictionaryEnumerator*& System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::__cordl_internal_get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
constexpr ::System::Collections::IDictionaryEnumerator* const& System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::__cordl_internal_get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
constexpr void System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::__cordl_internal_set_enumerator(::System::Collections::IDictionaryEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enumerator = value;
}
inline void System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::_ctor(::System::Collections::IDictionaryEnumerator* enumerator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionaryEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumerator);
}
inline void System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*> System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*>>(this, ___internal_method);
}
inline ::System::Object* System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*
System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::New_ctor(::System::Collections::IDictionaryEnumerator* enumerator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator*>(enumerator));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<::System::Object*,::System::Object*>>"
constexpr System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<::System::Object*,::System::Object*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*>>* System::Runtime::Serialization::
    CollectionDataContract_DictionaryEnumerator::i___System__Collections__Generic__IEnumerator_1___System__Runtime__Serialization__KeyValue_2___System__Object____System__Object___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<::System::Object*, ::System::Object*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CollectionDataContract_DictionaryEnumerator::CollectionDataContract_DictionaryEnumerator() {}
template <typename K, typename V>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>*&
System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::__cordl_internal_get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
template <typename K, typename V>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>* const&
System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::__cordl_internal_get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
template <typename K, typename V>
constexpr void System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::__cordl_internal_set_enumerator(
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K, V>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enumerator = value;
}
template <typename K, typename V> inline void System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename K, typename V> inline bool System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename K, typename V> inline ::System::Runtime::Serialization::KeyValue_2<K, V> System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::KeyValue_2<K, V>>(this, ___internal_method);
}
template <typename K, typename V> inline ::System::Object* System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename K, typename V> inline void System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<K,V>>"
template <typename K, typename V>
constexpr System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Runtime::Serialization::KeyValue_2<K, V>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<K, V>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<K,V>>"
template <typename K, typename V>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<K, V>>*
System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K,
                                                                                     V>::i___System__Collections__Generic__IEnumerator_1___System__Runtime__Serialization__KeyValue_2_K_V__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Runtime::Serialization::KeyValue_2<K, V>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename K, typename V> constexpr System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename K, typename V> constexpr ::System::IDisposable* System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename K, typename V> constexpr System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename K, typename V>
constexpr ::System::Collections::IEnumerator* System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::System::Runtime::Serialization::CollectionDataContract_GenericDictionaryEnumerator_2<K, V>::CollectionDataContract_GenericDictionaryEnumerator_2() {}
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)(::System::Type*)>(
    &::System::Runtime::Serialization::CollectionDataContract::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6139a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)(::System::Type*, ::System::Runtime::Serialization::DataContract*)>(
    &::System::Runtime::Serialization::CollectionDataContract::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6139ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)(::System::Type*, ::System::Runtime::Serialization::CollectionKind,
                                                                                                                          ::System::Type*, ::System::Reflection::MethodInfo*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::CollectionDataContract::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6139c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)(
    ::System::Type*, ::System::Runtime::Serialization::CollectionKind, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::ConstructorInfo*)>(
    &::System::Runtime::Serialization::CollectionDataContract::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6139e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(),
                                                                 ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(),
                                                                 ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)(
    ::System::Type*, ::System::Runtime::Serialization::CollectionKind, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*, ::System::Reflection::ConstructorInfo*,
    bool)>(&::System::Runtime::Serialization::CollectionDataContract::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6139ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(),
                                                    ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)(::System::Type*, ::StringW)>(
    &::System::Runtime::Serialization::CollectionDataContract::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6139fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.InitCollectionDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)(::System::Runtime::Serialization::DataContract*)>(
    &::System::Runtime::Serialization::CollectionDataContract::InitCollectionDataContract)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6139ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { "InitCollectionDataContract", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_KnownInterfaces
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)()>(&::System::Runtime::Serialization::CollectionDataContract::get_KnownInterfaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613a038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_KnownInterfaces", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_Kind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::CollectionKind (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_Kind)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_Kind", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_ItemType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_ItemType)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_ItemType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_ItemContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_ItemContract)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x613a070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_ItemContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_SharedTypeContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_SharedTypeContract)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6136ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_SharedTypeContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_ItemName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_ItemName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_ItemName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_CollectionItemName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_CollectionItemName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x613a0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_CollectionItemName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_KeyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_KeyName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_KeyName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_IsDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_IsDictionary)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x613a0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_IsDictionary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_ChildElementNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_ChildElementNamespace)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x613a0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_ChildElementNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_IsItemTypeNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_IsItemTypeNullable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_IsItemTypeNullable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_IsConstructorCheckRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_IsConstructorCheckRequired)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_IsConstructorCheckRequired", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.set_IsConstructorCheckRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)(bool)>(
    &::System::Runtime::Serialization::CollectionDataContract::set_IsConstructorCheckRequired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x613a28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "set_IsConstructorCheckRequired", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_GetEnumeratorMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_GetEnumeratorMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_GetEnumeratorMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_AddMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_AddMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_AddMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_Constructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_Constructor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a2d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_Constructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::CollectionDataContract::*)()>(&::System::Runtime::Serialization::CollectionDataContract::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x613a2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_InvalidCollectionInSharedContractMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_InvalidCollectionInSharedContractMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_InvalidCollectionInSharedContractMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_SerializationExceptionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_SerializationExceptionMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_SerializationExceptionMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_DeserializationExceptionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_DeserializationExceptionMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x613a33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_DeserializationExceptionMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_IsReadOnlyContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_IsReadOnlyContract)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x613a354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_IsReadOnlyContract", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_XmlFormatWriterDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_XmlFormatWriterDelegate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x613a374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_XmlFormatWriterDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_XmlFormatReaderDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_XmlFormatReaderDelegate)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x613a4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_XmlFormatReaderDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.get_XmlFormatGetOnlyCollectionReaderDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::get_XmlFormatGetOnlyCollectionReaderDelegate)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x613a65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_XmlFormatGetOnlyCollectionReaderDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.GetSharedTypeContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::CollectionDataContract::*)(::System::Type*)>(
    &::System::Runtime::Serialization::CollectionDataContract::GetSharedTypeContract)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6139cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "GetSharedTypeContract", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.IsCollectionInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Runtime::Serialization::CollectionDataContract::IsCollectionInterface)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x61361ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "IsCollectionInterface", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.IsCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Runtime::Serialization::CollectionDataContract::IsCollection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x613a904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "IsCollection", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.IsCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::System::Type*>)>(&::System::Runtime::Serialization::CollectionDataContract::IsCollection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x613a924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { "IsCollection", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.IsCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, bool, bool)>(&::System::Runtime::Serialization::CollectionDataContract::IsCollection)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6138ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { "IsCollection", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.IsCollectionHelper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::System::Type*>, bool, bool)>(
    &::System::Runtime::Serialization::CollectionDataContract::IsCollectionHelper)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x613a930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                            { "IsCollectionHelper", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.TryCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::System::Runtime::Serialization::DataContract*>)>(
    &::System::Runtime::Serialization::CollectionDataContract::TryCreate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x613bab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { "TryCreate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.TryCreateGetOnlyCollectionDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::System::Runtime::Serialization::DataContract*>)>(
    &::System::Runtime::Serialization::CollectionDataContract::TryCreateGetOnlyCollectionDataContract)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x613bad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                            { "TryCreateGetOnlyCollectionDataContract", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.GetTargetMethodWithName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::StringW, ::System::Type*, ::System::Type*)>(
    &::System::Runtime::Serialization::CollectionDataContract::GetTargetMethodWithName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x613bb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                { "GetTargetMethodWithName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.IsArraySegment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Runtime::Serialization::CollectionDataContract::IsArraySegment)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x613bc5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "IsArraySegment", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.IsCollectionOrTryCreate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, bool, ::by_ref<::System::Runtime::Serialization::DataContract*>, ::by_ref<::System::Type*>, bool, bool)>(
    &::System::Runtime::Serialization::CollectionDataContract::IsCollectionOrTryCreate)> {
  constexpr static std::size_t size = 0x10e4;
  constexpr static std::size_t addrs = 0x613a9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { "IsCollectionOrTryCreate",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.IsCollectionDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Runtime::Serialization::CollectionDataContract::IsCollectionDataContract)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x613bf1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "IsCollectionDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.HandleIfInvalidCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, bool, bool, bool, ::StringW, ::StringW, ::by_ref<::System::Runtime::Serialization::DataContract*>)>(
    &::System::Runtime::Serialization::CollectionDataContract::HandleIfInvalidCollection)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x613bd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { "HandleIfInvalidCollection",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.GetReadOnlyCollectionExceptionMessages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, bool, ::StringW, ::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::System::Runtime::Serialization::CollectionDataContract::GetReadOnlyCollectionExceptionMessages)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x613bf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { "GetReadOnlyCollectionExceptionMessages",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.GetInvalidCollectionMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::System::Runtime::Serialization::CollectionDataContract::GetInvalidCollectionMessage)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x613c490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { "GetInvalidCollectionMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.FindCollectionMethodsOnInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*, ::by_ref<::System::Reflection::MethodInfo*>, ::by_ref<::System::Reflection::MethodInfo*>)>(
    &::System::Runtime::Serialization::CollectionDataContract::FindCollectionMethodsOnInterface)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x613c59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                             { "FindCollectionMethodsOnInterface",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Reflection::MethodInfo*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Reflection::MethodInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.GetCollectionMethods
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*, ::ArrayW<::System::Type*>, bool, ::by_ref<::System::Reflection::MethodInfo*>,
                                                                ::by_ref<::System::Reflection::MethodInfo*>)>(&::System::Runtime::Serialization::CollectionDataContract::GetCollectionMethods)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x613c154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                { "GetCollectionMethods",
                                                  {},
                                                  { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::by_ref<::System::Reflection::MethodInfo*>>(), ::i2c::type_of<::by_ref<::System::Reflection::MethodInfo*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.IsKnownInterface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Runtime::Serialization::CollectionDataContract::IsKnownInterface)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x613c6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "IsKnownInterface", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.GetValidContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (
    ::System::Runtime::Serialization::CollectionDataContract::*)(::System::Runtime::Serialization::SerializationMode)>(&::System::Runtime::Serialization::CollectionDataContract::GetValidContract)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x613c7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.ThrowIfInvalid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::ThrowIfInvalid)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x613c814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "ThrowIfInvalid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.GetValidContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::GetValidContract)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x613c87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.CheckConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::CheckConstructor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x613c8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "CheckConstructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.IsValidContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::CollectionDataContract::*)(::System::Runtime::Serialization::SerializationMode)>(
    &::System::Runtime::Serialization::CollectionDataContract::IsValidContract)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x613c9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::CollectionDataContract::*)(
    ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::CollectionDataContract::Equals)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x613ca08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::CollectionDataContract::*)()>(
    &::System::Runtime::Serialization::CollectionDataContract::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x613cba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::CollectionDataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                          ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::CollectionDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x613cbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::CollectionDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::CollectionDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::CollectionDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x613cc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::CollectionDataContract::__cordl_internal_get_collectionItemName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionItemName;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::CollectionDataContract::__cordl_internal_get_collectionItemName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___collectionItemName;
}
constexpr void System::Runtime::Serialization::CollectionDataContract::__cordl_internal_set_collectionItemName(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___collectionItemName = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::CollectionDataContract::__cordl_internal_get_childElementNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespace;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::CollectionDataContract::__cordl_internal_get_childElementNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNamespace;
}
constexpr void System::Runtime::Serialization::CollectionDataContract::__cordl_internal_set_childElementNamespace(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___childElementNamespace = value;
}
constexpr ::System::Runtime::Serialization::DataContract*& System::Runtime::Serialization::CollectionDataContract::__cordl_internal_get_itemContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemContract;
}
constexpr ::System::Runtime::Serialization::DataContract* const& System::Runtime::Serialization::CollectionDataContract::__cordl_internal_get_itemContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemContract;
}
constexpr void System::Runtime::Serialization::CollectionDataContract::__cordl_internal_set_itemContract(::System::Runtime::Serialization::DataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemContract = value;
}
constexpr ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper*& System::Runtime::Serialization::CollectionDataContract::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* const&
System::Runtime::Serialization::CollectionDataContract::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void
System::Runtime::Serialization::CollectionDataContract::__cordl_internal_set_helper(::System::Runtime::Serialization::CollectionDataContract_CollectionDataContractCriticalHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Runtime::Serialization::CollectionDataContract::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void System::Runtime::Serialization::CollectionDataContract::_ctor(::System::Type* type, ::System::Runtime::Serialization::DataContract* itemContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, itemContract);
}
inline void System::Runtime::Serialization::CollectionDataContract::_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType,
                                                                          ::System::Reflection::MethodInfo* getEnumeratorMethod, ::StringW serializationExceptionMessage,
                                                                          ::StringW deserializationExceptionMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, kind, itemType, getEnumeratorMethod, serializationExceptionMessage, deserializationExceptionMessage);
}
inline void System::Runtime::Serialization::CollectionDataContract::_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType,
                                                                          ::System::Reflection::MethodInfo* getEnumeratorMethod, ::System::Reflection::MethodInfo* addMethod,
                                                                          ::System::Reflection::ConstructorInfo* constructor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                              ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::ConstructorInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, kind, itemType, getEnumeratorMethod, addMethod, constructor);
}
inline void System::Runtime::Serialization::CollectionDataContract::_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType,
                                                                          ::System::Reflection::MethodInfo* getEnumeratorMethod, ::System::Reflection::MethodInfo* addMethod,
                                                                          ::System::Reflection::ConstructorInfo* constructor, bool isConstructorCheckRequired) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionKind>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Reflection::MethodInfo*>(),
                                                               ::i2c::type_of<::System::Reflection::ConstructorInfo*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, kind, itemType, getEnumeratorMethod, addMethod, constructor, isConstructorCheckRequired);
}
inline void System::Runtime::Serialization::CollectionDataContract::_ctor(::System::Type* type, ::StringW invalidCollectionInSharedContractMessage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, invalidCollectionInSharedContractMessage);
}
inline void System::Runtime::Serialization::CollectionDataContract::InitCollectionDataContract(::System::Runtime::Serialization::DataContract* sharedTypeContract) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                         { "InitCollectionDataContract", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sharedTypeContract);
}
inline ::ArrayW<::System::Type*> System::Runtime::Serialization::CollectionDataContract::get_KnownInterfaces() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_KnownInterfaces", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method);
}
inline ::System::Runtime::Serialization::CollectionKind System::Runtime::Serialization::CollectionDataContract::get_Kind() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_Kind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::CollectionKind>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::CollectionDataContract::get_ItemType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_ItemType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::CollectionDataContract::get_ItemContract() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_ItemContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::CollectionDataContract::get_SharedTypeContract() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_SharedTypeContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract::get_ItemName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_ItemName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::CollectionDataContract::get_CollectionItemName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_CollectionItemName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract::get_KeyName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_KeyName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::CollectionDataContract::get_IsDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_IsDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::CollectionDataContract::get_ChildElementNamespace() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_ChildElementNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::CollectionDataContract::get_IsItemTypeNullable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_IsItemTypeNullable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::CollectionDataContract::get_IsConstructorCheckRequired() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_IsConstructorCheckRequired", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataContract::set_IsConstructorCheckRequired(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "set_IsConstructorCheckRequired", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::CollectionDataContract::get_GetEnumeratorMethod() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_GetEnumeratorMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::CollectionDataContract::get_AddMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_AddMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Runtime::Serialization::CollectionDataContract::get_Constructor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_Constructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::CollectionDataContract::get_KnownDataContracts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract::get_InvalidCollectionInSharedContractMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_InvalidCollectionInSharedContractMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract::get_SerializationExceptionMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_SerializationExceptionMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract::get_DeserializationExceptionMessage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_DeserializationExceptionMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::CollectionDataContract::get_IsReadOnlyContract() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_IsReadOnlyContract", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate* System::Runtime::Serialization::CollectionDataContract::get_XmlFormatWriterDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_XmlFormatWriterDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatCollectionWriterDelegate*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate* System::Runtime::Serialization::CollectionDataContract::get_XmlFormatReaderDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_XmlFormatReaderDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatCollectionReaderDelegate*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate* System::Runtime::Serialization::CollectionDataContract::get_XmlFormatGetOnlyCollectionReaderDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "get_XmlFormatGetOnlyCollectionReaderDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlFormatGetOnlyCollectionReaderDelegate*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::CollectionDataContract::GetSharedTypeContract(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "GetSharedTypeContract", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, type);
}
inline bool System::Runtime::Serialization::CollectionDataContract::IsCollectionInterface(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "IsCollectionInterface", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::CollectionDataContract::IsCollection(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "IsCollection", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::CollectionDataContract::IsCollection(::System::Type* type, ::by_ref<::System::Type*> itemType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                                                         { "IsCollection", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, itemType);
}
inline bool System::Runtime::Serialization::CollectionDataContract::IsCollection(::System::Type* type, bool constructorRequired, bool skipIfReadOnlyContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { "IsCollection", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, constructorRequired, skipIfReadOnlyContract);
}
inline bool System::Runtime::Serialization::CollectionDataContract::IsCollectionHelper(::System::Type* type, ::by_ref<::System::Type*> itemType, bool constructorRequired,
                                                                                       bool skipIfReadOnlyContract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                          { "IsCollectionHelper", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, itemType, constructorRequired, skipIfReadOnlyContract);
}
inline bool System::Runtime::Serialization::CollectionDataContract::TryCreate(::System::Type* type, ::by_ref<::System::Runtime::Serialization::DataContract*> dataContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { "TryCreate", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, dataContract);
}
inline bool System::Runtime::Serialization::CollectionDataContract::TryCreateGetOnlyCollectionDataContract(::System::Type* type,
                                                                                                           ::by_ref<::System::Runtime::Serialization::DataContract*> dataContract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                          { "TryCreateGetOnlyCollectionDataContract", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, dataContract);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::CollectionDataContract::GetTargetMethodWithName(::StringW name, ::System::Type* type, ::System::Type* interfaceType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { "GetTargetMethodWithName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, name, type, interfaceType);
}
inline bool System::Runtime::Serialization::CollectionDataContract::IsArraySegment(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "IsArraySegment", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline bool System::Runtime::Serialization::CollectionDataContract::IsCollectionOrTryCreate(::System::Type* type, bool tryCreate,
                                                                                            ::by_ref<::System::Runtime::Serialization::DataContract*> dataContract, ::by_ref<::System::Type*> itemType,
                                                                                            bool constructorRequired, bool skipIfReadOnlyContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { "IsCollectionOrTryCreate",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>(),
                                                               ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, tryCreate, dataContract, itemType, constructorRequired, skipIfReadOnlyContract);
}
inline bool System::Runtime::Serialization::CollectionDataContract::IsCollectionDataContract(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "IsCollectionDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::CollectionDataContract::HandleIfInvalidCollection(::System::Type* type, bool tryCreate, bool hasCollectionDataContract, bool createContractWithException,
                                                                                              ::StringW message, ::StringW param,
                                                                                              ::by_ref<::System::Runtime::Serialization::DataContract*> dataContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { "HandleIfInvalidCollection",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, tryCreate, hasCollectionDataContract, createContractWithException, message, param, dataContract);
}
inline void System::Runtime::Serialization::CollectionDataContract::GetReadOnlyCollectionExceptionMessages(::System::Type* type, bool hasCollectionDataContract, ::StringW message, ::StringW param,
                                                                                                           ::by_ref<::StringW> serializationExceptionMessage,
                                                                                                           ::by_ref<::StringW> deserializationExceptionMessage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { "GetReadOnlyCollectionExceptionMessages",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, hasCollectionDataContract, message, param, serializationExceptionMessage, deserializationExceptionMessage);
}
inline ::StringW System::Runtime::Serialization::CollectionDataContract::GetInvalidCollectionMessage(::StringW message, ::StringW nestedMessage, ::StringW param) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { "GetInvalidCollectionMessage", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, message, nestedMessage, param);
}
inline void System::Runtime::Serialization::CollectionDataContract::FindCollectionMethodsOnInterface(::System::Type* type, ::System::Type* interfaceType,
                                                                                                     ::by_ref<::System::Reflection::MethodInfo*> addMethod,
                                                                                                     ::by_ref<::System::Reflection::MethodInfo*> getEnumeratorMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                                           { "FindCollectionMethodsOnInterface",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Reflection::MethodInfo*>>(),
                                                               ::i2c::type_of<::by_ref<::System::Reflection::MethodInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, interfaceType, addMethod, getEnumeratorMethod);
}
inline void System::Runtime::Serialization::CollectionDataContract::GetCollectionMethods(::System::Type* type, ::System::Type* interfaceType, ::ArrayW<::System::Type*> addMethodTypeArray,
                                                                                         bool addMethodOnInterface, ::by_ref<::System::Reflection::MethodInfo*> getEnumeratorMethod,
                                                                                         ::by_ref<::System::Reflection::MethodInfo*> addMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(),
                                              { "GetCollectionMethods",
                                                {},
                                                { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::by_ref<::System::Reflection::MethodInfo*>>(), ::i2c::type_of<::by_ref<::System::Reflection::MethodInfo*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, interfaceType, addMethodTypeArray, addMethodOnInterface, getEnumeratorMethod, addMethod);
}
inline bool System::Runtime::Serialization::CollectionDataContract::IsKnownInterface(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "IsKnownInterface", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::CollectionDataContract::GetValidContract(::System::Runtime::Serialization::SerializationMode mode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, mode);
}
inline void System::Runtime::Serialization::CollectionDataContract::ThrowIfInvalid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "ThrowIfInvalid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::CollectionDataContract::GetValidContract() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataContract::CheckConstructor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), { "CheckConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::CollectionDataContract::IsValidContract(::System::Runtime::Serialization::SerializationMode mode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mode);
}
inline bool System::Runtime::Serialization::CollectionDataContract::Equals(
    ::System::Object* other, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, checkedContracts);
}
inline int32_t System::Runtime::Serialization::CollectionDataContract::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Runtime::Serialization::CollectionDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                  ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::CollectionDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                              ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::CollectionDataContract*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, context);
}
inline ::System::Runtime::Serialization::CollectionDataContract* System::Runtime::Serialization::CollectionDataContract::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract*>(type));
}
inline ::System::Runtime::Serialization::CollectionDataContract* System::Runtime::Serialization::CollectionDataContract::New_ctor(::System::Type* type,
                                                                                                                                  ::System::Runtime::Serialization::DataContract* itemContract) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract*>(type, itemContract));
}
inline ::System::Runtime::Serialization::CollectionDataContract*
System::Runtime::Serialization::CollectionDataContract::New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType,
                                                                 ::System::Reflection::MethodInfo* getEnumeratorMethod, ::StringW serializationExceptionMessage,
                                                                 ::StringW deserializationExceptionMessage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract*>(type, kind, itemType, getEnumeratorMethod, serializationExceptionMessage,
                                                                                                                     deserializationExceptionMessage));
}
inline ::System::Runtime::Serialization::CollectionDataContract*
System::Runtime::Serialization::CollectionDataContract::New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType,
                                                                 ::System::Reflection::MethodInfo* getEnumeratorMethod, ::System::Reflection::MethodInfo* addMethod,
                                                                 ::System::Reflection::ConstructorInfo* constructor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract*>(type, kind, itemType, getEnumeratorMethod, addMethod, constructor));
}
inline ::System::Runtime::Serialization::CollectionDataContract*
System::Runtime::Serialization::CollectionDataContract::New_ctor(::System::Type* type, ::System::Runtime::Serialization::CollectionKind kind, ::System::Type* itemType,
                                                                 ::System::Reflection::MethodInfo* getEnumeratorMethod, ::System::Reflection::MethodInfo* addMethod,
                                                                 ::System::Reflection::ConstructorInfo* constructor, bool isConstructorCheckRequired) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract*>(type, kind, itemType, getEnumeratorMethod, addMethod, constructor, isConstructorCheckRequired));
}
inline ::System::Runtime::Serialization::CollectionDataContract* System::Runtime::Serialization::CollectionDataContract::New_ctor(::System::Type* type,
                                                                                                                                  ::StringW invalidCollectionInSharedContractMessage) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::CollectionDataContract*>(type, invalidCollectionInSharedContractMessage));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::CollectionDataContract::CollectionDataContract() {}
