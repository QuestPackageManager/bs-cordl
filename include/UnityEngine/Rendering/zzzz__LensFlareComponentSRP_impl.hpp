#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LensFlareComponentSRP.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareComponentSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareComponentSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareDataSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureCurve_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LensFlareComponentSRP_Version::LensFlareComponentSRP_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LensFlareComponentSRP_Version::LensFlareComponentSRP_Version() {}
constexpr ::UnityEngine::Rendering::LensFlareComponentSRP_Version UnityEngine::Rendering::LensFlareComponentSRP_Version::Initial{ static_cast<int32_t>(0x0) };
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareComponentSRP.get_lensFlareData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> (::UnityEngine::Rendering::LensFlareComponentSRP::*)()>(
    &::UnityEngine::Rendering::LensFlareComponentSRP::get_lensFlareData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x658299c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                                                               "get_lensFlareData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareComponentSRP.set_lensFlareData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareComponentSRP::*)(::UnityEngine::Rendering::LensFlareDataSRP*)>(
    &::UnityEngine::Rendering::LensFlareComponentSRP::set_lensFlareData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65829a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(), "set_lensFlareData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareDataSRP*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareComponentSRP.celestialProjectedOcclusionRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::LensFlareComponentSRP::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::LensFlareComponentSRP::celestialProjectedOcclusionRadius)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x657e0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(), "celestialProjectedOcclusionRadius", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareComponentSRP.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareComponentSRP::*)()>(
    &::UnityEngine::Rendering::LensFlareComponentSRP::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6582a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareComponentSRP.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareComponentSRP::*)()>(
    &::UnityEngine::Rendering::LensFlareComponentSRP::OnEnable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6582a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareComponentSRP.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareComponentSRP::*)()>(
    &::UnityEngine::Rendering::LensFlareComponentSRP::OnDisable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6582b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareComponentSRP.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareComponentSRP::*)()>(
    &::UnityEngine::Rendering::LensFlareComponentSRP::OnValidate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x65829ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                                                               "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareComponentSRP.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareComponentSRP::*)()>(
    &::UnityEngine::Rendering::LensFlareComponentSRP::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6582bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareComponentSRP._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareComponentSRP::*)()>(
    &::UnityEngine::Rendering::LensFlareComponentSRP::_ctor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6582bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP>& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_m_LensFlareData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensFlareData;
}
constexpr ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_m_LensFlareData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensFlareData;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_m_LensFlareData(::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LensFlareData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::LensFlareComponentSRP_Version& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::UnityEngine::Rendering::LensFlareComponentSRP_Version const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_version(::UnityEngine::Rendering::LensFlareComponentSRP_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr float_t& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr float_t const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
constexpr float_t& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_maxAttenuationDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAttenuationDistance;
}
constexpr float_t const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_maxAttenuationDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAttenuationDistance;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_maxAttenuationDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAttenuationDistance = value;
}
constexpr float_t& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_maxAttenuationScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAttenuationScale;
}
constexpr float_t const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_maxAttenuationScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxAttenuationScale;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_maxAttenuationScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxAttenuationScale = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_distanceAttenuationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceAttenuationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_distanceAttenuationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distanceAttenuationCurve;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_distanceAttenuationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___distanceAttenuationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_scaleByDistanceCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleByDistanceCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_scaleByDistanceCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleByDistanceCurve;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_scaleByDistanceCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scaleByDistanceCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_attenuationByLightShape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attenuationByLightShape;
}
constexpr bool const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_attenuationByLightShape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attenuationByLightShape;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_attenuationByLightShape(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attenuationByLightShape = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_radialScreenAttenuationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radialScreenAttenuationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_radialScreenAttenuationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radialScreenAttenuationCurve;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_radialScreenAttenuationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___radialScreenAttenuationCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_useOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useOcclusion;
}
constexpr bool const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_useOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useOcclusion;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_useOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useOcclusion = value;
}
constexpr bool& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_useBackgroundCloudOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useBackgroundCloudOcclusion;
}
constexpr bool const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_useBackgroundCloudOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useBackgroundCloudOcclusion;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_useBackgroundCloudOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useBackgroundCloudOcclusion = value;
}
constexpr bool& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_environmentOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentOcclusion;
}
constexpr bool const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_environmentOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentOcclusion;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_environmentOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentOcclusion = value;
}
constexpr bool& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_useWaterOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useWaterOcclusion;
}
constexpr bool const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_useWaterOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useWaterOcclusion;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_useWaterOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useWaterOcclusion = value;
}
constexpr float_t& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_occlusionRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionRadius;
}
constexpr float_t const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_occlusionRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionRadius;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_occlusionRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occlusionRadius = value;
}
constexpr uint32_t& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_sampleCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleCount;
}
constexpr uint32_t const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_sampleCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleCount;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_sampleCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sampleCount = value;
}
constexpr float_t& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_occlusionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionOffset;
}
constexpr float_t const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_occlusionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionOffset;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_occlusionOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occlusionOffset = value;
}
constexpr float_t& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr float_t const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_scale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scale = value;
}
constexpr bool& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_allowOffScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowOffScreen;
}
constexpr bool const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_allowOffScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowOffScreen;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_allowOffScreen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowOffScreen = value;
}
constexpr bool& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_volumetricCloudOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumetricCloudOcclusion;
}
constexpr bool const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_volumetricCloudOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volumetricCloudOcclusion;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_volumetricCloudOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volumetricCloudOcclusion = value;
}
constexpr ::UnityEngine::Rendering::TextureCurve*& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_occlusionRemapCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionRemapCurve;
}
constexpr ::UnityEngine::Rendering::TextureCurve* const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_occlusionRemapCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionRemapCurve;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_occlusionRemapCurve(::UnityEngine::Rendering::TextureCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___occlusionRemapCurve)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Light>& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_lightOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightOverride;
}
constexpr ::UnityW<::UnityEngine::Light> const& UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_get_lightOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightOverride;
}
constexpr void UnityEngine::Rendering::LensFlareComponentSRP::__cordl_internal_set_lightOverride(::UnityW<::UnityEngine::Light> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::LensFlareComponentSRP::setStaticF_sCelestialAngularRadius(float_t value) {
  ::cordl_internals::setStaticField<float_t, "sCelestialAngularRadius", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get>(
      std::forward<float_t>(value));
}
inline float_t UnityEngine::Rendering::LensFlareComponentSRP::getStaticF_sCelestialAngularRadius() {
  return ::cordl_internals::getStaticField<float_t, "sCelestialAngularRadius", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get>();
}
inline ::UnityW<::UnityEngine::Rendering::LensFlareDataSRP> UnityEngine::Rendering::LensFlareComponentSRP::get_lensFlareData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                                                             "get_lensFlareData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::LensFlareDataSRP>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareComponentSRP::set_lensFlareData(::UnityEngine::Rendering::LensFlareDataSRP* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(), "set_lensFlareData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::LensFlareDataSRP*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Rendering::LensFlareComponentSRP::celestialProjectedOcclusionRadius(::UnityEngine::Camera* mainCam) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(), "celestialProjectedOcclusionRadius", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, mainCam);
}
inline void UnityEngine::Rendering::LensFlareComponentSRP::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareComponentSRP::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                                                             "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareComponentSRP::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareComponentSRP::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                                                             "OnValidate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareComponentSRP::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::LensFlareComponentSRP::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareComponentSRP*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::LensFlareComponentSRP* UnityEngine::Rendering::LensFlareComponentSRP::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::LensFlareComponentSRP*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LensFlareComponentSRP::LensFlareComponentSRP() {}
