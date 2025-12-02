#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalLightData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalLightData.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalLightData::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6656d0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalLightData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalLightData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalLightData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6656d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_mainLightIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_mainLightIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightIndex;
}
constexpr void UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_set_mainLightIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainLightIndex = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_additionalLightsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalLightsCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_additionalLightsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalLightsCount;
}
constexpr void UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_set_additionalLightsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additionalLightsCount = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_maxPerObjectAdditionalLightsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxPerObjectAdditionalLightsCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_maxPerObjectAdditionalLightsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxPerObjectAdditionalLightsCount;
}
constexpr void UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_set_maxPerObjectAdditionalLightsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxPerObjectAdditionalLightsCount = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_visibleLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleLights;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> const& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_visibleLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleLights;
}
constexpr void UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_set_visibleLights(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visibleLights = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_shadeAdditionalLightsPerVertex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadeAdditionalLightsPerVertex;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_shadeAdditionalLightsPerVertex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadeAdditionalLightsPerVertex;
}
constexpr void UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_set_shadeAdditionalLightsPerVertex(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadeAdditionalLightsPerVertex = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_supportsMixedLighting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsMixedLighting;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_supportsMixedLighting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsMixedLighting;
}
constexpr void UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_set_supportsMixedLighting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportsMixedLighting = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_reflectionProbeBoxProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectionProbeBoxProjection;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_reflectionProbeBoxProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectionProbeBoxProjection;
}
constexpr void UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_set_reflectionProbeBoxProjection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reflectionProbeBoxProjection = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_reflectionProbeBlending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectionProbeBlending;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_reflectionProbeBlending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reflectionProbeBlending;
}
constexpr void UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_set_reflectionProbeBlending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reflectionProbeBlending = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_supportsLightLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsLightLayers;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_supportsLightLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsLightLayers;
}
constexpr void UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_set_supportsLightLayers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportsLightLayers = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_supportsAdditionalLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsAdditionalLights;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_get_supportsAdditionalLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsAdditionalLights;
}
constexpr void UnityEngine::Rendering::Universal::UniversalLightData::__cordl_internal_set_supportsAdditionalLights(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportsAdditionalLights = value;
}
inline void UnityEngine::Rendering::Universal::UniversalLightData::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalLightData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalLightData* UnityEngine::Rendering::Universal::UniversalLightData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::UniversalLightData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData::UniversalLightData() {}
