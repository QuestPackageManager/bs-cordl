#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/NetDataContractSerializer.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializer_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/Runtime/Serialization/zzzz__NetDataContractSerializer_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializationSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__TypeInformation_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.get_UnsafeTypeForwardingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Runtime::Serialization::NetDataContractSerializer::get_UnsafeTypeForwardingEnabled)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x61528a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_UnsafeTypeForwardingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.get_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::StreamingContext (::System::Runtime::Serialization::NetDataContractSerializer::*)()>(
    &::System::Runtime::Serialization::NetDataContractSerializer::get_Context)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6152984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_Context", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.get_Binder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationBinder* (::System::Runtime::Serialization::NetDataContractSerializer::*)()>(
    &::System::Runtime::Serialization::NetDataContractSerializer::get_Binder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6152990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_Binder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.get_SurrogateSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ISurrogateSelector* (::System::Runtime::Serialization::NetDataContractSerializer::*)()>(
    &::System::Runtime::Serialization::NetDataContractSerializer::get_SurrogateSelector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6152998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_SurrogateSelector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.get_MaxItemsInObjectGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::NetDataContractSerializer::*)()>(
    &::System::Runtime::Serialization::NetDataContractSerializer::get_MaxItemsInObjectGraph)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61529a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_MaxItemsInObjectGraph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.get_IgnoreExtensionDataObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::NetDataContractSerializer::*)()>(
    &::System::Runtime::Serialization::NetDataContractSerializer::get_IgnoreExtensionDataObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61529a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_IgnoreExtensionDataObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.WriteStartObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::NetDataContractSerializer::*)(::System::Xml::XmlDictionaryWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::NetDataContractSerializer::WriteStartObject)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x61529b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.WriteObjectContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::NetDataContractSerializer::*)(::System::Xml::XmlDictionaryWriter*, ::System::Object*)>(
    &::System::Runtime::Serialization::NetDataContractSerializer::WriteObjectContent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6152b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::SerializationBinder*)>(
        &::System::Runtime::Serialization::NetDataContractSerializer::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6153158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                { "WriteClrTypeInfo",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::System::Runtime::Serialization::SerializationBinder*,
                                                                ::StringW, ::StringW)>(&::System::Runtime::Serialization::NetDataContractSerializer::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6153784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                { "WriteClrTypeInfo",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Type*, ::System::Runtime::Serialization::SerializationBinder*,
                                                                ::System::Runtime::Serialization::SerializationInfo*)>(
    &::System::Runtime::Serialization::NetDataContractSerializer::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6153854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                         { "WriteClrTypeInfo",
                                           {},
                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(),
                                             ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.WriteClrTypeInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::NetDataContractSerializer::WriteClrTypeInfo)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x615365c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                            { "WriteClrTypeInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.WriteEndObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::NetDataContractSerializer::*)(::System::Xml::XmlDictionaryWriter*)>(
    &::System::Runtime::Serialization::NetDataContractSerializer::WriteEndObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61539a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.ReadObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::NetDataContractSerializer::*)(::System::Xml::XmlDictionaryReader*, bool)>(
    &::System::Runtime::Serialization::NetDataContractSerializer::ReadObject)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6153b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.GetSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::ISerializationSurrogate* (*)(::System::Type*, ::System::Runtime::Serialization::ISurrogateSelector*,
                                                                                                                      ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Runtime::Serialization::NetDataContractSerializer::GetSurrogate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6153be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                             { "GetSurrogate",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.GetDataContractFromSurrogateSelector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (*)(::System::Runtime::Serialization::ISurrogateSelector*, ::System::Runtime::Serialization::StreamingContext,
                                                                    ::System::RuntimeTypeHandle, ::System::Type*, ::by_ref<::System::Collections::Hashtable*>)>(
        &::System::Runtime::Serialization::NetDataContractSerializer::GetDataContractFromSurrogateSelector)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x6153cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                         { "GetDataContractFromSurrogateSelector",
                                           {},
                                           { ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                             ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Collections::Hashtable*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.GetTypeInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::TypeInformation* (*)(::System::Type*)>(
    &::System::Runtime::Serialization::NetDataContractSerializer::GetTypeInformation)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x61532ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "GetTypeInformation", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.IsAssemblyNameForwardingSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::Runtime::Serialization::NetDataContractSerializer::IsAssemblyNameForwardingSafe)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x61534f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                                                           { "IsAssemblyNameForwardingSafe", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::NetDataContractSerializer.IsPublicKeyTokenForwardingSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Runtime::Serialization::NetDataContractSerializer::IsPublicKeyTokenForwardingSafe)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6154068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                             { "IsPublicKeyTokenForwardingSafe", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::StreamingContext& System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_set_context(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::System::Runtime::Serialization::SerializationBinder*& System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_get_binder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binder;
}
constexpr ::System::Runtime::Serialization::SerializationBinder* const& System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_get_binder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binder;
}
constexpr void System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_set_binder(::System::Runtime::Serialization::SerializationBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binder = value;
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector*& System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_get_surrogateSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateSelector;
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_get_surrogateSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateSelector;
}
constexpr void System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_set_surrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___surrogateSelector = value;
}
constexpr int32_t& System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_get_maxItemsInObjectGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxItemsInObjectGraph;
}
constexpr int32_t const& System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_get_maxItemsInObjectGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxItemsInObjectGraph;
}
constexpr void System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_set_maxItemsInObjectGraph(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxItemsInObjectGraph = value;
}
constexpr bool& System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_get_ignoreExtensionDataObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreExtensionDataObject;
}
constexpr bool const& System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_get_ignoreExtensionDataObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ignoreExtensionDataObject;
}
constexpr void System::Runtime::Serialization::NetDataContractSerializer::__cordl_internal_set_ignoreExtensionDataObject(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ignoreExtensionDataObject = value;
}
inline void System::Runtime::Serialization::NetDataContractSerializer::setStaticF_typeNameCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "typeNameCache", ::System::Runtime::Serialization::NetDataContractSerializer*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Serialization::NetDataContractSerializer::getStaticF_typeNameCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "typeNameCache", ::System::Runtime::Serialization::NetDataContractSerializer*>();
}
inline void System::Runtime::Serialization::NetDataContractSerializer::setStaticF_unsafeTypeForwardingEnabled(::System::Nullable_1<bool> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<bool>, "unsafeTypeForwardingEnabled", ::System::Runtime::Serialization::NetDataContractSerializer*>(
      std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> System::Runtime::Serialization::NetDataContractSerializer::getStaticF_unsafeTypeForwardingEnabled() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "unsafeTypeForwardingEnabled", ::System::Runtime::Serialization::NetDataContractSerializer*>();
}
inline bool System::Runtime::Serialization::NetDataContractSerializer::get_UnsafeTypeForwardingEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_UnsafeTypeForwardingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::Runtime::Serialization::StreamingContext System::Runtime::Serialization::NetDataContractSerializer::get_Context() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_Context", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::StreamingContext>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SerializationBinder* System::Runtime::Serialization::NetDataContractSerializer::get_Binder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_Binder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationBinder*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::ISurrogateSelector* System::Runtime::Serialization::NetDataContractSerializer::get_SurrogateSelector() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_SurrogateSelector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISurrogateSelector*>(this, ___internal_method);
}
inline int32_t System::Runtime::Serialization::NetDataContractSerializer::get_MaxItemsInObjectGraph() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_MaxItemsInObjectGraph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::NetDataContractSerializer::get_IgnoreExtensionDataObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "get_IgnoreExtensionDataObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::NetDataContractSerializer::WriteStartObject(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::NetDataContractSerializer::WriteObjectContent(::System::Xml::XmlDictionaryWriter* writer, ::System::Object* graph) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, graph);
}
inline void System::Runtime::Serialization::NetDataContractSerializer::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer,
                                                                                        ::System::Runtime::Serialization::DataContract* dataContract,
                                                                                        ::System::Runtime::Serialization::SerializationBinder* binder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                              { "WriteClrTypeInfo",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, dataContract, binder);
}
inline void System::Runtime::Serialization::NetDataContractSerializer::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Type* dataContractType,
                                                                                        ::System::Runtime::Serialization::SerializationBinder* binder, ::StringW defaultClrTypeName,
                                                                                        ::StringW defaultClrAssemblyName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                              { "WriteClrTypeInfo",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, dataContractType, binder, defaultClrTypeName, defaultClrAssemblyName);
}
inline void System::Runtime::Serialization::NetDataContractSerializer::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Type* dataContractType,
                                                                                        ::System::Runtime::Serialization::SerializationBinder* binder,
                                                                                        ::System::Runtime::Serialization::SerializationInfo* serInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                       { "WriteClrTypeInfo",
                                         {},
                                         { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Type*>(),
                                           ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>(), ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, dataContractType, binder, serInfo);
}
inline void System::Runtime::Serialization::NetDataContractSerializer::WriteClrTypeInfo(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::StringW clrTypeName,
                                                                                        ::StringW clrAssemblyName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                          { "WriteClrTypeInfo", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, clrTypeName, clrAssemblyName);
}
inline void System::Runtime::Serialization::NetDataContractSerializer::WriteEndObject(::System::Xml::XmlDictionaryWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::System::Object* System::Runtime::Serialization::NetDataContractSerializer::ReadObject(::System::Xml::XmlDictionaryReader* reader, bool verifyObjectName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, verifyObjectName);
}
inline ::System::Runtime::Serialization::ISerializationSurrogate*
System::Runtime::Serialization::NetDataContractSerializer::GetSurrogate(::System::Type* type, ::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                        ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                                                         { "GetSurrogate",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(),
                                                                                             ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::ISerializationSurrogate*>(nullptr, ___internal_method, type, surrogateSelector, context);
}
inline ::System::Runtime::Serialization::DataContract*
System::Runtime::Serialization::NetDataContractSerializer::GetDataContractFromSurrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* surrogateSelector,
                                                                                                ::System::Runtime::Serialization::StreamingContext context, ::System::RuntimeTypeHandle typeHandle,
                                                                                                ::System::Type* type, ::by_ref<::System::Collections::Hashtable*> surrogateDataContracts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                       { "GetDataContractFromSurrogateSelector",
                                         {},
                                         { ::i2c::type_of<::System::Runtime::Serialization::ISurrogateSelector*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>(),
                                           ::i2c::type_of<::System::RuntimeTypeHandle>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::System::Collections::Hashtable*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(nullptr, ___internal_method, surrogateSelector, context, typeHandle, type, surrogateDataContracts);
}
inline ::System::Runtime::Serialization::TypeInformation* System::Runtime::Serialization::NetDataContractSerializer::GetTypeInformation(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(), { "GetTypeInformation", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::TypeInformation*>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::NetDataContractSerializer::IsAssemblyNameForwardingSafe(::StringW originalAssemblyName, ::StringW newAssemblyName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                                                         { "IsAssemblyNameForwardingSafe", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, originalAssemblyName, newAssemblyName);
}
inline bool System::Runtime::Serialization::NetDataContractSerializer::IsPublicKeyTokenForwardingSafe(::ArrayW<uint8_t> sourceToken, ::ArrayW<uint8_t> destinationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::NetDataContractSerializer*>(),
                                                           { "IsPublicKeyTokenForwardingSafe", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceToken, destinationToken);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::NetDataContractSerializer::NetDataContractSerializer() {}
