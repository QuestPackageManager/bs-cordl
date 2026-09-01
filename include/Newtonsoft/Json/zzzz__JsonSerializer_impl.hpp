#pragma once
// IWYU pragma private; include "Newtonsoft\Json\JsonSerializer.hpp"
#include "Newtonsoft/Json/zzzz__ConstructorHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_impl.hpp"
#include "Newtonsoft/Json/zzzz__MetadataPropertyHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__MissingMemberHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__NullValueHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__ObjectCreationHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__PreserveReferencesHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__ReferenceLoopHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__StringEscapeHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameAssemblyFormatHandling_impl.hpp"
#include "Newtonsoft/Json/zzzz__TypeNameHandling_impl.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializer_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ErrorEventArgs_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IContractResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IReferenceResolver_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ISerializationBinder_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__TraceJsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__ConstructorHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DefaultValueHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__FloatParseHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__Formatting_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverterCollection_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
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
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.add_Error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*)>(
    &::Newtonsoft::Json::JsonSerializer::add_Error)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cdead4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.remove_Error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*)>(
    &::Newtonsoft::Json::JsonSerializer::remove_Error)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cdeb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_ReferenceResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::IReferenceResolver* (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_ReferenceResolver)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cdec54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_ReferenceResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Serialization::IReferenceResolver*)>(
    &::Newtonsoft::Json::JsonSerializer::set_ReferenceResolver)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cdecb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_Binder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationBinder* (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_Binder)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5cded20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_Binder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::Runtime::Serialization::SerializationBinder*)>(
    &::Newtonsoft::Json::JsonSerializer::set_Binder)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5cdee20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_SerializationBinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder* (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_SerializationBinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdef10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_SerializationBinder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Serialization::ISerializationBinder*)>(
    &::Newtonsoft::Json::JsonSerializer::set_SerializationBinder)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cdef18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_TraceWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::ITraceWriter* (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_TraceWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdef88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_TraceWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Serialization::ITraceWriter*)>(
    &::Newtonsoft::Json::JsonSerializer::set_TraceWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdef90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_EqualityComparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEqualityComparer* (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_EqualityComparer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdef98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_EqualityComparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::Collections::IEqualityComparer*)>(
    &::Newtonsoft::Json::JsonSerializer::set_EqualityComparer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdefa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_TypeNameHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::TypeNameHandling (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_TypeNameHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdefa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_TypeNameHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::TypeNameHandling)>(&::Newtonsoft::Json::JsonSerializer::set_TypeNameHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdefb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_TypeNameAssemblyFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_TypeNameAssemblyFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_TypeNameAssemblyFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle)>(
    &::Newtonsoft::Json::JsonSerializer::set_TypeNameAssemblyFormat)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdf014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_TypeNameAssemblyFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::TypeNameAssemblyFormatHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_TypeNameAssemblyFormatHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_TypeNameAssemblyFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::TypeNameAssemblyFormatHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_TypeNameAssemblyFormatHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdf078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_PreserveReferencesHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::PreserveReferencesHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_PreserveReferencesHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_PreserveReferencesHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::PreserveReferencesHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_PreserveReferencesHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdf0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_ReferenceLoopHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::ReferenceLoopHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_ReferenceLoopHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_ReferenceLoopHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::ReferenceLoopHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_ReferenceLoopHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdf140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_MissingMemberHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::MissingMemberHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_MissingMemberHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::MissingMemberHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_MissingMemberHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdf1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_NullValueHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::NullValueHandling (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_NullValueHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_NullValueHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::NullValueHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_NullValueHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdf208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_DefaultValueHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DefaultValueHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_DefaultValueHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_DefaultValueHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::DefaultValueHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_DefaultValueHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdf26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_ObjectCreationHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::ObjectCreationHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_ObjectCreationHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_ObjectCreationHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::ObjectCreationHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_ObjectCreationHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdf2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_ConstructorHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::ConstructorHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_ConstructorHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_ConstructorHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::ConstructorHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_ConstructorHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdf334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_MetadataPropertyHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::MetadataPropertyHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_MetadataPropertyHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_MetadataPropertyHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::MetadataPropertyHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_MetadataPropertyHandling)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdf398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_Converters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonConverterCollection* (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_Converters)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cdf3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_ContractResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::IContractResolver* (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_ContractResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_ContractResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Serialization::IContractResolver*)>(
    &::Newtonsoft::Json::JsonSerializer::set_ContractResolver)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5cdf460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::StreamingContext (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_Context)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cdf51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_Context
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::Runtime::Serialization::StreamingContext)>(
    &::Newtonsoft::Json::JsonSerializer::set_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdf528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_Formatting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Formatting (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_Formatting)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cdf530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_Formatting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Formatting)>(&::Newtonsoft::Json::JsonSerializer::set_Formatting)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdf574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_DateFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateFormatHandling (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_DateFormatHandling)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cdf5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_DateFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::DateFormatHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_DateFormatHandling)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdf610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateTimeZoneHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cdf668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_DateTimeZoneHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::DateTimeZoneHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_DateTimeZoneHandling)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdf6d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_DateParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::DateParseHandling (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_DateParseHandling)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cdf728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_DateParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::DateParseHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_DateParseHandling)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdf78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_FloatParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::FloatParseHandling (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_FloatParseHandling)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cdf7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_FloatParseHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::FloatParseHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_FloatParseHandling)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdf828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_FloatFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::FloatFormatHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cdf880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_FloatFormatHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::FloatFormatHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_FloatFormatHandling)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdf8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_StringEscapeHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::StringEscapeHandling (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::get_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cdf91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_StringEscapeHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::StringEscapeHandling)>(
    &::Newtonsoft::Json::JsonSerializer::set_StringEscapeHandling)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdf960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_DateFormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_DateFormatString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cdf9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_DateFormatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::StringW)>(&::Newtonsoft::Json::JsonSerializer::set_DateFormatString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cdfa0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_Culture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureInfo* (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_Culture)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cdfa1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_Culture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::Globalization::CultureInfo*)>(&::Newtonsoft::Json::JsonSerializer::set_Culture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdfa84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_MaxDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_MaxDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cdfa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_MaxDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::Nullable_1<int32_t>)>(&::Newtonsoft::Json::JsonSerializer::set_MaxDepth)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cdfa94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 62 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.get_CheckAdditionalContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::get_CheckAdditionalContent)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cdfb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.set_CheckAdditionalContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(bool)>(&::Newtonsoft::Json::JsonSerializer::set_CheckAdditionalContent)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdfbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 64 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.IsCheckAdditionalContentSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::IsCheckAdditionalContentSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5cd5e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "IsCheckAdditionalContentSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)()>(&::Newtonsoft::Json::JsonSerializer::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5cdfc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializer* (*)()>(&::Newtonsoft::Json::JsonSerializer::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5cdfd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializer* (*)(::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonSerializer::Create)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cdfd9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Create", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.CreateDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializer* (*)()>(&::Newtonsoft::Json::JsonSerializer::CreateDefault)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ce05fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "CreateDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.CreateDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonSerializer* (*)(::Newtonsoft::Json::JsonSerializerSettings*)>(&::Newtonsoft::Json::JsonSerializer::CreateDefault)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5cd5790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "CreateDefault", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.ApplySerializerSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonSerializerSettings*)>(
    &::Newtonsoft::Json::JsonSerializer::ApplySerializerSettings)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x5cdfdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                         { "ApplySerializerSettings", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Populate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::IO::TextReader*, ::System::Object*)>(&::Newtonsoft::Json::JsonSerializer::Populate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ce09f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                                                                           { "Populate", {}, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Populate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*, ::System::Object*)>(
    &::Newtonsoft::Json::JsonSerializer::Populate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cd6280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Populate", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.PopulateInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*, ::System::Object*)>(
    &::Newtonsoft::Json::JsonSerializer::PopulateInternal)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5ce0a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 65 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::JsonSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ce1358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Deserialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonSerializer::*)(::System::IO::TextReader*, ::System::Type*)>(
    &::Newtonsoft::Json::JsonSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ce136c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                                                                           { "Deserialize", {}, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*)>(
    &::Newtonsoft::Json::JsonSerializer::Deserialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cd5f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Deserialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.DeserializeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*, ::System::Type*)>(
    &::Newtonsoft::Json::JsonSerializer::DeserializeInternal)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5ce13ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 66 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.SetupReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(
    ::Newtonsoft::Json::JsonReader*, ::by_ref<::System::Globalization::CultureInfo*>, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>,
    ::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>, ::by_ref<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>, ::by_ref<::System::Nullable_1<int32_t>>,
    ::by_ref<::StringW>)>(&::Newtonsoft::Json::JsonSerializer::SetupReader)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5ce0d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                                             { "SetupReader",
                                                               {},
                                                               { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Globalization::CultureInfo*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.ResetReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(
    ::Newtonsoft::Json::JsonReader*, ::System::Globalization::CultureInfo*, ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>, ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>,
    ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>, ::System::Nullable_1<int32_t>, ::StringW)>(&::Newtonsoft::Json::JsonSerializer::ResetReader)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5ce113c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                            { "ResetReader",
                              {},
                              { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                                ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>(), ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>(),
                                ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::IO::TextWriter*, ::System::Object*)>(&::Newtonsoft::Json::JsonSerializer::Serialize)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5ce1680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                                                                           { "Serialize", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*)>(
    &::Newtonsoft::Json::JsonSerializer::Serialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cd5a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                                { "Serialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::System::IO::TextWriter*, ::System::Object*, ::System::Type*)>(
    &::Newtonsoft::Json::JsonSerializer::Serialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ce171c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                                { "Serialize", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*)>(
    &::Newtonsoft::Json::JsonSerializer::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ce1708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Serialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.CreateTraceJsonReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::TraceJsonReader* (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonReader*)>(
    &::Newtonsoft::Json::JsonSerializer::CreateTraceJsonReader)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ce10ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "CreateTraceJsonReader", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.SerializeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*)>(
    &::Newtonsoft::Json::JsonSerializer::SerializeInternal)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x5ce17b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.GetReferenceResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Serialization::IReferenceResolver* (::Newtonsoft::Json::JsonSerializer::*)()>(
    &::Newtonsoft::Json::JsonSerializer::GetReferenceResolver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdec58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "GetReferenceResolver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.GetMatchingConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonConverter* (::Newtonsoft::Json::JsonSerializer::*)(::System::Type*)>(
    &::Newtonsoft::Json::JsonSerializer::GetMatchingConverter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ce1dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "GetMatchingConverter", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.GetMatchingConverter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::JsonConverter* (*)(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*, ::System::Type*)>(
    &::Newtonsoft::Json::JsonSerializer::GetMatchingConverter)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5ce1df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                            { "GetMatchingConverter", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::JsonSerializer.OnError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::JsonSerializer::*)(::Newtonsoft::Json::Serialization::ErrorEventArgs*)>(
    &::Newtonsoft::Json::JsonSerializer::OnError)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ce1f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "OnError", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ErrorEventArgs*>() } })));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::TypeNameHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__typeNameHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNameHandling;
}
constexpr ::Newtonsoft::Json::TypeNameHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__typeNameHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNameHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__typeNameHandling(::Newtonsoft::Json::TypeNameHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeNameHandling = value;
}
constexpr ::Newtonsoft::Json::TypeNameAssemblyFormatHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__typeNameAssemblyFormatHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNameAssemblyFormatHandling;
}
constexpr ::Newtonsoft::Json::TypeNameAssemblyFormatHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__typeNameAssemblyFormatHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeNameAssemblyFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__typeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeNameAssemblyFormatHandling = value;
}
constexpr ::Newtonsoft::Json::PreserveReferencesHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__preserveReferencesHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preserveReferencesHandling;
}
constexpr ::Newtonsoft::Json::PreserveReferencesHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__preserveReferencesHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preserveReferencesHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__preserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preserveReferencesHandling = value;
}
constexpr ::Newtonsoft::Json::ReferenceLoopHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__referenceLoopHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceLoopHandling;
}
constexpr ::Newtonsoft::Json::ReferenceLoopHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__referenceLoopHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceLoopHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__referenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceLoopHandling = value;
}
constexpr ::Newtonsoft::Json::MissingMemberHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__missingMemberHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingMemberHandling;
}
constexpr ::Newtonsoft::Json::MissingMemberHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__missingMemberHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missingMemberHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__missingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missingMemberHandling = value;
}
constexpr ::Newtonsoft::Json::ObjectCreationHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__objectCreationHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectCreationHandling;
}
constexpr ::Newtonsoft::Json::ObjectCreationHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__objectCreationHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectCreationHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__objectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectCreationHandling = value;
}
constexpr ::Newtonsoft::Json::NullValueHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__nullValueHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullValueHandling;
}
constexpr ::Newtonsoft::Json::NullValueHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__nullValueHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nullValueHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__nullValueHandling(::Newtonsoft::Json::NullValueHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nullValueHandling = value;
}
constexpr ::Newtonsoft::Json::DefaultValueHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__defaultValueHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValueHandling;
}
constexpr ::Newtonsoft::Json::DefaultValueHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__defaultValueHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValueHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__defaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValueHandling = value;
}
constexpr ::Newtonsoft::Json::ConstructorHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__constructorHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructorHandling;
}
constexpr ::Newtonsoft::Json::ConstructorHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__constructorHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____constructorHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__constructorHandling(::Newtonsoft::Json::ConstructorHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____constructorHandling = value;
}
constexpr ::Newtonsoft::Json::MetadataPropertyHandling& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__metadataPropertyHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metadataPropertyHandling;
}
constexpr ::Newtonsoft::Json::MetadataPropertyHandling const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__metadataPropertyHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metadataPropertyHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__metadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____metadataPropertyHandling = value;
}
constexpr ::Newtonsoft::Json::JsonConverterCollection*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__converters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converters;
}
constexpr ::Newtonsoft::Json::JsonConverterCollection* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__converters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____converters;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__converters(::Newtonsoft::Json::JsonConverterCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____converters = value;
}
constexpr ::Newtonsoft::Json::Serialization::IContractResolver*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__contractResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractResolver;
}
constexpr ::Newtonsoft::Json::Serialization::IContractResolver* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__contractResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractResolver;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__contractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contractResolver = value;
}
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__traceWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____traceWriter;
}
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__traceWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____traceWriter;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__traceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____traceWriter = value;
}
constexpr ::System::Collections::IEqualityComparer*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__equalityComparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____equalityComparer;
}
constexpr ::System::Collections::IEqualityComparer* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__equalityComparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____equalityComparer;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__equalityComparer(::System::Collections::IEqualityComparer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____equalityComparer = value;
}
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__serializationBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializationBinder;
}
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__serializationBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializationBinder;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__serializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializationBinder = value;
}
constexpr ::System::Runtime::Serialization::StreamingContext& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::System::Runtime::Serialization::StreamingContext const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__context(::System::Runtime::Serialization::StreamingContext value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__referenceResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceResolver;
}
constexpr ::Newtonsoft::Json::Serialization::IReferenceResolver* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__referenceResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____referenceResolver;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__referenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____referenceResolver = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__formatting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatting;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::Formatting> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__formatting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatting;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__formatting(::System::Nullable_1<::Newtonsoft::Json::Formatting> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____formatting = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__dateFormatHandling(::System::Nullable_1<::Newtonsoft::Json::DateFormatHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateFormatHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateTimeZoneHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateTimeZoneHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateTimeZoneHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__dateTimeZoneHandling(::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateTimeZoneHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateParseHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateParseHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateParseHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateParseHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__dateParseHandling(::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateParseHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__floatFormatHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFormatHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__floatFormatHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatFormatHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__floatFormatHandling(::System::Nullable_1<::Newtonsoft::Json::FloatFormatHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatFormatHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__floatParseHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatParseHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__floatParseHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatParseHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__floatParseHandling(::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatParseHandling = value;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__stringEscapeHandling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringEscapeHandling;
}
constexpr ::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__stringEscapeHandling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stringEscapeHandling;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__stringEscapeHandling(::System::Nullable_1<::Newtonsoft::Json::StringEscapeHandling> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stringEscapeHandling = value;
}
constexpr ::System::Globalization::CultureInfo*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__culture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr ::System::Globalization::CultureInfo* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__culture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____culture;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__culture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____culture = value;
}
constexpr ::System::Nullable_1<int32_t>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__maxDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepth;
}
constexpr ::System::Nullable_1<int32_t> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__maxDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepth;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__maxDepth(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxDepth = value;
}
constexpr bool& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__maxDepthSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepthSet;
}
constexpr bool const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__maxDepthSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDepthSet;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__maxDepthSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxDepthSet = value;
}
constexpr ::System::Nullable_1<bool>& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__checkAdditionalContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkAdditionalContent;
}
constexpr ::System::Nullable_1<bool> const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__checkAdditionalContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkAdditionalContent;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__checkAdditionalContent(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____checkAdditionalContent = value;
}
constexpr ::StringW& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr ::StringW const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatString;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__dateFormatString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateFormatString = value;
}
constexpr bool& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatStringSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatStringSet;
}
constexpr bool const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get__dateFormatStringSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateFormatStringSet;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set__dateFormatStringSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateFormatStringSet = value;
}
constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>*& Newtonsoft::Json::JsonSerializer::__cordl_internal_get_Error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Error;
}
constexpr ::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* const& Newtonsoft::Json::JsonSerializer::__cordl_internal_get_Error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Error;
}
constexpr void Newtonsoft::Json::JsonSerializer::__cordl_internal_set_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Error = value;
}
inline void Newtonsoft::Json::JsonSerializer::add_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::JsonSerializer::remove_Error(::System::EventHandler_1<::Newtonsoft::Json::Serialization::ErrorEventArgs*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::IReferenceResolver* Newtonsoft::Json::JsonSerializer::get_ReferenceResolver() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IReferenceResolver*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_ReferenceResolver(::Newtonsoft::Json::Serialization::IReferenceResolver* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::SerializationBinder* Newtonsoft::Json::JsonSerializer::get_Binder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationBinder*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_Binder(::System::Runtime::Serialization::SerializationBinder* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::ISerializationBinder* Newtonsoft::Json::JsonSerializer::get_SerializationBinder() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ISerializationBinder*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_SerializationBinder(::Newtonsoft::Json::Serialization::ISerializationBinder* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Serialization::ITraceWriter* Newtonsoft::Json::JsonSerializer::get_TraceWriter() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::ITraceWriter*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_TraceWriter(::Newtonsoft::Json::Serialization::ITraceWriter* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::IEqualityComparer* Newtonsoft::Json::JsonSerializer::get_EqualityComparer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEqualityComparer*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_EqualityComparer(::System::Collections::IEqualityComparer* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::TypeNameHandling Newtonsoft::Json::JsonSerializer::get_TypeNameHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::TypeNameHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_TypeNameHandling(::Newtonsoft::Json::TypeNameHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle Newtonsoft::Json::JsonSerializer::get_TypeNameAssemblyFormat() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_TypeNameAssemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::TypeNameAssemblyFormatHandling Newtonsoft::Json::JsonSerializer::get_TypeNameAssemblyFormatHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::TypeNameAssemblyFormatHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_TypeNameAssemblyFormatHandling(::Newtonsoft::Json::TypeNameAssemblyFormatHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::PreserveReferencesHandling Newtonsoft::Json::JsonSerializer::get_PreserveReferencesHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::PreserveReferencesHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_PreserveReferencesHandling(::Newtonsoft::Json::PreserveReferencesHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::ReferenceLoopHandling Newtonsoft::Json::JsonSerializer::get_ReferenceLoopHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ReferenceLoopHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_ReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::MissingMemberHandling Newtonsoft::Json::JsonSerializer::get_MissingMemberHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MissingMemberHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_MissingMemberHandling(::Newtonsoft::Json::MissingMemberHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::NullValueHandling Newtonsoft::Json::JsonSerializer::get_NullValueHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::NullValueHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_NullValueHandling(::Newtonsoft::Json::NullValueHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DefaultValueHandling Newtonsoft::Json::JsonSerializer::get_DefaultValueHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DefaultValueHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_DefaultValueHandling(::Newtonsoft::Json::DefaultValueHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::ObjectCreationHandling Newtonsoft::Json::JsonSerializer::get_ObjectCreationHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ObjectCreationHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_ObjectCreationHandling(::Newtonsoft::Json::ObjectCreationHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::ConstructorHandling Newtonsoft::Json::JsonSerializer::get_ConstructorHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::ConstructorHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_ConstructorHandling(::Newtonsoft::Json::ConstructorHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::MetadataPropertyHandling Newtonsoft::Json::JsonSerializer::get_MetadataPropertyHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::MetadataPropertyHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_MetadataPropertyHandling(::Newtonsoft::Json::MetadataPropertyHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonConverterCollection* Newtonsoft::Json::JsonSerializer::get_Converters() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverterCollection*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::IContractResolver* Newtonsoft::Json::JsonSerializer::get_ContractResolver() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IContractResolver*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_ContractResolver(::Newtonsoft::Json::Serialization::IContractResolver* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::StreamingContext Newtonsoft::Json::JsonSerializer::get_Context() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::StreamingContext>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_Context(::System::Runtime::Serialization::StreamingContext value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Formatting Newtonsoft::Json::JsonSerializer::get_Formatting() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Formatting>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_Formatting(::Newtonsoft::Json::Formatting value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateFormatHandling Newtonsoft::Json::JsonSerializer::get_DateFormatHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateFormatHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_DateFormatHandling(::Newtonsoft::Json::DateFormatHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateTimeZoneHandling Newtonsoft::Json::JsonSerializer::get_DateTimeZoneHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateTimeZoneHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_DateTimeZoneHandling(::Newtonsoft::Json::DateTimeZoneHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::DateParseHandling Newtonsoft::Json::JsonSerializer::get_DateParseHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::DateParseHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_DateParseHandling(::Newtonsoft::Json::DateParseHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::FloatParseHandling Newtonsoft::Json::JsonSerializer::get_FloatParseHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatParseHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_FloatParseHandling(::Newtonsoft::Json::FloatParseHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::FloatFormatHandling Newtonsoft::Json::JsonSerializer::get_FloatFormatHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::FloatFormatHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_FloatFormatHandling(::Newtonsoft::Json::FloatFormatHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::StringEscapeHandling Newtonsoft::Json::JsonSerializer::get_StringEscapeHandling() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::StringEscapeHandling>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_StringEscapeHandling(::Newtonsoft::Json::StringEscapeHandling value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Newtonsoft::Json::JsonSerializer::get_DateFormatString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_DateFormatString(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Globalization::CultureInfo* Newtonsoft::Json::JsonSerializer::get_Culture() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_Culture(::System::Globalization::CultureInfo* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::JsonSerializer::get_MaxDepth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_MaxDepth(::System::Nullable_1<int32_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 62 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonSerializer::get_CheckAdditionalContent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::set_CheckAdditionalContent(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 64 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Newtonsoft::Json::JsonSerializer::IsCheckAdditionalContentSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "IsCheckAdditionalContentSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Newtonsoft::Json::JsonSerializer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonSerializer* Newtonsoft::Json::JsonSerializer::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializer*>(nullptr, ___internal_method);
}
inline ::Newtonsoft::Json::JsonSerializer* Newtonsoft::Json::JsonSerializer::Create(::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Create", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializer*>(nullptr, ___internal_method, settings);
}
inline ::Newtonsoft::Json::JsonSerializer* Newtonsoft::Json::JsonSerializer::CreateDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "CreateDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializer*>(nullptr, ___internal_method);
}
inline ::Newtonsoft::Json::JsonSerializer* Newtonsoft::Json::JsonSerializer::CreateDefault(::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "CreateDefault", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonSerializer*>(nullptr, ___internal_method, settings);
}
inline void Newtonsoft::Json::JsonSerializer::ApplySerializerSettings(::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                       { "ApplySerializerSettings", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonSerializer*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, serializer, settings);
}
inline void Newtonsoft::Json::JsonSerializer::Populate(::System::IO::TextReader* reader, ::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                                                                         { "Populate", {}, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, target);
}
inline void Newtonsoft::Json::JsonSerializer::Populate(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Populate", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, target);
}
inline void Newtonsoft::Json::JsonSerializer::PopulateInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 65 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, target);
}
inline ::System::Object* Newtonsoft::Json::JsonSerializer::Deserialize(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Deserialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader);
}
inline ::System::Object* Newtonsoft::Json::JsonSerializer::Deserialize(::System::IO::TextReader* reader, ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                                                                         { "Deserialize", {}, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType);
}
template <typename T> inline T Newtonsoft::Json::JsonSerializer::Deserialize(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Deserialize", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, reader);
}
inline ::System::Object* Newtonsoft::Json::JsonSerializer::Deserialize(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Deserialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType);
}
inline ::System::Object* Newtonsoft::Json::JsonSerializer::DeserializeInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 66 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader, objectType);
}
inline void Newtonsoft::Json::JsonSerializer::SetupReader(::Newtonsoft::Json::JsonReader* reader, ::by_ref<::System::Globalization::CultureInfo*> previousCulture,
                                                          ::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>> previousDateTimeZoneHandling,
                                                          ::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>> previousDateParseHandling,
                                                          ::by_ref<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>> previousFloatParseHandling,
                                                          ::by_ref<::System::Nullable_1<int32_t>> previousMaxDepth, ::by_ref<::StringW> previousDateFormatString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                                           { "SetupReader",
                                                             {},
                                                             { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::by_ref<::System::Globalization::CultureInfo*>>(),
                                                               ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>>(),
                                                               ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>>(),
                                                               ::i2c::type_of<::by_ref<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>>(),
                                                               ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, previousCulture, previousDateTimeZoneHandling, previousDateParseHandling, previousFloatParseHandling,
                                                   previousMaxDepth, previousDateFormatString);
}
inline void Newtonsoft::Json::JsonSerializer::ResetReader(::Newtonsoft::Json::JsonReader* reader, ::System::Globalization::CultureInfo* previousCulture,
                                                          ::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling> previousDateTimeZoneHandling,
                                                          ::System::Nullable_1<::Newtonsoft::Json::DateParseHandling> previousDateParseHandling,
                                                          ::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling> previousFloatParseHandling, ::System::Nullable_1<int32_t> previousMaxDepth,
                                                          ::StringW previousDateFormatString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                          { "ResetReader",
                            {},
                            { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(),
                              ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::DateTimeZoneHandling>>(), ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::DateParseHandling>>(),
                              ::i2c::type_of<::System::Nullable_1<::Newtonsoft::Json::FloatParseHandling>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, previousCulture, previousDateTimeZoneHandling, previousDateParseHandling, previousFloatParseHandling,
                                                   previousMaxDepth, previousDateFormatString);
}
inline void Newtonsoft::Json::JsonSerializer::Serialize(::System::IO::TextWriter* textWriter, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                                                                         { "Serialize", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textWriter, value);
}
inline void Newtonsoft::Json::JsonSerializer::Serialize(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                              { "Serialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonWriter, value, objectType);
}
inline void Newtonsoft::Json::JsonSerializer::Serialize(::System::IO::TextWriter* textWriter, ::System::Object* value, ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                                              { "Serialize", {}, { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textWriter, value, objectType);
}
inline void Newtonsoft::Json::JsonSerializer::Serialize(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "Serialize", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonWriter*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonWriter, value);
}
inline ::Newtonsoft::Json::Serialization::TraceJsonReader* Newtonsoft::Json::JsonSerializer::CreateTraceJsonReader(::Newtonsoft::Json::JsonReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "CreateTraceJsonReader", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::TraceJsonReader*>(this, ___internal_method, reader);
}
inline void Newtonsoft::Json::JsonSerializer::SerializeInternal(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonWriter, value, objectType);
}
inline ::Newtonsoft::Json::Serialization::IReferenceResolver* Newtonsoft::Json::JsonSerializer::GetReferenceResolver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "GetReferenceResolver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::IReferenceResolver*>(this, ___internal_method);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::JsonSerializer::GetMatchingConverter(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "GetMatchingConverter", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*>(this, ___internal_method, type);
}
inline ::Newtonsoft::Json::JsonConverter* Newtonsoft::Json::JsonSerializer::GetMatchingConverter(::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>* converters,
                                                                                                 ::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(),
                          { "GetMatchingConverter", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::Newtonsoft::Json::JsonConverter*>*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonConverter*>(nullptr, ___internal_method, converters, objectType);
}
inline void Newtonsoft::Json::JsonSerializer::OnError(::Newtonsoft::Json::Serialization::ErrorEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::JsonSerializer*>(), { "OnError", {}, { ::i2c::type_of<::Newtonsoft::Json::Serialization::ErrorEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::Newtonsoft::Json::JsonSerializer* Newtonsoft::Json::JsonSerializer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::JsonSerializer*>());
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::JsonSerializer::JsonSerializer() {}
