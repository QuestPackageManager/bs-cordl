#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingShaderHelpURLAttribute.hpp"
#include "UnityEngine/zzzz__HelpURLAttribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingShaderHelpURLAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute::*)()>(&::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6f8b444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute.get_URL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute::*)()>(
    &::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute::get_URL)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6f8b498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute*>(), 7 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::RayTracingShaderHelpURLAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::RayTracingShaderHelpURLAttribute::get_URL() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute* UnityEngine::Rendering::RayTracingShaderHelpURLAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RayTracingShaderHelpURLAttribute::RayTracingShaderHelpURLAttribute() {}
