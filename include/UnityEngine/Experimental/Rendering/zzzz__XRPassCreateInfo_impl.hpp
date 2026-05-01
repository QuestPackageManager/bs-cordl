#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRPassCreateInfo.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPassCreateInfo_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTargetDesc", ty:
// "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "motionVectorRenderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingParameters",
// ty: "::UnityEngine::Rendering::ScriptableCullingParameters", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionMeshMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "occlusionMeshScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "foveatedRenderingInfo", ty: "::System::IntPtr",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "multipassId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPassId", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "copyDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "xrSdkRenderPass", ty: "::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::XRPassCreateInfo::XRPassCreateInfo(
    ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::RenderTextureDescriptor renderTargetDesc, ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget,
    ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc, ::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters,
    ::UnityW<::UnityEngine::Material> occlusionMeshMaterial, float_t occlusionMeshScale, ::System::IntPtr foveatedRenderingInfo, int32_t multipassId, int32_t cullingPassId, bool copyDepth,
    bool hasMotionVectorPass, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass xrSdkRenderPass) noexcept {
  this->renderTarget = renderTarget;
  this->renderTargetDesc = renderTargetDesc;
  this->motionVectorRenderTarget = motionVectorRenderTarget;
  this->motionVectorRenderTargetDesc = motionVectorRenderTargetDesc;
  this->cullingParameters = cullingParameters;
  this->occlusionMeshMaterial = occlusionMeshMaterial;
  this->occlusionMeshScale = occlusionMeshScale;
  this->foveatedRenderingInfo = foveatedRenderingInfo;
  this->multipassId = multipassId;
  this->cullingPassId = cullingPassId;
  this->copyDepth = copyDepth;
  this->hasMotionVectorPass = hasMotionVectorPass;
  this->xrSdkRenderPass = xrSdkRenderPass;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRPassCreateInfo::XRPassCreateInfo() {}
