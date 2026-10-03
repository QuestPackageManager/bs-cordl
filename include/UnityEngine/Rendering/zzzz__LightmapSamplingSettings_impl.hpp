#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightmapSamplingSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LightmapSamplingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LightmapSamplingSettings.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::LightmapSamplingSettings::*)()>(
    &::UnityEngine::Rendering::LightmapSamplingSettings::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc2888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightmapSamplingSettings*>(), { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightmapSamplingSettings.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LightmapSamplingSettings::*)()>(
    &::UnityEngine::Rendering::LightmapSamplingSettings::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc2890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightmapSamplingSettings*>(),
                                                                                           { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightmapSamplingSettings.get_useBicubicLightmapSampling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::LightmapSamplingSettings::*)()>(
    &::UnityEngine::Rendering::LightmapSamplingSettings::get_useBicubicLightmapSampling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc2898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightmapSamplingSettings*>(), { "get_useBicubicLightmapSampling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightmapSamplingSettings.set_useBicubicLightmapSampling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LightmapSamplingSettings::*)(bool)>(
    &::UnityEngine::Rendering::LightmapSamplingSettings::set_useBicubicLightmapSampling)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bc28a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightmapSamplingSettings*>(), { "set_useBicubicLightmapSampling", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LightmapSamplingSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LightmapSamplingSettings::*)()>(&::UnityEngine::Rendering::LightmapSamplingSettings::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bc2910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightmapSamplingSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::LightmapSamplingSettings::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Rendering::LightmapSamplingSettings::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::LightmapSamplingSettings::__cordl_internal_set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr bool& UnityEngine::Rendering::LightmapSamplingSettings::__cordl_internal_get_m_UseBicubicLightmapSampling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseBicubicLightmapSampling;
}
constexpr bool const& UnityEngine::Rendering::LightmapSamplingSettings::__cordl_internal_get_m_UseBicubicLightmapSampling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseBicubicLightmapSampling;
}
constexpr void UnityEngine::Rendering::LightmapSamplingSettings::__cordl_internal_set_m_UseBicubicLightmapSampling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseBicubicLightmapSampling = value;
}
inline int32_t UnityEngine::Rendering::LightmapSamplingSettings::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightmapSamplingSettings*>(), { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::LightmapSamplingSettings::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightmapSamplingSettings*>(),
                                                                                         { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::LightmapSamplingSettings::get_useBicubicLightmapSampling() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightmapSamplingSettings*>(), { "get_useBicubicLightmapSampling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LightmapSamplingSettings::set_useBicubicLightmapSampling(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightmapSamplingSettings*>(), { "set_useBicubicLightmapSampling", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::LightmapSamplingSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LightmapSamplingSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::LightmapSamplingSettings* UnityEngine::Rendering::LightmapSamplingSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::LightmapSamplingSettings*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::LightmapSamplingSettings::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::LightmapSamplingSettings::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LightmapSamplingSettings::LightmapSamplingSettings() {}
