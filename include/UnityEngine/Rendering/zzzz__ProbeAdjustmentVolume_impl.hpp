#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeAdjustmentVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeAdjustmentVolume_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeAdjustmentVolume_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape::ProbeAdjustmentVolume_Shape(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape::ProbeAdjustmentVolume_Shape() {}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape UnityEngine::Rendering::ProbeAdjustmentVolume_Shape::Box{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape UnityEngine::Rendering::ProbeAdjustmentVolume_Shape::Sphere{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode::ProbeAdjustmentVolume_Mode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode::ProbeAdjustmentVolume_Mode() {}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode UnityEngine::Rendering::ProbeAdjustmentVolume_Mode::InvalidateProbes{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode UnityEngine::Rendering::ProbeAdjustmentVolume_Mode::OverrideValidityThreshold{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode UnityEngine::Rendering::ProbeAdjustmentVolume_Mode::ApplyVirtualOffset{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode UnityEngine::Rendering::ProbeAdjustmentVolume_Mode::OverrideVirtualOffsetSettings{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode UnityEngine::Rendering::ProbeAdjustmentVolume_Mode::OverrideSkyDirection{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode UnityEngine::Rendering::ProbeAdjustmentVolume_Mode::OverrideSampleCount{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode UnityEngine::Rendering::ProbeAdjustmentVolume_Mode::OverrideRenderingLayerMask{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode UnityEngine::Rendering::ProbeAdjustmentVolume_Mode::IntensityScale{ static_cast<int32_t>(0x63) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation::ProbeAdjustmentVolume_RenderingLayerMaskOperation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation::ProbeAdjustmentVolume_RenderingLayerMaskOperation() {}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation::Override{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation::Add{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation::Remove{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version::ProbeAdjustmentVolume_Version(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version::ProbeAdjustmentVolume_Version() {}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version UnityEngine::Rendering::ProbeAdjustmentVolume_Version::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version UnityEngine::Rendering::ProbeAdjustmentVolume_Version::Mode{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version UnityEngine::Rendering::ProbeAdjustmentVolume_Version::Count{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeAdjustmentVolume.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeAdjustmentVolume::*)()>(
    &::UnityEngine::Rendering::ProbeAdjustmentVolume::Awake)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65d1194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeAdjustmentVolume*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeAdjustmentVolume.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeAdjustmentVolume::*)()>(
    &::UnityEngine::Rendering::ProbeAdjustmentVolume::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x65d11cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeAdjustmentVolume*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeAdjustmentVolume.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeAdjustmentVolume::*)()>(
    &::UnityEngine::Rendering::ProbeAdjustmentVolume::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65d11e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeAdjustmentVolume*>::get(),
                                    "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeAdjustmentVolume._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeAdjustmentVolume::*)()>(
    &::UnityEngine::Rendering::ProbeAdjustmentVolume::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x65d11f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeAdjustmentVolume*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_shape() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shape;
}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_shape() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shape;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_shape(::UnityEngine::Rendering::ProbeAdjustmentVolume_Shape value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shape = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_size(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr float_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___radius;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___radius = value;
}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_mode(::UnityEngine::Rendering::ProbeAdjustmentVolume_Mode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_intensityScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensityScale;
}
constexpr float_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_intensityScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensityScale;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_intensityScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensityScale = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_overriddenDilationThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overriddenDilationThreshold;
}
constexpr float_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_overriddenDilationThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overriddenDilationThreshold;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_overriddenDilationThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overriddenDilationThreshold = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_virtualOffsetRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualOffsetRotation;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_virtualOffsetRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualOffsetRotation;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_virtualOffsetRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualOffsetRotation = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_virtualOffsetDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualOffsetDistance;
}
constexpr float_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_virtualOffsetDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualOffsetDistance;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_virtualOffsetDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualOffsetDistance = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_geometryBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geometryBias;
}
constexpr float_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_geometryBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___geometryBias;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_geometryBias(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___geometryBias = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_virtualOffsetThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualOffsetThreshold;
}
constexpr float_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_virtualOffsetThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___virtualOffsetThreshold;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_virtualOffsetThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___virtualOffsetThreshold = value;
}
constexpr float_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_rayOriginBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayOriginBias;
}
constexpr float_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_rayOriginBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rayOriginBias;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_rayOriginBias(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rayOriginBias = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_skyDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyDirection;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_skyDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyDirection;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_skyDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyDirection = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_skyShadingDirectionRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyShadingDirectionRotation;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_skyShadingDirectionRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyShadingDirectionRotation;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_skyShadingDirectionRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyShadingDirectionRotation = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_directSampleCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directSampleCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_directSampleCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directSampleCount;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_directSampleCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___directSampleCount = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_indirectSampleCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectSampleCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_indirectSampleCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indirectSampleCount;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_indirectSampleCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indirectSampleCount = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_sampleCountMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleCountMultiplier;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_sampleCountMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleCountMultiplier;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_sampleCountMultiplier(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sampleCountMultiplier = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_maxBounces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBounces;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_maxBounces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxBounces;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_maxBounces(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxBounces = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_skyOcclusionSampleCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionSampleCount;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_skyOcclusionSampleCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionSampleCount;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_skyOcclusionSampleCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusionSampleCount = value;
}
constexpr int32_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_skyOcclusionMaxBounces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionMaxBounces;
}
constexpr int32_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_skyOcclusionMaxBounces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionMaxBounces;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_skyOcclusionMaxBounces(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusionMaxBounces = value;
}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_renderingLayerMaskOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMaskOperation;
}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_renderingLayerMaskOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMaskOperation;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_renderingLayerMaskOperation(::UnityEngine::Rendering::ProbeAdjustmentVolume_RenderingLayerMaskOperation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderingLayerMaskOperation = value;
}
constexpr uint8_t& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_renderingLayerMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMask;
}
constexpr uint8_t const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_renderingLayerMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingLayerMask;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_renderingLayerMask(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderingLayerMask = value;
}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume_Version const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_version(::UnityEngine::Rendering::ProbeAdjustmentVolume_Version value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
constexpr bool& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_invalidateProbes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalidateProbes;
}
constexpr bool const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_invalidateProbes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalidateProbes;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_invalidateProbes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invalidateProbes = value;
}
constexpr bool& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_overrideDilationThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDilationThreshold;
}
constexpr bool const& UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_get_overrideDilationThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDilationThreshold;
}
constexpr void UnityEngine::Rendering::ProbeAdjustmentVolume::__cordl_internal_set_overrideDilationThreshold(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideDilationThreshold = value;
}
inline void UnityEngine::Rendering::ProbeAdjustmentVolume::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeAdjustmentVolume*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeAdjustmentVolume::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeAdjustmentVolume*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeAdjustmentVolume::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeAdjustmentVolume*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ProbeAdjustmentVolume::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeAdjustmentVolume*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeAdjustmentVolume* UnityEngine::Rendering::ProbeAdjustmentVolume::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeAdjustmentVolume*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Rendering::ProbeAdjustmentVolume::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Rendering::ProbeAdjustmentVolume::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeAdjustmentVolume::ProbeAdjustmentVolume() {}
