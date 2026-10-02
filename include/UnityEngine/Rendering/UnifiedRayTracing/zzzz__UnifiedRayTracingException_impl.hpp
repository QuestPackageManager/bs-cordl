#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/UnifiedRayTracingException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__UnifiedRayTracingError_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__UnifiedRayTracingException_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__UnifiedRayTracingError_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::*)(
    ::StringW, ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError)>(&::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e0e450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException.get_errorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError (
    ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::*)()>(&::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::get_errorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0e4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException*>(), { "get_errorCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException.set_errorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::*)(
    ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError)>(&::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::set_errorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0e4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException*>(),
                                                             { "set_errorCode", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError&
UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::__cordl_internal_get__errorCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errorCode_k__BackingField;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError const&
UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::__cordl_internal_get__errorCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____errorCode_k__BackingField;
}
constexpr void
UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::__cordl_internal_set__errorCode_k__BackingField(::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____errorCode_k__BackingField = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::_ctor(::StringW message, ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, errorCode);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::get_errorCode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException*>(), { "get_errorCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::set_errorCode(::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException*>(),
                                                           { "set_errorCode", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException*
UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::New_ctor(::StringW message, ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingError errorCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException*>(message, errorCode));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::UnifiedRayTracingException::UnifiedRayTracingException() {}
