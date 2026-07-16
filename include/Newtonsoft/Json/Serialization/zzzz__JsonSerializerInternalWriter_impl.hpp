#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerInternalWriter.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonArrayContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonDictionaryContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonDynamicContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonISerializableContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonObjectContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonPrimitiveContract_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonProperty_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerProxy_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonStringContract_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Dynamic/zzzz__IDynamicMetaObjectProvider_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonSerializer*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d4eb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::Serialize)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5d4ec18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                { "Serialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetInternalSerializer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonSerializerProxy* (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetInternalSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d4fa20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(), { "GetInternalSerializer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetContractSafe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetContractSafe)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d4ee94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(), { "GetContractSafe", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetContract)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d4fb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(), { "GetContract", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializePrimitive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializePrimitive)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d4fbd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "SerializePrimitive",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeValue)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x5d4f2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "SerializeValue",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ResolveIsReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*,
    ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ResolveIsReference)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d52cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "ResolveIsReference",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*,
    ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteReference)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5d4eea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                { "ShouldWriteReference",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::System::Object*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteProperty)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d52d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                             { "ShouldWriteProperty",
                                                               {},
                                                               { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.CheckForCircularReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CheckForCircularReference)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x5d52e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "CheckForCircularReference",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReference)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5d4f058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                             { "WriteReference", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetReference)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5d5334c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                             { "GetReference", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.TryConvertToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Type*, ::by_ref<::StringW>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::TryConvertToString)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d53540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                { "TryConvertToString", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonStringContract*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d5173c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                            { "SerializeString",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonStringContract*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.OnSerializing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerializing)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5d5381c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
            { "OnSerializing", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.OnSerialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerialized)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5d53a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
            { "OnSerialized", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeObject)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x5d506e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "SerializeObject",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.CalculatePropertyValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonProperty*, ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>, ::by_ref<::System::Object*>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CalculatePropertyValues)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x5d53da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                            { "CalculatePropertyValues",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteObjectStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteObjectStart)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5d53c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "WriteObjectStart",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasCreatorParameter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(
        &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasCreatorParameter)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5d54b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
            { "HasCreatorParameter", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteReferenceIdProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Type*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReferenceIdProperty)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5d54c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                            { "WriteReferenceIdProperty", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteTypeProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, ::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteTypeProperty)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5d4ff24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                             { "WriteTypeProperty", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::DefaultValueHandling, ::Newtonsoft::Json::DefaultValueHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d52e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                { "HasFlag", {}, { ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>(), ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::PreserveReferencesHandling, ::Newtonsoft::Json::PreserveReferencesHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d52d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "HasFlag", {}, { ::i2c::type_of<::Newtonsoft::Json::PreserveReferencesHandling>(), ::i2c::type_of<::Newtonsoft::Json::PreserveReferencesHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HasFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::TypeNameHandling, ::Newtonsoft::Json::TypeNameHandling)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d54ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                             { "HasFlag", {}, { ::i2c::type_of<::Newtonsoft::Json::TypeNameHandling>(), ::i2c::type_of<::Newtonsoft::Json::TypeNameHandling>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeConvertable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::JsonConverter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*,
    ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeConvertable)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5d501bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                { "SerializeConvertable",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::JsonConverter*>(), ::i2c::type_of<::System::Object*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Collections::IEnumerable*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeList)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x5d50e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "SerializeList",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Collections::IEnumerable*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeMultidimensionalArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Array*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5d51528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "SerializeMultidimensionalArray",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Array*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeMultidimensionalArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Array*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, int32_t, ::ArrayW<int32_t>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5d55168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                            { "SerializeMultidimensionalArray",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(),
                                ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.WriteStartArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteStartArray)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5d54ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "WriteStartArray",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeISerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Runtime::Serialization::ISerializable*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeISerializable)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x5d52810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "SerializeISerializable",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Runtime::Serialization::ISerializable*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeDynamic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Dynamic::IDynamicMetaObjectProvider*, ::Newtonsoft::Json::Serialization::JsonDynamicContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeDynamic)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x5d5203c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "SerializeDynamic",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Dynamic::IDynamicMetaObjectProvider*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteDynamicProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteDynamicProperty)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d555d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                                                           { "ShouldWriteDynamicProperty", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldWriteType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::TypeNameHandling, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*,
    ::Newtonsoft::Json::Serialization::JsonProperty*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteType)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5d4fd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                { "ShouldWriteType",
                                                  {},
                                                  { ::i2c::type_of<::Newtonsoft::Json::TypeNameHandling>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                                    ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.SerializeDictionary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Collections::IDictionary*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::Newtonsoft::Json::Serialization::JsonProperty*,
    ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeDictionary)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x5d517bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                         { "SerializeDictionary",
                                           {},
                                           { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Collections::IDictionary*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                             ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.GetPropertyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::by_ref<bool>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetPropertyName)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x5d541dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                             { "GetPropertyName",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(),
                                                                 ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.HandleError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(::Newtonsoft::Json::JsonWriter*, int32_t)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HandleError)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d4f9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                                                           { "HandleError", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.ShouldSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldSerialize)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5d546d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                            { "ShouldSerialize",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter.IsSpecified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::*)(
    ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*)>(&::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::IsSpecified)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5d54930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
            { "IsSpecified", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__rootType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootType;
}
constexpr ::System::Type* const& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__rootType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootType;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_set__rootType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rootType = value;
}
constexpr int32_t& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__rootLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootLevel;
}
constexpr int32_t const& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__rootLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootLevel;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_set__rootLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rootLevel = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__serializeStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializeStack;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_get__serializeStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializeStack;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::__cordl_internal_set__serializeStack(::System::Collections::Generic::List_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializeStack = value;
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::_ctor(::Newtonsoft::Json::JsonSerializer* serializer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::Serialize(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                              { "Serialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonWriter, value, objectType);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy* Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetInternalSerializer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(), { "GetInternalSerializer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetContractSafe(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(), { "GetContractSafe", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetContract(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(), { "GetContract", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializePrimitive(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value,
                                                                                              ::Newtonsoft::Json::Serialization::JsonPrimitiveContract* contract,
                                                                                              ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                              ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                              ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "SerializePrimitive",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonPrimitiveContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, contract, member, containerContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeValue(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value,
                                                                                          ::Newtonsoft::Json::Serialization::JsonContract* valueContract,
                                                                                          ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                          ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                          ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "SerializeValue",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, valueContract, member, containerContract, containerProperty);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ResolveIsReference(::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                                                    ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                                                    ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                                                                                    ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "ResolveIsReference",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method, contract, property, collectionContract, containerProperty);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteReference(::System::Object* value, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                                ::Newtonsoft::Json::Serialization::JsonContract* valueContract,
                                                                                                ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                                                                ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                              { "ShouldWriteReference",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, property, valueContract, collectionContract, containerProperty);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteProperty(::System::Object* memberValue, ::Newtonsoft::Json::Serialization::JsonObjectContract* containerContract,
                                                                                               ::Newtonsoft::Json::Serialization::JsonProperty* property) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                           { "ShouldWriteProperty",
                                                             {},
                                                             { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, memberValue, containerContract, property);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CheckForCircularReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value,
                                                                                                     ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                                     ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                                     ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                                     ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "CheckForCircularReference",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, writer, value, property, contract, containerContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                           { "WriteReference", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                           { "GetReference", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, writer, value);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::TryConvertToString(::System::Object* value, ::System::Type* type, ::by_ref<::StringW> s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                              { "TryConvertToString", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, type, s);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeString(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value,
                                                                                           ::Newtonsoft::Json::Serialization::JsonStringContract* contract) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                          { "SerializeString",
                            {},
                            { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonStringContract*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, contract);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerializing(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                         ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
          { "OnSerializing", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, contract, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::OnSerialized(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                        ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
          { "OnSerialized", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, contract, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeObject(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value,
                                                                                           ::Newtonsoft::Json::Serialization::JsonObjectContract* contract,
                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                           ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "SerializeObject",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonObjectContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::CalculatePropertyValues(
    ::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContainerContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member,
    ::Newtonsoft::Json::Serialization::JsonProperty* property, ::by_ref<::Newtonsoft::Json::Serialization::JsonContract*> memberContract, ::by_ref<::System::Object*> memberValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                          { "CalculatePropertyValues",
                            {},
                            { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                              ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                              ::i2c::type_of<::by_ref<::Newtonsoft::Json::Serialization::JsonContract*>>(), ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, writer, value, contract, member, property, memberContract, memberValue);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteObjectStart(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value,
                                                                                            ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                            ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                            ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                                                            ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "WriteObjectStart",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasCreatorParameter(::Newtonsoft::Json::Serialization::JsonContainerContract* contract,
                                                                                               ::Newtonsoft::Json::Serialization::JsonProperty* property) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
          { "HasCreatorParameter", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, contract, property);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteReferenceIdProperty(::Newtonsoft::Json::JsonWriter* writer, ::System::Type* type, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                          { "WriteReferenceIdProperty", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, type, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteTypeProperty(::Newtonsoft::Json::JsonWriter* writer, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                           { "WriteTypeProperty", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, type);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                              { "HasFlag", {}, { ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>(), ::i2c::type_of<::Newtonsoft::Json::DefaultValueHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, flag);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag(::Newtonsoft::Json::PreserveReferencesHandling value, ::Newtonsoft::Json::PreserveReferencesHandling flag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "HasFlag", {}, { ::i2c::type_of<::Newtonsoft::Json::PreserveReferencesHandling>(), ::i2c::type_of<::Newtonsoft::Json::PreserveReferencesHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, flag);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HasFlag(::Newtonsoft::Json::TypeNameHandling value, ::Newtonsoft::Json::TypeNameHandling flag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                           { "HasFlag", {}, { ::i2c::type_of<::Newtonsoft::Json::TypeNameHandling>(), ::i2c::type_of<::Newtonsoft::Json::TypeNameHandling>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, flag);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeConvertable(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::JsonConverter* converter,
                                                                                                ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                                ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                                                                ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                              { "SerializeConvertable",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::JsonConverter*>(), ::i2c::type_of<::System::Object*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, converter, value, contract, collectionContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeList(::Newtonsoft::Json::JsonWriter* writer, ::System::Collections::IEnumerable* values,
                                                                                         ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                                                         ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                         ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                                                         ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "SerializeList",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Collections::IEnumerable*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, values, contract, member, collectionContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Array* values,
                                                                                                          ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                                                                          ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                                          ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                                                                          ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "SerializeMultidimensionalArray",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Array*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, values, contract, member, collectionContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Array* values,
                                                                                                          ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                                                                          ::Newtonsoft::Json::Serialization::JsonProperty* member, int32_t initialDepth,
                                                                                                          ::ArrayW<int32_t> indices) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                          { "SerializeMultidimensionalArray",
                            {},
                            { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Array*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(),
                              ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, values, contract, member, initialDepth, indices);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::WriteStartArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* values,
                                                                                           ::Newtonsoft::Json::Serialization::JsonArrayContract* contract,
                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                           ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "WriteStartArray",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonArrayContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, writer, values, contract, member, containerContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeISerializable(::Newtonsoft::Json::JsonWriter* writer, ::System::Runtime::Serialization::ISerializable* value,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                                                                  ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "SerializeISerializable",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Runtime::Serialization::ISerializable*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonISerializableContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeDynamic(::Newtonsoft::Json::JsonWriter* writer, ::System::Dynamic::IDynamicMetaObjectProvider* value,
                                                                                            ::Newtonsoft::Json::Serialization::JsonDynamicContract* contract,
                                                                                            ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                            ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                                                            ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "SerializeDynamic",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Dynamic::IDynamicMetaObjectProvider*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonDynamicContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value, contract, member, collectionContract, containerProperty);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteDynamicProperty(::System::Object* memberValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                                                         { "ShouldWriteDynamicProperty", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, memberValue);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldWriteType(::Newtonsoft::Json::TypeNameHandling typeNameHandlingFlag,
                                                                                           ::Newtonsoft::Json::Serialization::JsonContract* contract,
                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                           ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract,
                                                                                           ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                              { "ShouldWriteType",
                                                {},
                                                { ::i2c::type_of<::Newtonsoft::Json::TypeNameHandling>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(),
                                                  ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, typeNameHandlingFlag, contract, member, containerContract, containerProperty);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::SerializeDictionary(::Newtonsoft::Json::JsonWriter* writer, ::System::Collections::IDictionary* values,
                                                                                               ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract,
                                                                                               ::Newtonsoft::Json::Serialization::JsonProperty* member,
                                                                                               ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract,
                                                                                               ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                       { "SerializeDictionary",
                                         {},
                                         { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Collections::IDictionary*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonDictionaryContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(),
                                           ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContainerContract*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, values, contract, member, collectionContract, containerProperty);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::GetPropertyName(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* name,
                                                                                                ::Newtonsoft::Json::Serialization::JsonContract* contract, ::by_ref<bool> escape) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                           { "GetPropertyName",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(),
                                                               ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonContract*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, writer, name, contract, escape);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::HandleError(::Newtonsoft::Json::JsonWriter* writer, int32_t initialDepth) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
                                                                                         { "HandleError", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, initialDepth);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::ShouldSerialize(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                           ::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
          { "ShouldSerialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, writer, property, target);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::IsSpecified(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonProperty* property,
                                                                                       ::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(),
          { "IsSpecified", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonProperty*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, writer, property, target);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::New_ctor(::Newtonsoft::Json::JsonSerializer* serializer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>(serializer));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter::JsonSerializerInternalWriter() {}
