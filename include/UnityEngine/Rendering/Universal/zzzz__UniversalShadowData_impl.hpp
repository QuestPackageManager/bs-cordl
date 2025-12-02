#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalShadowData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightsShadowAtlasLayout_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPLightShadowCullingInfos_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalShadowData.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalShadowData::Reset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6657dfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalShadowData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalShadowData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalShadowData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6657efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_supportsMainLightShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsMainLightShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_supportsMainLightShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsMainLightShadows;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_supportsMainLightShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportsMainLightShadows = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowsEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowsEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_mainLightShadowsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainLightShadowsEnabled = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowmapWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowmapWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowmapWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowmapWidth;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_mainLightShadowmapWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainLightShadowmapWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowmapHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowmapHeight;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowmapHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowmapHeight;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_mainLightShadowmapHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainLightShadowmapHeight = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowCascadesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowCascadesCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowCascadesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowCascadesCount;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_mainLightShadowCascadesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainLightShadowCascadesCount = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowCascadesSplit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowCascadesSplit;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowCascadesSplit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowCascadesSplit;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_mainLightShadowCascadesSplit(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainLightShadowCascadesSplit = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowCascadeBorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowCascadeBorder;
}
constexpr float_t const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowCascadeBorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowCascadeBorder;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_mainLightShadowCascadeBorder(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainLightShadowCascadeBorder = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_supportsAdditionalLightShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsAdditionalLightShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_supportsAdditionalLightShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsAdditionalLightShadows;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_supportsAdditionalLightShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportsAdditionalLightShadows = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_additionalLightShadowsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalLightShadowsEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_additionalLightShadowsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalLightShadowsEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_additionalLightShadowsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additionalLightShadowsEnabled = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_additionalLightsShadowmapWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalLightsShadowmapWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_additionalLightsShadowmapWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalLightsShadowmapWidth;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_additionalLightsShadowmapWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additionalLightsShadowmapWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_additionalLightsShadowmapHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalLightsShadowmapHeight;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_additionalLightsShadowmapHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalLightsShadowmapHeight;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_additionalLightsShadowmapHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additionalLightsShadowmapHeight = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_supportsSoftShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsSoftShadows;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_supportsSoftShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsSoftShadows;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_supportsSoftShadows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportsSoftShadows = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_shadowmapDepthBufferBits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowmapDepthBufferBits;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_shadowmapDepthBufferBits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowmapDepthBufferBits;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_shadowmapDepthBufferBits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadowmapDepthBufferBits = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_bias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bias;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_bias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bias;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_bias(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bias)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_resolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolution;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_resolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolution;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_resolution(::System::Collections::Generic::List_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resolution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_isKeywordAdditionalLightShadowsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isKeywordAdditionalLightShadowsEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_isKeywordAdditionalLightShadowsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isKeywordAdditionalLightShadowsEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_isKeywordAdditionalLightShadowsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isKeywordAdditionalLightShadowsEnabled = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_isKeywordSoftShadowsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isKeywordSoftShadowsEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_isKeywordSoftShadowsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isKeywordSoftShadowsEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_isKeywordSoftShadowsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isKeywordSoftShadowsEnabled = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowResolution;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightShadowResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightShadowResolution;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_mainLightShadowResolution(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainLightShadowResolution = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightRenderTargetWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightRenderTargetWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightRenderTargetWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightRenderTargetWidth;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_mainLightRenderTargetWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainLightRenderTargetWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightRenderTargetHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightRenderTargetHeight;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_mainLightRenderTargetHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainLightRenderTargetHeight;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_mainLightRenderTargetHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainLightRenderTargetHeight = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos>&
UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_visibleLightsShadowCullingInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleLightsShadowCullingInfos;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos> const&
UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_visibleLightsShadowCullingInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___visibleLightsShadowCullingInfos;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_visibleLightsShadowCullingInfos(
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::URPLightShadowCullingInfos> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___visibleLightsShadowCullingInfos = value;
}
constexpr ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_shadowAtlasLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowAtlasLayout;
}
constexpr ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout const& UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_get_shadowAtlasLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowAtlasLayout;
}
constexpr void UnityEngine::Rendering::Universal::UniversalShadowData::__cordl_internal_set_shadowAtlasLayout(::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadowAtlasLayout = value;
}
inline void UnityEngine::Rendering::Universal::UniversalShadowData::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalShadowData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalShadowData* UnityEngine::Rendering::Universal::UniversalShadowData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::UniversalShadowData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData::UniversalShadowData() {}
