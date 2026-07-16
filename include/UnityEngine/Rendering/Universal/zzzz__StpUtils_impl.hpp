#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/StpUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StpUtils_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__STP_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpUtils.CalculateJitter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Vector2>, ::by_ref<bool>)>(&::UnityEngine::Rendering::Universal::StpUtils::CalculateJitter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68b8c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpUtils*>(),
                                                { "CalculateJitter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpUtils.PopulateStpConfig
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Texture2D*, ::by_ref<::UnityEngine::Rendering::STP_Config>)>(&::UnityEngine::Rendering::Universal::StpUtils::PopulateStpConfig)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x68b8cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpUtils*>(),
                                         { "PopulateStpConfig",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Texture2D*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_Config>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::StpUtils.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Texture2D*)>(&::UnityEngine::Rendering::Universal::StpUtils::Execute)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x68b9294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpUtils*>(),
                                         { "Execute",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::StpUtils::setStaticF_s_JitterFunc(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*, "s_JitterFunc", ::UnityEngine::Rendering::Universal::StpUtils*>(
      std::forward<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*>(value));
}
inline ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* UnityEngine::Rendering::Universal::StpUtils::getStaticF_s_JitterFunc() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*, "s_JitterFunc", ::UnityEngine::Rendering::Universal::StpUtils*>();
}
inline void UnityEngine::Rendering::Universal::StpUtils::CalculateJitter(int32_t frameIndex, ::by_ref<::UnityEngine::Vector2> jitter, ::by_ref<bool> allowScaling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpUtils*>(),
                                              { "CalculateJitter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, frameIndex, jitter, allowScaling);
}
inline void UnityEngine::Rendering::Universal::StpUtils::PopulateStpConfig(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputColor,
                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputDepth,
                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputMotion, int32_t debugViewIndex,
                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugView,
                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Texture2D* noiseTexture,
                                                                           ::by_ref<::UnityEngine::Rendering::STP_Config> config) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpUtils*>(),
                                       { "PopulateStpConfig",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Texture2D*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::STP_Config>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraData, inputColor, inputDepth, inputMotion, debugViewIndex, debugView, destination, noiseTexture, config);
}
inline void
UnityEngine::Rendering::Universal::StpUtils::Execute(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                     ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputColor,
                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputDepth, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputMotion,
                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Texture2D* noiseTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::StpUtils*>(),
                                       { "Execute",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderGraph, resourceData, cameraData, inputColor, inputDepth, inputMotion, destination, noiseTexture);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::StpUtils::StpUtils() {}
