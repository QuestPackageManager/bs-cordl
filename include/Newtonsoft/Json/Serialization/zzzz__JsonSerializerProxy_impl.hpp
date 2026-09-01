#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\JsonSerializerProxy.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerProxy_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorEventArgs_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IContractResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IReferenceResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ISerializationBinder_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalBase_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalReader_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonSerializerInternalWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__ConstructorHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverterCollection_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameAssemblyFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.add_Error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::add_Error)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d578c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.remove_Error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::remove_Error)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d578e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_ReferenceResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::IReferenceResolver* (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_ReferenceResolver)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d578fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_ReferenceResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::Serialization::IReferenceResolver*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_ReferenceResolver)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d57918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_TraceWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ITraceWriter* (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_TraceWriter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d57934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_TraceWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::Serialization::ITraceWriter*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_TraceWriter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_EqualityComparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEqualityComparer* (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_EqualityComparer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_EqualityComparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::System::Collections::IEqualityComparer*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_EqualityComparer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_Converters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonConverterCollection* (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_Converters)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d579b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_DefaultValueHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DefaultValueHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_DefaultValueHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d579d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_DefaultValueHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::DefaultValueHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_DefaultValueHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d579f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_ContractResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::IContractResolver* (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_ContractResolver)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_ContractResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::Serialization::IContractResolver*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_ContractResolver)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_MissingMemberHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::MissingMemberHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_MissingMemberHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::MissingMemberHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_NullValueHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::NullValueHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_NullValueHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_NullValueHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::NullValueHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_NullValueHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_ObjectCreationHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::ObjectCreationHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_ObjectCreationHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_ObjectCreationHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::ObjectCreationHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_ObjectCreationHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_ReferenceLoopHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::ReferenceLoopHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_ReferenceLoopHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_ReferenceLoopHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::ReferenceLoopHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_ReferenceLoopHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_PreserveReferencesHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::PreserveReferencesHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_PreserveReferencesHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_PreserveReferencesHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::PreserveReferencesHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_PreserveReferencesHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_TypeNameHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::TypeNameHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_TypeNameHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_TypeNameHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::TypeNameHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_TypeNameHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_MetadataPropertyHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::MetadataPropertyHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_MetadataPropertyHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_MetadataPropertyHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::MetadataPropertyHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_MetadataPropertyHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_TypeNameAssemblyFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_TypeNameAssemblyFormat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_TypeNameAssemblyFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_TypeNameAssemblyFormat)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_TypeNameAssemblyFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::TypeNameAssemblyFormatHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_TypeNameAssemblyFormatHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_TypeNameAssemblyFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::TypeNameAssemblyFormatHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_TypeNameAssemblyFormatHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_ConstructorHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::ConstructorHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_ConstructorHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_ConstructorHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::ConstructorHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_ConstructorHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_Binder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationBinder* (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_Binder)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d57cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_Binder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::System::Runtime::Serialization::SerializationBinder*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_Binder)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d57cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_SerializationBinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder* (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_SerializationBinder)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d57d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_SerializationBinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::Serialization::ISerializationBinder*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_SerializationBinder)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d57d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::StreamingContext (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_Context)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_Context)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_Formatting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Formatting (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_Formatting)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_Formatting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::Formatting)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_Formatting)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_DateFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateFormatHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_DateFormatHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_DateFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::DateFormatHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_DateFormatHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateTimeZoneHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::DateTimeZoneHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_DateParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateParseHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_DateParseHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_DateParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::DateParseHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_DateParseHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_FloatFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::FloatFormatHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_FloatFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::FloatFormatHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_FloatParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::FloatParseHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_FloatParseHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_FloatParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::FloatParseHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_FloatParseHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_StringEscapeHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::StringEscapeHandling (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_StringEscapeHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::StringEscapeHandling)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_DateFormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_DateFormatString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_DateFormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::StringW)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_DateFormatString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_Culture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_Culture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_Culture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::System::Globalization::CultureInfo*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_Culture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_MaxDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_MaxDepth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_MaxDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_MaxDepth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d57fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.get_CheckAdditionalContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::get_CheckAdditionalContent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5d58000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.set_CheckAdditionalContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(bool)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::set_CheckAdditionalContent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d58020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.GetInternalSerializer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase* (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)()>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::GetInternalSerializer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d58044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), { "GetInternalSerializer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d58060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d51cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.DeserializeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::DeserializeInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d580e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.PopulateInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::JsonReader*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::PopulateInternal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d58118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::JsonSerializerProxy.SerializeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::JsonSerializerProxy::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*)>(
    &::Newtonsoft::Json::Serialization::JsonSerializerProxy::SerializeInternal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d5814c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 67 }));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*& Newtonsoft::Json::Serialization::JsonSerializerProxy::__cordl_internal_get__serializerReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializerReader;
}
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* const& Newtonsoft::Json::Serialization::JsonSerializerProxy::__cordl_internal_get__serializerReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializerReader;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerProxy::__cordl_internal_set__serializerReader(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializerReader = value;
}
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*& Newtonsoft::Json::Serialization::JsonSerializerProxy::__cordl_internal_get__serializerWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializerWriter;
}
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* const& Newtonsoft::Json::Serialization::JsonSerializerProxy::__cordl_internal_get__serializerWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializerWriter;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerProxy::__cordl_internal_set__serializerWriter(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializerWriter = value;
}
constexpr ::Newtonsoft::Json::JsonSerializer*& Newtonsoft::Json::Serialization::JsonSerializerProxy::__cordl_internal_get__serializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializer;
}
constexpr ::Newtonsoft::Json::JsonSerializer* const& Newtonsoft::Json::Serialization::JsonSerializerProxy::__cordl_internal_get__serializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializer;
}
constexpr void Newtonsoft::Json::Serialization::JsonSerializerProxy::__cordl_internal_set__serializer(::Newtonsoft::Json::JsonSerializer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializer = value;
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::add_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::remove_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::IReferenceResolver* Newtonsoft::Json::Serialization::JsonSerializerProxy::get_ReferenceResolver() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IReferenceResolver*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::ITraceWriter* Newtonsoft::Json::Serialization::JsonSerializerProxy::get_TraceWriter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ITraceWriter*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::IEqualityComparer* Newtonsoft::Json::Serialization::JsonSerializerProxy::get_EqualityComparer() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEqualityComparer*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_EqualityComparer(::System::Collections::IEqualityComparer* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonConverterCollection* Newtonsoft::Json::Serialization::JsonSerializerProxy::get_Converters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverterCollection*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::DefaultValueHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_DefaultValueHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DefaultValueHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::IContractResolver* Newtonsoft::Json::Serialization::JsonSerializerProxy::get_ContractResolver() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IContractResolver*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::MissingMemberHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_MissingMemberHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MissingMemberHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::NullValueHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_NullValueHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::NullValueHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::ObjectCreationHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_ObjectCreationHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ObjectCreationHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::ReferenceLoopHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_ReferenceLoopHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ReferenceLoopHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::PreserveReferencesHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_PreserveReferencesHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::PreserveReferencesHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::TypeNameHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_TypeNameHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::TypeNameHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::MetadataPropertyHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_MetadataPropertyHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MetadataPropertyHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle Newtonsoft::Json::Serialization::JsonSerializerProxy::get_TypeNameAssemblyFormat() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::TypeNameAssemblyFormatHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_TypeNameAssemblyFormatHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::TypeNameAssemblyFormatHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::ConstructorHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_ConstructorHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ConstructorHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::SerializationBinder* Newtonsoft::Json::Serialization::JsonSerializerProxy::get_Binder() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationBinder*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_Binder(::System::Runtime::Serialization::SerializationBinder* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::ISerializationBinder* Newtonsoft::Json::Serialization::JsonSerializerProxy::get_SerializationBinder() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ISerializationBinder*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::StreamingContext Newtonsoft::Json::Serialization::JsonSerializerProxy::get_Context() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::StreamingContext>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_Context(::System::Runtime::Serialization::StreamingContext value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Formatting Newtonsoft::Json::Serialization::JsonSerializerProxy::get_Formatting() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Formatting>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_Formatting(::Newtonsoft::Json::Formatting value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateFormatHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_DateFormatHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateFormatHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateTimeZoneHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_DateTimeZoneHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateTimeZoneHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateParseHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_DateParseHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateParseHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::FloatFormatHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_FloatFormatHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatFormatHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::FloatParseHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_FloatParseHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatParseHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::StringEscapeHandling Newtonsoft::Json::Serialization::JsonSerializerProxy::get_StringEscapeHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::StringEscapeHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::Serialization::JsonSerializerProxy::get_DateFormatString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_DateFormatString(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* Newtonsoft::Json::Serialization::JsonSerializerProxy::get_Culture() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_Culture(::System::Globalization::CultureInfo* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Serialization::JsonSerializerProxy::get_MaxDepth() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_MaxDepth(::System::Nullable_1<int32_t> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::Serialization::JsonSerializerProxy::get_CheckAdditionalContent() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::set_CheckAdditionalContent(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase* Newtonsoft::Json::Serialization::JsonSerializerProxy::GetInternalSerializer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), { "GetInternalSerializer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonSerializerInternalBase*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* serializerReader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializerReader);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* serializerWriter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializerWriter);
}
inline ::System::Object* Newtonsoft::Json::Serialization::JsonSerializerProxy::DeserializeInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::PopulateInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, target);
}
inline void Newtonsoft::Json::Serialization::JsonSerializerProxy::SerializeInternal(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* rootType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonWriter, value, rootType);
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy*
Newtonsoft::Json::Serialization::JsonSerializerProxy::New_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalReader* serializerReader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(serializerReader));
}
inline ::Newtonsoft::Json::Serialization::JsonSerializerProxy*
Newtonsoft::Json::Serialization::JsonSerializerProxy::New_ctor(::Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* serializerWriter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::JsonSerializerProxy*>(serializerWriter));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::JsonSerializerProxy::JsonSerializerProxy() {}
