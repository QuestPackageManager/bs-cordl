#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/AdditionalLightsShadowCasterPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__AdditionalLightsShadowCasterPass_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__AdditionalLightsShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalLightsWorldToShadow(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_AdditionalLightsWorldToShadow",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalLightsWorldToShadow() {
  return ::cordl_internals::getStaticField<
      int32_t, "_AdditionalLightsWorldToShadow",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowParams(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_AdditionalShadowParams",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowParams() {
  return ::cordl_internals::getStaticField<
      int32_t, "_AdditionalShadowParams",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowOffset0(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_AdditionalShadowOffset0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowOffset0() {
  return ::cordl_internals::getStaticField<
      int32_t, "_AdditionalShadowOffset0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowOffset1(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_AdditionalShadowOffset1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowOffset1() {
  return ::cordl_internals::getStaticField<
      int32_t, "_AdditionalShadowOffset1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowFadeParams(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_AdditionalShadowFadeParams",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowFadeParams() {
  return ::cordl_internals::getStaticField<
      int32_t, "_AdditionalShadowFadeParams",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowmapSize(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_AdditionalShadowmapSize",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowmapSize() {
  return ::cordl_internals::getStaticField<
      int32_t, "_AdditionalShadowmapSize",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalLightsShadowmapID(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_AdditionalLightsShadowmapID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalLightsShadowmapID() {
  return ::cordl_internals::getStaticField<
      int32_t, "_AdditionalLightsShadowmapID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalLightsWorldToShadow_SSBO(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_AdditionalLightsWorldToShadow_SSBO",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalLightsWorldToShadow_SSBO() {
  return ::cordl_internals::getStaticField<
      int32_t, "_AdditionalLightsWorldToShadow_SSBO",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::setStaticF__AdditionalShadowParams_SSBO(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_AdditionalShadowParams_SSBO",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::getStaticF__AdditionalShadowParams_SSBO() {
  return ::cordl_internals::getStaticField<
      int32_t, "_AdditionalShadowParams_SSBO",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer::AdditionalLightsShadowCasterPass_AdditionalShadowsConstantBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6737bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowmapID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowmapID;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowmapID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowmapID;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_shadowmapID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadowmapID = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_emptyShadowmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyShadowmap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_emptyShadowmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyShadowmap;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_emptyShadowmap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emptyShadowmap = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_useStructuredBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useStructuredBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_useStructuredBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useStructuredBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_useStructuredBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useStructuredBuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_stripShadowsOffVariants() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stripShadowsOffVariants;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_stripShadowsOffVariants() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stripShadowsOffVariants;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_stripShadowsOffVariants(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stripShadowsOffVariants = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_viewMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_viewMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewMatrix;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_viewMatrix(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewMatrix = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_allocatedShadowAtlasSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocatedShadowAtlasSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_allocatedShadowAtlasSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allocatedShadowAtlasSize;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_allocatedShadowAtlasSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allocatedShadowAtlasSize = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowmapTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowmapTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowmapTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowmapTexture;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_shadowmapTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadowmapTexture = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_lightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_lightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData* const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowData;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_shadowData(::UnityEngine::Rendering::Universal::UniversalShadowData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadowData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_pass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_pass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_pass(
    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*>&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowRendererLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowRendererLists;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*> const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowRendererLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowRendererLists;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_shadowRendererLists(
    ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadowRendererLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowRendererListsHdl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowRendererListsHdl;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*> const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_get_shadowRendererListsHdl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowRendererListsHdl;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::__cordl_internal_set_shadowRendererListsHdl(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadowRendererListsHdl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData::AdditionalLightsShadowCasterPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x673c5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c._Render_b__61_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::_Render_b__61_0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x673c5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>::get(), "<Render>b__61_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::setStaticF___9__61_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__61_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::getStaticF___9__61_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__61_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::_Render_b__61_0(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>::get(), "<Render>b__61_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c* UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass___c::AdditionalLightsShadowCasterPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::_ctor)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x673779c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6737c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                                 "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.CalcGuardAngle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::CalcGuardAngle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6737cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "CalcGuardAngle",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.GetPointLightShadowFrustumFovBiasInDegrees
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetPointLightShadowFrustumFovBiasInDegrees)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x6737d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "GetPointLightShadowFrustumFovBiasInDegrees",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.ResolutionLog2ForHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::ResolutionLog2ForHash)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6737fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "ResolutionLog2ForHash",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.ComputeShadowRequestHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::ComputeShadowRequestHash)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6738028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                    "ComputeShadowRequestHash", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.GetLightTypeIdentifierForShadowParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    ::UnityEngine::LightType)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetLightTypeIdentifierForShadowParams)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6738320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "GetLightTypeIdentifierForShadowParams",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.UsesBakedShadows
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Light*)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::UsesBakedShadows)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6738340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "UsesBakedShadows",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Setup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6738378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "Setup",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*,
    ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Setup)> {
  constexpr static std::size_t size = 0x184c;
  constexpr static std::size_t addrs = 0x673846c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "Setup",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.UpdateTextureDescriptorIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::UpdateTextureDescriptorIfNeeded)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x673a180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                                 "UpdateTextureDescriptorIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.SetupForEmptyRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    bool, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetupForEmptyRendering)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x6739cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                    "SetupForEmptyRendering", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Configure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Configure)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x673a22c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Execute)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x673a36c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.GetShadowLightIndexFromLightIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetShadowLightIndexFromLightIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x67359ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "GetShadowLightIndexFromLightIndex",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Clear)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x673a100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                                 "Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.SetShadowParamsForEmptyShadowmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetShadowParamsForEmptyShadowmap)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x673a680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "SetShadowParamsForEmptyShadowmap",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.RenderAdditionalShadowmapAtlas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::RenderAdditionalShadowmapAtlas)> {
  constexpr static std::size_t size = 0xb0c;
  constexpr static std::size_t addrs = 0x673aae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                   "RenderAdditionalShadowmapAtlas", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.SetupAdditionalLightsShadowReceiverConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Vector2Int, bool, bool)>(
        &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetupAdditionalLightsShadowReceiverConstants)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x673b5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "SetupAdditionalLightsShadowReceiverConstants",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.InitPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::InitPassData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x673a7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "InitPassData",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.InitRendererLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(
    ::ByRef<::UnityEngine::Rendering::CullingResults>, ::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>,
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::InitRendererLists)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x673a870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "InitRendererLists",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 5>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Render)> {
  constexpr static std::size_t size = 0x9a8;
  constexpr static std::size_t addrs = 0x673b958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "Render",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightsShadowmapHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowmapHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightsShadowmapHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowmapHandle;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightsShadowmapHandle(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightsShadowmapHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_renderTargetWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTargetWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_renderTargetWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTargetWidth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_renderTargetWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderTargetWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_renderTargetHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTargetHeight;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_renderTargetHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTargetHeight;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_renderTargetHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderTargetHeight = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_CreateEmptyShadowmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateEmptyShadowmap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_CreateEmptyShadowmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateEmptyShadowmap;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_CreateEmptyShadowmap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreateEmptyShadowmap = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_EmptyShadowmapNeedsClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyShadowmapNeedsClear;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_EmptyShadowmapNeedsClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyShadowmapNeedsClear;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_EmptyShadowmapNeedsClear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EmptyShadowmapNeedsClear = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowSlicesTooMany() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IssuedMessageAboutShadowSlicesTooMany;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowSlicesTooMany() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IssuedMessageAboutShadowSlicesTooMany;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_IssuedMessageAboutShadowSlicesTooMany(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IssuedMessageAboutShadowSlicesTooMany = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowMapsRescale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IssuedMessageAboutShadowMapsRescale;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowMapsRescale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IssuedMessageAboutShadowMapsRescale;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_IssuedMessageAboutShadowMapsRescale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IssuedMessageAboutShadowMapsRescale = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowMapsTooBig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IssuedMessageAboutShadowMapsTooBig;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutShadowMapsTooBig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IssuedMessageAboutShadowMapsTooBig;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_IssuedMessageAboutShadowMapsTooBig(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IssuedMessageAboutShadowMapsTooBig = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutRemovedShadowSlices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IssuedMessageAboutRemovedShadowSlices;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_IssuedMessageAboutRemovedShadowSlices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IssuedMessageAboutRemovedShadowSlices;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_IssuedMessageAboutRemovedShadowSlices(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IssuedMessageAboutRemovedShadowSlices = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_UseStructuredBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStructuredBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_UseStructuredBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseStructuredBuffer;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_UseStructuredBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseStructuredBuffer = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_MaxShadowDistanceSq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxShadowDistanceSq;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_MaxShadowDistanceSq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxShadowDistanceSq;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_MaxShadowDistanceSq(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxShadowDistanceSq = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_CascadeBorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeBorder;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_CascadeBorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeBorder;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_CascadeBorder(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CascadeBorder = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_PassData(
    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_EmptyAdditionalLightShadowmapTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyAdditionalLightShadowmapTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_EmptyAdditionalLightShadowmapTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyAdditionalLightShadowmapTexture;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_EmptyAdditionalLightShadowmapTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EmptyAdditionalLightShadowmapTexture)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_VisibleLightIndexToIsCastingShadows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleLightIndexToIsCastingShadows;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_VisibleLightIndexToIsCastingShadows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleLightIndexToIsCastingShadows;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_VisibleLightIndexToIsCastingShadows(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VisibleLightIndexToIsCastingShadows)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleLightIndexToAdditionalLightIndex;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_VisibleLightIndexToAdditionalLightIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VisibleLightIndexToAdditionalLightIndex;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_VisibleLightIndexToAdditionalLightIndex(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VisibleLightIndexToAdditionalLightIndex)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*>& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightIndexToVisibleLightIndex;
}
constexpr ::ArrayW<int16_t, ::Array<int16_t>*> const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightIndexToVisibleLightIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightIndexToVisibleLightIndex;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightIndexToVisibleLightIndex(::ArrayW<int16_t, ::Array<int16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightIndexToVisibleLightIndex)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightIndexToShadowParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightIndexToShadowParams;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightIndexToShadowParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightIndexToShadowParams;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightIndexToShadowParams(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightIndexToShadowParams)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix(
    ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightShadowSliceIndexTo_WorldShadowMatrix)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*>&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightsShadowSlices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowSlices;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightsShadowSlices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowSlices;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightsShadowSlices(
    ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightsShadowSlices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<uint8_t>*&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>* const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_GlobalShadowSliceIndexToPerLightShadowSliceIndex(
    ::System::Collections::Generic::List_1<uint8_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GlobalShadowSliceIndexToPerLightShadowSliceIndex)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int16_t>*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ShadowSliceToAdditionalLightIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowSliceToAdditionalLightIndex;
}
constexpr ::System::Collections::Generic::List_1<int16_t>* const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ShadowSliceToAdditionalLightIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowSliceToAdditionalLightIndex;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_ShadowSliceToAdditionalLightIndex(::System::Collections::Generic::List_1<int16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShadowSliceToAdditionalLightIndex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>*&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ShadowRequestsHashes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowRequestsHashes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>* const&
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ShadowRequestsHashes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowRequestsHashes;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_ShadowRequestsHashes(::System::Collections::Generic::Dictionary_2<int32_t, uint64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShadowRequestsHashes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ProfilingSetupSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSetupSampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_ProfilingSetupSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSetupSampler;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_ProfilingSetupSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSetupSampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightShadowDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightShadowDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_get_m_AdditionalLightShadowDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightShadowDescriptor;
}
constexpr void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::__cordl_internal_set_m_AdditionalLightShadowDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightShadowDescriptor = value;
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_m_AdditionalShadowsBufferId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_AdditionalShadowsBufferId",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_m_AdditionalShadowsBufferId() {
  return ::cordl_internals::getStaticField<int32_t, "m_AdditionalShadowsBufferId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_m_AdditionalShadowsIndicesId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_AdditionalShadowsIndicesId",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_m_AdditionalShadowsIndicesId() {
  return ::cordl_internals::getStaticField<int32_t, "m_AdditionalShadowsIndicesId",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall(bool value) {
  ::cordl_internals::setStaticField<bool, "m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall() {
  return ::cordl_internals::getStaticField<bool, "m_IssuedMessageAboutPointLightHardShadowResolutionTooSmall",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall(bool value) {
  ::cordl_internals::setStaticField<bool, "m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall() {
  return ::cordl_internals::getStaticField<bool, "m_IssuedMessageAboutPointLightSoftShadowResolutionTooSmall",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_c_DefaultShadowParams(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "c_DefaultShadowParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>(
      std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_c_DefaultShadowParams() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "c_DefaultShadowParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_s_EmptyAdditionalShadowFadeParams(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "s_EmptyAdditionalShadowFadeParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>(
      std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_s_EmptyAdditionalShadowFadeParams() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "s_EmptyAdditionalShadowFadeParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::setStaticF_s_EmptyAdditionalLightIndexToShadowParams(
    ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, "s_EmptyAdditionalLightIndexToShadowParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::getStaticF_s_EmptyAdditionalLightIndexToShadowParams() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>, "s_EmptyAdditionalLightIndexToShadowParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::CalcGuardAngle(float_t frustumAngleInDegrees, float_t guardBandSizeInTexels,
                                                                                                             float_t sliceResolutionInTexels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "CalcGuardAngle",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, frustumAngleInDegrees, guardBandSizeInTexels, sliceResolutionInTexels);
}
inline float_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetPointLightShadowFrustumFovBiasInDegrees(int32_t shadowSliceResolution, bool shadowFiltering) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "GetPointLightShadowFrustumFovBiasInDegrees",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, shadowSliceResolution, shadowFiltering);
}
inline uint64_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::ResolutionLog2ForHash(int32_t resolution) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "ResolutionLog2ForHash",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, resolution);
}
inline uint64_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::ComputeShadowRequestHash(::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                                        ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                  "ComputeShadowRequestHash", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, lightData, shadowData);
}
inline float_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetLightTypeIdentifierForShadowParams(::UnityEngine::LightType lightType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "GetLightTypeIdentifierForShadowParams",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightType>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lightType);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::UsesBakedShadows(::UnityEngine::Light* light) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "UsesBakedShadows",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, light);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Setup(::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "Setup",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, renderingData);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Setup(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "Setup",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, renderingData, cameraData, lightData, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::UpdateTextureDescriptorIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                               "UpdateTextureDescriptorIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetupForEmptyRendering(bool stripShadowsOffVariants,
                                                                                                                  ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                                  ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                  "SetupForEmptyRendering", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stripShadowsOffVariants, lightData, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Configure(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                     ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                   ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::GetShadowLightIndexFromLightIndex(int32_t visibleLightIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "GetShadowLightIndexFromLightIndex",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, visibleLightIndex);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetShadowParamsForEmptyShadowmap(::UnityEngine::Rendering::RasterCommandBuffer* rasterCommandBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "SetShadowParamsForEmptyShadowmap",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rasterCommandBuffer);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::RenderAdditionalShadowmapAtlas(
    ::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*> data, bool useRenderGraph) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                  "RenderAdditionalShadowmapAtlas", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, data, useRenderGraph);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::SetupAdditionalLightsShadowReceiverConstants(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                                                        ::UnityEngine::Vector2Int allocatedShadowAtlasSize,
                                                                                                                                        bool useStructuredBuffer, bool softShadows) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "SetupAdditionalLightsShadowReceiverConstants",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, allocatedShadowAtlasSize, useStructuredBuffer, softShadows);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::InitPassData(
    ::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*> passData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "InitPassData",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passData, cameraData, lightData, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::InitRendererLists(
    ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults, ::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*> passData,
    ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useRenderGraph) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "InitRendererLists",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CullingResults>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass_PassData*>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cullResults, passData, context, renderGraph, useRenderGraph);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph,
                                                                                      ::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(), "Render",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, graph, frameData);
}
inline ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*
UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(evt));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass::AdditionalLightsShadowCasterPass() {}
