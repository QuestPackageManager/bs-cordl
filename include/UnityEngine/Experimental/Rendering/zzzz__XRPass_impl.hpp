#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRPass.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XROcclusionMesh_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPassCreateInfo_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRView_def.hpp"
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x65926c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.CreateDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::XRPass* (*)(::UnityEngine::Experimental::Rendering::XRPassCreateInfo)>(
    &::UnityEngine::Experimental::Rendering::XRPass::CreateDefault)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6592760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "CreateDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::Release)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6592a44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_enabled)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x658ebbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_supportsFoveatedRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_supportsFoveatedRendering)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6592ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_supportsFoveatedRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_copyDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_copyDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_copyDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_copyDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_copyDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_copyDepth",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_hasMotionVectorPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_hasMotionVectorPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_hasMotionVectorPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_hasMotionVectorPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_hasMotionVectorPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_hasMotionVectorPass",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_isFirstCameraPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_isFirstCameraPass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6592b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_isFirstCameraPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_isLastCameraPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_isLastCameraPass)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6592ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_isLastCameraPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_multipassId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_multipassId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_multipassId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_multipassId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_multipassId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_multipassId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_cullingPassId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_cullingPassId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_cullingPassId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_cullingPassId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_cullingPassId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_cullingPassId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_renderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_renderTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6592c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_renderTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_renderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_renderTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6592c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_renderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_renderTargetDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_renderTargetDesc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6592c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_renderTargetDesc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_renderTargetDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_renderTargetDesc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6592c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_renderTargetDesc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_motionVectorRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_motionVectorRenderTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6592c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_motionVectorRenderTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_motionVectorRenderTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_motionVectorRenderTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6592cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_motionVectorRenderTarget", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_motionVectorRenderTargetDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_motionVectorRenderTargetDesc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6592cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "get_motionVectorRenderTargetDesc",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_motionVectorRenderTargetDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_motionVectorRenderTargetDesc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6592ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_motionVectorRenderTargetDesc", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_cullingParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ScriptableCullingParameters (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_cullingParams)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6592d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_cullingParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_cullingParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::ScriptableCullingParameters)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_cullingParams)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6592d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_cullingParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableCullingParameters>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_viewCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_viewCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6590300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_viewCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_singlePassEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_singlePassEnabled)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x658ed04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_singlePassEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_foveatedRenderingInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_foveatedRenderingInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_foveatedRenderingInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_foveatedRenderingInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::System::IntPtr)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_foveatedRenderingInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6592d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_foveatedRenderingInfo",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_isHDRDisplayOutputActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_isHDRDisplayOutputActive)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6592d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_isHDRDisplayOutputActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_hdrDisplayOutputColorGamut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ColorGamut (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_hdrDisplayOutputColorGamut)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6592de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_hdrDisplayOutputColorGamut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_hdrDisplayOutputInformation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_hdrDisplayOutputInformation)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6592ea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "get_hdrDisplayOutputInformation",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_occlusionMeshScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_occlusionMeshScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65930d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_occlusionMeshScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_occlusionMeshScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(float_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_occlusionMeshScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65930dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_occlusionMeshScale",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetProjMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetProjMatrix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x658ec6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetProjMatrix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetViewMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetViewMatrix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x658ebd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetViewMatrix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetPrevViewValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetPrevViewValid)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x65930e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetPrevViewValid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetPrevViewMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetPrevViewMatrix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6593160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetPrevViewMatrix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetViewport)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x659020c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetViewport",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetOcclusionMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetOcclusionMesh)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65919d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetOcclusionMesh",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetTextureArraySlice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetTextureArraySlice)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6590288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetTextureArraySlice",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.StartSinglePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRPass::StartSinglePass)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6591ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "StartSinglePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.StartSinglePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::IRasterCommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRPass::StartSinglePass)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x65931f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "StartSinglePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::IRasterCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.StopSinglePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRPass::StopSinglePass)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6591e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "StopSinglePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.StopSinglePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::BaseCommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRPass::StopSinglePass)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6593284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "StopSinglePass", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BaseCommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_hasValidOcclusionMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_hasValidOcclusionMesh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6593298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "get_hasValidOcclusionMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.RenderOcclusionMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::CommandBuffer*, bool)>(
    &::UnityEngine::Experimental::Rendering::XRPass::RenderOcclusionMesh)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x65932ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "RenderOcclusionMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.RenderOcclusionMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::RasterCommandBuffer*, bool)>(
    &::UnityEngine::Experimental::Rendering::XRPass::RenderOcclusionMesh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x65932d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "RenderOcclusionMesh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.RenderDebugXRViewsFrustum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::RenderDebugXRViewsFrustum)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x659330c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "RenderDebugXRViewsFrustum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.ApplyXRViewCenterOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Experimental::Rendering::XRPass::ApplyXRViewCenterOffset)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6593588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "ApplyXRViewCenterOffset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.AssignView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t, ::UnityEngine::Experimental::Rendering::XRView)>(
    &::UnityEngine::Experimental::Rendering::XRPass::AssignView)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x65936dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "AssignView", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRView>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.AssignCullingParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(
    int32_t, ::UnityEngine::Rendering::ScriptableCullingParameters)>(&::UnityEngine::Experimental::Rendering::XRPass::AssignCullingParams)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x65937dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "AssignCullingParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableCullingParameters>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.UpdateCombinedOcclusionMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::UpdateCombinedOcclusionMesh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x658fc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                               "UpdateCombinedOcclusionMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.InitBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Experimental::Rendering::XRPassCreateInfo)>(
    &::UnityEngine::Experimental::Rendering::XRPass::InitBase)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6592840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "InitBase", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.AddView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Experimental::Rendering::XRView)>(
    &::UnityEngine::Experimental::Rendering::XRPass::AddView)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x659385c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "AddView", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRView>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>*& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get_m_Views() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Views;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>* const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get_m_Views() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Views;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set_m_Views(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Views)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::XROcclusionMesh*& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get_m_OcclusionMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionMesh;
}
constexpr ::UnityEngine::Experimental::Rendering::XROcclusionMesh* const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get_m_OcclusionMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionMesh;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set_m_OcclusionMesh(::UnityEngine::Experimental::Rendering::XROcclusionMesh* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OcclusionMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__copyDepth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyDepth_k__BackingField;
}
constexpr bool const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__copyDepth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____copyDepth_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__copyDepth_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____copyDepth_k__BackingField = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__hasMotionVectorPass_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasMotionVectorPass_k__BackingField;
}
constexpr bool const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__hasMotionVectorPass_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasMotionVectorPass_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__hasMotionVectorPass_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasMotionVectorPass_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__multipassId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipassId_k__BackingField;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__multipassId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipassId_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__multipassId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multipassId_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__cullingPassId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cullingPassId_k__BackingField;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__cullingPassId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cullingPassId_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__cullingPassId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cullingPassId_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__renderTarget_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTarget_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__renderTarget_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTarget_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__renderTarget_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderTarget_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__renderTargetDesc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTargetDesc_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__renderTargetDesc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderTargetDesc_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__renderTargetDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderTargetDesc_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__motionVectorRenderTarget_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____motionVectorRenderTarget_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__motionVectorRenderTarget_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____motionVectorRenderTarget_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__motionVectorRenderTarget_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____motionVectorRenderTarget_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__motionVectorRenderTargetDesc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____motionVectorRenderTargetDesc_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__motionVectorRenderTargetDesc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____motionVectorRenderTargetDesc_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__motionVectorRenderTargetDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____motionVectorRenderTargetDesc_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ScriptableCullingParameters& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__cullingParams_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cullingParams_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ScriptableCullingParameters const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__cullingParams_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cullingParams_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__cullingParams_k__BackingField(::UnityEngine::Rendering::ScriptableCullingParameters value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cullingParams_k__BackingField = value;
}
constexpr ::System::IntPtr& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__foveatedRenderingInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foveatedRenderingInfo_k__BackingField;
}
constexpr ::System::IntPtr const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__foveatedRenderingInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foveatedRenderingInfo_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__foveatedRenderingInfo_k__BackingField(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____foveatedRenderingInfo_k__BackingField = value;
}
constexpr float_t& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__occlusionMeshScale_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occlusionMeshScale_k__BackingField;
}
constexpr float_t const& UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_get__occlusionMeshScale_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____occlusionMeshScale_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::XRPass::__cordl_internal_set__occlusionMeshScale_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____occlusionMeshScale_k__BackingField = value;
}
inline void UnityEngine::Experimental::Rendering::XRPass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRPass* UnityEngine::Experimental::Rendering::XRPass::CreateDefault(::UnityEngine::Experimental::Rendering::XRPassCreateInfo createInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "CreateDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRPass*, false>(nullptr, ___internal_method, createInfo);
}
inline void UnityEngine::Experimental::Rendering::XRPass::Release() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_supportsFoveatedRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_supportsFoveatedRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_copyDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_copyDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_copyDepth(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_copyDepth",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_hasMotionVectorPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_hasMotionVectorPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_hasMotionVectorPass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_hasMotionVectorPass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_isFirstCameraPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_isFirstCameraPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_isLastCameraPass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_isLastCameraPass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::XRPass::get_multipassId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_multipassId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_multipassId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_multipassId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::XRPass::get_cullingPassId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_cullingPassId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_cullingPassId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_cullingPassId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Experimental::Rendering::XRPass::get_renderTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_renderTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_renderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_renderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Experimental::Rendering::XRPass::get_renderTargetDesc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_renderTargetDesc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_renderTargetDesc(::UnityEngine::RenderTextureDescriptor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_renderTargetDesc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Experimental::Rendering::XRPass::get_motionVectorRenderTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_motionVectorRenderTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_motionVectorRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_motionVectorRenderTarget", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Experimental::Rendering::XRPass::get_motionVectorRenderTargetDesc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_motionVectorRenderTargetDesc", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_motionVectorRenderTargetDesc(::UnityEngine::RenderTextureDescriptor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_motionVectorRenderTargetDesc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ScriptableCullingParameters UnityEngine::Experimental::Rendering::XRPass::get_cullingParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_cullingParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ScriptableCullingParameters, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_cullingParams(::UnityEngine::Rendering::ScriptableCullingParameters value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_cullingParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableCullingParameters>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::XRPass::get_viewCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_viewCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_singlePassEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_singlePassEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Experimental::Rendering::XRPass::get_foveatedRenderingInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_foveatedRenderingInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_foveatedRenderingInfo(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_foveatedRenderingInfo",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_isHDRDisplayOutputActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_isHDRDisplayOutputActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::ColorGamut UnityEngine::Experimental::Rendering::XRPass::get_hdrDisplayOutputColorGamut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_hdrDisplayOutputColorGamut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorGamut, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation UnityEngine::Experimental::Rendering::XRPass::get_hdrDisplayOutputInformation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_hdrDisplayOutputInformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, false>(this, ___internal_method);
}
inline float_t UnityEngine::Experimental::Rendering::XRPass::get_occlusionMeshScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_occlusionMeshScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_occlusionMeshScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "set_occlusionMeshScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Experimental::Rendering::XRPass::GetProjMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetProjMatrix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Experimental::Rendering::XRPass::GetViewMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetViewMatrix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::GetPrevViewValid(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetPrevViewValid",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Experimental::Rendering::XRPass::GetPrevViewMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetPrevViewMatrix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Rect UnityEngine::Experimental::Rendering::XRPass::GetViewport(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetViewport",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method, viewIndex);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Experimental::Rendering::XRPass::GetOcclusionMesh(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetOcclusionMesh",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>, false>(this, ___internal_method, viewIndex);
}
inline int32_t UnityEngine::Experimental::Rendering::XRPass::GetTextureArraySlice(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "GetTextureArraySlice",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, viewIndex);
}
inline void UnityEngine::Experimental::Rendering::XRPass::StartSinglePass(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "StartSinglePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Experimental::Rendering::XRPass::StartSinglePass(::UnityEngine::Rendering::IRasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "StartSinglePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::IRasterCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Experimental::Rendering::XRPass::StopSinglePass(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "StopSinglePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Experimental::Rendering::XRPass::StopSinglePass(::UnityEngine::Rendering::BaseCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "StopSinglePass", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::BaseCommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_hasValidOcclusionMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "get_hasValidOcclusionMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::RenderOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* cmd, bool renderIntoTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "RenderOcclusionMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderIntoTexture);
}
inline void UnityEngine::Experimental::Rendering::XRPass::RenderOcclusionMesh(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool renderIntoTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "RenderOcclusionMesh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderIntoTexture);
}
inline void UnityEngine::Experimental::Rendering::XRPass::RenderDebugXRViewsFrustum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "RenderDebugXRViewsFrustum", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Experimental::Rendering::XRPass::ApplyXRViewCenterOffset(::UnityEngine::Vector2 center) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "ApplyXRViewCenterOffset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, center);
}
inline void UnityEngine::Experimental::Rendering::XRPass::AssignView(int32_t viewId, ::UnityEngine::Experimental::Rendering::XRView xrView) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "AssignView", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRView>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewId, xrView);
}
inline void UnityEngine::Experimental::Rendering::XRPass::AssignCullingParams(int32_t cullingPassId, ::UnityEngine::Rendering::ScriptableCullingParameters cullingParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "AssignCullingParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableCullingParameters>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cullingPassId, cullingParams);
}
inline void UnityEngine::Experimental::Rendering::XRPass::UpdateCombinedOcclusionMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(),
                                                                             "UpdateCombinedOcclusionMesh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::InitBase(::UnityEngine::Experimental::Rendering::XRPassCreateInfo createInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "InitBase", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, createInfo);
}
inline void UnityEngine::Experimental::Rendering::XRPass::AddView(::UnityEngine::Experimental::Rendering::XRView xrView) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRPass*>::get(), "AddView", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRView>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xrView);
}
inline ::UnityEngine::Experimental::Rendering::XRPass* UnityEngine::Experimental::Rendering::XRPass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::XRPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRPass::XRPass() {}
