#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlObjectSerializerReadContext.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerContext_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__Attributes_def.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractSerializer_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataMember_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataObject_def.hpp"
#include "System/Runtime/Serialization/zzzz__HybridObjectCache_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializableDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlSerializableReader_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.get_DeserializedObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::HybridObjectCache* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::get_DeserializedObjects)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6167318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "get_DeserializedObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.get_Document
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDocument* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::get_Document)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6167370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "get_Document", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.get_IsGetOnlyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::get_IsGetOnlyCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61673d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.set_IsGetOnlyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::set_IsGetOnlyCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61673e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.GetCollectionMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::GetCollectionMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61673e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "GetCollectionMember", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.StoreCollectionMemberInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::StoreCollectionMemberInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61673f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "StoreCollectionMemberInfo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ThrowNullValueReturnedForGetOnlyCollectionException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ThrowNullValueReturnedForGetOnlyCollectionException)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6167400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "ThrowNullValueReturnedForGetOnlyCollectionException", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ThrowArrayExceededSizeException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::Type*)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContext::ThrowArrayExceededSizeException)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6167490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "ThrowArrayExceededSizeException", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.CreateContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::XmlObjectSerializerReadContext* (*)(::System::Runtime::Serialization::DataContractSerializer*, ::System::Runtime::Serialization::DataContract*,
                                                                                      ::System::Runtime::Serialization::DataContractResolver*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContext::CreateContext)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x616755c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                { "CreateContext",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(
    ::System::Runtime::Serialization::DataContractSerializer*, ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6167634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.InternalDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, int32_t, ::System::RuntimeTypeHandle, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::InternalDeserialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6167714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.InternalDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*, ::StringW, ::StringW)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContext::InternalDeserialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6167dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.InternalDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*, ::System::Runtime::Serialization::DataContract*,
                                                                         ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContext::InternalDeserialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6167e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.TryHandleNullOrRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                                                  ::System::Type*, ::StringW, ::StringW, ::by_ref<::System::Object*>)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::TryHandleNullOrRef)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6167e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "TryHandleNullOrRef",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.InternalDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::StringW, ::StringW, ::System::Type*,
                                                                                                        ::by_ref<::System::Runtime::Serialization::DataContract*>)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContext::InternalDeserialize)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x61677a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "InternalDeserialize",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReplaceScopedKnownTypesTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReplaceScopedKnownTypesTop)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x61682f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                { "ReplaceScopedKnownTypesTop",
                                                  {},
                                                  { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(),
                                                    ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.MoveToNextElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::MoveToNextElement)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6168328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "MoveToNextElement", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.GetMemberIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*, ::ArrayW<::System::Xml::XmlDictionaryString*>, ::ArrayW<::System::Xml::XmlDictionaryString*>, int32_t,
    ::System::Runtime::Serialization::ExtensionDataObject*)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContext::GetMemberIndex)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x616834c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "GetMemberIndex",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                 ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.GetMemberIndexWithRequiredMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*, ::ArrayW<::System::Xml::XmlDictionaryString*>, ::ArrayW<::System::Xml::XmlDictionaryString*>, int32_t, int32_t,
    ::System::Runtime::Serialization::ExtensionDataObject*)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContext::GetMemberIndexWithRequiredMembers)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x61684dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "GetMemberIndexWithRequiredMembers",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                 ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ThrowRequiredMemberMissingException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::XmlReaderDelegator*, int32_t, int32_t, ::ArrayW<::System::Xml::XmlDictionaryString*>)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ThrowRequiredMemberMissingException)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x61685d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "ThrowRequiredMemberMissingException",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.HandleMemberNotFound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                                                  ::System::Runtime::Serialization::ExtensionDataObject*, int32_t)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::HandleMemberNotFound)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x616842c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "HandleMemberNotFound",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.HandleUnknownElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                                                  ::System::Runtime::Serialization::ExtensionDataObject*, int32_t)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::HandleUnknownElement)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6168ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "HandleUnknownElement",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.SkipUnknownElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::SkipUnknownElement)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6168914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "SkipUnknownElement", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadIfNullOrRef
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*, bool)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadIfNullOrRef)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6168d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                            { "ReadIfNullOrRef", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadAttributes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6168e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ResetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ResetAttributes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6168ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "ResetAttributes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.GetObjectId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::GetObjectId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x616157c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "GetObjectId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.GetArraySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::GetArraySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6168ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.AddNewObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::AddNewObject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x615b2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "AddNewObject", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.AddNewObjectWithId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::StringW, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::AddNewObjectWithId)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6168ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "AddNewObjectWithId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReplaceDeserializedObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::StringW, ::System::Object*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReplaceDeserializedObject)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6161844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                { "ReplaceDeserializedObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.GetExistingObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::StringW, ::System::Type*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::GetExistingObject)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6168064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                         { "GetExistingObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.GetExistingObjectOrExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::GetExistingObjectOrExtensionData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6169154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "GetExistingObjectOrExtensionData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.GetRealObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::IObjectReference*, ::StringW)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContext::GetRealObject)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61691f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "GetRealObject", {}, { ::i2c::type_of<::System::Runtime::Serialization::IObjectReference*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.DeserializeFromExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::IDataNode*, ::System::Type*, ::StringW, ::StringW)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContext::DeserializeFromExtensionData)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6168fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                            { "DeserializeFromExtensionData",
                              {},
                              { ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContext::Read)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61692e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ParseQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Runtime::Serialization::XmlReaderDelegator*, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ParseQualifiedName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x616932c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "ParseQualifiedName",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                 ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.CheckEndOfArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(
    ::System::Runtime::Serialization::XmlReaderDelegator*, int32_t, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::CheckEndOfArray)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6169410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "CheckEndOfArray",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadIXmlSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlDataContract*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadIXmlSerializable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6162734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "ReadIXmlSerializable",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::XmlDataContract*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadRootIXmlSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlDataContract*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadRootIXmlSerializable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x61626bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "ReadRootIXmlSerializable",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::XmlDataContract*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadIXmlSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Runtime::Serialization::XmlSerializableReader*, ::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                             ::System::Runtime::Serialization::XmlDataContract*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadIXmlSerializable)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x616959c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                { "ReadIXmlSerializable",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlSerializableReader*>(), ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::XmlDataContract*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadSerializationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationInfo* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadSerializationInfo)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6161594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                { "ReadSerializationInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ResolveDataContractFromTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ResolveDataContractFromTypeName)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61698a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadExtensionDataMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ExtensionDataMember* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, int32_t)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadExtensionDataMember)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6168c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                { "ReadExtensionDataMember", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadExtensionDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::IDataNode* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadExtensionDataValue)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x61698d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                             { "ReadExtensionDataValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.StartReadExtensionDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::StartReadExtensionDataValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x616b0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadExtensionDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::IDataNode* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadExtensionDataValue)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x616a738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                            { "ReadExtensionDataValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadPrimitiveExtensionDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::IDataNode* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadPrimitiveExtensionDataValue)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x616b8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.InitializeExtensionDataNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::IDataNode*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::InitializeExtensionDataNode)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x616ae70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                            { "InitializeExtensionDataNode", {}, { ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadUnknownPrimitiveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::IDataNode* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadUnknownPrimitiveData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x616ae14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "ReadUnknownPrimitiveData",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadUnknownClassData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ClassDataNode* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadUnknownClassData)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x616a548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                            { "ReadUnknownClassData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadUnknownCollectionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::CollectionDataNode* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadUnknownCollectionData)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x6169e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                         { "ReadUnknownCollectionData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadUnknownISerializableData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ISerializableDataNode* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadUnknownISerializableData)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x616a2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
            { "ReadUnknownISerializableData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadUnknownXmlData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::IDataNode* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadUnknownXmlData)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x616a9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                            { "ReadUnknownXmlData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadAndResolveUnknownXmlData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::IDataNode* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*,
                                                                         ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadAndResolveUnknownXmlData)> {
  constexpr static std::size_t size = 0x814;
  constexpr static std::size_t addrs = 0x616b0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                         { "ReadAndResolveUnknownXmlData",
                                           {},
                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                             ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.IsContentNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Xml::XmlNodeType)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::IsContentNode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616bbd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "IsContentNode", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.CreateReaderOverChildNodes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::XmlReaderDelegator* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*,
                                                                         ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::CreateReaderOverChildNodes)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x616bbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "CreateReaderOverChildNodes",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.CreateWrapperXmlElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (*)(::System::Xml::XmlDocument*, ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*,
                                                                                   ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*, ::StringW, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::CreateWrapperXmlElement)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x616bcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                { "CreateWrapperXmlElement",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.AddNamespaceDeclaration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlAttribute* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::AddNamespaceDeclaration)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x616baec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                           { "AddNamespaceDeclaration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.CreateUnexpectedStateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Xml::XmlNodeType, ::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::CreateUnexpectedStateException)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6168820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                            { "CreateUnexpectedStateException", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.ReadDataContractValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::DataContract*,
                                                                                                                                               ::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadDataContractValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x616bfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.CreateReaderDelegatorForReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::XmlReaderDelegator* (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Xml::XmlReader*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContext::CreateReaderDelegatorForReader)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x616bfe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.IsReadingCollectionExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::IsReadingCollectionExtensionData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x616c040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContext.IsReadingClassExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerReadContext::*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContext::IsReadingClassExtensionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616c060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 24 }));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::Attributes*& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr ::System::Runtime::Serialization::Attributes* const& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributes;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_set_attributes(::System::Runtime::Serialization::Attributes* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributes = value;
}
constexpr ::System::Runtime::Serialization::HybridObjectCache*& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_deserializedObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deserializedObjects;
}
constexpr ::System::Runtime::Serialization::HybridObjectCache* const& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_deserializedObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deserializedObjects;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_set_deserializedObjects(::System::Runtime::Serialization::HybridObjectCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deserializedObjects = value;
}
constexpr ::System::Runtime::Serialization::XmlSerializableReader*& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_xmlSerializableReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSerializableReader;
}
constexpr ::System::Runtime::Serialization::XmlSerializableReader* const& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_xmlSerializableReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSerializableReader;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_set_xmlSerializableReader(::System::Runtime::Serialization::XmlSerializableReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlSerializableReader = value;
}
constexpr ::System::Xml::XmlDocument*& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_xmlDocument() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlDocument;
}
constexpr ::System::Xml::XmlDocument* const& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_xmlDocument() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlDocument;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_set_xmlDocument(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlDocument = value;
}
constexpr ::System::Runtime::Serialization::Attributes*& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_attributesInXmlData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributesInXmlData;
}
constexpr ::System::Runtime::Serialization::Attributes* const& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_attributesInXmlData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributesInXmlData;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_set_attributesInXmlData(::System::Runtime::Serialization::Attributes* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attributesInXmlData = value;
}
constexpr ::System::Runtime::Serialization::XmlReaderDelegator*& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_extensionDataReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensionDataReader;
}
constexpr ::System::Runtime::Serialization::XmlReaderDelegator* const& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_extensionDataReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extensionDataReader;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_set_extensionDataReader(::System::Runtime::Serialization::XmlReaderDelegator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extensionDataReader = value;
}
constexpr ::System::Object*& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_getOnlyCollectionValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getOnlyCollectionValue;
}
constexpr ::System::Object* const& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_getOnlyCollectionValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getOnlyCollectionValue;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_set_getOnlyCollectionValue(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getOnlyCollectionValue = value;
}
constexpr bool& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_isGetOnlyCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isGetOnlyCollection;
}
constexpr bool const& System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_get_isGetOnlyCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isGetOnlyCollection;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContext::__cordl_internal_set_isGetOnlyCollection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isGetOnlyCollection = value;
}
inline ::System::Runtime::Serialization::HybridObjectCache* System::Runtime::Serialization::XmlObjectSerializerReadContext::get_DeserializedObjects() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "get_DeserializedObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::HybridObjectCache*>(this, ___internal_method);
}
inline ::System::Xml::XmlDocument* System::Runtime::Serialization::XmlObjectSerializerReadContext::get_Document() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "get_Document", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContext::get_IsGetOnlyCollection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::set_IsGetOnlyCollection(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::GetCollectionMember() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "GetCollectionMember", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::StoreCollectionMemberInfo(::System::Object* collectionMember) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "StoreCollectionMemberInfo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collectionMember);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::ThrowNullValueReturnedForGetOnlyCollectionException(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "ThrowNullValueReturnedForGetOnlyCollectionException", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::ThrowArrayExceededSizeException(int32_t arraySize, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "ThrowArrayExceededSizeException", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arraySize, type);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerReadContext*
System::Runtime::Serialization::XmlObjectSerializerReadContext::CreateContext(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                              ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                              ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                              { "CreateContext",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(nullptr, ___internal_method, serializer, rootTypeDataContract, dataContractResolver);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                  ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                  ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer, rootTypeDataContract, dataContractResolver);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, int32_t id,
                                                                                                             ::System::RuntimeTypeHandle declaredTypeHandle, ::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, id, declaredTypeHandle, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                             ::System::Type* declaredType, ::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, declaredType, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                             ::System::Type* declaredType, ::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                             ::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, declaredType, dataContract, name, ns);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContext::TryHandleNullOrRef(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::System::Type* declaredType,
                                                                                               ::StringW name, ::StringW ns, ::by_ref<::System::Object*> retObj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "TryHandleNullOrRef",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reader, declaredType, name, ns, retObj);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* reader, ::StringW name, ::StringW ns,
                                                                                                             ::System::Type* declaredType,
                                                                                                             ::by_ref<::System::Runtime::Serialization::DataContract*> dataContract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "InternalDeserialize",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Runtime::Serialization::DataContract*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, name, ns, declaredType, dataContract);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContext::ReplaceScopedKnownTypesTop(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* knownDataContracts, bool knownTypesAddedInCurrentScope) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                              { "ReplaceScopedKnownTypesTop",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(),
                                                  ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, knownDataContracts, knownTypesAddedInCurrentScope);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContext::MoveToNextElement(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "MoveToNextElement", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xmlReader);
}
inline int32_t System::Runtime::Serialization::XmlObjectSerializerReadContext::GetMemberIndex(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                              ::ArrayW<::System::Xml::XmlDictionaryString*> memberNames,
                                                                                              ::ArrayW<::System::Xml::XmlDictionaryString*> memberNamespaces, int32_t memberIndex,
                                                                                              ::System::Runtime::Serialization::ExtensionDataObject* extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "GetMemberIndex",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(),
                                                               ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, xmlReader, memberNames, memberNamespaces, memberIndex, extensionData);
}
inline int32_t System::Runtime::Serialization::XmlObjectSerializerReadContext::GetMemberIndexWithRequiredMembers(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                 ::ArrayW<::System::Xml::XmlDictionaryString*> memberNames,
                                                                                                                 ::ArrayW<::System::Xml::XmlDictionaryString*> memberNamespaces, int32_t memberIndex,
                                                                                                                 int32_t requiredIndex,
                                                                                                                 ::System::Runtime::Serialization::ExtensionDataObject* extensionData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "GetMemberIndexWithRequiredMembers",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(),
                                                               ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, xmlReader, memberNames, memberNamespaces, memberIndex, requiredIndex, extensionData);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::ThrowRequiredMemberMissingException(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, int32_t memberIndex,
                                                                                                                int32_t requiredIndex, ::ArrayW<::System::Xml::XmlDictionaryString*> memberNames) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "ThrowRequiredMemberMissingException",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xmlReader, memberIndex, requiredIndex, memberNames);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::HandleMemberNotFound(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                 ::System::Runtime::Serialization::ExtensionDataObject* extensionData, int32_t memberIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "HandleMemberNotFound",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlReader, extensionData, memberIndex);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::HandleUnknownElement(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                 ::System::Runtime::Serialization::ExtensionDataObject* extensionData, int32_t memberIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "HandleUnknownElement",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlReader, extensionData, memberIndex);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::SkipUnknownElement(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "SkipUnknownElement", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlReader);
}
inline ::StringW System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadIfNullOrRef(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* memberType,
                                                                                                 bool isMemberTypeSerializable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                          { "ReadIfNullOrRef", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, xmlReader, memberType, isMemberTypeSerializable);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadAttributes(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlReader);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::ResetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "ResetAttributes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::XmlObjectSerializerReadContext::GetObjectId() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "GetObjectId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::XmlObjectSerializerReadContext::GetArraySize() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::AddNewObject(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), { "AddNewObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::AddNewObjectWithId(::StringW id, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "AddNewObjectWithId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, obj);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::ReplaceDeserializedObject(::StringW id, ::System::Object* oldObj, ::System::Object* newObj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                              { "ReplaceDeserializedObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, oldObj, newObj);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::GetExistingObject(::StringW id, ::System::Type* type, ::StringW name, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                       { "GetExistingObject", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, id, type, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::GetExistingObjectOrExtensionData(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "GetExistingObjectOrExtensionData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, id);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::GetRealObject(::System::Runtime::Serialization::IObjectReference* obj, ::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "GetRealObject", {}, { ::i2c::type_of<::System::Runtime::Serialization::IObjectReference*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, obj, id);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::DeserializeFromExtensionData(::System::Runtime::Serialization::IDataNode* dataNode, ::System::Type* type,
                                                                                                                      ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                          { "DeserializeFromExtensionData",
                            {},
                            { ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, dataNode, type, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::Read(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xmlReader);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::ParseQualifiedName(::StringW qname, ::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                               ::by_ref<::StringW> name, ::by_ref<::StringW> ns, ::by_ref<::StringW> prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "ParseQualifiedName",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                               ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, qname, xmlReader, name, ns, prefix);
}
template <typename T> inline ::ArrayW<T> System::Runtime::Serialization::XmlObjectSerializerReadContext::EnsureArraySize(::ArrayW<T> array, int32_t index) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "EnsureArraySize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, index);
}
template <typename T> inline ::ArrayW<T> System::Runtime::Serialization::XmlObjectSerializerReadContext::TrimArraySize(::ArrayW<T> array, int32_t size) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "TrimArraySize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array, size);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::CheckEndOfArray(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, int32_t arraySize,
                                                                                            ::System::Xml::XmlDictionaryString* itemName, ::System::Xml::XmlDictionaryString* itemNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "CheckEndOfArray",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlReader, arraySize, itemName, itemNamespace);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadIXmlSerializable(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                              ::System::Runtime::Serialization::XmlDataContract* xmlDataContract, bool isMemberType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "ReadIXmlSerializable",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::XmlDataContract*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, xmlDataContract, isMemberType);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadRootIXmlSerializable(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                  ::System::Runtime::Serialization::XmlDataContract* xmlDataContract,
                                                                                                                  bool isMemberType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "ReadRootIXmlSerializable",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::XmlDataContract*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, xmlReader, xmlDataContract, isMemberType);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadIXmlSerializable(::System::Runtime::Serialization::XmlSerializableReader* xmlSerializableReader,
                                                                                                              ::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                              ::System::Runtime::Serialization::XmlDataContract* xmlDataContract, bool isMemberType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                              { "ReadIXmlSerializable",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlSerializableReader*>(), ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::XmlDataContract*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, xmlSerializableReader, xmlReader, xmlDataContract, isMemberType);
}
inline ::System::Runtime::Serialization::SerializationInfo*
System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadSerializationInfo(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                              { "ReadSerializationInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationInfo*>(this, ___internal_method, xmlReader, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerReadContext::ResolveDataContractFromTypeName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ExtensionDataMember*
System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadExtensionDataMember(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, int32_t memberIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "ReadExtensionDataMember", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ExtensionDataMember*>(this, ___internal_method, xmlReader, memberIndex);
}
inline ::System::Runtime::Serialization::IDataNode*
System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadExtensionDataValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "ReadExtensionDataValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataNode*>(this, ___internal_method, xmlReader);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::StartReadExtensionDataValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlReader);
}
inline ::System::Runtime::Serialization::IDataNode*
System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadExtensionDataValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName,
                                                                                       ::StringW dataContractNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                          { "ReadExtensionDataValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataNode*>(this, ___internal_method, xmlReader, dataContractName, dataContractNamespace);
}
inline ::System::Runtime::Serialization::IDataNode*
System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadPrimitiveExtensionDataValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName,
                                                                                                ::StringW dataContractNamespace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataNode*>(this, ___internal_method, xmlReader, dataContractName, dataContractNamespace);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContext::InitializeExtensionDataNode(::System::Runtime::Serialization::IDataNode* dataNode, ::StringW dataContractName,
                                                                                                        ::StringW dataContractNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                          { "InitializeExtensionDataNode", {}, { ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataNode, dataContractName, dataContractNamespace);
}
inline ::System::Runtime::Serialization::IDataNode*
System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadUnknownPrimitiveData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::System::Type* type,
                                                                                         ::StringW dataContractName, ::StringW dataContractNamespace) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "ReadUnknownPrimitiveData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Type*>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataNode*>(this, ___internal_method, xmlReader, type, dataContractName, dataContractNamespace);
}
inline ::System::Runtime::Serialization::ClassDataNode*
System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadUnknownClassData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName,
                                                                                     ::StringW dataContractNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                          { "ReadUnknownClassData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ClassDataNode*>(this, ___internal_method, xmlReader, dataContractName, dataContractNamespace);
}
inline ::System::Runtime::Serialization::CollectionDataNode*
System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadUnknownCollectionData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName,
                                                                                          ::StringW dataContractNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                          { "ReadUnknownCollectionData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::CollectionDataNode*>(this, ___internal_method, xmlReader, dataContractName, dataContractNamespace);
}
inline ::System::Runtime::Serialization::ISerializableDataNode*
System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadUnknownISerializableData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader, ::StringW dataContractName,
                                                                                             ::StringW dataContractNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                       { "ReadUnknownISerializableData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializableDataNode*>(this, ___internal_method, xmlReader, dataContractName, dataContractNamespace);
}
inline ::System::Runtime::Serialization::IDataNode* System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadUnknownXmlData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                                       ::StringW dataContractName, ::StringW dataContractNamespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                          { "ReadUnknownXmlData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataNode*>(this, ___internal_method, xmlReader, dataContractName, dataContractNamespace);
}
inline ::System::Runtime::Serialization::IDataNode*
System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadAndResolveUnknownXmlData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                             ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* namespaces,
                                                                                             ::StringW dataContractName, ::StringW dataContractNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                       { "ReadAndResolveUnknownXmlData",
                                         {},
                                         { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(),
                                           ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::IDataNode*>(this, ___internal_method, xmlReader, namespaces, dataContractName, dataContractNamespace);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContext::IsContentNode(::System::Xml::XmlNodeType nodeType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "IsContentNode", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nodeType);
}
inline ::System::Runtime::Serialization::XmlReaderDelegator*
System::Runtime::Serialization::XmlObjectSerializerReadContext::CreateReaderOverChildNodes(::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* xmlAttributes,
                                                                                           ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* xmlChildNodes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "CreateReaderOverChildNodes",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlReaderDelegator*>(this, ___internal_method, xmlAttributes, xmlChildNodes);
}
inline ::System::Xml::XmlNode* System::Runtime::Serialization::XmlObjectSerializerReadContext::CreateWrapperXmlElement(
    ::System::Xml::XmlDocument* document, ::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>* xmlAttributes,
    ::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>* xmlChildNodes, ::StringW prefix, ::StringW localName, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                           { "CreateWrapperXmlElement",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlAttribute*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Xml::XmlNode*>*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(nullptr, ___internal_method, document, xmlAttributes, xmlChildNodes, prefix, localName, ns);
}
inline ::System::Xml::XmlAttribute* System::Runtime::Serialization::XmlObjectSerializerReadContext::AddNamespaceDeclaration(::StringW prefix, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                                                                                         { "AddNamespaceDeclaration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlAttribute*>(this, ___internal_method, prefix, ns);
}
inline ::System::Exception* System::Runtime::Serialization::XmlObjectSerializerReadContext::CreateUnexpectedStateException(::System::Xml::XmlNodeType expectedState,
                                                                                                                           ::System::Runtime::Serialization::XmlReaderDelegator* xmlReader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(),
                          { "CreateUnexpectedStateException", {}, { ::i2c::type_of<::System::Xml::XmlNodeType>(), ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, expectedState, xmlReader);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContext::ReadDataContractValue(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                               ::System::Runtime::Serialization::XmlReaderDelegator* reader) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, dataContract, reader);
}
inline ::System::Runtime::Serialization::XmlReaderDelegator* System::Runtime::Serialization::XmlObjectSerializerReadContext::CreateReaderDelegatorForReader(::System::Xml::XmlReader* xmlReader) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlReaderDelegator*>(this, ___internal_method, xmlReader);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContext::IsReadingCollectionExtensionData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlReader);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContext::IsReadingClassExtensionData(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlReader);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerReadContext*
System::Runtime::Serialization::XmlObjectSerializerReadContext::New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                         ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                         ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerReadContext*>(serializer, rootTypeDataContract, dataContractResolver));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContext::XmlObjectSerializerReadContext() {}
