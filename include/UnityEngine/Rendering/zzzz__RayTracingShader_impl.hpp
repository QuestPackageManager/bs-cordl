#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingShader.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingShader_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingShader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingShader::*)()>(&::UnityEngine::Rendering::RayTracingShader::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b2a728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingShader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RayTracingShader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingShader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RayTracingShader* UnityEngine::Rendering::RayTracingShader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RayTracingShader*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingShader::RayTracingShader() {}
