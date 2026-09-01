#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Exceptions\RemoteProviderException.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__ProviderException_impl.hpp"
#include "UnityEngine/ResourceManagement/Exceptions/zzzz__RemoteProviderException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__IResourceLocation_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__UnityWebRequestResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)(
    ::StringW, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*, ::System::Exception*)>(
    &::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6911cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                                 ::i2c::type_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_Message)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6911d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException.get_WebRequestResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* (::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_WebRequestResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6911d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(), { "get_WebRequestResult", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::*)()>(
    &::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::ToString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6911d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*&
UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__cordl_internal_get__WebRequestResult_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebRequestResult_k__BackingField;
}
constexpr ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* const&
UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__cordl_internal_get__WebRequestResult_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WebRequestResult_k__BackingField;
}
constexpr void
UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::__cordl_internal_set__WebRequestResult_k__BackingField(::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WebRequestResult_k__BackingField = value;
}
inline void UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                                        ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult,
                                                                                        ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>(),
                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, location, uwrResult, innerException);
}
inline ::StringW UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_Message() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::get_WebRequestResult() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(), { "get_WebRequestResult", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Util::UnityWebRequestResult*>(this, ___internal_method);
}
inline ::StringW UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::ToString() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*
UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::New_ctor(::StringW message, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location,
                                                                               ::UnityEngine::ResourceManagement::Util::UnityWebRequestResult* uwrResult, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException*>(message, location, uwrResult, innerException));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::Exceptions::RemoteProviderException::RemoteProviderException() {}
