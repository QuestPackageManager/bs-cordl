#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/BackendHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BackendHelpers_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__RayTracingBackend_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers.GetFileNameOfShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend, ::StringW)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers::GetFileNameOfShader)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6e07ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers*>(),
                                                { "GetFileNameOfShader", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers.GetTypeOfShader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend)>(
    &::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers::GetTypeOfShader)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e07dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers*>(),
                                                             { "GetTypeOfShader", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>() } })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers::GetFileNameOfShader(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend backend, ::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers*>(),
                                              { "GetFileNameOfShader", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, backend, fileName);
}
inline ::System::Type* UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers::GetTypeOfShader(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend backend) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers*>(),
                                                           { "GetTypeOfShader", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnifiedRayTracing::RayTracingBackend>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, backend);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BackendHelpers::BackendHelpers() {}
