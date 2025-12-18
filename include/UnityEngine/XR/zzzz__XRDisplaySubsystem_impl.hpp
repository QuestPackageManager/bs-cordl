#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__ColorGamut_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode::XRDisplaySubsystem_LateLatchNode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode::XRDisplaySubsystem_LateLatchNode() {}
constexpr ::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode UnityEngine::XR::XRDisplaySubsystem_LateLatchNode::Head{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode UnityEngine::XR::XRDisplaySubsystem_LateLatchNode::LeftHand{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode UnityEngine::XR::XRDisplaySubsystem_LateLatchNode::RightHand{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRDisplaySubsystem_TextureLayout::XRDisplaySubsystem_TextureLayout(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDisplaySubsystem_TextureLayout::XRDisplaySubsystem_TextureLayout() {}
constexpr ::UnityEngine::XR::XRDisplaySubsystem_TextureLayout UnityEngine::XR::XRDisplaySubsystem_TextureLayout::Texture2DArray{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::XRDisplaySubsystem_TextureLayout UnityEngine::XR::XRDisplaySubsystem_TextureLayout::SingleTexture2D{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::XRDisplaySubsystem_TextureLayout UnityEngine::XR::XRDisplaySubsystem_TextureLayout::SeparateTexture2Ds{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "view", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "projection", ty: "::UnityEngine::Matrix4x4", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionMesh", ty: "::UnityW<::UnityEngine::Mesh>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousView", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "isPreviousViewValid", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter::XRDisplaySubsystem_XRRenderParameter(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 projection,
                                                                                                        ::UnityEngine::Rect viewport, ::UnityW<::UnityEngine::Mesh> occlusionMesh,
                                                                                                        int32_t textureArraySlice, ::UnityEngine::Matrix4x4 previousView,
                                                                                                        bool isPreviousViewValid) noexcept {
  this->view = view;
  this->projection = projection;
  this->viewport = viewport;
  this->occlusionMesh = occlusionMesh;
  this->textureArraySlice = textureArraySlice;
  this->previousView = previousView;
  this->isPreviousViewValid = isPreviousViewValid;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter::XRDisplaySubsystem_XRRenderParameter() {}
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass.GetRenderParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::*)(
    ::UnityEngine::Camera*, int32_t, ::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter>)>(&::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetRenderParameter)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6c6a510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(), "GetRenderParameter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass.GetRenderParameterCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::*)()>(
    &::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetRenderParameterCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c6a614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(),
                                                                               "GetRenderParameterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass.GetRenderParameter_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>, ::System::IntPtr, int32_t, ::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter>)>(
        &::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetRenderParameter_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c6a5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(), "GetRenderParameter_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetRenderParameter(::UnityEngine::Camera* camera, int32_t renderParameterIndex,
                                                                                 ::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter> renderParameter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(), "GetRenderParameter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera, renderParameterIndex, renderParameter);
}
inline int32_t UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetRenderParameterCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(),
                                                                             "GetRenderParameterCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::GetRenderParameter_Injected(::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass> _unity_self, ::System::IntPtr camera,
                                                                                          int32_t renderParameterIndex,
                                                                                          ::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter> renderParameter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>::get(), "GetRenderParameter_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, camera, renderParameterIndex, renderParameter);
}
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderTargetDesc", ty:
// "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: Some("{}") }, CppParam { name: "motionVectorRenderTargetDesc", ty:
// "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: Some("{}") }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "foveatedRenderingInfo", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::XRDisplaySubsystem_XRRenderPass(::System::IntPtr displaySubsystemInstance, int32_t renderPassIndex,
                                                                                              ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget,
                                                                                              ::UnityEngine::RenderTextureDescriptor renderTargetDesc, bool hasMotionVectorPass,
                                                                                              ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget,
                                                                                              ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc, bool shouldFillOutDepth,
                                                                                              int32_t cullingPassIndex, ::System::IntPtr foveatedRenderingInfo) noexcept {
  this->displaySubsystemInstance = displaySubsystemInstance;
  this->renderPassIndex = renderPassIndex;
  this->renderTarget = renderTarget;
  this->renderTargetDesc = renderTargetDesc;
  this->hasMotionVectorPass = hasMotionVectorPass;
  this->motionVectorRenderTarget = motionVectorRenderTarget;
  this->motionVectorRenderTargetDesc = motionVectorRenderTargetDesc;
  this->shouldFillOutDepth = shouldFillOutDepth;
  this->cullingPassIndex = cullingPassIndex;
  this->foveatedRenderingInfo = foveatedRenderingInfo;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass::XRDisplaySubsystem_XRRenderPass() {}
// Ctor Parameters [CppParam { name: "srcTex", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "srcTexArraySlice", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "srcRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "destRect", ty: "::UnityEngine::Rect", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "foveatedRenderingInfo", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "srcHdrEncoded", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "srcHdrColorGamut", ty: "::UnityEngine::ColorGamut", modifiers: "", def_value: Some("{}") }, CppParam { name: "srcHdrMaxLuminance", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams::XRDisplaySubsystem_XRBlitParams(::UnityW<::UnityEngine::RenderTexture> srcTex, int32_t srcTexArraySlice, ::UnityEngine::Rect srcRect,
                                                                                              ::UnityEngine::Rect destRect, ::System::IntPtr foveatedRenderingInfo, bool srcHdrEncoded,
                                                                                              ::UnityEngine::ColorGamut srcHdrColorGamut, int32_t srcHdrMaxLuminance) noexcept {
  this->srcTex = srcTex;
  this->srcTexArraySlice = srcTexArraySlice;
  this->srcRect = srcRect;
  this->destRect = destRect;
  this->foveatedRenderingInfo = foveatedRenderingInfo;
  this->srcHdrEncoded = srcHdrEncoded;
  this->srcHdrColorGamut = srcHdrColorGamut;
  this->srcHdrMaxLuminance = srcHdrMaxLuminance;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams::XRDisplaySubsystem_XRBlitParams() {}
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc.GetBlitParameter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc::*)(
    int32_t, ::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams>)>(&::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc::GetBlitParameter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c6a650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc>::get(), "GetBlitParameter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc::GetBlitParameter(int32_t blitParameterIndex, ::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams> blitParameter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc>::get(), "GetBlitParameter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blitParameterIndex, blitParameter);
}
// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc::XRDisplaySubsystem_XRMirrorViewBlitDesc(::System::IntPtr displaySubsystemInstance, bool nativeBlitAvailable,
                                                                                                              bool nativeBlitInvalidStates, int32_t blitParamsCount) noexcept {
  this->displaySubsystemInstance = displaySubsystemInstance;
  this->nativeBlitAvailable = nativeBlitAvailable;
  this->nativeBlitInvalidStates = nativeBlitInvalidStates;
  this->blitParamsCount = blitParamsCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc::XRDisplaySubsystem_XRMirrorViewBlitDesc() {}
//  Writing Method size for method: ::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(Il2CppObject*)>(&::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6c6a6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller*>::get(), "ConvertToNative",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller::ConvertToNative(Il2CppObject* xrDisplaySubsystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller*>::get(), "ConvertToNative",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, xrDisplaySubsystem);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller::XRDisplaySubsystem_BindingsMarshaller() {}
