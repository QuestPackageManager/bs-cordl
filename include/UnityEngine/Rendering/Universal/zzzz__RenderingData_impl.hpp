#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\RenderingData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessingData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderingData::*)(::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::RenderingData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68e36ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_universalRenderingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalRenderingData* (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_universalRenderingData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68e36bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_universalRenderingData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_commandBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::CommandBuffer*> (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_commandBuffer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x68e3710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_commandBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_cullResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::CullingResults> (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_cullResults)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e37c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_cullResults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_supportsDynamicBatching
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_supportsDynamicBatching)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_supportsDynamicBatching", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_perObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Rendering::PerObjectData> (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_perObjectData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e3888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_perObjectData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderingData.get_postProcessingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<bool> (::UnityEngine::Rendering::Universal::RenderingData::*)()>(
    &::UnityEngine::Rendering::Universal::RenderingData::get_postProcessingEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68e38e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_postProcessingEnabled", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::RenderingData::_ctor(::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, frameData);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderingData* UnityEngine::Rendering::Universal::RenderingData::get_universalRenderingData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_universalRenderingData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::CommandBuffer*> UnityEngine::Rendering::Universal::RenderingData::get_commandBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_commandBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::CommandBuffer*>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::CullingResults> UnityEngine::Rendering::Universal::RenderingData::get_cullResults() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_cullResults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::CullingResults>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::RenderingData::get_supportsDynamicBatching() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_supportsDynamicBatching", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
inline ::by_ref<::UnityEngine::Rendering::PerObjectData> UnityEngine::Rendering::Universal::RenderingData::get_perObjectData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_perObjectData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Rendering::PerObjectData>>(*this, ___internal_method);
}
inline ::by_ref<bool> UnityEngine::Rendering::Universal::RenderingData::get_postProcessingEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderingData>(), { "get_postProcessingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<bool>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cameraData", ty:
// "::UnityEngine::Rendering::Universal::CameraData", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightData", ty: "::UnityEngine::Rendering::Universal::LightData", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "shadowData", ty: "::UnityEngine::Rendering::Universal::ShadowData", modifiers: "", def_value: Some("{}") }, CppParam { name: "postProcessingData", ty:
// "::UnityEngine::Rendering::Universal::PostProcessingData", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::RenderingData::RenderingData(::UnityEngine::Rendering::ContextContainer* frameData, ::UnityEngine::Rendering::Universal::CameraData cameraData,
                                                                            ::UnityEngine::Rendering::Universal::LightData lightData, ::UnityEngine::Rendering::Universal::ShadowData shadowData,
                                                                            ::UnityEngine::Rendering::Universal::PostProcessingData postProcessingData) noexcept {
  this->frameData = frameData;
  this->cameraData = cameraData;
  this->lightData = lightData;
  this->shadowData = shadowData;
  this->postProcessingData = postProcessingData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderingData::RenderingData() {}
