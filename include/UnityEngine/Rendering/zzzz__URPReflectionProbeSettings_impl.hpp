#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/URPReflectionProbeSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__URPReflectionProbeSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::URPReflectionProbeSettings.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::URPReflectionProbeSettings::*)()>(
    &::UnityEngine::Rendering::URPReflectionProbeSettings::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c75ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::URPReflectionProbeSettings*>(), { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::URPReflectionProbeSettings.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::URPReflectionProbeSettings::*)()>(
    &::UnityEngine::Rendering::URPReflectionProbeSettings::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c75ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::URPReflectionProbeSettings*>(),
                                                                                           { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::URPReflectionProbeSettings.get_UseReflectionProbeRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::URPReflectionProbeSettings::*)()>(
    &::UnityEngine::Rendering::URPReflectionProbeSettings::get_UseReflectionProbeRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c75af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::URPReflectionProbeSettings*>(), { "get_UseReflectionProbeRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::URPReflectionProbeSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::URPReflectionProbeSettings::*)()>(&::UnityEngine::Rendering::URPReflectionProbeSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c75af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::URPReflectionProbeSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::URPReflectionProbeSettings::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr int32_t const& UnityEngine::Rendering::URPReflectionProbeSettings::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::Rendering::URPReflectionProbeSettings::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr bool& UnityEngine::Rendering::URPReflectionProbeSettings::__cordl_internal_get_useReflectionProbeRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useReflectionProbeRotation;
}
constexpr bool const& UnityEngine::Rendering::URPReflectionProbeSettings::__cordl_internal_get_useReflectionProbeRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useReflectionProbeRotation;
}
constexpr void UnityEngine::Rendering::URPReflectionProbeSettings::__cordl_internal_set_useReflectionProbeRotation(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useReflectionProbeRotation = value;
}
inline int32_t UnityEngine::Rendering::URPReflectionProbeSettings::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::URPReflectionProbeSettings*>(), { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::URPReflectionProbeSettings::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::URPReflectionProbeSettings*>(),
                                                                                         { "UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::URPReflectionProbeSettings::get_UseReflectionProbeRotation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::URPReflectionProbeSettings*>(), { "get_UseReflectionProbeRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::URPReflectionProbeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::URPReflectionProbeSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::URPReflectionProbeSettings* UnityEngine::Rendering::URPReflectionProbeSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::URPReflectionProbeSettings*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr UnityEngine::Rendering::URPReflectionProbeSettings::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* UnityEngine::Rendering::URPReflectionProbeSettings::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
  return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::URPReflectionProbeSettings::URPReflectionProbeSettings() {}
