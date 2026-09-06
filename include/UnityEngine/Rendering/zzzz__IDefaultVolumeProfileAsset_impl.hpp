#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDefaultVolumeProfileAsset.hpp"
#include "UnityEngine/Rendering/zzzz__IDefaultVolumeProfileAsset_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IDefaultVolumeProfileAsset.get_defaultVolumeProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::VolumeProfile> (::UnityEngine::Rendering::IDefaultVolumeProfileAsset::*)()>(
    &::UnityEngine::Rendering::IDefaultVolumeProfileAsset::get_defaultVolumeProfile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IDefaultVolumeProfileAsset*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::IDefaultVolumeProfileAsset*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IDefaultVolumeProfileAsset.set_defaultVolumeProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::IDefaultVolumeProfileAsset::*)(::UnityEngine::Rendering::VolumeProfile*)>(
    &::UnityEngine::Rendering::IDefaultVolumeProfileAsset::set_defaultVolumeProfile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::IDefaultVolumeProfileAsset*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::IDefaultVolumeProfileAsset*>(), 1 }));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> UnityEngine::Rendering::IDefaultVolumeProfileAsset::get_defaultVolumeProfile() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IDefaultVolumeProfileAsset*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::VolumeProfile>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::IDefaultVolumeProfileAsset::set_defaultVolumeProfile(::UnityEngine::Rendering::VolumeProfile* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::IDefaultVolumeProfileAsset*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::IDefaultVolumeProfileAsset::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::IDefaultVolumeProfileAsset::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
