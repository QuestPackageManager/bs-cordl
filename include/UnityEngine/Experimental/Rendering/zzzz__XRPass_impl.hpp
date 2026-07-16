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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6744010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.CreateDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::XRPass* (*)(::UnityEngine::Experimental::Rendering::XRPassCreateInfo)>(
    &::UnityEngine::Experimental::Rendering::XRPass::CreateDefault)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x67440b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                           { "CreateDefault", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::Release)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6744394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { ::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_enabled)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x674050c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_supportsFoveatedRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_supportsFoveatedRendering)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6744408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_supportsFoveatedRendering", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_copyDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_copyDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67444c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_copyDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_copyDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(bool)>(&::UnityEngine::Experimental::Rendering::XRPass::set_copyDepth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67444d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_copyDepth", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_hasMotionVectorPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_hasMotionVectorPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67444d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_hasMotionVectorPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_hasMotionVectorPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(bool)>(&::UnityEngine::Experimental::Rendering::XRPass::set_hasMotionVectorPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67444e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_hasMotionVectorPass", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_isFirstCameraPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_isFirstCameraPass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x67444e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_isFirstCameraPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_isLastCameraPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_isLastCameraPass)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x67444f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_isLastCameraPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_multipassId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_multipassId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6744564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_multipassId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_multipassId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(&::UnityEngine::Experimental::Rendering::XRPass::set_multipassId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x674456c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_multipassId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_cullingPassId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_cullingPassId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6744574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_cullingPassId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_cullingPassId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(&::UnityEngine::Experimental::Rendering::XRPass::set_cullingPassId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x674457c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_cullingPassId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_renderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_renderTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6744584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_renderTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_renderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_renderTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6744598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                           { "set_renderTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_renderTargetDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_renderTargetDesc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67445ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_renderTargetDesc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_renderTargetDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_renderTargetDesc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x67445cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                           { "set_renderTargetDesc", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_motionVectorRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_motionVectorRenderTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67445ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_motionVectorRenderTarget", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_motionVectorRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_motionVectorRenderTarget)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6744600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                             { "set_motionVectorRenderTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_motionVectorRenderTargetDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_motionVectorRenderTargetDesc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6744614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_motionVectorRenderTargetDesc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_motionVectorRenderTargetDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_motionVectorRenderTargetDesc)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6744634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                           { "set_motionVectorRenderTargetDesc", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_cullingParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ScriptableCullingParameters (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_cullingParams)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6744654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_cullingParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_cullingParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::ScriptableCullingParameters)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_cullingParams)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6744664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                           { "set_cullingParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableCullingParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_viewCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_viewCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6741c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_viewCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_singlePassEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_singlePassEnabled)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6740654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_singlePassEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_foveatedRenderingInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_foveatedRenderingInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6744670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_foveatedRenderingInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_foveatedRenderingInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::System::IntPtr)>(
    &::UnityEngine::Experimental::Rendering::XRPass::set_foveatedRenderingInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6744678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_foveatedRenderingInfo", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_isHDRDisplayOutputActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_isHDRDisplayOutputActive)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6744680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_isHDRDisplayOutputActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_hdrDisplayOutputColorGamut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorGamut (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_hdrDisplayOutputColorGamut)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6744738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_hdrDisplayOutputColorGamut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_hdrDisplayOutputInformation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation (::UnityEngine::Experimental::Rendering::XRPass::*)()>(
    &::UnityEngine::Experimental::Rendering::XRPass::get_hdrDisplayOutputInformation)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x67447f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_hdrDisplayOutputInformation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_occlusionMeshScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_occlusionMeshScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6744a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_occlusionMeshScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.set_occlusionMeshScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(float_t)>(&::UnityEngine::Experimental::Rendering::XRPass::set_occlusionMeshScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6744a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_occlusionMeshScale", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetProjMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetProjMatrix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67405bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetProjMatrix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetViewMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetViewMatrix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6740524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetViewMatrix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetPrevViewValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(&::UnityEngine::Experimental::Rendering::XRPass::GetPrevViewValid)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6744a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetPrevViewValid", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetPrevViewMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetPrevViewMatrix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6744ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetPrevViewMatrix", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetViewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetViewport)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6741b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetViewport", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetOcclusionMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::XRPass::GetOcclusionMesh)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6743320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetOcclusionMesh", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.GetTextureArraySlice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t)>(&::UnityEngine::Experimental::Rendering::XRPass::GetTextureArraySlice)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6741bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetTextureArraySlice", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.StartSinglePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRPass::StartSinglePass)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6743848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                           { "StartSinglePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.StartSinglePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::IRasterCommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRPass::StartSinglePass)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6744b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                           { "StartSinglePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::IRasterCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.StopSinglePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRPass::StopSinglePass)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6743754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                           { "StopSinglePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.StopSinglePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::BaseCommandBuffer*)>(
    &::UnityEngine::Experimental::Rendering::XRPass::StopSinglePass)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6744bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                           { "StopSinglePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::BaseCommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.get_hasValidOcclusionMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::get_hasValidOcclusionMesh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6744be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_hasValidOcclusionMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.RenderOcclusionMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::CommandBuffer*, bool)>(
    &::UnityEngine::Experimental::Rendering::XRPass::RenderOcclusionMesh)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6744bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                             { "RenderOcclusionMesh", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.RenderOcclusionMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Rendering::RasterCommandBuffer*, bool)>(
    &::UnityEngine::Experimental::Rendering::XRPass::RenderOcclusionMesh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6744c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                             { "RenderOcclusionMesh", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.RenderDebugXRViewsFrustum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::RenderDebugXRViewsFrustum)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6744c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "RenderDebugXRViewsFrustum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.ApplyXRViewCenterOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Experimental::Rendering::XRPass::ApplyXRViewCenterOffset)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6744ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "ApplyXRViewCenterOffset", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.AssignView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t, ::UnityEngine::Experimental::Rendering::XRView)>(
    &::UnityEngine::Experimental::Rendering::XRPass::AssignView)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x674502c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                             { "AssignView", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRView>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.AssignCullingParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(int32_t, ::UnityEngine::Rendering::ScriptableCullingParameters)>(
    &::UnityEngine::Experimental::Rendering::XRPass::AssignCullingParams)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x674512c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                             { "AssignCullingParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableCullingParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.UpdateCombinedOcclusionMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)()>(&::UnityEngine::Experimental::Rendering::XRPass::UpdateCombinedOcclusionMesh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67415b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "UpdateCombinedOcclusionMesh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.InitBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Experimental::Rendering::XRPassCreateInfo)>(
    &::UnityEngine::Experimental::Rendering::XRPass::InitBase)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6744190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                           { "InitBase", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRPass.AddView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Experimental::Rendering::XRPass::*)(::UnityEngine::Experimental::Rendering::XRView)>(
    &::UnityEngine::Experimental::Rendering::XRPass::AddView)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x67451ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "AddView", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRView>() } })));
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
  this->___m_Views = value;
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
  this->___m_OcclusionMesh = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRPass* UnityEngine::Experimental::Rendering::XRPass::CreateDefault(::UnityEngine::Experimental::Rendering::XRPassCreateInfo createInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                         { "CreateDefault", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRPass*>(nullptr, ___internal_method, createInfo);
}
inline void UnityEngine::Experimental::Rendering::XRPass::Release() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_supportsFoveatedRendering() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_supportsFoveatedRendering", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_copyDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_copyDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_copyDepth(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_copyDepth", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_hasMotionVectorPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_hasMotionVectorPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_hasMotionVectorPass(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_hasMotionVectorPass", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_isFirstCameraPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_isFirstCameraPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_isLastCameraPass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_isLastCameraPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::Experimental::Rendering::XRPass::get_multipassId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_multipassId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_multipassId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_multipassId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::XRPass::get_cullingPassId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_cullingPassId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_cullingPassId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_cullingPassId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Experimental::Rendering::XRPass::get_renderTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_renderTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_renderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                         { "set_renderTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Experimental::Rendering::XRPass::get_renderTargetDesc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_renderTargetDesc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_renderTargetDesc(::UnityEngine::RenderTextureDescriptor value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                         { "set_renderTargetDesc", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Experimental::Rendering::XRPass::get_motionVectorRenderTarget() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_motionVectorRenderTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_motionVectorRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                           { "set_motionVectorRenderTarget", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Experimental::Rendering::XRPass::get_motionVectorRenderTargetDesc() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_motionVectorRenderTargetDesc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_motionVectorRenderTargetDesc(::UnityEngine::RenderTextureDescriptor value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                         { "set_motionVectorRenderTargetDesc", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ScriptableCullingParameters UnityEngine::Experimental::Rendering::XRPass::get_cullingParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_cullingParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ScriptableCullingParameters>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_cullingParams(::UnityEngine::Rendering::ScriptableCullingParameters value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                         { "set_cullingParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableCullingParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::XRPass::get_viewCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_viewCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_singlePassEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_singlePassEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::Experimental::Rendering::XRPass::get_foveatedRenderingInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_foveatedRenderingInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_foveatedRenderingInfo(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_foveatedRenderingInfo", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_isHDRDisplayOutputActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_isHDRDisplayOutputActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::ColorGamut UnityEngine::Experimental::Rendering::XRPass::get_hdrDisplayOutputColorGamut() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_hdrDisplayOutputColorGamut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorGamut>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation UnityEngine::Experimental::Rendering::XRPass::get_hdrDisplayOutputInformation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_hdrDisplayOutputInformation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>(this, ___internal_method);
}
inline float_t UnityEngine::Experimental::Rendering::XRPass::get_occlusionMeshScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_occlusionMeshScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::set_occlusionMeshScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "set_occlusionMeshScale", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Experimental::Rendering::XRPass::GetProjMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetProjMatrix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Experimental::Rendering::XRPass::GetViewMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetViewMatrix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, viewIndex);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::GetPrevViewValid(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetPrevViewValid", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Experimental::Rendering::XRPass::GetPrevViewMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetPrevViewMatrix", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Rect UnityEngine::Experimental::Rendering::XRPass::GetViewport(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetViewport", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, viewIndex);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Experimental::Rendering::XRPass::GetOcclusionMesh(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetOcclusionMesh", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method, viewIndex);
}
inline int32_t UnityEngine::Experimental::Rendering::XRPass::GetTextureArraySlice(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "GetTextureArraySlice", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, viewIndex);
}
inline void UnityEngine::Experimental::Rendering::XRPass::StartSinglePass(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "StartSinglePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Experimental::Rendering::XRPass::StartSinglePass(::UnityEngine::Rendering::IRasterCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                         { "StartSinglePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::IRasterCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Experimental::Rendering::XRPass::StopSinglePass(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "StopSinglePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Experimental::Rendering::XRPass::StopSinglePass(::UnityEngine::Rendering::BaseCommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                         { "StopSinglePass", {}, { ::i2c::type_of<::UnityEngine::Rendering::BaseCommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline bool UnityEngine::Experimental::Rendering::XRPass::get_hasValidOcclusionMesh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "get_hasValidOcclusionMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::RenderOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* cmd, bool renderIntoTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                           { "RenderOcclusionMesh", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderIntoTexture);
}
inline void UnityEngine::Experimental::Rendering::XRPass::RenderOcclusionMesh(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool renderIntoTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                           { "RenderOcclusionMesh", {}, { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderIntoTexture);
}
inline void UnityEngine::Experimental::Rendering::XRPass::RenderDebugXRViewsFrustum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "RenderDebugXRViewsFrustum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 UnityEngine::Experimental::Rendering::XRPass::ApplyXRViewCenterOffset(::UnityEngine::Vector2 center) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "ApplyXRViewCenterOffset", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, center);
}
inline void UnityEngine::Experimental::Rendering::XRPass::AssignView(int32_t viewId, ::UnityEngine::Experimental::Rendering::XRView xrView) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                           { "AssignView", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRView>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewId, xrView);
}
inline void UnityEngine::Experimental::Rendering::XRPass::AssignCullingParams(int32_t cullingPassId, ::UnityEngine::Rendering::ScriptableCullingParameters cullingParams) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                           { "AssignCullingParams", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableCullingParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullingPassId, cullingParams);
}
inline void UnityEngine::Experimental::Rendering::XRPass::UpdateCombinedOcclusionMesh() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "UpdateCombinedOcclusionMesh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRPass::InitBase(::UnityEngine::Experimental::Rendering::XRPassCreateInfo createInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                                         { "InitBase", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPassCreateInfo>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createInfo);
}
inline void UnityEngine::Experimental::Rendering::XRPass::AddView(::UnityEngine::Experimental::Rendering::XRView xrView) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::Rendering::XRPass*>(), { "AddView", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRView>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrView);
}
inline ::UnityEngine::Experimental::Rendering::XRPass* UnityEngine::Experimental::Rendering::XRPass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Experimental::Rendering::XRPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRPass::XRPass() {}
