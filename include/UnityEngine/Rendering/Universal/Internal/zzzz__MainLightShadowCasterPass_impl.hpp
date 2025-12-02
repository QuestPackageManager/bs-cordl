#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/MainLightShadowCasterPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__MainLightShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__MainLightShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowSliceData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__WorldToShadow(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_WorldToShadow", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__WorldToShadow() {
  return ::cordl_internals::getStaticField<
      int32_t, "_WorldToShadow",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__ShadowParams(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_ShadowParams", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__ShadowParams() {
  return ::cordl_internals::getStaticField<
      int32_t, "_ShadowParams", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__CascadeShadowSplitSpheres0(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_CascadeShadowSplitSpheres0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__CascadeShadowSplitSpheres0() {
  return ::cordl_internals::getStaticField<
      int32_t, "_CascadeShadowSplitSpheres0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__CascadeShadowSplitSpheres1(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_CascadeShadowSplitSpheres1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__CascadeShadowSplitSpheres1() {
  return ::cordl_internals::getStaticField<
      int32_t, "_CascadeShadowSplitSpheres1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__CascadeShadowSplitSpheres2(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_CascadeShadowSplitSpheres2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__CascadeShadowSplitSpheres2() {
  return ::cordl_internals::getStaticField<
      int32_t, "_CascadeShadowSplitSpheres2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__CascadeShadowSplitSpheres3(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_CascadeShadowSplitSpheres3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__CascadeShadowSplitSpheres3() {
  return ::cordl_internals::getStaticField<
      int32_t, "_CascadeShadowSplitSpheres3",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__CascadeShadowSplitSphereRadii(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_CascadeShadowSplitSphereRadii",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__CascadeShadowSplitSphereRadii() {
  return ::cordl_internals::getStaticField<
      int32_t, "_CascadeShadowSplitSphereRadii",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__ShadowOffset0(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_ShadowOffset0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__ShadowOffset0() {
  return ::cordl_internals::getStaticField<
      int32_t, "_ShadowOffset0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__ShadowOffset1(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_ShadowOffset1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__ShadowOffset1() {
  return ::cordl_internals::getStaticField<
      int32_t, "_ShadowOffset1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__ShadowmapSize(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_ShadowmapSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__ShadowmapSize() {
  return ::cordl_internals::getStaticField<
      int32_t, "_ShadowmapSize",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::setStaticF__MainLightShadowmapID(int32_t value) {
  ::cordl_internals::setStaticField<
      int32_t, "_MainLightShadowmapID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::getStaticF__MainLightShadowmapID() {
  return ::cordl_internals::getStaticField<
      int32_t, "_MainLightShadowmapID",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_MainLightShadowConstantBuffer::MainLightShadowCasterPass_MainLightShadowConstantBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x66e7bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_emptyShadowmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyShadowmap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_emptyShadowmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyShadowmap;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_set_emptyShadowmap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emptyShadowmap = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData*& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_renderingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData* const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_renderingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::UniversalRenderingData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___renderingData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_lightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_lightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData*& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_shadowData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData* const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_shadowData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_set_shadowData(::UnityEngine::Rendering::Universal::UniversalShadowData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadowData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_pass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_pass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pass;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_set_pass(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_shadowmapTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowmapTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_shadowmapTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowmapTexture;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_set_shadowmapTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shadowmapTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*>&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_shadowRendererLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowRendererLists;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*> const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_shadowRendererLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowRendererLists;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_set_shadowRendererLists(
    ::ArrayW<::UnityEngine::Rendering::RendererList, ::Array<::UnityEngine::Rendering::RendererList>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadowRendererLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*>&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_shadowRendererListsHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowRendererListsHandle;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*> const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_get_shadowRendererListsHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shadowRendererListsHandle;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::__cordl_internal_set_shadowRendererListsHandle(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shadowRendererListsHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData* UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData::MainLightShadowCasterPass_PassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66ea50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c._Render_b__38_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::_Render_b__38_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x66ea510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*>::get(), "<Render>b__38_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c* UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::setStaticF___9__38_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__38_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::getStaticF___9__38_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__38_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::_Render_b__38_0(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData* data,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*>::get(), "<Render>b__38_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c* UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass___c::MainLightShadowCasterPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x66e7a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x66e7c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Setup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x66e7c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*,
    ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Setup)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x66e7d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.UpdateTextureDescriptorIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::UpdateTextureDescriptorIfNeeded)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x66e84e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                                 "UpdateTextureDescriptorIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.SetupForEmptyRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    bool, ::UnityEngine::Light*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetupForEmptyRendering)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x66e81b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "SetupForEmptyRendering",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Configure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Configure)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x66e858c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Execute)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x66e86cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Clear)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x66e8398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.SetShadowParamsForEmptyShadowmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetShadowParamsForEmptyShadowmap)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x66e899c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "SetShadowParamsForEmptyShadowmap",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.RenderMainLightCascadeShadowmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::RenderMainLightCascadeShadowmap)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x66e8cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "RenderMainLightCascadeShadowmap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.SetupMainLightShadowReceiverConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::ByRef<::UnityEngine::Rendering::VisibleLight>, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetupMainLightShadowReceiverConstants)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x66e930c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                    "SetupMainLightShadowReceiverConstants", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::VisibleLight>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.InitPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>, ::UnityEngine::Rendering::Universal::UniversalRenderingData*,
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::InitPassData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66e8a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "InitPassData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.InitRendererLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>, ::UnityEngine::Rendering::ScriptableRenderContext,
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool)>(&::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::InitRendererLists)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x66e8ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "InitRendererLists",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Render)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x66e9890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowmapTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowmapTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowmapTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowmapTexture;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_MainLightShadowmapTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MainLightShadowmapTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_renderTargetWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTargetWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_renderTargetWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTargetWidth;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_renderTargetWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderTargetWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_renderTargetHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTargetHeight;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_renderTargetHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderTargetHeight;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_renderTargetHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderTargetHeight = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_ShadowCasterCascadesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowCasterCascadesCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_ShadowCasterCascadesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShadowCasterCascadesCount;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_ShadowCasterCascadesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ShadowCasterCascadesCount = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CreateEmptyShadowmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateEmptyShadowmap;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CreateEmptyShadowmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateEmptyShadowmap;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_CreateEmptyShadowmap(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreateEmptyShadowmap = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_EmptyShadowmapNeedsClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyShadowmapNeedsClear;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_EmptyShadowmapNeedsClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyShadowmapNeedsClear;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_EmptyShadowmapNeedsClear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EmptyShadowmapNeedsClear = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeBorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeBorder;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeBorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeBorder;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_CascadeBorder(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CascadeBorder = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MaxShadowDistanceSq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxShadowDistanceSq;
}
constexpr float_t const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MaxShadowDistanceSq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxShadowDistanceSq;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_MaxShadowDistanceSq(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxShadowDistanceSq = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData* const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_EmptyMainLightShadowmapTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyMainLightShadowmapTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_EmptyMainLightShadowmapTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EmptyMainLightShadowmapTexture;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_EmptyMainLightShadowmapTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EmptyMainLightShadowmapTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowDescriptor;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_MainLightShadowDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MainLightShadowDescriptor = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeSplitDistances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeSplitDistances;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeSplitDistances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeSplitDistances;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_CascadeSplitDistances(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CascadeSplitDistances)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowMatrices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowMatrices;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_MainLightShadowMatrices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowMatrices;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_MainLightShadowMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MainLightShadowMatrices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_ProfilingSetupSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSetupSampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_ProfilingSetupSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSetupSampler;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_ProfilingSetupSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSetupSampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*>&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeSlices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeSlices;
}
constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> const&
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_get_m_CascadeSlices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CascadeSlices;
}
constexpr void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::__cordl_internal_set_m_CascadeSlices(
    ::ArrayW<::UnityEngine::Rendering::Universal::ShadowSliceData, ::Array<::UnityEngine::Rendering::Universal::ShadowSliceData>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CascadeSlices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::setStaticF_s_EmptyShadowParams(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "s_EmptyShadowParams",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get>(
      std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::getStaticF_s_EmptyShadowParams() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "s_EmptyShadowParams",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::setStaticF_s_EmptyShadowmapSize(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "s_EmptyShadowmapSize",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get>(
      std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::getStaticF_s_EmptyShadowmapSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "s_EmptyShadowmapSize",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Setup(::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, renderingData);
}
inline bool UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Setup(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                          ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                          ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, renderingData, cameraData, lightData, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::UpdateTextureDescriptorIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                               "UpdateTextureDescriptorIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetupForEmptyRendering(bool stripShadowsOffVariants, ::UnityEngine::Light* light,
                                                                                                           ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                           ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "SetupForEmptyRendering",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stripShadowsOffVariants, light, cameraData, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Configure(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                              ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                            ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetShadowParamsForEmptyShadowmap(::UnityEngine::Rendering::RasterCommandBuffer* rasterCommandBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "SetShadowParamsForEmptyShadowmap",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rasterCommandBuffer);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::RenderMainLightCascadeShadowmap(
    ::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*> data, bool isRenderGraph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "RenderMainLightCascadeShadowmap",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, data, isRenderGraph);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::SetupMainLightShadowReceiverConstants(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                                                          ::ByRef<::UnityEngine::Rendering::VisibleLight> shadowLight,
                                                                                                                          ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(),
                                  "SetupMainLightShadowReceiverConstants", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::VisibleLight>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, shadowLight, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::InitPassData(::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*> passData,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "InitPassData",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalRenderingData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passData, renderingData, cameraData, lightData, shadowData);
}
inline void
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::InitRendererLists(::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*> passData,
                                                                                          ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useRenderGraph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "InitRendererLists",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass_PassData*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passData, context, renderGraph, useRenderGraph);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* graph, ::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>::get(), "Render", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, graph, frameData);
}
inline ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*
UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*>(evt));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass::MainLightShadowCasterPass() {}
