#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Exceptions\UnknownResourceProviderException.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ResourceManagerException_impl.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__UnknownResourceProviderException_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException.get_Location
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* (
    ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)()>(&::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69119dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(), { "get_Location", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException.set_Location
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::set_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69119e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(),
                                                             { "set_Location", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x690d46c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69119ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69119f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)(::StringW, ::System::Exception*)>(
    &::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69119f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                                                                 ::System::Runtime::Serialization::StreamingContext)>(
    &::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69119f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::get_Message)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x69119fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6911b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*&
UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::__cordl_internal_get__Location_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Location_k__BackingField;
}
constexpr ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* const&
UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::__cordl_internal_get__Location_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Location_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::__cordl_internal_set__Location_k__BackingField(
    ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Location_k__BackingField = value;
}
inline ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::get_Location() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(), { "get_Location", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::set_Location(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(),
                                                           { "set_Location", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location);
}
inline void UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline void UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                                 ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline ::StringW UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::get_Message() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*
UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(location));
}
inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>());
}
inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException* UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(message));
}
inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*
UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(message, innerException));
}
inline ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*
UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::New_ctor(::System::Runtime::Serialization::SerializationInfo* message,
                                                                                        ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException*>(message, context));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Exceptions::UnknownResourceProviderException::UnknownResourceProviderException() {}
