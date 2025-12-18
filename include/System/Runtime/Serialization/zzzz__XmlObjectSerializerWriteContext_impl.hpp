#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlObjectSerializerWriteContext.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectReferenceStack_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerContext_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__ClassDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__CollectionDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractSerializer_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataMember_def.hpp"
#include "System/Runtime/Serialization/zzzz__ExtensionDataObject_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializableDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__NetDataContractSerializer_def.hpp"
#include "System/Runtime/Serialization/zzzz__ObjectToIdCache_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlDataNode_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlSerializableWriter_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.CreateContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::XmlObjectSerializerWriteContext* (*)(::System::Runtime::Serialization::DataContractSerializer*, ::System::Runtime::Serialization::DataContract*,
                                                                                       ::System::Runtime::Serialization::DataContractResolver*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::CreateContext)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5fb8fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "CreateContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractSerializer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.CreateContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::XmlObjectSerializerWriteContext* (*)(::System::Runtime::Serialization::NetDataContractSerializer*, ::System::Collections::Hashtable*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::CreateContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fb9158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "CreateContext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::NetDataContractSerializer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::DataContractSerializer*, ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fb90d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractSerializer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::NetDataContractSerializer*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fb9210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::NetDataContractSerializer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.get_SerializedObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::ObjectToIdCache* (
    ::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)()>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_SerializedObjects)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fb9288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                 "get_SerializedObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.get_IsGetOnlyCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_IsGetOnlyCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb92ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.set_IsGetOnlyCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::set_IsGetOnlyCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb92f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.get_SerializeReadOnlyTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_SerializeReadOnlyTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb92fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                 "get_SerializeReadOnlyTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.get_UnsafeTypeForwardingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_UnsafeTypeForwardingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb9304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                 "get_UnsafeTypeForwardingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.StoreIsGetOnlyCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::StoreIsGetOnlyCollection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fb930c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                 "StoreIsGetOnlyCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.InternalSerializeReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool, bool, int32_t, ::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::InternalSerializeReference)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5fb9318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "InternalSerializeReference",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.InternalSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool, bool, int32_t, ::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::InternalSerialize)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5fb93b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.SerializeWithoutXsiType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithoutXsiType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5fb95b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "SerializeWithoutXsiType",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.SerializeWithXsiTypeAtTopLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithXsiTypeAtTopLevel)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5fb9924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.SerializeWithXsiType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::RuntimeTypeHandle, ::System::Type*, int32_t, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithXsiType)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5fb9c40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.OnHandleIsReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::DataContract*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnHandleIsReference)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5fb968c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "OnHandleIsReference",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.SerializeAndVerifyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeAndVerifyType)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5fb9a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "SerializeAndVerifyType",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::DataContract*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb9f44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb9f4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::System::Runtime::Serialization::SerializationInfo*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb9f54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteAnyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteAnyType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fb9f5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fb9f78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fb9fa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteBase64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5fba0f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteBase64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteBase64)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5fba118;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Uri*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteUri)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fba210;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Uri*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteUri)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5fba22c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Xml::XmlQualifiedName*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteQName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fba34c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteQName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Xml::XmlQualifiedName*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteQName)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5fba374;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.HandleGraphAtTopLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::Runtime::Serialization::DataContract*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::HandleGraphAtTopLevel)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5fba4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "HandleGraphAtTopLevel",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.OnHandleReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnHandleReference)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5fba604;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.OnEndHandleReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnEndHandleReference)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fba7b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, bool)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fba7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteNull", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, bool, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fba074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteNull", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.IncrementArrayCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Array*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementArrayCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fba828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "IncrementArrayCount",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.IncrementCollectionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Collections::ICollection*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementCollectionCount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fba8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "IncrementCollectionCount",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.IncrementCollectionCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, int32_t)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementCollectionCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fba880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "IncrementCollectionCount",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteArraySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, int32_t)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteArraySize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fba9a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.ThrowRequiredMemberMustBeEmitted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::ThrowRequiredMemberMustBeEmitted)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5fba9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "ThrowRequiredMemberMustBeEmitted",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteIXmlSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteIXmlSerializable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fada7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteIXmlSerializable",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteRootIXmlSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteRootIXmlSerializable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fada18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteRootIXmlSerializable",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteIXmlSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::Runtime::Serialization::XmlSerializableWriter*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteIXmlSerializable)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5fbaa7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteIXmlSerializable",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlSerializableWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::ISerializable*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::GetObjectData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5fbacdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteISerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::ISerializable*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteISerializable)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5fbada4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteISerializable",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteSerializationInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::System::Runtime::Serialization::SerializationInfo*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteSerializationInfo)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5fac2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteSerializationInfo",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::ExtensionDataObject*, int32_t)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5fbb114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteExtensionData",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ExtensionDataObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionDataMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::ExtensionDataMember*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataMember)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fbb2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteExtensionDataMember",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ExtensionDataMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionDataTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::IDataNode*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataTypeInfo)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5fbba00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionDataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::IDataNode*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataValue)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x5fbb2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteExtensionDataValue",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.TryWriteDeserializedExtensionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::IDataNode*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::TryWriteDeserializedExtensionData)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5fbc7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                    "TryWriteDeserializedExtensionData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionClassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::ClassDataNode*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionClassData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5fbbcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteExtensionClassData",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionCollectionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::CollectionDataNode*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionCollectionData)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5fbbe5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteExtensionCollectionData",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionISerializableData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::ISerializableDataNode*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionISerializableData)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5fbc5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                    "WriteExtensionISerializableData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializableDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionXmlData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::XmlDataNode*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionXmlData)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x5fbc02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteExtensionXmlData",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlDataNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteDataContractValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteDataContractValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5fbc998;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbc9c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteResolvedTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::System::Type*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteResolvedTypeInfo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fb9a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteResolvedTypeInfo",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.ResolveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Type*, ::System::Type*, ::ByRef<::System::Xml::XmlDictionaryString*>, ::ByRef<::System::Xml::XmlDictionaryString*>)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::ResolveType)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5fbaf2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "ResolveType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContract*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5fbc9cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fbca90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteTypeInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fbcb38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 36));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::ObjectReferenceStack& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_byValObjectsInScope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byValObjectsInScope;
}
constexpr ::System::Runtime::Serialization::ObjectReferenceStack const& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_byValObjectsInScope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___byValObjectsInScope;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_set_byValObjectsInScope(::System::Runtime::Serialization::ObjectReferenceStack value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___byValObjectsInScope = value;
}
constexpr ::System::Runtime::Serialization::XmlSerializableWriter*& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_xmlSerializableWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSerializableWriter;
}
constexpr ::System::Runtime::Serialization::XmlSerializableWriter* const& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_xmlSerializableWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlSerializableWriter;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_set_xmlSerializableWriter(::System::Runtime::Serialization::XmlSerializableWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlSerializableWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_preserveObjectReferences() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preserveObjectReferences;
}
constexpr bool const& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_preserveObjectReferences() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preserveObjectReferences;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_set_preserveObjectReferences(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preserveObjectReferences = value;
}
constexpr ::System::Runtime::Serialization::ObjectToIdCache*& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_serializedObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedObjects;
}
constexpr ::System::Runtime::Serialization::ObjectToIdCache* const& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_serializedObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedObjects;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_set_serializedObjects(::System::Runtime::Serialization::ObjectToIdCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_isGetOnlyCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isGetOnlyCollection;
}
constexpr bool const& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_isGetOnlyCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isGetOnlyCollection;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_set_isGetOnlyCollection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isGetOnlyCollection = value;
}
constexpr bool& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_unsafeTypeForwardingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsafeTypeForwardingEnabled;
}
constexpr bool const& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_unsafeTypeForwardingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unsafeTypeForwardingEnabled;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_set_unsafeTypeForwardingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unsafeTypeForwardingEnabled = value;
}
constexpr bool& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_serializeReadOnlyTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializeReadOnlyTypes;
}
constexpr bool const& System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_get_serializeReadOnlyTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializeReadOnlyTypes;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerWriteContext::__cordl_internal_set_serializeReadOnlyTypes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializeReadOnlyTypes = value;
}
inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*
System::Runtime::Serialization::XmlObjectSerializerWriteContext::CreateContext(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                               ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                               ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "CreateContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractSerializer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*, false>(nullptr, ___internal_method, serializer, rootTypeDataContract,
                                                                                                                        dataContractResolver);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*
System::Runtime::Serialization::XmlObjectSerializerWriteContext::CreateContext(::System::Runtime::Serialization::NetDataContractSerializer* serializer,
                                                                               ::System::Collections::Hashtable* surrogateDataContracts) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "CreateContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::NetDataContractSerializer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*, false>(nullptr, ___internal_method, serializer, surrogateDataContracts);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                   ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                   ::System::Runtime::Serialization::DataContractResolver* resolver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractSerializer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializer, rootTypeDataContract, resolver);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::NetDataContractSerializer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializer);
}
inline ::System::Runtime::Serialization::ObjectToIdCache* System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_SerializedObjects() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "get_SerializedObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ObjectToIdCache*, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_IsGetOnlyCollection() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::set_IsGetOnlyCollection(bool value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_SerializeReadOnlyTypes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "get_SerializeReadOnlyTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_UnsafeTypeForwardingEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "get_UnsafeTypeForwardingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::StoreIsGetOnlyCollection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "StoreIsGetOnlyCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::InternalSerializeReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                        bool isDeclaredType, bool writeXsiType, int32_t declaredTypeID,
                                                                                                        ::System::RuntimeTypeHandle declaredTypeHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "InternalSerializeReference",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, obj, isDeclaredType, writeXsiType, declaredTypeID, declaredTypeHandle);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::InternalSerialize(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                               bool isDeclaredType, bool writeXsiType, int32_t declaredTypeID,
                                                                                               ::System::RuntimeTypeHandle declaredTypeHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, obj, isDeclaredType, writeXsiType, declaredTypeID, declaredTypeHandle);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithoutXsiType(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                     ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                     ::System::RuntimeTypeHandle declaredTypeHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "SerializeWithoutXsiType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataContract, xmlWriter, obj, declaredTypeHandle);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithXsiTypeAtTopLevel(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                            ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                            ::System::RuntimeTypeHandle originalDeclaredTypeHandle, ::System::Type* graphType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataContract, xmlWriter, obj, originalDeclaredTypeHandle, graphType);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithXsiType(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                  ::System::RuntimeTypeHandle objectTypeHandle, ::System::Type* objectType, int32_t declaredTypeID,
                                                                                                  ::System::RuntimeTypeHandle declaredTypeHandle, ::System::Type* declaredType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, obj, objectTypeHandle, objectType, declaredTypeID, declaredTypeHandle, declaredType);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnHandleIsReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                 ::System::Runtime::Serialization::DataContract* contract, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "OnHandleIsReference",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xmlWriter, contract, obj);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeAndVerifyType(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                    ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                    bool verifyKnownType, ::System::RuntimeTypeHandle declaredTypeHandle,
                                                                                                    ::System::Type* declaredType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "SerializeAndVerifyType",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeTypeHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataContract, xmlWriter, obj, verifyKnownType, declaredTypeHandle, declaredType);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                              ::System::Runtime::Serialization::DataContract* dataContract) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xmlWriter, dataContract);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* dataContractType,
                                                                                              ::StringW clrTypeName, ::StringW clrAssemblyName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xmlWriter, dataContractType, clrTypeName, clrAssemblyName);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* dataContractType,
                                                                                              ::System::Runtime::Serialization::SerializationInfo* serInfo) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xmlWriter, dataContractType, serInfo);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteAnyType(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteString(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteString(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::StringW value,
                                                                                         ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteBase64(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteBase64(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::ArrayW<uint8_t, ::Array<uint8_t>*> value,
                                                                                         ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteUri(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Uri* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteUri(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Uri* value,
                                                                                      ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteQName(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Xml::XmlQualifiedName* value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteQName(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Xml::XmlQualifiedName* value,
                                                                                        ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::HandleGraphAtTopLevel(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj,
                                                                                                   ::System::Runtime::Serialization::DataContract* contract) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "HandleGraphAtTopLevel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, obj, contract);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnHandleReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                               bool canContainCyclicReference) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xmlWriter, obj, canContainCyclicReference);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnEndHandleReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                  bool canContainCyclicReference) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, obj, canContainCyclicReference);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* memberType,
                                                                                       bool isMemberTypeSerializable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, memberType, isMemberTypeSerializable);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* memberType,
                                                                                       bool isMemberTypeSerializable, ::System::Xml::XmlDictionaryString* name,
                                                                                       ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteNull", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDictionaryString*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, memberType, isMemberTypeSerializable, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementArrayCount(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Array* array) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "IncrementArrayCount",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, array);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementCollectionCount(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                      ::System::Collections::ICollection* collection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "IncrementCollectionCount", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, collection);
}
template <typename T>
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementCollectionCountGeneric(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                             ::System::Collections::Generic::ICollection_1<T>* collection) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "IncrementCollectionCountGeneric", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, collection);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementCollectionCount(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "IncrementCollectionCount", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, size);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteArraySize(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, size);
}
template <typename T> inline T System::Runtime::Serialization::XmlObjectSerializerWriteContext::GetDefaultValue() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "GetDefaultValue",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline T System::Runtime::Serialization::XmlObjectSerializerWriteContext::GetNullableValue(::System::Nullable_1<T> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "GetNullableValue",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::ThrowRequiredMemberMustBeEmitted(::StringW memberName, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "ThrowRequiredMemberMustBeEmitted",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, memberName, type);
}
template <typename T> inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::GetHasValue(::System::Nullable_1<T> value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "GetHasValue",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteIXmlSerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "WriteIXmlSerializable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, obj);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteRootIXmlSerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "WriteRootIXmlSerializable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xmlWriter, obj);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteIXmlSerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                   ::System::Runtime::Serialization::XmlSerializableWriter* xmlSerializableWriter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteIXmlSerializable",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlSerializableWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xmlWriter, obj, xmlSerializableWriter);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::GetObjectData(::System::Runtime::Serialization::ISerializable* obj,
                                                                                           ::System::Runtime::Serialization::SerializationInfo* serInfo,
                                                                                           ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "GetObjectData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, serInfo, context);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteISerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                ::System::Runtime::Serialization::ISerializable* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteISerializable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, obj);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteSerializationInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* objType,
                                                                                                    ::System::Runtime::Serialization::SerializationInfo* serInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteSerializationInfo",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, objType, serInfo);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                ::System::Runtime::Serialization::ExtensionDataObject* extensionData, int32_t memberIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteExtensionData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ExtensionDataObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, extensionData, memberIndex);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataMember(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                      ::System::Runtime::Serialization::ExtensionDataMember* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteExtensionDataMember",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ExtensionDataMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, member);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                        ::System::Runtime::Serialization::IDataNode* dataNode) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                     ::System::Runtime::Serialization::IDataNode* dataNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "WriteExtensionDataValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, dataNode);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::TryWriteDeserializedExtensionData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                               ::System::Runtime::Serialization::IDataNode* dataNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "TryWriteDeserializedExtensionData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::IDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionClassData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                     ::System::Runtime::Serialization::ClassDataNode* dataNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "WriteExtensionClassData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ClassDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionCollectionData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                          ::System::Runtime::Serialization::CollectionDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteExtensionCollectionData",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CollectionDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionISerializableData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                             ::System::Runtime::Serialization::ISerializableDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "WriteExtensionISerializableData",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::ISerializableDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionXmlData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                   ::System::Runtime::Serialization::XmlDataNode* dataNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "WriteExtensionXmlData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlDataNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteDataContractValue(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                    ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                    ::System::RuntimeTypeHandle declaredTypeHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataContract, xmlWriter, obj, declaredTypeHandle);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteResolvedTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Type* objectType,
                                                                                                   ::System::Type* declaredType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(),
                                               "WriteResolvedTypeInfo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlWriterDelegator*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, objectType, declaredType);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::ResolveType(::System::Type* objectType, ::System::Type* declaredType,
                                                                                         ::ByRef<::System::Xml::XmlDictionaryString*> typeName,
                                                                                         ::ByRef<::System::Xml::XmlDictionaryString*> typeNamespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), "ResolveType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Xml::XmlDictionaryString*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, objectType, declaredType, typeName, typeNamespace);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer,
                                                                                           ::System::Runtime::Serialization::DataContract* contract,
                                                                                           ::System::Runtime::Serialization::DataContract* declaredContract) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, writer, contract, declaredContract);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::StringW dataContractName,
                                                                                           ::StringW dataContractNamespace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, dataContractName, dataContractNamespace);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer,
                                                                                           ::System::Xml::XmlDictionaryString* dataContractName,
                                                                                           ::System::Xml::XmlDictionaryString* dataContractNamespace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, dataContractName, dataContractNamespace);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*
System::Runtime::Serialization::XmlObjectSerializerWriteContext::New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                          ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                          ::System::Runtime::Serialization::DataContractResolver* resolver) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(serializer, rootTypeDataContract, resolver));
}
inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*
System::Runtime::Serialization::XmlObjectSerializerWriteContext::New_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(serializer));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerWriteContext::XmlObjectSerializerWriteContext() {}
