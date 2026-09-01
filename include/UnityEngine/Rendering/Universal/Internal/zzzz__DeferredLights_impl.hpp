#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Internal\DeferredLights.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__AdditionalLightsShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_LitStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__StencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__StencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__StencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__StencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__StencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__StencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitPunctualStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitPunctualStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitPunctualStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_LitPunctualStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitPunctualStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitPunctualStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitPunctualStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitPunctualStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitPunctualStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitPunctualStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitPunctualStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitPunctualStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitPunctualStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitPunctualStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitPunctualStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitPunctualStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitPunctualStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitPunctualStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitPunctualStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitPunctualStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitPunctualStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitPunctualStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitPunctualStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitPunctualStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitDirStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitDirStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitDirStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_LitDirStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitDirStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitDirStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitDirStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitDirStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitDirStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitDirStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitDirStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitDirStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitDirStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitDirStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitDirStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitDirStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitDirStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitDirStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitDirStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitDirStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitDirStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitDirStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitDirStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitDirStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__ClearStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ClearStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__ClearStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_ClearStencilRef", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__ClearStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ClearStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__ClearStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_ClearStencilReadMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__ClearStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ClearStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__ClearStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_ClearStencilWriteMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__ScreenToWorld(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ScreenToWorld", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__ScreenToWorld() {
  return ::cordl_internals::getStaticField<int32_t, "_ScreenToWorld", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__MainLightPosition(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightPosition", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__MainLightPosition() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightPosition", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__MainLightColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightColor", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__MainLightColor() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightColor", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__MainLightLayerMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightLayerMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__MainLightLayerMask() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightLayerMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SpotLightScale(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SpotLightScale", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SpotLightScale() {
  return ::cordl_internals::getStaticField<int32_t, "_SpotLightScale", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SpotLightBias(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SpotLightBias", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SpotLightBias() {
  return ::cordl_internals::getStaticField<int32_t, "_SpotLightBias", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SpotLightGuard(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SpotLightGuard", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SpotLightGuard() {
  return ::cordl_internals::getStaticField<int32_t, "_SpotLightGuard", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightPosWS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightPosWS", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightPosWS() {
  return ::cordl_internals::getStaticField<int32_t, "_LightPosWS", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightColor", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightColor() {
  return ::cordl_internals::getStaticField<int32_t, "_LightColor", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightAttenuation(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightAttenuation", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightAttenuation() {
  return ::cordl_internals::getStaticField<int32_t, "_LightAttenuation", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightOcclusionProbInfo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightOcclusionProbInfo", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightOcclusionProbInfo() {
  return ::cordl_internals::getStaticField<int32_t, "_LightOcclusionProbInfo", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightDirection(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightDirection", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightDirection() {
  return ::cordl_internals::getStaticField<int32_t, "_LightDirection", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightFlags(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightFlags", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightFlags() {
  return ::cordl_internals::getStaticField<int32_t, "_LightFlags", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__ShadowLightIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ShadowLightIndex", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__ShadowLightIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_ShadowLightIndex", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightLayerMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightLayerMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightLayerMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LightLayerMask", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__CookieLightIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CookieLightIndex", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__CookieLightIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_CookieLightIndex", ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::DeferredLights_ShaderConstants() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses::DeferredLights_StencilDeferredPasses(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses::DeferredLights_StencilDeferredPasses() {}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses::StencilVolume{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses::PunctualLit{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses::PunctualSimpleLit{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses::DirectionalLit{
  static_cast<int32_t>(0x3)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses::DirectionalSimpleLit{
  static_cast<int32_t>(0x4)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses::ClearStencilPartial{
  static_cast<int32_t>(0x5)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses::Fog{
  static_cast<int32_t>(0x6)
};
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses UnityEngine::Rendering::Universal::Internal::DeferredLights_StencilDeferredPasses::SSAOOnly{
  static_cast<int32_t>(0x7)
};
// Ctor Parameters [CppParam { name: "stencilDeferredMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightCookieManager", ty:
// "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams::DeferredLights_InitParams(::UnityW<::UnityEngine::Material> stencilDeferredMaterial,
                                                                                                              ::UnityEngine::Rendering::Universal::LightCookieManager* lightCookieManager) noexcept {
  this->stencilDeferredMaterial = stencilDeferredMaterial;
  this->lightCookieManager = lightCookieManager;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams::DeferredLights_InitParams() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68efbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_get_lightData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_get_lightData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightData;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightData = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_get_deferredLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deferredLights;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const&
UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_get_deferredLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deferredLights;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_set_deferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deferredLights = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_get_cameraTargetSizeCopy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraTargetSizeCopy;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_get_cameraTargetSizeCopy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraTargetSizeCopy;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::__cordl_internal_set_cameraTargetSizeCopy(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraTargetSizeCopy = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData* UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::DeferredLights_SetupLightPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68efc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c._SetupRenderGraphLights_b__139_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights___c::_SetupRenderGraphLights_b__139_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68efc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>(),
                                                                                           { "<SetupRenderGraphLights>b__139_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DeferredLights___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c* UnityEngine::Rendering::Universal::Internal::DeferredLights___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*, "<>9", ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights___c::setStaticF___9__139_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__139_0", ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::Internal::DeferredLights___c::getStaticF___9__139_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__139_0", ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights___c::_SetupRenderGraphLights_b__139_0(::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData* data,
                                                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>(),
                                                                                         { "<SetupRenderGraphLights>b__139_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c* UnityEngine::Rendering::Universal::Internal::DeferredLights___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c::DeferredLights___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferAlbedoIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferAlbedoIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferAlbedoIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferSpecularMetallicIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSpecularMetallicIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferSpecularMetallicIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferNormalSmoothnessIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferNormalSmoothnessIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferNormalSmoothnessIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferLightingIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferLightingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferLightingIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferDepthIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferDepthIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68e9390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GbufferDepthIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferRenderingLayers)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x68e93a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferRenderingLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferShadowMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferShadowMask)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x68e9400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferShadowMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferSliceCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSliceCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68e9458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferSliceCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferInputAttachmentCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferInputAttachmentCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68e949c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferInputAttachmentCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.GetGBufferFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::GetGBufferFormat)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x68e94b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "GetGBufferFormat", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseShadowMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseShadowMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x68e9448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseShadowMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseRenderingLayers)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x68e93d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseRenderingLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_RenderingLayerMaskSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderingLayerMaskSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_RenderingLayerMaskSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_RenderingLayerMaskSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderingLayerMaskSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "set_RenderingLayerMaskSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseDecalLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseDecalLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseDecalLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_UseDecalLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseDecalLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_UseDecalLayers", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseLightLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseLightLayers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68e960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseLightLayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseFramebufferFetch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseFramebufferFetch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseFramebufferFetch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_UseFramebufferFetch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseFramebufferFetch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_UseFramebufferFetch", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_HasDepthPrepass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasDepthPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_HasDepthPrepass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_HasDepthPrepass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasDepthPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_HasDepthPrepass", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_HasNormalPrepass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasNormalPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_HasNormalPrepass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_HasNormalPrepass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasNormalPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_HasNormalPrepass", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_HasRenderingLayerPrepass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasRenderingLayerPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_HasRenderingLayerPrepass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_HasRenderingLayerPrepass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasRenderingLayerPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_HasRenderingLayerPrepass", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_IsOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_IsOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_IsOverlay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_IsOverlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_IsOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_IsOverlay", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_AccurateGbufferNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_AccurateGbufferNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_AccurateGbufferNormals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_AccurateGbufferNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_AccurateGbufferNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_AccurateGbufferNormals", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_MixedLightingSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::MixedLightingSetup (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_MixedLightingSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_MixedLightingSetup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_MixedLightingSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::Universal::MixedLightingSetup)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_MixedLightingSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e96f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "set_MixedLightingSetup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::MixedLightingSetup>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseJobSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseJobSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseJobSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_UseJobSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseJobSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_UseJobSystem", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_RenderWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_RenderWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_RenderWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_RenderWidth", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_RenderHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_RenderHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_RenderHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_RenderHeight", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RTHandle*> (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GbufferAttachments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_GbufferAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                           { "set_GbufferAttachments", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferTextureHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferTextureHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GbufferTextureHandles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_GbufferTextureHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferTextureHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "set_GbufferTextureHandles", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DeferredInputAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RTHandle*> (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_DeferredInputAttachments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DeferredInputAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::ArrayW<::UnityEngine::Rendering::RTHandle*>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "set_DeferredInputAttachments", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DeferredInputIsTransient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<bool> (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputIsTransient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_DeferredInputIsTransient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DeferredInputIsTransient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::ArrayW<bool>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputIsTransient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                           { "set_DeferredInputIsTransient", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_DepthAttachment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                           { "set_DepthAttachment", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthCopyTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthCopyTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_DepthCopyTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthCopyTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthCopyTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                           { "set_DepthCopyTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferFormats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferFormats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GbufferFormats", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_GbufferFormats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferFormats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e9798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "set_GbufferFormats", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthAttachmentHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachmentHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e97a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_DepthAttachmentHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthAttachmentHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachmentHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68e97a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                           { "set_DepthAttachmentHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams, bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x68e97b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupRenderGraphLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupRenderGraphLights)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x68e9de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                         { "SetupRenderGraphLights",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::Universal::UniversalLightData*, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupLights)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x68ea1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                         { "SetupLights",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ResolveMixedLightingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::ResolveMixedLightingMode)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x68ea8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "ResolveMixedLightingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.DisableFramebufferFetchInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::DisableFramebufferFetchInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68eacec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "DisableFramebufferFetchInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ReleaseGbufferResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::ReleaseGbufferResources)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x68eacf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "ReleaseGbufferResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ReAllocateGBufferIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::RenderTextureDescriptor, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::ReAllocateGBufferIfNeeded)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x68ead80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "ReAllocateGBufferIfNeeded", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateGbufferResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateGbufferResources)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x68eaa28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "CreateGbufferResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.UpdateDeferredInputAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::UpdateDeferredInputAttachments)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x68eaf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "UpdateDeferredInputAttachments", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.IsRuntimeSupportedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::IsRuntimeSupportedThisFrame)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x68eb22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "IsRuntimeSupportedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*, bool, bool, bool, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*,
    ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x68eb2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "Setup",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68eb52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x68eb534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                           { "OnCameraCleanup", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.OverwriteStencil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::StencilState (*)(::UnityEngine::Rendering::StencilState, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x68eb608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "OverwriteStencil", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.OverwriteStencil
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderStateBlock (*)(::UnityEngine::Rendering::RenderStateBlock, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x68eb748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                { "OverwriteStencil", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderStateBlock>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ClearStencilPartial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::ClearStencilPartial)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x68eb8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                           { "ClearStencilPartial", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ExecuteDeferredPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*,
    ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteDeferredPass)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x68ebb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                            { "ExecuteDeferredPass",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupShaderLightConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupShaderLightConstants)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68ea8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
            { "SetupShaderLightConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupMainLightConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMainLightConstants)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x68ec9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
            { "SetupMainLightConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupMatrixConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMatrixConstants)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x68ebef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
            { "SetupMatrixConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.PrecomputeLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::by_ref<::Unity::Collections::NativeArray_1<uint16_t>>, ::by_ref<::Unity::Collections::NativeArray_1<uint16_t>>,
    ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>, bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::PrecomputeLights)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x68ea5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                         { "PrecomputeLights",
                                           {},
                                           { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint16_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint16_t>>>(),
                                             ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.HasStencilLightsOfType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::LightType)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::HasStencilLightsOfType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x68ec2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                           { "HasStencilLightsOfType", {}, { ::i2c::type_of<::UnityEngine::LightType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilLights)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x68ec488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                { "RenderStencilLights",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilDirectionalLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, bool, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, bool, bool, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilDirectionalLights)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x68ecbcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                         { "RenderStencilDirectionalLights",
                           {},
                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(),
                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(),
                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilPointLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, bool, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, bool, bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilPointLights)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x68ed1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                         { "RenderStencilPointLights",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                             ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilSpotLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, bool, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, bool, bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilSpotLights)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x68ed7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                         { "RenderStencilSpotLights",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                             ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderSSAOBeforeShading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::RasterCommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderSSAOBeforeShading)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x68ec348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                           { "RenderSSAOBeforeShading", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderFog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::RasterCommandBuffer*, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderFog)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x68ec780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "RenderFog", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.InitStencilDeferredMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::InitStencilDeferredMaterial)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x68e9a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "InitStencilDeferredMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateSphereMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateSphereMesh)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x68ee234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "CreateSphereMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateHemisphereMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateHemisphereMesh)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x68ee808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "CreateHemisphereMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateFullscreenMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateFullscreenMesh)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x68eba34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "CreateFullscreenMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetRenderingLayersMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Light*, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetRenderingLayersMask)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68ecb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                         { "SetRenderingLayersMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetAdditionalLightsShadowsKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::by_ref<::UnityEngine::Rendering::RasterCommandBuffer*>, bool, bool, bool, bool, ::by_ref<bool>)>(
        &::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetAdditionalLightsShadowsKeyword)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x68ee080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "SetAdditionalLightsShadowsKeyword",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RasterCommandBuffer*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetSoftShadowsKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalShadowData*, ::UnityEngine::Light*, bool, bool, ::by_ref<bool>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetSoftShadowsKeyword)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68ee144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                { "SetSoftShadowsKeyword",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                                    ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetLightCookiesKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, int32_t, bool, bool, ::by_ref<bool>, ::by_ref<int32_t>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetLightCookiesKeyword)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x68edf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                             { "SetLightCookiesKeyword",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__RenderingLayerMaskSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RenderingLayerMaskSize_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__RenderingLayerMaskSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RenderingLayerMaskSize_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__RenderingLayerMaskSize_k__BackingField(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RenderingLayerMaskSize_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__UseDecalLayers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseDecalLayers_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__UseDecalLayers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseDecalLayers_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__UseDecalLayers_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseDecalLayers_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__UseFramebufferFetch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseFramebufferFetch_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__UseFramebufferFetch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseFramebufferFetch_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__UseFramebufferFetch_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseFramebufferFetch_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__HasDepthPrepass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasDepthPrepass_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__HasDepthPrepass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasDepthPrepass_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__HasDepthPrepass_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HasDepthPrepass_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__HasNormalPrepass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasNormalPrepass_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__HasNormalPrepass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasNormalPrepass_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__HasNormalPrepass_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HasNormalPrepass_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__HasRenderingLayerPrepass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasRenderingLayerPrepass_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__HasRenderingLayerPrepass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasRenderingLayerPrepass_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__HasRenderingLayerPrepass_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HasRenderingLayerPrepass_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__IsOverlay_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsOverlay_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__IsOverlay_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsOverlay_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__IsOverlay_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsOverlay_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__AccurateGbufferNormals_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AccurateGbufferNormals_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__AccurateGbufferNormals_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AccurateGbufferNormals_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__AccurateGbufferNormals_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AccurateGbufferNormals_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__MixedLightingSetup_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MixedLightingSetup_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__MixedLightingSetup_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MixedLightingSetup_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__MixedLightingSetup_k__BackingField(::UnityEngine::Rendering::Universal::MixedLightingSetup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MixedLightingSetup_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__UseJobSystem_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseJobSystem_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__UseJobSystem_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UseJobSystem_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__UseJobSystem_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UseJobSystem_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__RenderWidth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RenderWidth_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__RenderWidth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RenderWidth_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__RenderWidth_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RenderWidth_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__RenderHeight_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RenderHeight_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__RenderHeight_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RenderHeight_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__RenderHeight_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____RenderHeight_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferAttachments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferAttachments_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferAttachments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferAttachments_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__GbufferAttachments_k__BackingField(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____GbufferAttachments_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_GbufferRTHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GbufferRTHandles;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_GbufferRTHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GbufferRTHandles;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_GbufferRTHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GbufferRTHandles = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferTextureHandles_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferTextureHandles_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferTextureHandles_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferTextureHandles_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__GbufferTextureHandles_k__BackingField(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____GbufferTextureHandles_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputAttachments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputAttachments_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputAttachments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputAttachments_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DeferredInputAttachments_k__BackingField(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DeferredInputAttachments_k__BackingField = value;
}
constexpr ::ArrayW<bool>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputIsTransient_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputIsTransient_k__BackingField;
}
constexpr ::ArrayW<bool> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputIsTransient_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputIsTransient_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DeferredInputIsTransient_k__BackingField(::ArrayW<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DeferredInputIsTransient_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthAttachment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthAttachment_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthAttachment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthAttachment_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DepthAttachment_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DepthAttachment_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthCopyTexture_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthCopyTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthCopyTexture_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthCopyTexture_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DepthCopyTexture_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DepthCopyTexture_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferFormats_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferFormats_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferFormats_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferFormats_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__GbufferFormats_k__BackingField(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____GbufferFormats_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthAttachmentHandle_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthAttachmentHandle_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DepthAttachmentHandle_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DepthAttachmentHandle_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DepthAttachmentHandle_k__BackingField(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DepthAttachmentHandle_k__BackingField = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_stencilVisLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stencilVisLights;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_stencilVisLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stencilVisLights;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_stencilVisLights(::Unity::Collections::NativeArray_1<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_stencilVisLights = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_stencilVisLightOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stencilVisLightOffsets;
}
constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_stencilVisLightOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stencilVisLightOffsets;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_stencilVisLightOffsets(::Unity::Collections::NativeArray_1<uint16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_stencilVisLightOffsets = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_AdditionalLightsShadowCasterPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowCasterPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_AdditionalLightsShadowCasterPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowCasterPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_AdditionalLightsShadowCasterPass(
    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsShadowCasterPass = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_SphereMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SphereMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_SphereMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SphereMesh;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_SphereMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SphereMesh = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_HemisphereMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HemisphereMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_HemisphereMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HemisphereMesh;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_HemisphereMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HemisphereMesh = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_FullscreenMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullscreenMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_FullscreenMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullscreenMesh;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_FullscreenMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FullscreenMesh = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_StencilDeferredMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_StencilDeferredMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredMaterial;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_StencilDeferredMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilDeferredMaterial = value;
}
constexpr ::ArrayW<int32_t>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_StencilDeferredPasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredPasses;
}
constexpr ::ArrayW<int32_t> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_StencilDeferredPasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredPasses;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_StencilDeferredPasses(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilDeferredPasses = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ScreenToWorld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenToWorld;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ScreenToWorld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenToWorld;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_ScreenToWorld(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenToWorld = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerDeferredStencilPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerDeferredStencilPass;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerDeferredStencilPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerDeferredStencilPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_ProfilingSamplerDeferredStencilPass(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProfilingSamplerDeferredStencilPass = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerDeferredFogPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerDeferredFogPass;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerDeferredFogPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerDeferredFogPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_ProfilingSamplerDeferredFogPass(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProfilingSamplerDeferredFogPass = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerClearStencilPartialPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerClearStencilPartialPass;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ProfilingSamplerClearStencilPartialPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSamplerClearStencilPartialPass;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_ProfilingSamplerClearStencilPartialPass(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProfilingSamplerClearStencilPartialPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_LightCookieManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager* const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_LightCookieManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightCookieManager = value;
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_GBufferNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "k_GBufferNames", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_GBufferNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "k_GBufferNames", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_GBufferShaderPropertyIDs(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "k_GBufferShaderPropertyIDs", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_GBufferShaderPropertyIDs() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "k_GBufferShaderPropertyIDs", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_StencilDeferredPassNames(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "k_StencilDeferredPassNames", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_StencilDeferredPassNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "k_StencilDeferredPassNames", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_InvalidLightOffset(uint16_t value) {
  ::cordl_internals::setStaticField<uint16_t, "k_InvalidLightOffset", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<uint16_t>(value));
}
inline uint16_t UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_InvalidLightOffset() {
  return ::cordl_internals::getStaticField<uint16_t, "k_InvalidLightOffset", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_SetupLights(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_SetupLights", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_SetupLights() {
  return ::cordl_internals::getStaticField<::StringW, "k_SetupLights", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_DeferredPass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DeferredPass", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_DeferredPass() {
  return ::cordl_internals::getStaticField<::StringW, "k_DeferredPass", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_DeferredStencilPass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DeferredStencilPass", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_DeferredStencilPass() {
  return ::cordl_internals::getStaticField<::StringW, "k_DeferredStencilPass", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_DeferredFogPass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DeferredFogPass", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_DeferredFogPass() {
  return ::cordl_internals::getStaticField<::StringW, "k_DeferredFogPass", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_ClearStencilPartial(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_ClearStencilPartial", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_ClearStencilPartial() {
  return ::cordl_internals::getStaticField<::StringW, "k_ClearStencilPartial", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_SetupLightConstants(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_SetupLightConstants", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_SetupLightConstants() {
  return ::cordl_internals::getStaticField<::StringW, "k_SetupLightConstants", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_kStencilShapeGuard(float_t value) {
  ::cordl_internals::setStaticField<float_t, "kStencilShapeGuard", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_kStencilShapeGuard() {
  return ::cordl_internals::getStaticField<float_t, "kStencilShapeGuard", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_m_ProfilingSetupLights(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLights", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_m_ProfilingSetupLights() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLights", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_m_ProfilingDeferredPass(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDeferredPass", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_m_ProfilingDeferredPass() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDeferredPass", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_m_ProfilingSetupLightConstants(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLightConstants", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_m_ProfilingSetupLightConstants() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLightConstants", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_s_SetupDeferredLights(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_SetupDeferredLights", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_s_SetupDeferredLights() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_SetupDeferredLights", ::UnityEngine::Rendering::Universal::Internal::DeferredLights*>();
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferAlbedoIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferAlbedoIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSpecularMetallicIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferSpecularMetallicIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferNormalSmoothnessIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferNormalSmoothnessIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferLightingIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferLightingIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferDepthIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GbufferDepthIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferRenderingLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferRenderingLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferShadowMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferShadowMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSliceCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferSliceCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferInputAttachmentCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GBufferInputAttachmentCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::Internal::DeferredLights::GetGBufferFormat(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "GetGBufferFormat", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseShadowMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseShadowMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseRenderingLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseRenderingLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderingLayerMaskSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_RenderingLayerMaskSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderingLayerMaskSize(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "set_RenderingLayerMaskSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseDecalLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseDecalLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseDecalLayers(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_UseDecalLayers", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseLightLayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseLightLayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseFramebufferFetch() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseFramebufferFetch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseFramebufferFetch(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_UseFramebufferFetch", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasDepthPrepass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_HasDepthPrepass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasDepthPrepass(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_HasDepthPrepass", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasNormalPrepass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_HasNormalPrepass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasNormalPrepass(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_HasNormalPrepass", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasRenderingLayerPrepass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_HasRenderingLayerPrepass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasRenderingLayerPrepass(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_HasRenderingLayerPrepass", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_IsOverlay() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_IsOverlay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_IsOverlay(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_IsOverlay", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_AccurateGbufferNormals() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_AccurateGbufferNormals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_AccurateGbufferNormals(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_AccurateGbufferNormals", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::MixedLightingSetup UnityEngine::Rendering::Universal::Internal::DeferredLights::get_MixedLightingSetup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_MixedLightingSetup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::MixedLightingSetup>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_MixedLightingSetup(::UnityEngine::Rendering::Universal::MixedLightingSetup value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "set_MixedLightingSetup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::MixedLightingSetup>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseJobSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_UseJobSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseJobSystem(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_UseJobSystem", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_RenderWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderWidth(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_RenderWidth", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderHeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_RenderHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderHeight(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "set_RenderHeight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GbufferAttachments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                         { "set_GbufferAttachments", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferTextureHandles() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GbufferTextureHandles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferTextureHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "set_GbufferTextureHandles", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_DeferredInputAttachments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                         { "set_DeferredInputAttachments", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<bool> UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputIsTransient() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_DeferredInputIsTransient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputIsTransient(::ArrayW<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                         { "set_DeferredInputIsTransient", {}, { ::i2c::type_of<::ArrayW<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachment() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_DepthAttachment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachment(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                         { "set_DepthAttachment", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthCopyTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_DepthCopyTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthCopyTexture(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                         { "set_DepthCopyTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferFormats() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_GbufferFormats", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferFormats(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "set_GbufferFormats", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachmentHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "get_DepthAttachmentHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachmentHandle(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                         { "set_DepthAttachmentHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::_ctor(::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams initParams, bool useNativeRenderPass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initParams, useNativeRenderPass);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupRenderGraphLights(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                       { "SetupRenderGraphLights",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupLights(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                     ::UnityEngine::Vector2Int cameraTargetSizeCopy, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                     bool isRenderGraph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                       { "SetupLights",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraData, cameraTargetSizeCopy, lightData, isRenderGraph);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ResolveMixedLightingMode(::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "ResolveMixedLightingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::DisableFramebufferFetchInput() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "DisableFramebufferFetchInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ReleaseGbufferResources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "ReleaseGbufferResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ReAllocateGBufferIfNeeded(::UnityEngine::RenderTextureDescriptor gbufferSlice, int32_t gbufferIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "ReAllocateGBufferIfNeeded", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gbufferSlice, gbufferIndex);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateGbufferResources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "CreateGbufferResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::UpdateDeferredInputAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "UpdateDeferredInputAttachments", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::IsRuntimeSupportedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "IsRuntimeSupportedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* additionalLightsShadowCasterPass,
                                                                               bool hasDepthPrepass, bool hasNormalPrepass, bool hasRenderingLayerPrepass,
                                                                               ::UnityEngine::Rendering::RTHandle* depthCopyTexture, ::UnityEngine::Rendering::RTHandle* depthAttachment,
                                                                               ::UnityEngine::Rendering::RTHandle* colorAttachment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "Setup",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalLightsShadowCasterPass, hasDepthPrepass, hasNormalPrepass, hasRenderingLayerPrepass, depthCopyTexture,
                                                   depthAttachment, colorAttachment);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* additionalLightsShadowCasterPass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "Setup", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalLightsShadowCasterPass);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                         { "OnCameraCleanup", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::StencilState UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil(::UnityEngine::Rendering::StencilState s, int32_t stencilWriteMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "OverwriteStencil", {}, { ::i2c::type_of<::UnityEngine::Rendering::StencilState>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilState>(nullptr, ___internal_method, s, stencilWriteMask);
}
inline ::UnityEngine::Rendering::RenderStateBlock UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil(::UnityEngine::Rendering::RenderStateBlock block,
                                                                                                                                int32_t stencilWriteMask, int32_t stencilRef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                              { "OverwriteStencil", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderStateBlock>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderStateBlock>(nullptr, ___internal_method, block, stencilWriteMask, stencilRef);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ClearStencilPartial(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                         { "ClearStencilPartial", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteDeferredPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                          { "ExecuteDeferredPass",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraData, lightData, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupShaderLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                   ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
          { "SetupShaderLightConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMainLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                       { "SetupMainLightConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMatrixConstants(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                              ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
          { "SetupMatrixConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::PrecomputeLights(::by_ref<::Unity::Collections::NativeArray_1<uint16_t>> stencilVisLights,
                                                                                          ::by_ref<::Unity::Collections::NativeArray_1<uint16_t>> stencilVisLightOffsets,
                                                                                          ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> visibleLights,
                                                                                          bool hasAdditionalLights) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                              { "PrecomputeLights",
                                                {},
                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint16_t>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<uint16_t>>>(),
                                                  ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stencilVisLights, stencilVisLightOffsets, visibleLights, hasAdditionalLights);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::HasStencilLightsOfType(::UnityEngine::LightType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                         { "HasStencilLightsOfType", {}, { ::i2c::type_of<::UnityEngine::LightType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, bool stripShadowsOffVariants) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                              { "RenderStencilLights",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, lightData, shadowData, stripShadowsOffVariants);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilDirectionalLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool stripShadowsOffVariants,
                                                                                                        ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                        ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                                                                                        bool hasAdditionalLightPass, bool hasLightCookieManager, int32_t mainLightIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                       { "RenderStencilDirectionalLights",
                         {},
                         { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(),
                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(),
                           ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, stripShadowsOffVariants, lightData, shadowData, visibleLights, hasAdditionalLightPass, hasLightCookieManager,
                                                   mainLightIndex);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilPointLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool stripShadowsOffVariants,
                                                                                                  ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                  ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                                                                                  bool hasAdditionalLightPass, bool hasLightCookieManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                       { "RenderStencilPointLights",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                           ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, stripShadowsOffVariants, lightData, shadowData, visibleLights, hasAdditionalLightPass, hasLightCookieManager);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilSpotLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool stripShadowsOffVariants,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                                                                                 bool hasAdditionalLightPass, bool hasLightCookieManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                       { "RenderStencilSpotLights",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                           ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, stripShadowsOffVariants, lightData, shadowData, visibleLights, hasAdditionalLightPass, hasLightCookieManager);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderSSAOBeforeShading(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                                                         { "RenderSSAOBeforeShading", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderFog(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool isOrthographic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "RenderFog", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, isOrthographic);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::InitStencilDeferredMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "InitStencilDeferredMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateSphereMesh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "CreateSphereMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateHemisphereMesh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "CreateHemisphereMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateFullscreenMesh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(), { "CreateFullscreenMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetRenderingLayersMask(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Light* light,
                                                                                                int32_t shaderPropertyID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                          { "SetRenderingLayersMask", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, light, shaderPropertyID);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetAdditionalLightsShadowsKeyword(::by_ref<::UnityEngine::Rendering::RasterCommandBuffer*> cmd, bool stripShadowsOffVariants,
                                                                                                           bool additionalLightShadowsEnabled, bool hasDeferredShadows, bool shouldOverride,
                                                                                                           ::by_ref<bool> lastShadowsKeyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "SetAdditionalLightsShadowsKeyword",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RasterCommandBuffer*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, stripShadowsOffVariants, additionalLightShadowsEnabled, hasDeferredShadows, shouldOverride, lastShadowsKeyword);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetSoftShadowsKeyword(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                               ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, ::UnityEngine::Light* light,
                                                                                               bool hasDeferredShadows, bool shouldOverride, ::by_ref<bool> lastHasSoftShadow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                              { "SetSoftShadowsKeyword",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                                  ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, shadowData, light, hasDeferredShadows, shouldOverride, lastHasSoftShadow);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetLightCookiesKeyword(::UnityEngine::Rendering::RasterCommandBuffer* cmd, int32_t visLightIndex, bool hasLightCookieManager,
                                                                                                bool shouldOverride, ::by_ref<bool> lastLightCookieState, ::by_ref<int32_t> lastCookieLightIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(),
                                                           { "SetLightCookiesKeyword",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, visLightIndex, hasLightCookieManager, shouldOverride, lastLightCookieState, lastCookieLightIndex);
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights*
UnityEngine::Rendering::Universal::Internal::DeferredLights::New_ctor(::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams initParams, bool useNativeRenderPass) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(initParams, useNativeRenderPass));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights::DeferredLights() {}
