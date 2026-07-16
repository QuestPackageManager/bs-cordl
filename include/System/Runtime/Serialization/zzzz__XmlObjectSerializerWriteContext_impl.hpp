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

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::XmlObjectSerializerWriteContext* (*)(::System::Runtime::Serialization::DataContractSerializer*, ::System::Runtime::Serialization::DataContract*,
                                                                                       ::System::Runtime::Serialization::DataContractResolver*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::CreateContext)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x616830c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                { "CreateContext",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.CreateContext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::XmlObjectSerializerWriteContext* (*)(::System::Runtime::Serialization::NetDataContractSerializer*, ::System::Collections::Hashtable*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::CreateContext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6168498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                            { "CreateContext", {}, { ::i2c::type_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::DataContractSerializer*, ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6168410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::NetDataContractSerializer*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6168550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::NetDataContractSerializer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.get_SerializedObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ObjectToIdCache* (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_SerializedObjects)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61685c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), { "get_SerializedObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.get_IsGetOnlyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_IsGetOnlyCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616862c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.set_IsGetOnlyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::set_IsGetOnlyCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6168634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.get_SerializeReadOnlyTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_SerializeReadOnlyTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616863c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), { "get_SerializeReadOnlyTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.get_UnsafeTypeForwardingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_UnsafeTypeForwardingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6168644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), { "get_UnsafeTypeForwardingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.StoreIsGetOnlyCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::StoreIsGetOnlyCollection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x616864c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), { "StoreIsGetOnlyCollection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.InternalSerializeReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool, bool, int32_t, ::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::InternalSerializeReference)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6168658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                             { "InternalSerializeReference",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.InternalSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool, bool, int32_t, ::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::InternalSerialize)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x61686f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.SerializeWithoutXsiType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithoutXsiType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x61688f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                { "SerializeWithoutXsiType",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                    ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.SerializeWithXsiTypeAtTopLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithXsiTypeAtTopLevel)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6168c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.SerializeWithXsiType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::RuntimeTypeHandle, ::System::Type*, int32_t, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithXsiType)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x6168f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.OnHandleIsReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*,
                                                                                                                                   ::System::Runtime::Serialization::DataContract*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnHandleIsReference)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x61689cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                             { "OnHandleIsReference",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.SerializeAndVerifyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool, ::System::RuntimeTypeHandle, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeAndVerifyType)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6168dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                         { "SerializeAndVerifyType",
                                           {},
                                           { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                             ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::DataContract*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6169284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616928c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::System::Runtime::Serialization::SerializationInfo*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6169294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteAnyType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteAnyType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x616929c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61692b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x61692e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::ArrayW<uint8_t>)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteBase64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6169434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteBase64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::ArrayW<uint8_t>, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteBase64)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6169458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Uri*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteUri)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6169550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Uri*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteUri)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x616956c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Xml::XmlQualifiedName*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteQName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x616968c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteQName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Xml::XmlQualifiedName*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteQName)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x61696b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.HandleGraphAtTopLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*,
                                                                                                                                   ::System::Object*, ::System::Runtime::Serialization::DataContract*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::HandleGraphAtTopLevel)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6169820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                             { "HandleGraphAtTopLevel",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.OnHandleReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnHandleReference)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6169944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.OnEndHandleReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, bool)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnEndHandleReference)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6169af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, bool)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6169b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                         { "WriteNull", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, bool, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x61693b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                             { "WriteNull",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.IncrementArrayCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Array*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementArrayCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6169b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                { "IncrementArrayCount", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Array*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.IncrementCollectionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Collections::ICollection*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementCollectionCount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6169c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                            { "IncrementCollectionCount", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.IncrementCollectionCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, int32_t)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementCollectionCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6169bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                { "IncrementCollectionCount", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteArraySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, int32_t)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteArraySize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6169ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.ThrowRequiredMemberMustBeEmitted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Type*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::ThrowRequiredMemberMustBeEmitted)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6169ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                             { "ThrowRequiredMemberMustBeEmitted", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteIXmlSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteIXmlSerializable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x615cdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                { "WriteIXmlSerializable", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteRootIXmlSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteRootIXmlSerializable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x615cd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                         { "WriteRootIXmlSerializable", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteIXmlSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::Runtime::Serialization::XmlSerializableWriter*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteIXmlSerializable)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6169dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                             { "WriteIXmlSerializable",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::XmlSerializableWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::ISerializable*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::GetObjectData)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x616a01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                { "GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::ISerializable*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteISerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::ISerializable*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteISerializable)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x616a0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
            { "WriteISerializable", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::ISerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteSerializationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::System::Runtime::Serialization::SerializationInfo*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteSerializationInfo)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x615b62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                             { "WriteSerializationInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*,
                                                                                                                                   ::System::Runtime::Serialization::ExtensionDataObject*, int32_t)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x616a454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                             { "WriteExtensionData",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionDataMember
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*,
                                                                                                                                   ::System::Runtime::Serialization::ExtensionDataMember*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataMember)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x616a5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                         { "WriteExtensionDataMember",
                                           {},
                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataMember*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionDataTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::IDataNode*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataTypeInfo)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x616ad40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionDataValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::IDataNode*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataValue)> {
  constexpr static std::size_t size = 0x704;
  constexpr static std::size_t addrs = 0x616a63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
            { "WriteExtensionDataValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.TryWriteDeserializedExtensionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::IDataNode*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::TryWriteDeserializedExtensionData)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x616bb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
            { "TryWriteDeserializedExtensionData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionClassData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::ClassDataNode*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionClassData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x616b010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
            { "WriteExtensionClassData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::ClassDataNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionCollectionData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*,
                                                                                                                                   ::System::Runtime::Serialization::CollectionDataNode*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionCollectionData)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x616b19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                         { "WriteExtensionCollectionData",
                                           {},
                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionDataNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionISerializableData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*,
                                                                                                                                   ::System::Runtime::Serialization::ISerializableDataNode*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionISerializableData)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x616b8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                         { "WriteExtensionISerializableData",
                                           {},
                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::ISerializableDataNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteExtensionXmlData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::XmlDataNode*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionXmlData)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x616b36c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
            { "WriteExtensionXmlData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::XmlDataNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteDataContractValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::RuntimeTypeHandle)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteDataContractValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x616bcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(::System::Runtime::Serialization::XmlWriterDelegator*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616bd04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteResolvedTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::System::Type*)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteResolvedTypeInfo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6168d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
            { "WriteResolvedTypeInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.ResolveType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Type*, ::System::Type*, ::by_ref<::System::Xml::XmlDictionaryString*>, ::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::ResolveType)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x616a26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                             { "ResolveType",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContract*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x616bd0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x616bdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerWriteContext.WriteTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerWriteContext::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x616be78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 36 }));
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
  this->___xmlSerializableWriter = value;
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
  this->___serializedObjects = value;
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
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                              { "CreateContext",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(nullptr, ___internal_method, serializer, rootTypeDataContract, dataContractResolver);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*
System::Runtime::Serialization::XmlObjectSerializerWriteContext::CreateContext(::System::Runtime::Serialization::NetDataContractSerializer* serializer,
                                                                               ::System::Collections::Hashtable* surrogateDataContracts) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                          { "CreateContext", {}, { ::i2c::type_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), ::i2c::type_of<::System::Collections::Hashtable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(nullptr, ___internal_method, serializer, surrogateDataContracts);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                   ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                   ::System::Runtime::Serialization::DataContractResolver* resolver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer, rootTypeDataContract, resolver);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::NetDataContractSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer);
}
inline ::System::Runtime::Serialization::ObjectToIdCache* System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_SerializedObjects() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), { "get_SerializedObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ObjectToIdCache*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_IsGetOnlyCollection() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::set_IsGetOnlyCollection(bool value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_SerializeReadOnlyTypes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), { "get_SerializeReadOnlyTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::get_UnsafeTypeForwardingEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), { "get_UnsafeTypeForwardingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::StoreIsGetOnlyCollection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), { "StoreIsGetOnlyCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::InternalSerializeReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                        bool isDeclaredType, bool writeXsiType, int32_t declaredTypeID,
                                                                                                        ::System::RuntimeTypeHandle declaredTypeHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                           { "InternalSerializeReference",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, isDeclaredType, writeXsiType, declaredTypeID, declaredTypeHandle);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::InternalSerialize(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                               bool isDeclaredType, bool writeXsiType, int32_t declaredTypeID,
                                                                                               ::System::RuntimeTypeHandle declaredTypeHandle) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, isDeclaredType, writeXsiType, declaredTypeID, declaredTypeHandle);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithoutXsiType(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                     ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                     ::System::RuntimeTypeHandle declaredTypeHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                              { "SerializeWithoutXsiType",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                  ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::RuntimeTypeHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataContract, xmlWriter, obj, declaredTypeHandle);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithXsiTypeAtTopLevel(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                            ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                            ::System::RuntimeTypeHandle originalDeclaredTypeHandle, ::System::Type* graphType) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataContract, xmlWriter, obj, originalDeclaredTypeHandle, graphType);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeWithXsiType(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                  ::System::RuntimeTypeHandle objectTypeHandle, ::System::Type* objectType, int32_t declaredTypeID,
                                                                                                  ::System::RuntimeTypeHandle declaredTypeHandle, ::System::Type* declaredType) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, objectTypeHandle, objectType, declaredTypeID, declaredTypeHandle, declaredType);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnHandleIsReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                 ::System::Runtime::Serialization::DataContract* contract, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                           { "OnHandleIsReference",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlWriter, contract, obj);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::SerializeAndVerifyType(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                    ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                    bool verifyKnownType, ::System::RuntimeTypeHandle declaredTypeHandle,
                                                                                                    ::System::Type* declaredType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                              { "SerializeAndVerifyType",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                  ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataContract, xmlWriter, obj, verifyKnownType, declaredTypeHandle, declaredType);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                              ::System::Runtime::Serialization::DataContract* dataContract) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlWriter, dataContract);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* dataContractType,
                                                                                              ::StringW clrTypeName, ::StringW clrAssemblyName) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlWriter, dataContractType, clrTypeName, clrAssemblyName);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* dataContractType,
                                                                                              ::System::Runtime::Serialization::SerializationInfo* serInfo) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlWriter, dataContractType, serInfo);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteAnyType(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteString(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteString(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::StringW value,
                                                                                         ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteBase64(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::ArrayW<uint8_t> value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteBase64(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::ArrayW<uint8_t> value,
                                                                                         ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteUri(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Uri* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteUri(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Uri* value,
                                                                                      ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteQName(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Xml::XmlQualifiedName* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteQName(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Xml::XmlQualifiedName* value,
                                                                                        ::System::Xml::XmlDictionaryString* name, ::System::Xml::XmlDictionaryString* ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, value, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::HandleGraphAtTopLevel(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* obj,
                                                                                                   ::System::Runtime::Serialization::DataContract* contract) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                           { "HandleGraphAtTopLevel",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::DataContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, obj, contract);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnHandleReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                               bool canContainCyclicReference) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlWriter, obj, canContainCyclicReference);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::OnEndHandleReference(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                  bool canContainCyclicReference) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, canContainCyclicReference);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* memberType,
                                                                                       bool isMemberTypeSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                       { "WriteNull", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, memberType, isMemberTypeSerializable);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* memberType,
                                                                                       bool isMemberTypeSerializable, ::System::Xml::XmlDictionaryString* name,
                                                                                       ::System::Xml::XmlDictionaryString* ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                           { "WriteNull",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Xml::XmlDictionaryString*>(), ::i2c::type_of<::System::Xml::XmlDictionaryString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, memberType, isMemberTypeSerializable, name, ns);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementArrayCount(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Array* array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                              { "IncrementArrayCount", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Array*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, array);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementCollectionCount(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                      ::System::Collections::ICollection* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                          { "IncrementCollectionCount", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Collections::ICollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, collection);
}
template <typename T>
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementCollectionCountGeneric(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                             ::System::Collections::Generic::ICollection_1<T>* collection) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                              { "IncrementCollectionCountGeneric",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, collection);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::IncrementCollectionCount(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                              { "IncrementCollectionCount", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, size);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteArraySize(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, size);
}
template <typename T> inline T System::Runtime::Serialization::XmlObjectSerializerWriteContext::GetDefaultValue() {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), { "GetDefaultValue", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline T System::Runtime::Serialization::XmlObjectSerializerWriteContext::GetNullableValue(::System::Nullable_1<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                              { "GetNullableValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Nullable_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::ThrowRequiredMemberMustBeEmitted(::StringW memberName, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                           { "ThrowRequiredMemberMustBeEmitted", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memberName, type);
}
template <typename T> inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::GetHasValue(::System::Nullable_1<T> value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                              { "GetHasValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Nullable_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteIXmlSerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                              { "WriteIXmlSerializable", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteRootIXmlSerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                              { "WriteRootIXmlSerializable", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xmlWriter, obj);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteIXmlSerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                   ::System::Runtime::Serialization::XmlSerializableWriter* xmlSerializableWriter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                           { "WriteIXmlSerializable",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::XmlSerializableWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xmlWriter, obj, xmlSerializableWriter);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::GetObjectData(::System::Runtime::Serialization::ISerializable* obj,
                                                                                           ::System::Runtime::Serialization::SerializationInfo* serInfo,
                                                                                           ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                              { "GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::ISerializable*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, serInfo, context);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteISerializable(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                ::System::Runtime::Serialization::ISerializable* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                       { "WriteISerializable", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::ISerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteSerializationInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Type* objType,
                                                                                                    ::System::Runtime::Serialization::SerializationInfo* serInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                         { "WriteSerializationInfo",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, objType, serInfo);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                ::System::Runtime::Serialization::ExtensionDataObject* extensionData, int32_t memberIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                                                         { "WriteExtensionData",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataObject*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, extensionData, memberIndex);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataMember(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                      ::System::Runtime::Serialization::ExtensionDataMember* member) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
          { "WriteExtensionDataMember", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::ExtensionDataMember*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, member);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                        ::System::Runtime::Serialization::IDataNode* dataNode) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionDataValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                     ::System::Runtime::Serialization::IDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
          { "WriteExtensionDataValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, dataNode);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::TryWriteDeserializedExtensionData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                               ::System::Runtime::Serialization::IDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
          { "TryWriteDeserializedExtensionData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::IDataNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionClassData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                     ::System::Runtime::Serialization::ClassDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
          { "WriteExtensionClassData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::ClassDataNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionCollectionData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                          ::System::Runtime::Serialization::CollectionDataNode* dataNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                       { "WriteExtensionCollectionData",
                                         {},
                                         { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::CollectionDataNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionISerializableData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                             ::System::Runtime::Serialization::ISerializableDataNode* dataNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                       { "WriteExtensionISerializableData",
                                         {},
                                         { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::ISerializableDataNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteExtensionXmlData(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter,
                                                                                                   ::System::Runtime::Serialization::XmlDataNode* dataNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
          { "WriteExtensionXmlData", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::XmlDataNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, dataNode);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteDataContractValue(::System::Runtime::Serialization::DataContract* dataContract,
                                                                                                    ::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                                                    ::System::RuntimeTypeHandle declaredTypeHandle) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataContract, xmlWriter, obj, declaredTypeHandle);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteNull(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteResolvedTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Type* objectType,
                                                                                                   ::System::Type* declaredType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
          { "WriteResolvedTypeInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, objectType, declaredType);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::ResolveType(::System::Type* objectType, ::System::Type* declaredType,
                                                                                         ::by_ref<::System::Xml::XmlDictionaryString*> typeName,
                                                                                         ::by_ref<::System::Xml::XmlDictionaryString*> typeNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(),
                                                           { "ResolveType",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>(),
                                                               ::i2c::type_of<::by_ref<::System::Xml::XmlDictionaryString*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, objectType, declaredType, typeName, typeNamespace);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer,
                                                                                           ::System::Runtime::Serialization::DataContract* contract,
                                                                                           ::System::Runtime::Serialization::DataContract* declaredContract) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, writer, contract, declaredContract);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::StringW dataContractName,
                                                                                           ::StringW dataContractNamespace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, dataContractName, dataContractNamespace);
}
inline void System::Runtime::Serialization::XmlObjectSerializerWriteContext::WriteTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer,
                                                                                           ::System::Xml::XmlDictionaryString* dataContractName,
                                                                                           ::System::Xml::XmlDictionaryString* dataContractNamespace) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, dataContractName, dataContractNamespace);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*
System::Runtime::Serialization::XmlObjectSerializerWriteContext::New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                          ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                          ::System::Runtime::Serialization::DataContractResolver* resolver) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(serializer, rootTypeDataContract, resolver));
}
inline ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*
System::Runtime::Serialization::XmlObjectSerializerWriteContext::New_ctor(::System::Runtime::Serialization::NetDataContractSerializer* serializer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerWriteContext*>(serializer));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerWriteContext::XmlObjectSerializerWriteContext() {}
