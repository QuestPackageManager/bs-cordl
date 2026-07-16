#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/ForwardLights.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ForwardLights_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ForwardLights_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ReflectionProbeManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__UnsafeCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleReflectionProbe_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__MainLightPosition(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightPosition", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__MainLightPosition() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightPosition", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__MainLightColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightColor", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__MainLightColor() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightColor", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__MainLightOcclusionProbesChannel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightOcclusionProbesChannel", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__MainLightOcclusionProbesChannel() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightOcclusionProbesChannel", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__MainLightLayerMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightLayerMask", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__MainLightLayerMask() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightLayerMask", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__AdditionalLightsCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsCount", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__AdditionalLightsCount() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsCount", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__AdditionalLightsPosition(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsPosition", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__AdditionalLightsPosition() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsPosition", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__AdditionalLightsColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsColor", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__AdditionalLightsColor() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsColor", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__AdditionalLightsAttenuation(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsAttenuation", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__AdditionalLightsAttenuation() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsAttenuation", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__AdditionalLightsSpotDir(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsSpotDir", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__AdditionalLightsSpotDir() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsSpotDir", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__AdditionalLightOcclusionProbeChannel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightOcclusionProbeChannel", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__AdditionalLightOcclusionProbeChannel() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightOcclusionProbeChannel", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::setStaticF__AdditionalLightsLayerMasks(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AdditionalLightsLayerMasks", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::getStaticF__AdditionalLightsLayerMasks() {
  return ::cordl_internals::getStaticField<int32_t, "_AdditionalLightsLayerMasks", ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights_LightConstantBuffer::ForwardLights_LightConstantBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams (*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams::Create)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x68f2a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "lightCookieManager", ty: "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "forwardPlus", ty:
// "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams::ForwardLights_InitParams(::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager,
                                                                                                            bool forwardPlus) noexcept {
  this->lightCookieManager = lightCookieManager;
  this->forwardPlus = forwardPlus;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams::ForwardLights_InitParams() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f2b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData*& UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_get_renderingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData* const&
UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_get_renderingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::UniversalRenderingData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderingData = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_get_lightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_get_lightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightData = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights*& UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_get_forwardLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forwardLights;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights* const&
UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_get_forwardLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forwardLights;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::__cordl_internal_set_forwardLights(::UnityEngine::Rendering::Universal::Internal::ForwardLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forwardLights = value;
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData* UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData::ForwardLights_SetupLightPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68f2be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c._SetupRenderGraphLights_b__44_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights___c::_SetupRenderGraphLights_b__44_0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x68f2be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*>(),
                                                                                           { "<SetupRenderGraphLights>b__44_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::ForwardLights___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c* UnityEngine::Rendering::Universal::Internal::ForwardLights___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights___c::setStaticF___9__44_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__44_0", ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::Internal::ForwardLights___c::getStaticF___9__44_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__44_0", ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights___c::_SetupRenderGraphLights_b__44_0(::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData* data,
                                                                                                            ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*>(),
                                                                                         { "<SetupRenderGraphLights>b__44_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights_SetupLightPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c* UnityEngine::Rendering::Universal::Internal::ForwardLights___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::ForwardLights___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights___c::ForwardLights___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x68ef3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams)>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::_ctor)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x68ef3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.CreateForwardPlusBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::CreateForwardPlusBuffers)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x68ef810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(), { "CreateForwardPlusBuffers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.get_reflectionProbeManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ReflectionProbeManager (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::get_reflectionProbeManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68ef9bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(), { "get_reflectionProbeManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.AlignByteCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::AlignByteCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68ef9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                                                           { "AlignByteCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.GetViewParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(::UnityEngine::Camera*, ::Unity::Mathematics::float4x4, ::by_ref<float_t>,
                                                                                                                              ::by_ref<float_t>, ::by_ref<::Unity::Mathematics::float4>)>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::GetViewParams)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x68ef9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                             { "GetViewParams",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::by_ref<float_t>>(),
                                                                 ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.PreSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::PreSetup)> {
  constexpr static std::size_t size = 0x12d8;
  constexpr static std::size_t addrs = 0x68efa98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                                                           { "PreSetup",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::Setup)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x68f0dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                            { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.SetupRenderGraphLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupRenderGraphLights)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x68f1948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                            { "SetupRenderGraphLights",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.SetupLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::UnsafeCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupLights)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x68f0eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                            { "SetupLights",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::Cleanup)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68f1d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.InitializeLightConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, int32_t, bool, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>,
    ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<uint32_t>, ::by_ref<bool>)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::InitializeLightConstants)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x68f1e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                             { "InitializeLightConstants",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.SetupShaderLightConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::UnsafeCommandBuffer*, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupShaderLightConstants)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x68f1cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                             { "SetupShaderLightConstants",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.SetupMainLightConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(::UnityEngine::Rendering::UnsafeCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
        &::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupMainLightConstants)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x68f2014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
            { "SetupMainLightConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.SetupAdditionalLightConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::UnsafeCommandBuffer*, ::by_ref<::UnityEngine::Rendering::CullingResults>, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupAdditionalLightConstants)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x68f217c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                             { "SetupAdditionalLightConstants",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights.SetupPerObjectLightIndices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::ForwardLights::*)(
    ::UnityEngine::Rendering::CullingResults, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupPerObjectLightIndices)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x68f26f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
            { "SetupPerObjectLightIndices", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::ForwardLights._PreSetup_g__IsProbeGreater_40_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::VisibleReflectionProbe, ::UnityEngine::Rendering::VisibleReflectionProbe)>(
    &::UnityEngine::Rendering::Universal::Internal::ForwardLights::_PreSetup_g__IsProbeGreater_40_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68f0d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
            { "<PreSetup>g__IsProbeGreater|40_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::VisibleReflectionProbe>(), ::i2c::type_of<::UnityEngine::Rendering::VisibleReflectionProbe>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsBufferId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsBufferId;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsBufferId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsBufferId;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightsBufferId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsBufferId = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsIndicesId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsIndicesId;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsIndicesId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsIndicesId;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightsIndicesId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsIndicesId = value;
}
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_MixedLightingSetup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixedLightingSetup;
}
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_MixedLightingSetup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MixedLightingSetup;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_MixedLightingSetup(::UnityEngine::Rendering::Universal::MixedLightingSetup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MixedLightingSetup = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightPositions;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightPositions(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightPositions = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightColors;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightColors;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightColors(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightColors = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightAttenuations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightAttenuations;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightAttenuations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightAttenuations;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightAttenuations(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightAttenuations = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightSpotDirections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightSpotDirections;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightSpotDirections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightSpotDirections;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightSpotDirections(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightSpotDirections = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightOcclusionProbeChannels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightOcclusionProbeChannels;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightOcclusionProbeChannels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightOcclusionProbeChannels;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightOcclusionProbeChannels(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightOcclusionProbeChannels = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsLayerMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsLayerMasks;
}
constexpr ::ArrayW<float_t> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_AdditionalLightsLayerMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsLayerMasks;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_AdditionalLightsLayerMasks(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsLayerMasks = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_UseStructuredBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStructuredBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_UseStructuredBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStructuredBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_UseStructuredBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseStructuredBuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_UseForwardPlus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseForwardPlus;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_UseForwardPlus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseForwardPlus;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_UseForwardPlus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseForwardPlus = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_DirectionalLightCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirectionalLightCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_DirectionalLightCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DirectionalLightCount;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_DirectionalLightCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DirectionalLightCount = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ActualTileWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActualTileWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ActualTileWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActualTileWidth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ActualTileWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActualTileWidth = value;
}
constexpr ::Unity::Mathematics::int2& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileResolution;
}
constexpr ::Unity::Mathematics::int2 const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileResolution;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_TileResolution(::Unity::Mathematics::int2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TileResolution = value;
}
constexpr ::Unity::Jobs::JobHandle& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_CullingHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingHandle;
}
constexpr ::Unity::Jobs::JobHandle const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_CullingHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingHandle;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_CullingHandle(::Unity::Jobs::JobHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CullingHandle = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBins() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBins;
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBins() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBins;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ZBins(::Unity::Collections::NativeArray_1<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZBins = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinsBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinsBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinsBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinsBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ZBinsBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZBinsBuffer = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t>& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileMasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileMasks;
}
constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileMasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileMasks;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_TileMasks(::Unity::Collections::NativeArray_1<uint32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TileMasks = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileMasksBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileMasksBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_TileMasksBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TileMasksBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_TileMasksBuffer(::UnityEngine::GraphicsBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TileMasksBuffer = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_LightCookieManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager* const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_LightCookieManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightCookieManager = value;
}
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ReflectionProbeManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReflectionProbeManager;
}
constexpr ::UnityEngine::Rendering::Universal::ReflectionProbeManager const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ReflectionProbeManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReflectionProbeManager;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ReflectionProbeManager(::UnityEngine::Rendering::Universal::ReflectionProbeManager value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReflectionProbeManager = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_WordsPerTile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WordsPerTile;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_WordsPerTile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WordsPerTile;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_WordsPerTile(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WordsPerTile = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinScale;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinScale;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ZBinScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZBinScale = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinOffset;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_ZBinOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ZBinOffset;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_ZBinOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ZBinOffset = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_LightCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_LightCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCount;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_LightCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightCount = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_BinCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BinCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_get_m_BinCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BinCount;
}
constexpr void UnityEngine::Rendering::Universal::Internal::ForwardLights::__cordl_internal_set_m_BinCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BinCount = value;
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSampler", ::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::ForwardLights::getStaticF_m_ProfilingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSampler", ::UnityEngine::Rendering::Universal::Internal::ForwardLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::setStaticF_m_ProfilingSamplerFPSetup(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerFPSetup", ::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::ForwardLights::getStaticF_m_ProfilingSamplerFPSetup() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerFPSetup", ::UnityEngine::Rendering::Universal::Internal::ForwardLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::setStaticF_m_ProfilingSamplerFPComplete(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerFPComplete", ::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::ForwardLights::getStaticF_m_ProfilingSamplerFPComplete() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerFPComplete", ::UnityEngine::Rendering::Universal::Internal::ForwardLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::setStaticF_m_ProfilingSamplerFPUpload(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerFPUpload", ::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::ForwardLights::getStaticF_m_ProfilingSamplerFPUpload() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSamplerFPUpload", ::UnityEngine::Rendering::Universal::Internal::ForwardLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::setStaticF_s_SetupForwardLights(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_SetupForwardLights", ::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::ForwardLights::getStaticF_s_SetupForwardLights() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_SetupForwardLights", ::UnityEngine::Rendering::Universal::Internal::ForwardLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::_ctor(::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams initParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initParams);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::CreateForwardPlusBuffers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(), { "CreateForwardPlusBuffers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ReflectionProbeManager UnityEngine::Rendering::Universal::Internal::ForwardLights::get_reflectionProbeManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(), { "get_reflectionProbeManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ReflectionProbeManager>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights::AlignByteCount(int32_t count, int32_t align) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                                                         { "AlignByteCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, count, align);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::GetViewParams(::UnityEngine::Camera* camera, ::Unity::Mathematics::float4x4 viewToClip, ::by_ref<float_t> viewPlaneBot,
                                                                                      ::by_ref<float_t> viewPlaneTop, ::by_ref<::Unity::Mathematics::float4> viewToViewportScaleBias) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                           { "GetViewParams",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::by_ref<float_t>>(),
                                                               ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, viewToClip, viewPlaneBot, viewPlaneTop, viewToViewportScaleBias);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::PreSetup(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                 ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                 ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                       { "PreSetup",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderingData, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::Setup(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                              ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                          { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupRenderGraphLights(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                               ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                               ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                          { "SetupRenderGraphLights",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, renderingData, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupLights(::UnityEngine::Rendering::UnsafeCommandBuffer* cmd,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                          { "SetupLights",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::InitializeLightConstants(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights, int32_t lightIndex,
                                                                                                 bool supportsLightLayers, ::by_ref<::UnityEngine::Vector4> lightPos,
                                                                                                 ::by_ref<::UnityEngine::Vector4> lightColor, ::by_ref<::UnityEngine::Vector4> lightAttenuation,
                                                                                                 ::by_ref<::UnityEngine::Vector4> lightSpotDir,
                                                                                                 ::by_ref<::UnityEngine::Vector4> lightOcclusionProbeChannel, ::by_ref<uint32_t> lightLayerMask,
                                                                                                 ::by_ref<bool> isSubtractive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                           { "InitializeLightConstants",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lights, lightIndex, supportsLightLayers, lightPos, lightColor, lightAttenuation, lightSpotDir, lightOcclusionProbeChannel,
                                                   lightLayerMask, isSubtractive);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupShaderLightConstants(::UnityEngine::Rendering::UnsafeCommandBuffer* cmd,
                                                                                                  ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                  ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                           { "SetupShaderLightConstants",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cullResults, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupMainLightConstants(::UnityEngine::Rendering::UnsafeCommandBuffer* cmd,
                                                                                                ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
          { "SetupMainLightConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupAdditionalLightConstants(::UnityEngine::Rendering::UnsafeCommandBuffer* cmd,
                                                                                                      ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                      ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
                                                           { "SetupAdditionalLightConstants",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cullResults, lightData);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::ForwardLights::SetupPerObjectLightIndices(::UnityEngine::Rendering::CullingResults cullResults,
                                                                                                      ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
          { "SetupPerObjectLightIndices", {}, { ::i2c::type_of<::UnityEngine::Rendering::CullingResults>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cullResults, lightData);
}
inline bool UnityEngine::Rendering::Universal::Internal::ForwardLights::_PreSetup_g__IsProbeGreater_40_0(::UnityEngine::Rendering::VisibleReflectionProbe probe,
                                                                                                         ::UnityEngine::Rendering::VisibleReflectionProbe otherProbe) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(),
          { "<PreSetup>g__IsProbeGreater|40_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::VisibleReflectionProbe>(), ::i2c::type_of<::UnityEngine::Rendering::VisibleReflectionProbe>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, probe, otherProbe);
}
inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights* UnityEngine::Rendering::Universal::Internal::ForwardLights::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>());
}
inline ::UnityEngine::Rendering::Universal::Internal::ForwardLights*
UnityEngine::Rendering::Universal::Internal::ForwardLights::New_ctor(::UnityEngine::Rendering::Universal::Internal::ForwardLights_InitParams initParams) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::ForwardLights*>(initParams));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights::ForwardLights() {}
