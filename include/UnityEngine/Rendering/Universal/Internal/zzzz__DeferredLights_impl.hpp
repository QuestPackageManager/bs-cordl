#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DeferredLights.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_impl.hpp"
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
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_LitStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__StencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__StencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__StencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__StencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__StencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__StencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitPunctualStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitPunctualStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitPunctualStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_LitPunctualStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitPunctualStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitPunctualStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitPunctualStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitPunctualStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitPunctualStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitPunctualStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitPunctualStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitPunctualStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitPunctualStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitPunctualStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitPunctualStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitPunctualStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitPunctualStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitPunctualStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitPunctualStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitPunctualStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitPunctualStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitPunctualStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitPunctualStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitPunctualStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitDirStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitDirStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitDirStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_LitDirStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitDirStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitDirStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitDirStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitDirStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LitDirStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LitDirStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LitDirStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LitDirStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitDirStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitDirStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitDirStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitDirStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitDirStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitDirStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitDirStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitDirStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SimpleLitDirStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SimpleLitDirStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SimpleLitDirStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_SimpleLitDirStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__ClearStencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ClearStencilRef",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__ClearStencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_ClearStencilRef",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__ClearStencilReadMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ClearStencilReadMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__ClearStencilReadMask() {
  return ::cordl_internals::getStaticField<int32_t, "_ClearStencilReadMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__ClearStencilWriteMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ClearStencilWriteMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__ClearStencilWriteMask() {
  return ::cordl_internals::getStaticField<int32_t, "_ClearStencilWriteMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__ScreenToWorld(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ScreenToWorld",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__ScreenToWorld() {
  return ::cordl_internals::getStaticField<int32_t, "_ScreenToWorld",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__MainLightPosition(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightPosition",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__MainLightPosition() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightPosition",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__MainLightColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightColor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__MainLightColor() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__MainLightLayerMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_MainLightLayerMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__MainLightLayerMask() {
  return ::cordl_internals::getStaticField<int32_t, "_MainLightLayerMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SpotLightScale(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SpotLightScale",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SpotLightScale() {
  return ::cordl_internals::getStaticField<int32_t, "_SpotLightScale",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SpotLightBias(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SpotLightBias",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SpotLightBias() {
  return ::cordl_internals::getStaticField<int32_t, "_SpotLightBias",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__SpotLightGuard(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SpotLightGuard",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__SpotLightGuard() {
  return ::cordl_internals::getStaticField<int32_t, "_SpotLightGuard",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightPosWS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightPosWS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightPosWS() {
  return ::cordl_internals::getStaticField<int32_t, "_LightPosWS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightColor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightColor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightColor() {
  return ::cordl_internals::getStaticField<int32_t, "_LightColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightAttenuation(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightAttenuation",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightAttenuation() {
  return ::cordl_internals::getStaticField<int32_t, "_LightAttenuation",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightOcclusionProbInfo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightOcclusionProbInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightOcclusionProbInfo() {
  return ::cordl_internals::getStaticField<int32_t, "_LightOcclusionProbInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightDirection(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightDirection",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightDirection() {
  return ::cordl_internals::getStaticField<int32_t, "_LightDirection",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightFlags(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightFlags",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightFlags() {
  return ::cordl_internals::getStaticField<int32_t, "_LightFlags",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__ShadowLightIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ShadowLightIndex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__ShadowLightIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_ShadowLightIndex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__LightLayerMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LightLayerMask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__LightLayerMask() {
  return ::cordl_internals::getStaticField<int32_t, "_LightLayerMask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::setStaticF__CookieLightIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CookieLightIndex",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants::getStaticF__CookieLightIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_CookieLightIndex",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_ShaderConstants*>::get>();
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67376b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cameraData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lightData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deferredLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData* UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData::DeferredLights_SetupLightPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights___c::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6737708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c._SetupRenderGraphLights_b__139_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights___c::*)(
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights___c::_SetupRenderGraphLights_b__139_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x673770c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>::get(), "<SetupRenderGraphLights>b__139_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights___c::setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DeferredLights___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c* UnityEngine::Rendering::Universal::Internal::DeferredLights___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights___c::setStaticF___9__139_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__139_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::Internal::DeferredLights___c::getStaticF___9__139_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__139_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights___c::_SetupRenderGraphLights_b__139_0(::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData* data,
                                                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>::get(), "<SetupRenderGraphLights>b__139_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::DeferredLights_SetupLightPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c* UnityEngine::Rendering::Universal::Internal::DeferredLights___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DeferredLights___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights___c::DeferredLights___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferAlbedoIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferAlbedoIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6730e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferAlbedoIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferSpecularMetallicIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSpecularMetallicIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6730e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferSpecularMetallicIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferNormalSmoothnessIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferNormalSmoothnessIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6730e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferNormalSmoothnessIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferLightingIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferLightingIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6730e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferLightingIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferDepthIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferDepthIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6730e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GbufferDepthIndex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferRenderingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferRenderingLayers)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6730e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferRenderingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferShadowMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferShadowMask)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6730ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GBufferShadowMask",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferSliceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSliceCount)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6730f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GBufferSliceCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GBufferInputAttachmentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferInputAttachmentCount)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6730f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GBufferInputAttachmentCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.GetGBufferFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::GetGBufferFormat)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6730f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "GetGBufferFormat",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseShadowMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseShadowMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6730f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseShadowMask",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseRenderingLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseRenderingLayers)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6730ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_UseRenderingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_RenderingLayerMaskSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderingLayerMaskSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_RenderingLayerMaskSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_RenderingLayerMaskSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderingLayerMaskSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673114c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_RenderingLayerMaskSize",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseDecalLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseDecalLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseDecalLayers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_UseDecalLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseDecalLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673115c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_UseDecalLayers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseLightLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseLightLayers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x67310e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseLightLayers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseFramebufferFetch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseFramebufferFetch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_UseFramebufferFetch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_UseFramebufferFetch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseFramebufferFetch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673116c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_UseFramebufferFetch",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_HasDepthPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasDepthPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_HasDepthPrepass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_HasDepthPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasDepthPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673117c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_HasDepthPrepass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_HasNormalPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasNormalPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_HasNormalPrepass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_HasNormalPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasNormalPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673118c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_HasNormalPrepass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_HasRenderingLayerPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasRenderingLayerPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_HasRenderingLayerPrepass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_HasRenderingLayerPrepass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasRenderingLayerPrepass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673119c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_HasRenderingLayerPrepass",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_IsOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_IsOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_IsOverlay",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_IsOverlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_IsOverlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_IsOverlay",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_AccurateGbufferNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_AccurateGbufferNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_AccurateGbufferNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_AccurateGbufferNormals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_AccurateGbufferNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_AccurateGbufferNormals",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_MixedLightingSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::MixedLightingSetup (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_MixedLightingSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_MixedLightingSetup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_MixedLightingSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::MixedLightingSetup)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_MixedLightingSetup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_MixedLightingSetup",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::MixedLightingSetup>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_UseJobSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseJobSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseJobSystem",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_UseJobSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseJobSystem)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_UseJobSystem",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_RenderWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_RenderWidth",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_RenderWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_RenderWidth",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_RenderHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_RenderHeight",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_RenderHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67311fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_RenderHeight",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GbufferAttachments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_GbufferAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673120c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferAttachments",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferTextureHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> (
        ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferTextureHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_GbufferTextureHandles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_GbufferTextureHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferTextureHandles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673121c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferTextureHandles",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DeferredInputAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> (
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_DeferredInputAttachments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DeferredInputAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputAttachments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673122c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DeferredInputAttachments",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DeferredInputIsTransient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool, ::Array<bool>*> (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputIsTransient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_DeferredInputIsTransient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DeferredInputIsTransient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::ArrayW<bool, ::Array<bool>*>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputIsTransient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673123c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DeferredInputIsTransient",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthAttachment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_DepthAttachment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthAttachment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673124c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthAttachment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthCopyTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthCopyTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_DepthCopyTexture",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthCopyTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthCopyTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673125c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthCopyTexture", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_GbufferFormats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> (
        ::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferFormats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GbufferFormats",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_GbufferFormats
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferFormats)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673126c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferFormats", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.get_DepthAttachmentHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachmentHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6731274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "get_DepthAttachmentHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.set_DepthAttachmentHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachmentHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x673127c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthAttachmentHandle",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams, bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::_ctor)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x6731284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupRenderGraphLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupRenderGraphLights)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x67318bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupRenderGraphLights",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Vector2Int, ::UnityEngine::Rendering::Universal::UniversalLightData*, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupLights)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x6731c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ResolveMixedLightingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::ResolveMixedLightingMode)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6732390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ResolveMixedLightingMode",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.DisableFramebufferFetchInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::DisableFramebufferFetchInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67327c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "DisableFramebufferFetchInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ReleaseGbufferResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::ReleaseGbufferResources)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x67327c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "ReleaseGbufferResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ReAllocateGBufferIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::RenderTextureDescriptor, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::ReAllocateGBufferIfNeeded)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6732854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "ReAllocateGBufferIfNeeded", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateGbufferResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateGbufferResources)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x67324fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "CreateGbufferResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.UpdateDeferredInputAttachments
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::UpdateDeferredInputAttachments)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6732a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "UpdateDeferredInputAttachments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.IsRuntimeSupportedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::IsRuntimeSupportedThisFrame)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6732d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "IsRuntimeSupportedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*, bool, bool, bool, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*,
    ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6732dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6733000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6733008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OnCameraCleanup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.OverwriteStencil
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::StencilState (*)(::UnityEngine::Rendering::StencilState, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x67330dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OverwriteStencil", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilState>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.OverwriteStencil
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderStateBlock (*)(::UnityEngine::Rendering::RenderStateBlock, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x673321c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OverwriteStencil", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderStateBlock>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ClearStencilPartial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::ClearStencilPartial)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6733388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ClearStencilPartial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.ExecuteDeferredPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalLightData*,
    ::UnityEngine::Rendering::Universal::UniversalShadowData*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteDeferredPass)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x6733660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ExecuteDeferredPass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupShaderLightConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupShaderLightConstants)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x673238c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupShaderLightConstants",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupMainLightConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMainLightConstants)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6734480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupMainLightConstants",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetupMatrixConstants
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMatrixConstants)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x67339c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupMatrixConstants", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.PrecomputeLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::ByRef<::Unity::Collections::NativeArray_1<uint16_t>>, ::ByRef<::Unity::Collections::NativeArray_1<uint16_t>>,
    ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>, bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::PrecomputeLights)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x6732078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "PrecomputeLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.HasStencilLightsOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::UnityEngine::LightType)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::HasStencilLightsOfType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6733da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "HasStencilLightsOfType",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*, bool)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilLights)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6733f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilLights", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilDirectionalLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, bool, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, bool, bool, int32_t)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilDirectionalLights)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x67346a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilDirectionalLights",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilPointLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, bool, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, bool, bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilPointLights)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x6734cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilPointLights",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderStencilSpotLights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, bool, ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*,
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, bool, bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilSpotLights)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x67352cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilSpotLights",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderSSAOBeforeShading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderSSAOBeforeShading)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6733e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderSSAOBeforeShading",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.RenderFog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, bool)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderFog)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x6734254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderFog", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.InitStencilDeferredMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::InitStencilDeferredMaterial)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x673153c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "InitStencilDeferredMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateSphereMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateSphereMesh)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x6735d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateSphereMesh",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateHemisphereMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateHemisphereMesh)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x67362dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateHemisphereMesh",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.CreateFullscreenMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (*)()>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateFullscreenMesh)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6733508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateFullscreenMesh",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetRenderingLayersMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Light*, int32_t)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetRenderingLayersMask)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x673464c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                                 "SetRenderingLayersMask", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetAdditionalLightsShadowsKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(::ByRef<::UnityEngine::Rendering::RasterCommandBuffer*>, bool, bool, bool, bool, ::ByRef<bool>)>(
        &::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetAdditionalLightsShadowsKeyword)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6735b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetAdditionalLightsShadowsKeyword",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RasterCommandBuffer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetSoftShadowsKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalShadowData*, ::UnityEngine::Light*, bool, bool, ::ByRef<bool>)>(
    &::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetSoftShadowsKeyword)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6735c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetSoftShadowsKeyword",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::DeferredLights.SetLightCookiesKeyword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::DeferredLights::*)(
    ::UnityEngine::Rendering::RasterCommandBuffer*, int32_t, bool, bool, ::ByRef<bool>, ::ByRef<int32_t>)>(&::UnityEngine::Rendering::Universal::Internal::DeferredLights::SetLightCookiesKeyword)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6735a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetLightCookiesKeyword",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
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
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferAttachments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferAttachments_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferAttachments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferAttachments_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__GbufferAttachments_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GbufferAttachments_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_GbufferRTHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GbufferRTHandles;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_GbufferRTHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GbufferRTHandles;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_GbufferRTHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___GbufferRTHandles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferTextureHandles_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferTextureHandles_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferTextureHandles_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferTextureHandles_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__GbufferTextureHandles_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GbufferTextureHandles_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputAttachments_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputAttachments_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputAttachments_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputAttachments_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DeferredInputAttachments_k__BackingField(
    ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DeferredInputAttachments_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool, ::Array<bool>*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputIsTransient_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputIsTransient_k__BackingField;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__DeferredInputIsTransient_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DeferredInputIsTransient_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__DeferredInputIsTransient_k__BackingField(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DeferredInputIsTransient_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DepthAttachment_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DepthCopyTexture_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferFormats_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferFormats_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> const&
UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get__GbufferFormats_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GbufferFormats_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set__GbufferFormats_k__BackingField(
    ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GbufferFormats_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DepthAttachmentHandle_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AdditionalLightsShadowCasterPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SphereMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HemisphereMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FullscreenMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StencilDeferredMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_StencilDeferredPasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredPasses;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_StencilDeferredPasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredPasses;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_StencilDeferredPasses(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StencilDeferredPasses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ScreenToWorld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenToWorld;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_get_m_ScreenToWorld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenToWorld;
}
constexpr void UnityEngine::Rendering::Universal::Internal::DeferredLights::__cordl_internal_set_m_ScreenToWorld(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScreenToWorld)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSamplerDeferredStencilPass)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSamplerDeferredFogPass)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSamplerClearStencilPartialPass)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LightCookieManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_GBufferNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_GBufferNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_GBufferNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_GBufferNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_GBufferShaderPropertyIDs(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_GBufferShaderPropertyIDs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_GBufferShaderPropertyIDs() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_GBufferShaderPropertyIDs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_StencilDeferredPassNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_StencilDeferredPassNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::ArrayW<::StringW, ::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_StencilDeferredPassNames() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW, ::Array<::StringW>*>, "k_StencilDeferredPassNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_InvalidLightOffset(uint16_t value) {
  ::cordl_internals::setStaticField<uint16_t, "k_InvalidLightOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<uint16_t>(value));
}
inline uint16_t UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_InvalidLightOffset() {
  return ::cordl_internals::getStaticField<uint16_t, "k_InvalidLightOffset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_SetupLights(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_SetupLights", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_SetupLights() {
  return ::cordl_internals::getStaticField<::StringW, "k_SetupLights", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_DeferredPass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DeferredPass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_DeferredPass() {
  return ::cordl_internals::getStaticField<::StringW, "k_DeferredPass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_DeferredStencilPass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DeferredStencilPass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_DeferredStencilPass() {
  return ::cordl_internals::getStaticField<::StringW, "k_DeferredStencilPass",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_DeferredFogPass(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_DeferredFogPass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_DeferredFogPass() {
  return ::cordl_internals::getStaticField<::StringW, "k_DeferredFogPass",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_ClearStencilPartial(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_ClearStencilPartial", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_ClearStencilPartial() {
  return ::cordl_internals::getStaticField<::StringW, "k_ClearStencilPartial",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_k_SetupLightConstants(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "k_SetupLightConstants", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_k_SetupLightConstants() {
  return ::cordl_internals::getStaticField<::StringW, "k_SetupLightConstants",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_kStencilShapeGuard(float_t value) {
  ::cordl_internals::setStaticField<float_t, "kStencilShapeGuard", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<float_t>(value));
}
inline float_t UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_kStencilShapeGuard() {
  return ::cordl_internals::getStaticField<float_t, "kStencilShapeGuard",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_m_ProfilingSetupLights(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_m_ProfilingSetupLights() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_m_ProfilingDeferredPass(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDeferredPass",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_m_ProfilingDeferredPass() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingDeferredPass",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_m_ProfilingSetupLightConstants(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLightConstants",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_m_ProfilingSetupLightConstants() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingSetupLightConstants",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::setStaticF_s_SetupDeferredLights(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_SetupDeferredLights",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Internal::DeferredLights::getStaticF_s_SetupDeferredLights() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "s_SetupDeferredLights",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get>();
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferAlbedoIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GBufferAlbedoIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSpecularMetallicIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GBufferSpecularMetallicIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferNormalSmoothnessIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GBufferNormalSmoothnessIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferLightingIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GBufferLightingIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferDepthIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GbufferDepthIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferRenderingLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GBufferRenderingLayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferShadowMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GBufferShadowMask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferSliceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GBufferSliceCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GBufferInputAttachmentCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GBufferInputAttachmentCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::Internal::DeferredLights::GetGBufferFormat(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "GetGBufferFormat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat, false>(this, ___internal_method, index);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseShadowMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseShadowMask",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseRenderingLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseRenderingLayers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderingLayerMaskSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_RenderingLayerMaskSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderingLayerMaskSize(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_RenderingLayerMaskSize",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseDecalLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseDecalLayers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseDecalLayers(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_UseDecalLayers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseLightLayers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseLightLayers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseFramebufferFetch() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseFramebufferFetch",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseFramebufferFetch(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_UseFramebufferFetch",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasDepthPrepass() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_HasDepthPrepass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasDepthPrepass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_HasDepthPrepass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasNormalPrepass() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_HasNormalPrepass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasNormalPrepass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_HasNormalPrepass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_HasRenderingLayerPrepass() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_HasRenderingLayerPrepass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_HasRenderingLayerPrepass(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_HasRenderingLayerPrepass",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_IsOverlay() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_IsOverlay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_IsOverlay(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_IsOverlay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_AccurateGbufferNormals() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_AccurateGbufferNormals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_AccurateGbufferNormals(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_AccurateGbufferNormals",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::MixedLightingSetup UnityEngine::Rendering::Universal::Internal::DeferredLights::get_MixedLightingSetup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_MixedLightingSetup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::MixedLightingSetup, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_MixedLightingSetup(::UnityEngine::Rendering::Universal::MixedLightingSetup value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_MixedLightingSetup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::MixedLightingSetup>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::get_UseJobSystem() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_UseJobSystem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_UseJobSystem(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_UseJobSystem",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderWidth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_RenderWidth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderWidth(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_RenderWidth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::Internal::DeferredLights::get_RenderHeight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_RenderHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_RenderHeight(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_RenderHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GbufferAttachments",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferAttachments", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferTextureHandles() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_GbufferTextureHandles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>, false>(
      this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferTextureHandles(
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferTextureHandles",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_DeferredInputAttachments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>, false>(this, ___internal_method);
}
inline void
UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DeferredInputAttachments",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<bool, ::Array<bool>*> UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DeferredInputIsTransient() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_DeferredInputIsTransient", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DeferredInputIsTransient(::ArrayW<bool, ::Array<bool>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DeferredInputIsTransient",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachment() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_DepthAttachment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachment(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthAttachment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthCopyTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_DepthCopyTexture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthCopyTexture(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthCopyTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
UnityEngine::Rendering::Universal::Internal::DeferredLights::get_GbufferFormats() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "get_GbufferFormats",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>, false>(
      this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_GbufferFormats(
    ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_GbufferFormats", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::Internal::DeferredLights::get_DepthAttachmentHandle() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "get_DepthAttachmentHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::set_DepthAttachmentHandle(::UnityEngine::Rendering::RTHandle* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "set_DepthAttachmentHandle",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::_ctor(::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams initParams, bool useNativeRenderPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams, useNativeRenderPass);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupRenderGraphLights(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupRenderGraphLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupLights(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                     ::UnityEngine::Vector2Int cameraTargetSizeCopy, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                     bool isRenderGraph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraData, cameraTargetSizeCopy, lightData, isRenderGraph);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ResolveMixedLightingMode(::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ResolveMixedLightingMode",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::DisableFramebufferFetchInput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "DisableFramebufferFetchInput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ReleaseGbufferResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ReleaseGbufferResources",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ReAllocateGBufferIfNeeded(::UnityEngine::RenderTextureDescriptor gbufferSlice, int32_t gbufferIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "ReAllocateGBufferIfNeeded", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gbufferSlice, gbufferIndex);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateGbufferResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateGbufferResources",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::UpdateDeferredInputAttachments() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "UpdateDeferredInputAttachments", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::IsRuntimeSupportedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "IsRuntimeSupportedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* additionalLightsShadowCasterPass,
                                                                               bool hasDepthPrepass, bool hasNormalPrepass, bool hasRenderingLayerPrepass,
                                                                               ::UnityEngine::Rendering::RTHandle* depthCopyTexture, ::UnityEngine::Rendering::RTHandle* depthAttachment,
                                                                               ::UnityEngine::Rendering::RTHandle* colorAttachment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, additionalLightsShadowCasterPass, hasDepthPrepass, hasNormalPrepass, hasRenderingLayerPrepass, depthCopyTexture,
                                                          depthAttachment, colorAttachment);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::Setup(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* additionalLightsShadowCasterPass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, additionalLightsShadowCasterPass);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OnCameraCleanup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::StencilState UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil(::UnityEngine::Rendering::StencilState s, int32_t stencilWriteMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OverwriteStencil", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::StencilState, false>(nullptr, ___internal_method, s, stencilWriteMask);
}
inline ::UnityEngine::Rendering::RenderStateBlock UnityEngine::Rendering::Universal::Internal::DeferredLights::OverwriteStencil(::UnityEngine::Rendering::RenderStateBlock block,
                                                                                                                                int32_t stencilWriteMask, int32_t stencilRef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "OverwriteStencil", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderStateBlock>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderStateBlock, false>(nullptr, ___internal_method, block, stencilWriteMask, stencilRef);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ClearStencilPartial(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ClearStencilPartial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::ExecuteDeferredPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "ExecuteDeferredPass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraData, lightData, shadowData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupShaderLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                   ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupShaderLightConstants",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMainLightConstants(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupMainLightConstants",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, lightData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetupMatrixConstants(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                              ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetupMatrixConstants", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::PrecomputeLights(::ByRef<::Unity::Collections::NativeArray_1<uint16_t>> stencilVisLights,
                                                                                          ::ByRef<::Unity::Collections::NativeArray_1<uint16_t>> stencilVisLightOffsets,
                                                                                          ::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>> visibleLights,
                                                                                          bool hasAdditionalLights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "PrecomputeLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<uint16_t>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stencilVisLights, stencilVisLightOffsets, visibleLights, hasAdditionalLights);
}
inline bool UnityEngine::Rendering::Universal::Internal::DeferredLights::HasStencilLightsOfType(::UnityEngine::LightType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "HasStencilLightsOfType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LightType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, bool stripShadowsOffVariants) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilLights", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, lightData, shadowData, stripShadowsOffVariants);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilDirectionalLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool stripShadowsOffVariants,
                                                                                                        ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                        ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                                                                                        bool hasAdditionalLightPass, bool hasLightCookieManager, int32_t mainLightIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilDirectionalLights",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, stripShadowsOffVariants, lightData, shadowData, visibleLights, hasAdditionalLightPass, hasLightCookieManager,
                                                          mainLightIndex);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilPointLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool stripShadowsOffVariants,
                                                                                                  ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                  ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                                                                                  bool hasAdditionalLightPass, bool hasLightCookieManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilPointLights",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, stripShadowsOffVariants, lightData, shadowData, visibleLights, hasAdditionalLightPass, hasLightCookieManager);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderStencilSpotLights(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool stripShadowsOffVariants,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                 ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                                                                                 bool hasAdditionalLightPass, bool hasLightCookieManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderStencilSpotLights",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalLightData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, stripShadowsOffVariants, lightData, shadowData, visibleLights, hasAdditionalLightPass, hasLightCookieManager);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderSSAOBeforeShading(::UnityEngine::Rendering::RasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderSSAOBeforeShading",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::RenderFog(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool isOrthographic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "RenderFog", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, isOrthographic);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::InitStencilDeferredMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(),
                                               "InitStencilDeferredMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateSphereMesh() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateSphereMesh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateHemisphereMesh() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateHemisphereMesh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Universal::Internal::DeferredLights::CreateFullscreenMesh() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "CreateFullscreenMesh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetRenderingLayersMask(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Light* light,
                                                                                                int32_t shaderPropertyID) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetRenderingLayersMask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, light, shaderPropertyID);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetAdditionalLightsShadowsKeyword(::ByRef<::UnityEngine::Rendering::RasterCommandBuffer*> cmd, bool stripShadowsOffVariants,
                                                                                                           bool additionalLightShadowsEnabled, bool hasDeferredShadows, bool shouldOverride,
                                                                                                           ::ByRef<bool> lastShadowsKeyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetAdditionalLightsShadowsKeyword",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RasterCommandBuffer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, stripShadowsOffVariants, additionalLightShadowsEnabled, hasDeferredShadows, shouldOverride,
                                                          lastShadowsKeyword);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetSoftShadowsKeyword(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                                               ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData, ::UnityEngine::Light* light,
                                                                                               bool hasDeferredShadows, bool shouldOverride, ::ByRef<bool> lastHasSoftShadow) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetSoftShadowsKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalShadowData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Light*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, shadowData, light, hasDeferredShadows, shouldOverride, lastHasSoftShadow);
}
inline void UnityEngine::Rendering::Universal::Internal::DeferredLights::SetLightCookiesKeyword(::UnityEngine::Rendering::RasterCommandBuffer* cmd, int32_t visLightIndex, bool hasLightCookieManager,
                                                                                                bool shouldOverride, ::ByRef<bool> lastLightCookieState, ::ByRef<int32_t> lastCookieLightIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get(), "SetLightCookiesKeyword", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, visLightIndex, hasLightCookieManager, shouldOverride, lastLightCookieState, lastCookieLightIndex);
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights*
UnityEngine::Rendering::Universal::Internal::DeferredLights::New_ctor(::UnityEngine::Rendering::Universal::Internal::DeferredLights_InitParams initParams, bool useNativeRenderPass) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(initParams, useNativeRenderPass));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights::DeferredLights() {}
