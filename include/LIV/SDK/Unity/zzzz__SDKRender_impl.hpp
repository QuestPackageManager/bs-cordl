#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKRender.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPose_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CameraEvent_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKRender_def.hpp"
#include "LIV/SDK/Unity/zzzz__LIV_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorWriteMask_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.GetClipPlaneMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::Material> (::LIV::SDK::Unity::SDKRender::*)(bool, bool, ::UnityEngine::Rendering::ColorWriteMask)>(&::LIV::SDK::Unity::SDKRender::GetClipPlaneMaterial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a6c0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "GetClipPlaneMaterial", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.GetGroundClipPlaneMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::LIV::SDK::Unity::SDKRender::*)(bool, ::UnityEngine::Rendering::ColorWriteMask)>(
    &::LIV::SDK::Unity::SDKRender::GetGroundClipPlaneMaterial)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3a6c1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "GetGroundClipPlaneMaterial", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_useDeferredRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_useDeferredRendering)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3a6c280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_useDeferredRendering",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_interlacedRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_interlacedRendering)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3a6c2a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_interlacedRendering",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canRenderBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canRenderBackground)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3a6c2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_canRenderBackground",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canRenderForeground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canRenderForeground)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3a6c34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_canRenderForeground",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canRenderOptimized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canRenderOptimized)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3a6c3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_canRenderOptimized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::LIV::SDK::Unity::LIV*)>(&::LIV::SDK::Unity::SDKRender::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3a6aba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::LIV*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateCameraSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateCameraSettings)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3a6cc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "UpdateCameraSettings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::Render)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3a6b1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "Render",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.RenderBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::RenderBackground)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3a6d54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "RenderBackground",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.RenderForeground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::RenderForeground)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x3a6d664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "RenderForeground",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.RenderOptimized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::RenderOptimized)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x3a6db14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "RenderOptimized",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateAssets)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x3a6c534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "CreateAssets",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.DestroyAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::DestroyAssets)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3a6f038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "DestroyAssets",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a6ad10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_liv
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::LIV::SDK::Unity::LIV> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_liv)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a6f2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_liv",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_outputFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKOutputFrame (::LIV::SDK::Unity::SDKRender::*)()>(
    &::LIV::SDK::Unity::SDKRender::get_outputFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a6f2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_outputFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_inputFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKInputFrame (::LIV::SDK::Unity::SDKRender::*)()>(
    &::LIV::SDK::Unity::SDKRender::get_inputFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3a6f2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_inputFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_resolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKResolution (::LIV::SDK::Unity::SDKRender::*)()>(
    &::LIV::SDK::Unity::SDKRender::get_resolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a6f2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_resolution",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_cameraInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::LIV::SDK::Unity::SDKRender::*)()>(
    &::LIV::SDK::Unity::SDKRender::get_cameraInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3a6f2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_cameraInstance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_cameraReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::LIV::SDK::Unity::SDKRender::*)()>(
    &::LIV::SDK::Unity::SDKRender::get_cameraReference)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3a6e76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_cameraReference",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_hmdCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_hmdCamera)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a6f2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_hmdCamera",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_stage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_stage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a6f304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_stage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_stageTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::LIV::SDK::Unity::SDKRender::*)()>(
    &::LIV::SDK::Unity::SDKRender::get_stageTransform)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a6f31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_stageTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_stageLocalToWorldMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::LIV::SDK::Unity::SDKRender::*)()>(
    &::LIV::SDK::Unity::SDKRender::get_stageLocalToWorldMatrix)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3a6f338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                                                                               "get_stageLocalToWorldMatrix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_localToWorldMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::LIV::SDK::Unity::SDKRender::*)()>(
    &::LIV::SDK::Unity::SDKRender::get_localToWorldMatrix)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3a6ce38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_localToWorldMatrix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_spectatorLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_spectatorLayerMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a6cef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_spectatorLayerMask",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_disableStandardAssets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_disableStandardAssets)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a6e418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                                                                               "get_disableStandardAssets", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.get_canSetPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::get_canSetPose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3a6f428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_canSetPose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, bool)>(
    &::LIV::SDK::Unity::SDKRender::SetPose)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x3a6f448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "SetPose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetGroundPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(float_t, ::UnityEngine::Vector3, bool)>(
    &::LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3a6f8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "SetGroundPlane", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetGroundPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::Plane, bool)>(&::LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a6fa64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "SetGroundPlane", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SetGroundPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::Transform*, bool)>(
    &::LIV::SDK::Unity::SDKRender::SetGroundPlane)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3a6fa80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "SetGroundPlane", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.ReleaseBridgePoseControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::ReleaseBridgePoseControl)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a6f1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "ReleaseBridgePoseControl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateBridgeResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateBridgeResolution)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3a6d150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "UpdateBridgeResolution",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateBridgeInputFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateBridgeInputFrame)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3a6cc88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "UpdateBridgeInputFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePreRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePreRender)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a6d514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "InvokePreRender",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.IvokePostRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::IvokePostRender)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a6e004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "IvokePostRender",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePreRenderBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePreRenderBackground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a6e22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                                                                               "InvokePreRenderBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePostRenderBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePostRenderBackground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a6e358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                                                                               "InvokePostRenderBackground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePreRenderForeground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePreRenderForeground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a6e630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                                                                               "InvokePreRenderForeground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.InvokePostRenderForeground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::InvokePostRenderForeground)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3a6e668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                                                                               "InvokePostRenderForeground", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateBackgroundTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateBackgroundTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a6fc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "CreateBackgroundTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateForegroundTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateForegroundTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a6fe48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "CreateForegroundTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateOptimizedTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateOptimizedTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a6fedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "CreateOptimizedTexture",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.CreateComplexClipPlaneTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::CreateComplexClipPlaneTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3a6ff70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                                                                               "CreateComplexClipPlaneTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.UpdateTextures
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)()>(&::LIV::SDK::Unity::SDKRender::UpdateTextures)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x3a6d294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "UpdateTextures",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKRender.SendTextureToBridge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LIV::SDK::Unity::SDKRender::*)(::UnityEngine::RenderTexture*, ::LIV::SDK::Unity::TEXTURE_ID)>(
    &::LIV::SDK::Unity::SDKRender::SendTextureToBridge)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3a6e264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "SendTextureToBridge", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::TEXTURE_ID>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr LIV::SDK::Unity::SDKRender::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* LIV::SDK::Unity::SDKRender::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneCommandBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combineAlphaCommandBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combineAlphaCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__combineAlphaCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combineAlphaCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__captureTextureCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captureTextureCommandBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__captureTextureCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____captureTextureCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__captureTextureCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____captureTextureCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__applyTextureCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyTextureCommandBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__applyTextureCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyTextureCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__applyTextureCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____applyTextureCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderingCommandBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderingCommandBuffer;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__optimizedRenderingCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optimizedRenderingCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CameraEvent& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCameraEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneCameraEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneCameraEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneCameraEvent;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneCameraEvent(::UnityEngine::Rendering::CameraEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipPlaneCameraEvent = value;
}
constexpr ::UnityEngine::Rendering::CameraEvent& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCameraEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderingCameraEvent;
}
constexpr ::UnityEngine::Rendering::CameraEvent const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderingCameraEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderingCameraEvent;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__optimizedRenderingCameraEvent(::UnityEngine::Rendering::CameraEvent value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____optimizedRenderingCameraEvent = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneMesh;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneMesh(::UnityW<::UnityEngine::Mesh> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneSimpleMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneSimpleMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneSimpleMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneSimpleMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleDebugMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneSimpleDebugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneSimpleDebugMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneSimpleDebugMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneSimpleDebugMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneSimpleDebugMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneComplexMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneComplexMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneComplexMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneComplexMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexDebugMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneComplexDebugMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__clipPlaneComplexDebugMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipPlaneComplexDebugMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__clipPlaneComplexDebugMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clipPlaneComplexDebugMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeOpaqueToAlphaMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeOpaqueToAlphaMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeOpaqueToAlphaMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeOpaqueToAlphaMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__writeOpaqueToAlphaMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writeOpaqueToAlphaMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combineAlphaMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__combineAlphaMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combineAlphaMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__combineAlphaMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____combineAlphaMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__writeMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__writeMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____writeMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__forceForwardRenderingMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceForwardRenderingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__forceForwardRenderingMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceForwardRenderingMaterial;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__forceForwardRenderingMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____forceForwardRenderingMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__backgroundRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__backgroundRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__backgroundRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__foregroundRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foregroundRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__foregroundRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foregroundRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__foregroundRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____foregroundRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__optimizedRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optimizedRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__optimizedRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optimizedRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__complexClipPlaneRenderTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____complexClipPlaneRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__complexClipPlaneRenderTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____complexClipPlaneRenderTexture;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__complexClipPlaneRenderTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____complexClipPlaneRenderTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::LIV::SDK::Unity::LIV>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__liv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____liv;
}
constexpr ::UnityW<::LIV::SDK::Unity::LIV> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__liv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____liv;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__liv(::UnityW<::LIV::SDK::Unity::LIV> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____liv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LIV::SDK::Unity::SDKOutputFrame& LIV::SDK::Unity::SDKRender::__cordl_internal_get__outputFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputFrame;
}
constexpr ::LIV::SDK::Unity::SDKOutputFrame const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__outputFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outputFrame;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__outputFrame(::LIV::SDK::Unity::SDKOutputFrame value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outputFrame = value;
}
constexpr ::LIV::SDK::Unity::SDKInputFrame& LIV::SDK::Unity::SDKRender::__cordl_internal_get__inputFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFrame;
}
constexpr ::LIV::SDK::Unity::SDKInputFrame const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__inputFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFrame;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__inputFrame(::LIV::SDK::Unity::SDKInputFrame value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputFrame = value;
}
constexpr ::LIV::SDK::Unity::SDKResolution& LIV::SDK::Unity::SDKRender::__cordl_internal_get__resolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolution;
}
constexpr ::LIV::SDK::Unity::SDKResolution const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__resolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resolution;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__resolution(::LIV::SDK::Unity::SDKResolution value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resolution = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& LIV::SDK::Unity::SDKRender::__cordl_internal_get__cameraInstance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraInstance;
}
constexpr ::UnityW<::UnityEngine::Camera> const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__cameraInstance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cameraInstance;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__cameraInstance(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cameraInstance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LIV::SDK::Unity::SDKPose& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedPose;
}
constexpr ::LIV::SDK::Unity::SDKPose const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedPose;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__requestedPose(::LIV::SDK::Unity::SDKPose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestedPose = value;
}
constexpr int32_t& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPoseFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedPoseFrameIndex;
}
constexpr int32_t const& LIV::SDK::Unity::SDKRender::__cordl_internal_get__requestedPoseFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedPoseFrameIndex;
}
constexpr void LIV::SDK::Unity::SDKRender::__cordl_internal_set__requestedPoseFrameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestedPoseFrameIndex = value;
}
inline ::UnityW<::UnityEngine::Material> LIV::SDK::Unity::SDKRender::GetClipPlaneMaterial(bool debugClipPlane, bool complexClipPlane, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "GetClipPlaneMaterial", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, debugClipPlane, complexClipPlane, colorWriteMask);
}
inline ::UnityW<::UnityEngine::Material> LIV::SDK::Unity::SDKRender::GetGroundClipPlaneMaterial(bool debugClipPlane, ::UnityEngine::Rendering::ColorWriteMask colorWriteMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "GetGroundClipPlaneMaterial", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ColorWriteMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, debugClipPlane, colorWriteMask);
}
inline bool LIV::SDK::Unity::SDKRender::get_useDeferredRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_useDeferredRendering",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_interlacedRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_interlacedRendering",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canRenderBackground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_canRenderBackground",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canRenderForeground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_canRenderForeground",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canRenderOptimized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_canRenderOptimized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::LIV::SDK::Unity::SDKRender* LIV::SDK::Unity::SDKRender::New_ctor(::LIV::SDK::Unity::LIV* liv) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LIV::SDK::Unity::SDKRender*>(liv));
}
inline void LIV::SDK::Unity::SDKRender::_ctor(::LIV::SDK::Unity::LIV* liv) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::LIV*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, liv);
}
inline void LIV::SDK::Unity::SDKRender::UpdateCameraSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "UpdateCameraSettings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::Render() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "Render",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::RenderBackground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "RenderBackground",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::RenderForeground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "RenderForeground",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::RenderOptimized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "RenderOptimized",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "CreateAssets",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::DestroyAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "DestroyAssets",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::LIV::SDK::Unity::LIV> LIV::SDK::Unity::SDKRender::get_liv() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_liv",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::LIV::SDK::Unity::LIV>, false>(this, ___internal_method);
}
inline ::LIV::SDK::Unity::SDKOutputFrame LIV::SDK::Unity::SDKRender::get_outputFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_outputFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKOutputFrame, false>(this, ___internal_method);
}
inline ::LIV::SDK::Unity::SDKInputFrame LIV::SDK::Unity::SDKRender::get_inputFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_inputFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKInputFrame, false>(this, ___internal_method);
}
inline ::LIV::SDK::Unity::SDKResolution LIV::SDK::Unity::SDKRender::get_resolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_resolution",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKResolution, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> LIV::SDK::Unity::SDKRender::get_cameraInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_cameraInstance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> LIV::SDK::Unity::SDKRender::get_cameraReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_cameraReference",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> LIV::SDK::Unity::SDKRender::get_hmdCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_hmdCamera",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> LIV::SDK::Unity::SDKRender::get_stage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_stage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> LIV::SDK::Unity::SDKRender::get_stageTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_stageTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 LIV::SDK::Unity::SDKRender::get_stageLocalToWorldMatrix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                                                                             "get_stageLocalToWorldMatrix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 LIV::SDK::Unity::SDKRender::get_localToWorldMatrix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_localToWorldMatrix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline int32_t LIV::SDK::Unity::SDKRender::get_spectatorLayerMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_spectatorLayerMask",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_disableStandardAssets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_disableStandardAssets",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKRender::get_canSetPose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "get_canSetPose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @param verticalFieldOfView: float_t (default: 60.0)
/// @param useLocalSpace: bool (default: false)
inline bool LIV::SDK::Unity::SDKRender::SetPose(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, float_t verticalFieldOfView, bool useLocalSpace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "SetPose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, position, rotation, verticalFieldOfView, useLocalSpace);
}
/// @param useLocalSpace: bool (default: false)
inline void LIV::SDK::Unity::SDKRender::SetGroundPlane(float_t distance, ::UnityEngine::Vector3 normal, bool useLocalSpace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "SetGroundPlane", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance, normal, useLocalSpace);
}
/// @param useLocalSpace: bool (default: false)
inline void LIV::SDK::Unity::SDKRender::SetGroundPlane(::UnityEngine::Plane plane, bool useLocalSpace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "SetGroundPlane", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, plane, useLocalSpace);
}
/// @param useLocalSpace: bool (default: false)
inline void LIV::SDK::Unity::SDKRender::SetGroundPlane(::UnityEngine::Transform* transform, bool useLocalSpace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "SetGroundPlane", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, useLocalSpace);
}
inline void LIV::SDK::Unity::SDKRender::ReleaseBridgePoseControl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "ReleaseBridgePoseControl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::UpdateBridgeResolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "UpdateBridgeResolution",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::UpdateBridgeInputFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "UpdateBridgeInputFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePreRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "InvokePreRender",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::IvokePostRender() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "IvokePostRender",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePreRenderBackground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "InvokePreRenderBackground",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePostRenderBackground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "InvokePostRenderBackground",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePreRenderForeground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "InvokePreRenderForeground",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::InvokePostRenderForeground() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "InvokePostRenderForeground",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateBackgroundTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "CreateBackgroundTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateForegroundTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "CreateForegroundTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateOptimizedTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "CreateOptimizedTexture",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::CreateComplexClipPlaneTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(),
                                                                             "CreateComplexClipPlaneTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::UpdateTextures() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "UpdateTextures",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LIV::SDK::Unity::SDKRender::SendTextureToBridge(::UnityEngine::RenderTexture* texture, ::LIV::SDK::Unity::TEXTURE_ID id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKRender*>::get(), "SendTextureToBridge", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::TEXTURE_ID>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture, id);
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKRender::SDKRender() {}
