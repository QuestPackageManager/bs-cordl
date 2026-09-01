#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\BatchFilterSettings.hpp"
#include "UnityEngine/Rendering/zzzz__BatchFilterSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::BatchFilterSettings.set_batchLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchFilterSettings::*)(uint8_t)>(&::UnityEngine::Rendering::BatchFilterSettings::set_batchLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2a8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(), { "set_batchLayer", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchFilterSettings.set_motionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchFilterSettings::*)(::UnityEngine::MotionVectorGenerationMode)>(
    &::UnityEngine::Rendering::BatchFilterSettings::set_motionMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2a8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(), { "set_motionMode", {}, { ::i2c::type_of<::UnityEngine::MotionVectorGenerationMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchFilterSettings.set_shadowCastingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchFilterSettings::*)(::UnityEngine::Rendering::ShadowCastingMode)>(
    &::UnityEngine::Rendering::BatchFilterSettings::set_shadowCastingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2a8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(),
                                                                                           { "set_shadowCastingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchFilterSettings.set_receiveShadows
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchFilterSettings::*)(bool)>(&::UnityEngine::Rendering::BatchFilterSettings::set_receiveShadows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2a900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(), { "set_receiveShadows", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchFilterSettings.set_staticShadowCaster
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchFilterSettings::*)(bool)>(&::UnityEngine::Rendering::BatchFilterSettings::set_staticShadowCaster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2a908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(), { "set_staticShadowCaster", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BatchFilterSettings.set_allDepthSorted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BatchFilterSettings::*)(bool)>(&::UnityEngine::Rendering::BatchFilterSettings::set_allDepthSorted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2a910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(), { "set_allDepthSorted", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::BatchFilterSettings::set_batchLayer(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(), { "set_batchLayer", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::BatchFilterSettings::set_motionMode(::UnityEngine::MotionVectorGenerationMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(), { "set_motionMode", {}, { ::i2c::type_of<::UnityEngine::MotionVectorGenerationMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::BatchFilterSettings::set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(),
                                                                                         { "set_shadowCastingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::BatchFilterSettings::set_receiveShadows(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(), { "set_receiveShadows", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::BatchFilterSettings::set_staticShadowCaster(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(), { "set_staticShadowCaster", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Rendering::BatchFilterSettings::set_allDepthSorted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BatchFilterSettings>(), { "set_allDepthSorted", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererPriority", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "layer", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_batchLayer", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_motionMode", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_shadowMode", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_receiveShadows", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_staticShadowCaster", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_allDepthSorted", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_isSceneCullingMaskSet", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchFilterSettings::BatchFilterSettings(uint32_t renderingLayerMask, int32_t rendererPriority, uint64_t m_sceneCullingMask, uint8_t layer, uint8_t m_batchLayer,
                                                                             uint8_t m_motionMode, uint8_t m_shadowMode, uint8_t m_receiveShadows, uint8_t m_staticShadowCaster,
                                                                             uint8_t m_allDepthSorted, uint8_t m_isSceneCullingMaskSet) noexcept {
  this->renderingLayerMask = renderingLayerMask;
  this->rendererPriority = rendererPriority;
  this->m_sceneCullingMask = m_sceneCullingMask;
  this->layer = layer;
  this->m_batchLayer = m_batchLayer;
  this->m_motionMode = m_motionMode;
  this->m_shadowMode = m_shadowMode;
  this->m_receiveShadows = m_receiveShadows;
  this->m_staticShadowCaster = m_staticShadowCaster;
  this->m_allDepthSorted = m_allDepthSorted;
  this->m_isSceneCullingMaskSet = m_isSceneCullingMaskSet;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchFilterSettings::BatchFilterSettings() {}
