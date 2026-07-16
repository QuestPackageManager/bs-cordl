#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IRenderPipelineGraphicsSettings.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::IRenderPipelineGraphicsSettings::*)()>(
    &::UnityEngine::Rendering::IRenderPipelineGraphicsSettings::get_version)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::IRenderPipelineGraphicsSettings::*)()>(
    &::UnityEngine::Rendering::IRenderPipelineGraphicsSettings::get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b07ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(), 1 }));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Rendering::IRenderPipelineGraphicsSettings::get_version() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::IRenderPipelineGraphicsSettings::get_isAvailableInPlayerBuild() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
