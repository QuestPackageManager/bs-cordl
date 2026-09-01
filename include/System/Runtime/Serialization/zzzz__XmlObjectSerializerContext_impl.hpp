#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlObjectSerializerContext.hpp"
#include "System/Runtime/Serialization/zzzz__ScopedKnownTypes_impl.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerContext_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractSerializer_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__KnownTypeDataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__NetDataContractSerializer_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationMode_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializer_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(
    ::System::Runtime::Serialization::XmlObjectSerializer*, int32_t, ::System::Runtime::Serialization::StreamingContext, bool, ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6166598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(
    ::System::Runtime::Serialization::XmlObjectSerializer*, int32_t, ::System::Runtime::Serialization::StreamingContext, bool)>(&::System::Runtime::Serialization::XmlObjectSerializerContext::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61665b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(
    ::System::Runtime::Serialization::DataContractSerializer*, ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x61665d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::Runtime::Serialization::NetDataContractSerializer*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6166610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::NetDataContractSerializer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.get_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationMode (::System::Runtime::Serialization::XmlObjectSerializerContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6166648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.get_IsGetOnlyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::get_IsGetOnlyCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6166650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.set_IsGetOnlyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::set_IsGetOnlyCollection)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6166658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.DemandSerializationFormatterPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::DemandSerializationFormatterPermission)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x616665c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "DemandSerializationFormatterPermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.DemandMemberAccessPermission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::DemandMemberAccessPermission)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6166660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "DemandMemberAccessPermission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.GetStreamingContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::StreamingContext (::System::Runtime::Serialization::XmlObjectSerializerContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::GetStreamingContext)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6166664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "GetStreamingContext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.get_IncrementItemCountMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)()>(&::System::Runtime::Serialization::XmlObjectSerializerContext::get_IncrementItemCountMethod)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6166670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_IncrementItemCountMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.IncrementItemCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(int32_t)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::IncrementItemCount)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6166744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "IncrementItemCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.get_RemainingItemCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlObjectSerializerContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::get_RemainingItemCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6166800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_RemainingItemCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.get_IgnoreExtensionDataObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::get_IgnoreExtensionDataObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616680c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_IgnoreExtensionDataObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.get_DataContractResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContractResolver* (::System::Runtime::Serialization::XmlObjectSerializerContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::get_DataContractResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6166814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_DataContractResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.get_KnownTypeResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::KnownTypeDataContractResolver* (::System::Runtime::Serialization::XmlObjectSerializerContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::get_KnownTypeResolver)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x616681c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_KnownTypeResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContract)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6166878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "GetDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (
    ::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::RuntimeTypeHandle, ::System::Type*)>(&::System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContract)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x61668c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.GetDataContractSkipValidation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(int32_t, ::System::RuntimeTypeHandle, ::System::Type*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContractSkipValidation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6166968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (
    ::System::Runtime::Serialization::XmlObjectSerializerContext::*)(int32_t, ::System::RuntimeTypeHandle)>(&::System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContract)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x61669c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.CheckIfTypeSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::Type*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::CheckIfTypeSerializable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6166a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.GetSurrogatedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::GetSurrogatedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6166ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.get_SerializerKnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::XmlObjectSerializerContext::*)()>(&::System::Runtime::Serialization::XmlObjectSerializerContext::get_SerializerKnownDataContracts)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6166ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_SerializerKnownDataContracts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.GetDataContractFromSerializerKnownTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::Xml::XmlQualifiedName*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContractFromSerializerKnownTypes)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6166b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                           { "GetDataContractFromSerializerKnownTypes", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.GetDataContractsForKnownTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (*)(::System::Collections::Generic::IList_1<::System::Type*>*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContractsForKnownTypes)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6166ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                             { "GetDataContractsForKnownTypes", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Type*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.IsKnownType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(
    ::System::Runtime::Serialization::DataContract*, ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*,
    ::System::Type*)>(&::System::Runtime::Serialization::XmlObjectSerializerContext::IsKnownType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6157f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                { "IsKnownType",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(),
                                                    ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.IsKnownType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::Runtime::Serialization::DataContract*, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::IsKnownType)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6166ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                             { "IsKnownType", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.ResolveDataContractFromKnownTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::Xml::XmlQualifiedName*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerContext::ResolveDataContractFromKnownTypes)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6167054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                           { "ResolveDataContractFromKnownTypes", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.ResolveDataContractFromDataContractResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::Xml::XmlQualifiedName*, ::System::Type*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerContext::ResolveDataContractFromDataContractResolver)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x61670a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                { "ResolveDataContractFromDataContractResolver", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.ResolveNameFromKnownTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::ResolveNameFromKnownTypes)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6158094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                           { "ResolveNameFromKnownTypes", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.ResolveDataContractFromKnownTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (
    ::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::StringW, ::StringW, ::System::Runtime::Serialization::DataContract*, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerContext::ResolveDataContractFromKnownTypes)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6166f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                            { "ResolveDataContractFromKnownTypes",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerContext.ResolveDataContractFromRootDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerContext::*)(::System::Xml::XmlQualifiedName*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerContext::ResolveDataContractFromRootDataContract)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x61671e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::XmlObjectSerializer*& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_serializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializer;
}
constexpr ::System::Runtime::Serialization::XmlObjectSerializer* const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_serializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializer;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_serializer(::System::Runtime::Serialization::XmlObjectSerializer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializer = value;
}
constexpr ::System::Runtime::Serialization::DataContract*& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_rootTypeDataContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootTypeDataContract;
}
constexpr ::System::Runtime::Serialization::DataContract* const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_rootTypeDataContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rootTypeDataContract;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_rootTypeDataContract(::System::Runtime::Serialization::DataContract* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rootTypeDataContract = value;
}
constexpr ::System::Runtime::Serialization::ScopedKnownTypes& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_scopedKnownTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopedKnownTypes;
}
constexpr ::System::Runtime::Serialization::ScopedKnownTypes const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_scopedKnownTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scopedKnownTypes;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_scopedKnownTypes(::System::Runtime::Serialization::ScopedKnownTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scopedKnownTypes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*&
System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_serializerKnownDataContracts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializerKnownDataContracts;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* const&
System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_serializerKnownDataContracts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializerKnownDataContracts;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_serializerKnownDataContracts(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializerKnownDataContracts = value;
}
constexpr bool& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_isSerializerKnownDataContractsSetExplicit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSerializerKnownDataContractsSetExplicit;
}
constexpr bool const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_isSerializerKnownDataContractsSetExplicit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSerializerKnownDataContractsSetExplicit;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_isSerializerKnownDataContractsSetExplicit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSerializerKnownDataContractsSetExplicit = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::Type*>*& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_serializerKnownTypeList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializerKnownTypeList;
}
constexpr ::System::Collections::Generic::IList_1<::System::Type*>* const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_serializerKnownTypeList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializerKnownTypeList;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_serializerKnownTypeList(::System::Collections::Generic::IList_1<::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializerKnownTypeList = value;
}
constexpr int32_t& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_itemCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemCount;
}
constexpr int32_t const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_itemCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemCount;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_itemCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemCount = value;
}
constexpr int32_t& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_maxItemsInObjectGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxItemsInObjectGraph;
}
constexpr int32_t const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_maxItemsInObjectGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxItemsInObjectGraph;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_maxItemsInObjectGraph(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxItemsInObjectGraph = value;
}
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_streamingContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamingContext;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_streamingContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamingContext;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_streamingContext(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streamingContext = value;
}
constexpr bool& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_ignoreExtensionDataObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreExtensionDataObject;
}
constexpr bool const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_ignoreExtensionDataObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreExtensionDataObject;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_ignoreExtensionDataObject(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreExtensionDataObject = value;
}
constexpr ::System::Runtime::Serialization::DataContractResolver*& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_dataContractResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractResolver;
}
constexpr ::System::Runtime::Serialization::DataContractResolver* const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_dataContractResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractResolver;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_dataContractResolver(::System::Runtime::Serialization::DataContractResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataContractResolver = value;
}
constexpr ::System::Runtime::Serialization::KnownTypeDataContractResolver*& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_knownTypeResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownTypeResolver;
}
constexpr ::System::Runtime::Serialization::KnownTypeDataContractResolver* const& System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_get_knownTypeResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownTypeResolver;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerContext::__cordl_internal_set_knownTypeResolver(::System::Runtime::Serialization::KnownTypeDataContractResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___knownTypeResolver = value;
}
inline void System::Runtime::Serialization::XmlObjectSerializerContext::setStaticF_incrementItemCountMethod(::System::Reflection::MethodInfo* value) {
  ::cordl_internals::setStaticField<::System::Reflection::MethodInfo*, "incrementItemCountMethod", ::System::Runtime::Serialization::XmlObjectSerializerContext*>(
      std::forward<::System::Reflection::MethodInfo*>(value));
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::XmlObjectSerializerContext::getStaticF_incrementItemCountMethod() {
  return ::cordl_internals::getStaticField<::System::Reflection::MethodInfo*, "incrementItemCountMethod", ::System::Runtime::Serialization::XmlObjectSerializerContext*>();
}
inline void System::Runtime::Serialization::XmlObjectSerializerContext::_ctor(::System::Runtime::Serialization::XmlObjectSerializer* serializer, int32_t maxItemsInObjectGraph,
                                                                              ::System::Runtime::Serialization::StreamingContext streamingContext, bool ignoreExtensionDataObject,
                                                                              ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer, maxItemsInObjectGraph, streamingContext, ignoreExtensionDataObject, dataContractResolver);
}
inline void System::Runtime::Serialization::XmlObjectSerializerContext::_ctor(::System::Runtime::Serialization::XmlObjectSerializer* serializer, int32_t maxItemsInObjectGraph,
                                                                              ::System::Runtime::Serialization::StreamingContext streamingContext, bool ignoreExtensionDataObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializer*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer, maxItemsInObjectGraph, streamingContext, ignoreExtensionDataObject);
}
inline void System::Runtime::Serialization::XmlObjectSerializerContext::_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                              ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                              ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer, rootTypeDataContract, dataContractResolver);
}
inline void System::Runtime::Serialization::XmlObjectSerializerContext::_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::NetDataContractSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer);
}
inline ::System::Runtime::Serialization::SerializationMode System::Runtime::Serialization::XmlObjectSerializerContext::get_Mode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationMode>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerContext::get_IsGetOnlyCollection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerContext::set_IsGetOnlyCollection(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerContext::DemandSerializationFormatterPermission() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "DemandSerializationFormatterPermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerContext::DemandMemberAccessPermission() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "DemandMemberAccessPermission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::StreamingContext System::Runtime::Serialization::XmlObjectSerializerContext::GetStreamingContext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "GetStreamingContext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::StreamingContext>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* System::Runtime::Serialization::XmlObjectSerializerContext::get_IncrementItemCountMethod() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_IncrementItemCountMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerContext::IncrementItemCount(int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "IncrementItemCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline int32_t System::Runtime::Serialization::XmlObjectSerializerContext::get_RemainingItemCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_RemainingItemCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerContext::get_IgnoreExtensionDataObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_IgnoreExtensionDataObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContractResolver* System::Runtime::Serialization::XmlObjectSerializerContext::get_DataContractResolver() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_DataContractResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContractResolver*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::KnownTypeDataContractResolver* System::Runtime::Serialization::XmlObjectSerializerContext::get_KnownTypeResolver() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_KnownTypeResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContract(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "GetDataContract", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContract(::System::RuntimeTypeHandle typeHandle, ::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, typeHandle, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContractSkipValidation(int32_t typeId, ::System::RuntimeTypeHandle typeHandle,
                                                                                                                                                 ::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, typeId, typeHandle, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, id, typeHandle);
}
inline void System::Runtime::Serialization::XmlObjectSerializerContext::CheckIfTypeSerializable(::System::Type* memberType, bool isMemberTypeSerializable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberType, isMemberTypeSerializable);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerContext::GetSurrogatedType(::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::XmlObjectSerializerContext::get_SerializerKnownDataContracts() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), { "get_SerializerKnownDataContracts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContractFromSerializerKnownTypes(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                         { "GetDataContractFromSerializerKnownTypes", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, qname);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::XmlObjectSerializerContext::GetDataContractsForKnownTypes(::System::Collections::Generic::IList_1<::System::Type*>* knownTypeList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                           { "GetDataContractsForKnownTypes", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::Type*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(
      nullptr, ___internal_method, knownTypeList);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerContext::IsKnownType(
    ::System::Runtime::Serialization::DataContract* dataContract,
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* knownDataContracts, ::System::Type* declaredType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                              { "IsKnownType",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(),
                                                  ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dataContract, knownDataContracts, declaredType);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerContext::IsKnownType(::System::Runtime::Serialization::DataContract* dataContract, ::System::Type* declaredType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                           { "IsKnownType", {}, { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dataContract, declaredType);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerContext::ResolveDataContractFromKnownTypes(::System::Xml::XmlQualifiedName* typeName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                         { "ResolveDataContractFromKnownTypes", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, typeName);
}
inline ::System::Runtime::Serialization::DataContract*
System::Runtime::Serialization::XmlObjectSerializerContext::ResolveDataContractFromDataContractResolver(::System::Xml::XmlQualifiedName* typeName, ::System::Type* declaredType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                              { "ResolveDataContractFromDataContractResolver", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, typeName, declaredType);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerContext::ResolveNameFromKnownTypes(::System::Xml::XmlQualifiedName* typeName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                                                                                         { "ResolveNameFromKnownTypes", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeName);
}
inline ::System::Runtime::Serialization::DataContract*
System::Runtime::Serialization::XmlObjectSerializerContext::ResolveDataContractFromKnownTypes(::StringW typeName, ::StringW typeNs, ::System::Runtime::Serialization::DataContract* memberTypeContract,
                                                                                              ::System::Type* declaredType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(),
                          { "ResolveDataContractFromKnownTypes",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, typeName, typeNs, memberTypeContract, declaredType);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerContext::ResolveDataContractFromRootDataContract(::System::Xml::XmlQualifiedName* typeQName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, typeQName);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerContext*
System::Runtime::Serialization::XmlObjectSerializerContext::New_ctor(::System::Runtime::Serialization::XmlObjectSerializer* serializer, int32_t maxItemsInObjectGraph,
                                                                     ::System::Runtime::Serialization::StreamingContext streamingContext, bool ignoreExtensionDataObject,
                                                                     ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerContext*>(serializer, maxItemsInObjectGraph, streamingContext, ignoreExtensionDataObject,
                                                                                                                         dataContractResolver));
}
inline ::System::Runtime::Serialization::XmlObjectSerializerContext*
System::Runtime::Serialization::XmlObjectSerializerContext::New_ctor(::System::Runtime::Serialization::XmlObjectSerializer* serializer, int32_t maxItemsInObjectGraph,
                                                                     ::System::Runtime::Serialization::StreamingContext streamingContext, bool ignoreExtensionDataObject) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerContext*>(serializer, maxItemsInObjectGraph, streamingContext, ignoreExtensionDataObject));
}
inline ::System::Runtime::Serialization::XmlObjectSerializerContext*
System::Runtime::Serialization::XmlObjectSerializerContext::New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                     ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                     ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerContext*>(serializer, rootTypeDataContract, dataContractResolver));
}
inline ::System::Runtime::Serialization::XmlObjectSerializerContext*
System::Runtime::Serialization::XmlObjectSerializerContext::New_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerContext*>(serializer));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerContext::XmlObjectSerializerContext() {}
