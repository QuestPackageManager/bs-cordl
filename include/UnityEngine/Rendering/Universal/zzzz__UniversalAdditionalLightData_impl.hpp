#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalAdditionalLightData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightLayerEnum_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SoftShadowQuality_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightLayerEnum_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SoftShadowQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalLightData_def.hpp"
#include "UnityEngine/Rendering/zzzz__IAdditionalData_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__RenderingLayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version::UniversalAdditionalLightData_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version::UniversalAdditionalLightData_Version() {}
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version::RenderingLayers{ static_cast<int32_t>(
    0x2) };
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version::SoftShadowQuality{ static_cast<int32_t>(
    0x3) };
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version::RenderingLayersMask{ static_cast<int32_t>(
    0x4) };
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version::Count{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_usePipelineSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_usePipelineSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_usePipelineSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.set_usePipelineSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_usePipelineSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "set_usePipelineSettings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_light
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_light)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6d00cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_light", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_additionalLightsShadowResolutionTier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_additionalLightsShadowResolutionTier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_additionalLightsShadowResolutionTier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_customShadowLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_customShadowLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00d9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_customShadowLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.set_customShadowLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_customShadowLayers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6d00da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "set_customShadowLayers", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_lightCookieSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightCookieSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_lightCookieSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.set_lightCookieSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightCookieSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                           { "set_lightCookieSize", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_lightCookieOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightCookieOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_lightCookieOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.set_lightCookieOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightCookieOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                           { "set_lightCookieOffset", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_softShadowQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::SoftShadowQuality (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_softShadowQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_softShadowQuality", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.set_softShadowQuality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::Rendering::Universal::SoftShadowQuality)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_softShadowQuality)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                             { "set_softShadowQuality", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::SoftShadowQuality>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_renderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderingLayerMask (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_renderingLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_renderingLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.set_renderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::RenderingLayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_renderingLayers)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6d00edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                           { "set_renderingLayers", {}, { ::i2c::type_of<::UnityEngine::RenderingLayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_shadowRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderingLayerMask (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_shadowRenderingLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d00f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_shadowRenderingLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.set_shadowRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::RenderingLayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_shadowRenderingLayers)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6d00f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                           { "set_shadowRenderingLayers", {}, { ::i2c::type_of<::UnityEngine::RenderingLayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.SyncLightAndShadowLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::SyncLightAndShadowLayers)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6d00dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "SyncLightAndShadowLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d00fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                           { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6d01004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                           { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_lightLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::LightLayerEnum (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d01130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_lightLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.set_lightLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::Rendering::Universal::LightLayerEnum)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d01138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                           { "set_lightLayerMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::LightLayerEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.get_shadowLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::LightLayerEnum (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_shadowLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d01140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_shadowLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData.set_shadowLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)(::UnityEngine::Rendering::Universal::LightLayerEnum)>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_shadowLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d01148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                           { "set_shadowLayerMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::LightLayerEnum>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6d01150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_UsePipelineSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsePipelineSettings;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_UsePipelineSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsePipelineSettings;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_UsePipelineSettings(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsePipelineSettings = value;
}
constexpr ::UnityW<::UnityEngine::Light>& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_Light() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Light;
}
constexpr ::UnityW<::UnityEngine::Light> const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_Light() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Light;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_Light(::UnityW<::UnityEngine::Light> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Light = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_AdditionalLightsShadowResolutionTier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowResolutionTier;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_AdditionalLightsShadowResolutionTier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowResolutionTier;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_AdditionalLightsShadowResolutionTier(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsShadowResolutionTier = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_CustomShadowLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomShadowLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_CustomShadowLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomShadowLayers;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_CustomShadowLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CustomShadowLayers = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_LightCookieSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieSize;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_LightCookieSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieSize;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_LightCookieSize(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightCookieSize = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_LightCookieOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieOffset;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_LightCookieOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieOffset;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_LightCookieOffset(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightCookieOffset = value;
}
constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_SoftShadowQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SoftShadowQuality;
}
constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_SoftShadowQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SoftShadowQuality;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_SoftShadowQuality(::UnityEngine::Rendering::Universal::SoftShadowQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SoftShadowQuality = value;
}
constexpr ::UnityEngine::RenderingLayerMask& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_RenderingLayersMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayersMask;
}
constexpr ::UnityEngine::RenderingLayerMask const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_RenderingLayersMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayersMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_RenderingLayersMask(::UnityEngine::RenderingLayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingLayersMask = value;
}
constexpr ::UnityEngine::RenderingLayerMask& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_ShadowRenderingLayersMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowRenderingLayersMask;
}
constexpr ::UnityEngine::RenderingLayerMask const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_ShadowRenderingLayersMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowRenderingLayersMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_ShadowRenderingLayersMask(::UnityEngine::RenderingLayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowRenderingLayersMask = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Version = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_LightLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightLayerMask;
}
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_LightLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_LightLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightLayerMask = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_ShadowLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowLayerMask;
}
constexpr ::UnityEngine::Rendering::Universal::LightLayerEnum const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_ShadowLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowLayerMask;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_ShadowLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowLayerMask = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_RenderingLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayers;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_RenderingLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayers;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_RenderingLayers(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingLayers = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_ShadowRenderingLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowRenderingLayers;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_get_m_ShadowRenderingLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowRenderingLayers;
}
constexpr void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::__cordl_internal_set_m_ShadowRenderingLayers(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowRenderingLayers = value;
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::setStaticF_AdditionalLightsShadowResolutionTierCustom(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AdditionalLightsShadowResolutionTierCustom", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalAdditionalLightData::getStaticF_AdditionalLightsShadowResolutionTierCustom() {
  return ::cordl_internals::getStaticField<int32_t, "AdditionalLightsShadowResolutionTierCustom", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>();
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::setStaticF_AdditionalLightsShadowResolutionTierLow(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AdditionalLightsShadowResolutionTierLow", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalAdditionalLightData::getStaticF_AdditionalLightsShadowResolutionTierLow() {
  return ::cordl_internals::getStaticField<int32_t, "AdditionalLightsShadowResolutionTierLow", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>();
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::setStaticF_AdditionalLightsShadowResolutionTierMedium(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AdditionalLightsShadowResolutionTierMedium", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalAdditionalLightData::getStaticF_AdditionalLightsShadowResolutionTierMedium() {
  return ::cordl_internals::getStaticField<int32_t, "AdditionalLightsShadowResolutionTierMedium", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>();
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::setStaticF_AdditionalLightsShadowResolutionTierHigh(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AdditionalLightsShadowResolutionTierHigh", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalAdditionalLightData::getStaticF_AdditionalLightsShadowResolutionTierHigh() {
  return ::cordl_internals::getStaticField<int32_t, "AdditionalLightsShadowResolutionTierHigh", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>();
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::setStaticF_AdditionalLightsShadowDefaultResolutionTier(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AdditionalLightsShadowDefaultResolutionTier", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalAdditionalLightData::getStaticF_AdditionalLightsShadowDefaultResolutionTier() {
  return ::cordl_internals::getStaticField<int32_t, "AdditionalLightsShadowDefaultResolutionTier", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>();
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::setStaticF_AdditionalLightsShadowDefaultCustomResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AdditionalLightsShadowDefaultCustomResolution", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalAdditionalLightData::getStaticF_AdditionalLightsShadowDefaultCustomResolution() {
  return ::cordl_internals::getStaticField<int32_t, "AdditionalLightsShadowDefaultCustomResolution", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>();
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::setStaticF_AdditionalLightsShadowMinimumResolution(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "AdditionalLightsShadowMinimumResolution", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalAdditionalLightData::getStaticF_AdditionalLightsShadowMinimumResolution() {
  return ::cordl_internals::getStaticField<int32_t, "AdditionalLightsShadowMinimumResolution", ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>();
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_usePipelineSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_usePipelineSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_usePipelineSettings(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "set_usePipelineSettings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Light> UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_light() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_light", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_additionalLightsShadowResolutionTier() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_additionalLightsShadowResolutionTier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_customShadowLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_customShadowLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_customShadowLayers(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "set_customShadowLayers", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightCookieSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_lightCookieSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightCookieSize(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                         { "set_lightCookieSize", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightCookieOffset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_lightCookieOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightCookieOffset(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                         { "set_lightCookieOffset", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::SoftShadowQuality UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_softShadowQuality() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_softShadowQuality", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::SoftShadowQuality>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_softShadowQuality(::UnityEngine::Rendering::Universal::SoftShadowQuality value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                           { "set_softShadowQuality", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::SoftShadowQuality>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderingLayerMask UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_renderingLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_renderingLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderingLayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_renderingLayers(::UnityEngine::RenderingLayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                         { "set_renderingLayers", {}, { ::i2c::type_of<::UnityEngine::RenderingLayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderingLayerMask UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_shadowRenderingLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_shadowRenderingLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderingLayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_shadowRenderingLayers(::UnityEngine::RenderingLayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                         { "set_shadowRenderingLayers", {}, { ::i2c::type_of<::UnityEngine::RenderingLayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::SyncLightAndShadowLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "SyncLightAndShadowLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                         { "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                         { "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_lightLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_lightLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LightLayerEnum>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_lightLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                         { "set_lightLayerMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::LightLayerEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::LightLayerEnum UnityEngine::Rendering::Universal::UniversalAdditionalLightData::get_shadowLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { "get_shadowLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LightLayerEnum>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::set_shadowLayerMask(::UnityEngine::Rendering::Universal::LightLayerEnum value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(),
                                                                                         { "set_shadowLayerMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::LightLayerEnum>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::UniversalAdditionalLightData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* UnityEngine::Rendering::Universal::UniversalAdditionalLightData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::Universal::UniversalAdditionalLightData::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::Universal::UniversalAdditionalLightData::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IAdditionalData"
constexpr UnityEngine::Rendering::Universal::UniversalAdditionalLightData::operator ::UnityEngine::Rendering::IAdditionalData*() noexcept {
  return static_cast<::UnityEngine::Rendering::IAdditionalData*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IAdditionalData"
constexpr ::UnityEngine::Rendering::IAdditionalData* UnityEngine::Rendering::Universal::UniversalAdditionalLightData::i___UnityEngine__Rendering__IAdditionalData() noexcept {
  return static_cast<::UnityEngine::Rendering::IAdditionalData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData::UniversalAdditionalLightData() {}
