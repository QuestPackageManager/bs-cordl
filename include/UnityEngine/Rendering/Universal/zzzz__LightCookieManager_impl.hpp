#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderBitArray_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderBitArray_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__Texture2DAtlas_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_mainLightTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "mainLightTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_mainLightTexture() {
  return ::cordl_internals::getStaticField<int32_t, "mainLightTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_mainLightWorldToLight(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "mainLightWorldToLight",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_mainLightWorldToLight() {
  return ::cordl_internals::getStaticField<int32_t, "mainLightWorldToLight",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_mainLightCookieTextureFormat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "mainLightCookieTextureFormat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_mainLightCookieTextureFormat() {
  return ::cordl_internals::getStaticField<int32_t, "mainLightCookieTextureFormat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsCookieAtlasTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "additionalLightsCookieAtlasTexture",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsCookieAtlasTexture() {
  return ::cordl_internals::getStaticField<int32_t, "additionalLightsCookieAtlasTexture",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsCookieAtlasTextureFormat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "additionalLightsCookieAtlasTextureFormat",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsCookieAtlasTextureFormat() {
  return ::cordl_internals::getStaticField<int32_t, "additionalLightsCookieAtlasTextureFormat",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsCookieEnableBits(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "additionalLightsCookieEnableBits",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsCookieEnableBits() {
  return ::cordl_internals::getStaticField<int32_t, "additionalLightsCookieEnableBits",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsCookieAtlasUVRectBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "additionalLightsCookieAtlasUVRectBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsCookieAtlasUVRectBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "additionalLightsCookieAtlasUVRectBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsCookieAtlasUVRects(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "additionalLightsCookieAtlasUVRects",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsCookieAtlasUVRects() {
  return ::cordl_internals::getStaticField<int32_t, "additionalLightsCookieAtlasUVRects",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsWorldToLightBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "additionalLightsWorldToLightBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsWorldToLightBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "additionalLightsWorldToLightBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsLightTypeBuffer(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "additionalLightsLightTypeBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsLightTypeBuffer() {
  return ::cordl_internals::getStaticField<int32_t, "additionalLightsLightTypeBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsWorldToLights(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "additionalLightsWorldToLights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsWorldToLights() {
  return ::cordl_internals::getStaticField<int32_t, "additionalLightsWorldToLights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::setStaticF_additionalLightsLightTypes(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "additionalLightsLightTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::getStaticF_additionalLightsLightTypes() {
  return ::cordl_internals::getStaticField<int32_t, "additionalLightsLightTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty::LightCookieManager_ShaderProperty() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat::LightCookieManager_LightCookieShaderFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat::LightCookieManager_LightCookieShaderFormat() {}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat::None{ static_cast<int32_t>(
    0xffffffff) };
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat::RGB{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat::Alpha{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat::Red{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings.get_isPow2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings::*)()>(
    &::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings::get_isPow2)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x665b718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings>::get(),
                                                 "get_isPow2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings.get_isSquare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings::*)()>(
    &::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings::get_isSquare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x665bfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings>::get(),
                                                 "get_isSquare", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings::get_isPow2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings>::get(),
                                               "get_isPow2", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings::get_isSquare() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings>::get(),
                                               "get_isSquare", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "format", ty:
// "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings::Settings_LightCookieManager_AtlasSettings(
    ::UnityEngine::Vector2Int resolution, ::UnityEngine::Experimental::Rendering::GraphicsFormat format) noexcept {
  this->resolution = resolution;
  this->format = format;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings::Settings_LightCookieManager_AtlasSettings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_Settings.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LightCookieManager_Settings (*)()>(
    &::UnityEngine::Rendering::Universal::LightCookieManager_Settings::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x665bf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_Settings>::get(), "Create",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::LightCookieManager_Settings UnityEngine::Rendering::Universal::LightCookieManager_Settings::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_Settings>::get(), "Create",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LightCookieManager_Settings, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "atlas", ty: "::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "maxAdditionalLights", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cubeOctahedralSizeScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "useStructuredBuffer", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_Settings::LightCookieManager_Settings(::UnityEngine::Rendering::Universal::Settings_LightCookieManager_AtlasSettings atlas,
                                                                                                        int32_t maxAdditionalLights, float_t cubeOctahedralSizeScale,
                                                                                                        bool useStructuredBuffer) noexcept {
  this->atlas = atlas;
  this->maxAdditionalLights = maxAdditionalLights;
  this->cubeOctahedralSizeScale = cubeOctahedralSizeScale;
  this->useStructuredBuffer = useStructuredBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_Settings::LightCookieManager_Settings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::*)()>(
    &::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x665c128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c.__cctor_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::*)(
    ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping)>(
    &::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::__cctor_b__6_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x665c12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>::get(), "<.cctor>b__6_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c.__cctor_b__6_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::*)(
    ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping)>(
    &::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::__cctor_b__6_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x665c1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>::get(), "<.cctor>b__6_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::setStaticF___9(::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::__cctor_b__6_0(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping a,
                                                                                                            ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>::get(), "<.cctor>b__6_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::__cctor_b__6_1(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping a,
                                                                                                            ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>::get(), "<.cctor>b__6_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c::LightCookieMapping_LightCookieManager___c() {}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping::setStaticF_s_CompareByCookieSize(
    ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>*,
      "s_CompareByCookieSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get>(
      std::forward<::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>*>(
          value));
}
inline ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>*
UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping::getStaticF_s_CompareByCookieSize() {
  return ::cordl_internals::getStaticField<
      ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>*,
      "s_CompareByCookieSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get>();
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping::setStaticF_s_CompareByBufferIndex(
    ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>*,
      "s_CompareByBufferIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get>(
      std::forward<::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>*>(
          value));
}
inline ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>*
UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping::getStaticF_s_CompareByBufferIndex() {
  return ::cordl_internals::getStaticField<
      ::System::Func_3<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, int32_t>*,
      "s_CompareByBufferIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>::get>();
}
// Ctor Parameters [CppParam { name: "visibleLightIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightBufferIndex", ty: "uint16_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "light", ty: "::UnityW<::UnityEngine::Light>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping::LightCookieManager_LightCookieMapping(uint16_t visibleLightIndex, uint16_t lightBufferIndex,
                                                                                                                            ::UnityW<::UnityEngine::Light> light) noexcept {
  this->visibleLightIndex = visibleLightIndex;
  this->lightBufferIndex = lightBufferIndex;
  this->light = light;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping::LightCookieManager_LightCookieMapping() {}
template <typename T> inline void UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>::_ctor(::ArrayW<T, ::Array<T>*> src, int32_t srcLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, srcLen);
}
template <typename T> inline void UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>::_ctor(::ArrayW<T, ::Array<T>*> src, int32_t srcStart, int32_t srcLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, srcStart, srcLen);
}
template <typename T> inline T UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>::get_length() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>>::get(), "get_length",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>::get_capacity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>>::get(), "get_capacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>::Sort(::System::Func_3<T, T, int32_t>* compare) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>>::get(), "Sort", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<T, T, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compare);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::ArrayW<T,::Array<T>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>::LightCookieManager_WorkSlice_1(::ArrayW<T, ::Array<T>*> m_Data, int32_t m_Start, int32_t m_Length) noexcept {
  this->m_Data = m_Data;
  this->m_Start = m_Start;
  this->m_Length = m_Length;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<T>::LightCookieManager_WorkSlice_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory.Resize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::Resize)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x665a07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*>::get(), "Resize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::*)()>(
    &::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6659514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*>&
UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_get_lightMappings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightMappings;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*> const&
UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_get_lightMappings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightMappings;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_set_lightMappings(
    ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightMappings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_get_uvRects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvRects;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_get_uvRects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvRects;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::__cordl_internal_set_uvRects(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uvRects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::Resize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*>::get(), "Resize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory::LightCookieManager_WorkMemory() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.get_worldToLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> (
    ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_worldToLights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665c204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                                 "get_worldToLights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.get_cookieEnableBits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::ShaderBitArray (
    ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_cookieEnableBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665c20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                                 "get_cookieEnableBits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.get_atlasUVRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> (
    ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_atlasUVRects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665c214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                                 "get_atlasUVRects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.get_lightTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (
    ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_lightTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665c21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                                 "get_lightTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.get_isUploaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(
    &::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_isUploaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665c224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                                 "get_isUploaded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.set_isUploaded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)(bool)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::set_isUploaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665c22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), "set_isUploaded",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665963c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)()>(
    &::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6659694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                                 "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.Resize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Resize)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x665b7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), "Resize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.Upload
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Upload)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x665ba0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), "Upload",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Clear)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6659e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), "Clear",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Size;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Size = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_UseStructuredBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStructuredBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_UseStructuredBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStructuredBuffer;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_UseStructuredBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseStructuredBuffer = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>&
UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_WorldToLightCpuData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldToLightCpuData;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_WorldToLightCpuData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldToLightCpuData;
}
constexpr void
UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_WorldToLightCpuData(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WorldToLightCpuData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_AtlasUVRectCpuData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasUVRectCpuData;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_AtlasUVRectCpuData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasUVRectCpuData;
}
constexpr void
UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_AtlasUVRectCpuData(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AtlasUVRectCpuData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_LightTypeCpuData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightTypeCpuData;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_LightTypeCpuData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightTypeCpuData;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_LightTypeCpuData(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LightTypeCpuData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::ShaderBitArray& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_CookieEnableBitsCpuData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CookieEnableBitsCpuData;
}
constexpr ::UnityEngine::Rendering::Universal::ShaderBitArray const&
UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_CookieEnableBitsCpuData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CookieEnableBitsCpuData;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_CookieEnableBitsCpuData(::UnityEngine::Rendering::Universal::ShaderBitArray value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CookieEnableBitsCpuData = value;
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_WorldToLightBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldToLightBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_WorldToLightBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldToLightBuffer;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_WorldToLightBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WorldToLightBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_AtlasUVRectBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasUVRectBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_AtlasUVRectBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AtlasUVRectBuffer;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_AtlasUVRectBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AtlasUVRectBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ComputeBuffer*& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_LightTypeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightTypeBuffer;
}
constexpr ::UnityEngine::ComputeBuffer* const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get_m_LightTypeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightTypeBuffer;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set_m_LightTypeBuffer(::UnityEngine::ComputeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LightTypeBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get__isUploaded_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isUploaded_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_get__isUploaded_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isUploaded_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::__cordl_internal_set__isUploaded_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isUploaded_k__BackingField = value;
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_worldToLights() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                               "get_worldToLights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ShaderBitArray UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_cookieEnableBits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                               "get_cookieEnableBits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ShaderBitArray, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_atlasUVRects() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                               "get_atlasUVRects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, false>(this, ___internal_method);
}
inline ::ArrayW<float_t, ::Array<float_t>*> UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_lightTypes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                               "get_lightTypes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::get_isUploaded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(),
                                               "get_isUploaded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::set_isUploaded(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), "set_isUploaded",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::_ctor(int32_t size, bool useStructuredBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size, useStructuredBuffer);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Resize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), "Resize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Upload(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), "Upload", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::Clear(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::New_ctor(int32_t size,
                                                                                                                                                                            bool useStructuredBuffer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*>(size, useStructuredBuffer));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData::LightCookieManager_LightCookieShaderData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.get_IsKeywordLightCookieEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LightCookieManager::*)()>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::get_IsKeywordLightCookieEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x665946c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(),
                                                 "get_IsKeywordLightCookieEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.set_IsKeywordLightCookieEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(bool)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::set_IsKeywordLightCookieEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6659474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "set_IsKeywordLightCookieEnabled",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.get_AdditionalLightsCookieAtlasTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::LightCookieManager::*)()>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::get_AdditionalLightsCookieAtlasTexture)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x665947c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(),
                                                 "get_AdditionalLightsCookieAtlasTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_Settings>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6659494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_Settings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.InitAdditionalLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::InitAdditionalLights)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6659518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "InitAdditionalLights",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LightCookieManager::*)()>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::isInitialized)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6659644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(),
                                                                               "isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)()>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6659664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.GetLightCookieShaderDataIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::GetLightCookieShaderDataIndex)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x66596dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "GetLightCookieShaderDataIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::LightCookieManager::Setup)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6659724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.SetupMainLight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::VisibleLight>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::SetupMainLight)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x66598bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "SetupMainLight", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::VisibleLight>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.GetLightCookieShaderFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat (
    ::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::GetLightCookieShaderFormat)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6659ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "GetLightCookieShaderFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.GetLightUVScaleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>, ::ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::GetLightUVScaleOffset)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6659fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "GetLightUVScaleOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.SetupAdditionalLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::LightCookieManager::SetupAdditionalLights)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6659ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "SetupAdditionalLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.FilterAndValidateAdditionalLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::UnityEngine::Rendering::Universal::UniversalLightData*,
    ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*>)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::FilterAndValidateAdditionalLights)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x665a19c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "FilterAndValidateAdditionalLights",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.UpdateAdditionalLightsAtlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>,
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::UpdateAdditionalLightsAtlas)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x665a604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "UpdateAdditionalLightsAtlas",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.FetchUVRects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>,
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, int32_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager::FetchUVRects)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x665afc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "FetchUVRects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.ComputeCookieRequestPixelCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::ComputeCookieRequestPixelCount)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x665ae94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "ComputeCookieRequestPixelCount",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.ApproximateCookieSizeDivisor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(float_t)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::ApproximateCookieSizeDivisor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x665af9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "ApproximateCookieSizeDivisor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.Fetch2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, int32_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager::Fetch2D)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x665b3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "Fetch2D", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.FetchCube
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, int32_t)>(&::UnityEngine::Rendering::Universal::LightCookieManager::FetchCube)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x665b260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "FetchCube", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.ComputeOctahedralCookieSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LightCookieManager::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::Rendering::Universal::LightCookieManager::ComputeOctahedralCookieSize)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x665b5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "ComputeOctahedralCookieSize",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.AdjustUVRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::ByRef<::UnityEngine::Vector4>, ::UnityEngine::Texture*, ::ByRef<::UnityEngine::Vector2>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::AdjustUVRect)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x665b538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "AdjustUVRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.ShrinkUVRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::ByRef<::UnityEngine::Vector4>, float_t, ::ByRef<::UnityEngine::Vector2>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::ShrinkUVRect)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x665b744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "ShrinkUVRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LightCookieManager.UploadAdditionalLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LightCookieManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*,
    ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>,
    ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Vector4>>)>(&::UnityEngine::Rendering::Universal::LightCookieManager::UploadAdditionalLights)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x665a788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "UploadAdditionalLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Vector4>>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Texture2DAtlas*& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_AdditionalLightsCookieAtlas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsCookieAtlas;
}
constexpr ::UnityEngine::Rendering::Texture2DAtlas* const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_AdditionalLightsCookieAtlas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsCookieAtlas;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_AdditionalLightsCookieAtlas(::UnityEngine::Rendering::Texture2DAtlas* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightsCookieAtlas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*&
UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_AdditionalLightsCookieShaderData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsCookieShaderData;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* const&
UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_AdditionalLightsCookieShaderData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsCookieShaderData;
}
constexpr void
UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_AdditionalLightsCookieShaderData(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightsCookieShaderData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_Settings& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_Settings const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::LightCookieManager_Settings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_WorkMem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorkMem;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_WorkMem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorkMem;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_WorkMem(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WorkMem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_VisibleLightIndexToShaderDataIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleLightIndexToShaderDataIndex;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_VisibleLightIndexToShaderDataIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleLightIndexToShaderDataIndex;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_VisibleLightIndexToShaderDataIndex(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VisibleLightIndexToShaderDataIndex)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_CookieSizeDivisor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CookieSizeDivisor;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_CookieSizeDivisor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CookieSizeDivisor;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_CookieSizeDivisor(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CookieSizeDivisor = value;
}
constexpr uint32_t& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_PrevCookieRequestPixelCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevCookieRequestPixelCount;
}
constexpr uint32_t const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_PrevCookieRequestPixelCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevCookieRequestPixelCount;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_PrevCookieRequestPixelCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevCookieRequestPixelCount = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_PrevWarnFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevWarnFrame;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get_m_PrevWarnFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevWarnFrame;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set_m_PrevWarnFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevWarnFrame = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsKeywordLightCookieEnabled_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsKeywordLightCookieEnabled_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::LightCookieManager::__cordl_internal_set__IsKeywordLightCookieEnabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsKeywordLightCookieEnabled_k__BackingField = value;
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::setStaticF_s_DirLightProj(::UnityEngine::Matrix4x4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Matrix4x4, "s_DirLightProj", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get>(
      std::forward<::UnityEngine::Matrix4x4>(value));
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::LightCookieManager::getStaticF_s_DirLightProj() {
  return ::cordl_internals::getStaticField<::UnityEngine::Matrix4x4, "s_DirLightProj",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get>();
}
inline bool UnityEngine::Rendering::Universal::LightCookieManager::get_IsKeywordLightCookieEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(),
                                                                             "get_IsKeywordLightCookieEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::set_IsKeywordLightCookieEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "set_IsKeywordLightCookieEnabled",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::LightCookieManager::get_AdditionalLightsCookieAtlasTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(),
                                               "get_AdditionalLightsCookieAtlasTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::_ctor(::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_Settings> settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_Settings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::InitAdditionalLights(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "InitAdditionalLights",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline bool UnityEngine::Rendering::Universal::LightCookieManager::isInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(),
                                                                             "isInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::GetLightCookieShaderDataIndex(int32_t visibleLightIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "GetLightCookieShaderDataIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, visibleLightIndex);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::Setup(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, lightData);
}
inline bool UnityEngine::Rendering::Universal::LightCookieManager::SetupMainLight(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::VisibleLight> visibleMainLight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "SetupMainLight", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::VisibleLight>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cmd, visibleMainLight);
}
inline ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat
UnityEngine::Rendering::Universal::LightCookieManager::GetLightCookieShaderFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat cookieFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "GetLightCookieShaderFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::GraphicsFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderFormat, false>(this, ___internal_method, cookieFormat);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::GetLightUVScaleOffset(::ByRef<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*> additionalLightData,
                                                                                         ::ByRef<::UnityEngine::Matrix4x4> uvTransform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "GetLightUVScaleOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, additionalLightData, uvTransform);
}
inline bool UnityEngine::Rendering::Universal::LightCookieManager::SetupAdditionalLights(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                         ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "SetupAdditionalLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cmd, lightData);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::FilterAndValidateAdditionalLights(
    ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
    ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*> validLightMappings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "FilterAndValidateAdditionalLights",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ArrayW<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping, ::Array<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, lightData, validLightMappings);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::UpdateAdditionalLightsAtlas(
    ::UnityEngine::Rendering::CommandBuffer* cmd,
    ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>> validLightMappings,
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> textureAtlasUVRects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "UpdateAdditionalLightsAtlas", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cmd, validLightMappings, textureAtlasUVRects);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::FetchUVRects(
    ::UnityEngine::Rendering::CommandBuffer* cmd,
    ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>> validLightMappings,
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> textureAtlasUVRects, int32_t cookieSizeDivisor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "FetchUVRects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cmd, validLightMappings, textureAtlasUVRects, cookieSizeDivisor);
}
inline uint32_t UnityEngine::Rendering::Universal::LightCookieManager::ComputeCookieRequestPixelCount(
    ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>> validLightMappings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "ComputeCookieRequestPixelCount",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, validLightMappings);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::ApproximateCookieSizeDivisor(float_t requestAtlasRatio) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "ApproximateCookieSizeDivisor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, requestAtlasRatio);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::LightCookieManager::Fetch2D(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* cookie, int32_t cookieSizeDivisor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "Fetch2D", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, cmd, cookie, cookieSizeDivisor);
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::LightCookieManager::FetchCube(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Texture* cookie,
                                                                                               int32_t cookieSizeDivisor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "FetchCube", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, cmd, cookie, cookieSizeDivisor);
}
inline int32_t UnityEngine::Rendering::Universal::LightCookieManager::ComputeOctahedralCookieSize(::UnityEngine::Texture* cookie) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "ComputeOctahedralCookieSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cookie);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::AdjustUVRect(::ByRef<::UnityEngine::Vector4> uvScaleOffset, ::UnityEngine::Texture* cookie,
                                                                                ::ByRef<::UnityEngine::Vector2> cookieSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "AdjustUVRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uvScaleOffset, cookie, cookieSize);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::ShrinkUVRect(::ByRef<::UnityEngine::Vector4> uvScaleOffset, float_t amountPixels, ::ByRef<::UnityEngine::Vector2> cookieSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "ShrinkUVRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uvScaleOffset, amountPixels, cookieSize);
}
inline void UnityEngine::Rendering::Universal::LightCookieManager::UploadAdditionalLights(
    ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
    ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>> validLightMappings,
    ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Vector4>> validUvRects) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LightCookieManager*>::get(), "UploadAdditionalLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieMapping>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_WorkSlice_1<::UnityEngine::Vector4>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, lightData, validLightMappings, validUvRects);
}
inline ::UnityEngine::Rendering::Universal::LightCookieManager*
UnityEngine::Rendering::Universal::LightCookieManager::New_ctor(::ByRef<::UnityEngine::Rendering::Universal::LightCookieManager_Settings> settings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LightCookieManager*>(settings));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::LightCookieManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::LightCookieManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager::LightCookieManager() {}
