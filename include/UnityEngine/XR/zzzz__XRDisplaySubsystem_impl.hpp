#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::__XRDisplaySubsystem__LateLatchNode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::__XRDisplaySubsystem__LateLatchNode() {}
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::Head{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::LeftHand{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode UnityEngine::XR::__XRDisplaySubsystem__LateLatchNode::RightHand{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTargetDesc", ty:
// "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "motionVectorRenderTargetDesc", ty:
// "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__XRDisplaySubsystem__XRRenderPass(void* displaySubsystemInstance, int32_t renderPassIndex,
                                                                                                    ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget,
                                                                                                    ::UnityEngine::RenderTextureDescriptor renderTargetDesc, bool hasMotionVectorPass,
                                                                                                    ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget,
                                                                                                    ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc, bool shouldFillOutDepth,
                                                                                                    int32_t cullingPassIndex) noexcept {
  this->displaySubsystemInstance = displaySubsystemInstance;
  this->renderPassIndex = renderPassIndex;
  this->renderTarget = renderTarget;
  this->renderTargetDesc = renderTargetDesc;
  this->hasMotionVectorPass = hasMotionVectorPass;
  this->motionVectorRenderTarget = motionVectorRenderTarget;
  this->motionVectorRenderTargetDesc = motionVectorRenderTargetDesc;
  this->shouldFillOutDepth = shouldFillOutDepth;
  this->cullingPassIndex = cullingPassIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRRenderPass::__XRDisplaySubsystem__XRRenderPass() {}
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__XRDisplaySubsystem__XRMirrorViewBlitDesc(void* displaySubsystemInstance, bool nativeBlitAvailable,
                                                                                                                    bool nativeBlitInvalidStates, int32_t blitParamsCount) noexcept {
  this->displaySubsystemInstance = displaySubsystemInstance;
  this->nativeBlitAvailable = nativeBlitAvailable;
  this->nativeBlitInvalidStates = nativeBlitInvalidStates;
  this->blitParamsCount = blitParamsCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::__XRDisplaySubsystem__XRMirrorViewBlitDesc::__XRDisplaySubsystem__XRMirrorViewBlitDesc() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
