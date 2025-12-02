#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CameraData.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRColorBufferPrecision_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageScalingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageUpscalingFilter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TaaHistory_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraHistory_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRPassUniversal_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_def.hpp"
#include "UnityEngine/zzzz__CameraType_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::CameraData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x66c3cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_universalCameraData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::UniversalCameraData* (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_universalCameraData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x66c3cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_universalCameraData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.SetViewAndProjectionMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(
    &::UnityEngine::Rendering::Universal::CameraData::SetViewAndProjectionMatrix)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x66c3d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "SetViewAndProjectionMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.SetViewProjectionAndJitterMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(
    ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Rendering::Universal::CameraData::SetViewProjectionAndJitterMatrix)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x66c3dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "SetViewProjectionAndJitterMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.PushBuiltinShaderConstantsXR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Rendering::RasterCommandBuffer*, bool)>(
    &::UnityEngine::Rendering::Universal::CameraData::PushBuiltinShaderConstantsXR)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66c3ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "PushBuiltinShaderConstantsXR", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetViewMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetViewMatrix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66c3f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetViewMatrix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetProjectionMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetProjectionMatrix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66c3fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetProjectionMatrix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetProjectionMatrixNoJitter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetProjectionMatrixNoJitter)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66c405c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetProjectionMatrixNoJitter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetGPUProjectionMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66c40f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetGPUProjectionMatrix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetGPUProjectionMatrixNoJitter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrixNoJitter)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x66c4184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetGPUProjectionMatrixNoJitter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.GetGPUProjectionMatrix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Rendering::Universal::CameraData::*)(bool, int32_t)>(
    &::UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrix)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x66c4218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetGPUProjectionMatrix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_camera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityW<::UnityEngine::Camera>> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_camera)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c42bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_camera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_historyManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraHistory*> (
    ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_historyManager)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c431c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_historyManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_renderType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::CameraRenderType> (
    ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_renderType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c437c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_renderType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_targetTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityW<::UnityEngine::RenderTexture>> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_targetTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c43dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_targetTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_cameraTargetDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::RenderTextureDescriptor> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_cameraTargetDescriptor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c443c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_cameraTargetDescriptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_pixelRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rect> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_pixelRect)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c449c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_pixelRect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_useScreenCoordOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_useScreenCoordOverride)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c44fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_useScreenCoordOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_screenSizeOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Vector4> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_screenSizeOverride)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c455c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_screenSizeOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_screenCoordScaleBias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Vector4> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_screenCoordScaleBias)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c45bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_screenCoordScaleBias", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_pixelWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_pixelWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c461c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_pixelWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_pixelHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<int32_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_pixelHeight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c467c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_pixelHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_aspectRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<float_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_aspectRatio)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c46dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_aspectRatio", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_renderScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<float_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_renderScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c473c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_renderScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_imageScalingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::ImageScalingMode> (
    ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_imageScalingMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c479c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_imageScalingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_upscalingFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::ImageUpscalingFilter> (
    ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_upscalingFilter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c47fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_upscalingFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_fsrOverrideSharpness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_fsrOverrideSharpness)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c485c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_fsrOverrideSharpness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_fsrSharpness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<float_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_fsrSharpness)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c48bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_fsrSharpness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_hdrColorBufferPrecision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision> (
    ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_hdrColorBufferPrecision)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c491c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_hdrColorBufferPrecision", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_clearDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_clearDepth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c497c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_clearDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_cameraType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::CameraType> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_cameraType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c49dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_cameraType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isDefaultViewport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isDefaultViewport)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_isDefaultViewport", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isHdrEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isHdrEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_isHdrEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_allowHDROutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_allowHDROutput)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_allowHDROutput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isAlphaOutputEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isAlphaOutputEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_isAlphaOutputEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_requiresDepthTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_requiresDepthTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_requiresDepthTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_requiresOpaqueTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_requiresOpaqueTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_requiresOpaqueTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_postProcessingRequiresDepthTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_postProcessingRequiresDepthTexture)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                 "get_postProcessingRequiresDepthTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_xrRendering
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_xrRendering)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_xrRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_requireSrgbConversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_requireSrgbConversion)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_requireSrgbConversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isSceneViewCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isSceneViewCamera)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66c4d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_isSceneViewCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isPreviewCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isPreviewCamera)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66c4e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_isPreviewCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isRenderPassSupportedCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isRenderPassSupportedCamera)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66c4e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "get_isRenderPassSupportedCamera",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_resolveToScreen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_resolveToScreen)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_resolveToScreen", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isHDROutputActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isHDROutputActive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_isHDROutputActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_hdrDisplayInformation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation (
    ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_hdrDisplayInformation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_hdrDisplayInformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_hdrDisplayColorGamut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ColorGamut (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_hdrDisplayColorGamut)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c4ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_hdrDisplayColorGamut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_rendersOverlayUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_rendersOverlayUI)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_rendersOverlayUI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.IsHandleYFlipped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::CameraData::IsHandleYFlipped)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x66c50b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "IsHandleYFlipped", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.IsCameraProjectionMatrixFlipped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::IsCameraProjectionMatrixFlipped)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "IsCameraProjectionMatrixFlipped",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.IsRenderTargetProjectionMatrixFlipped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)(
    ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::CameraData::IsRenderTargetProjectionMatrixFlipped)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x66c5188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                 "IsRenderTargetProjectionMatrixFlipped", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.IsTemporalAAEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::IsTemporalAAEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "IsTemporalAAEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_defaultOpaqueSortFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::SortingCriteria> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_defaultOpaqueSortFlags)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c5260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_defaultOpaqueSortFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_xr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::XRPass* (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_xr)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c52c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "get_xr",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.set_xr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::CameraData::*)(::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Rendering::Universal::CameraData::set_xr)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x66c5320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "set_xr", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_xrUniversal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::XRPassUniversal* (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_xrUniversal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c538c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_xrUniversal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_maxShadowDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<float_t> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_maxShadowDistance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c53ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_maxShadowDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_postProcessEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_postProcessEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c544c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_postProcessEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_captureActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ByRef<::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*> (
        ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_captureActions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c54ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_captureActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_volumeLayerMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::LayerMask> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_volumeLayerMask)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c550c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_volumeLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_volumeTrigger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityW<::UnityEngine::Transform>> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_volumeTrigger)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c556c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_volumeTrigger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isStopNaNEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isStopNaNEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c55cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_isStopNaNEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_isDitheringEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_isDitheringEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c562c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_isDitheringEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_antialiasing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::AntialiasingMode> (
    ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_antialiasing)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c568c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_antialiasing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_antialiasingQuality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::AntialiasingQuality> (
    ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_antialiasingQuality)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c56ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_antialiasingQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_renderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> (
    ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_renderer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c574c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_renderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_resolveFinalTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<bool> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_resolveFinalTarget)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c57ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_resolveFinalTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_worldSpaceCameraPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Vector3> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_worldSpaceCameraPos)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c580c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_worldSpaceCameraPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_backgroundColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Color> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_backgroundColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c586c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_backgroundColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_taaHistory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::TaaHistory*> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_taaHistory)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c58cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_taaHistory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_taaSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings> (
    ::UnityEngine::Rendering::Universal::CameraData::*)()>(&::UnityEngine::Rendering::Universal::CameraData::get_taaSettings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c592c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_taaSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_resetHistory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_resetHistory)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x66c598c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_resetHistory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraData.get_baseCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ByRef<::UnityW<::UnityEngine::Camera>> (::UnityEngine::Rendering::Universal::CameraData::*)()>(
    &::UnityEngine::Rendering::Universal::CameraData::get_baseCamera)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x66c59f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                               "get_baseCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::CameraData::_ctor(::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ContextContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameData);
}
inline ::UnityEngine::Rendering::Universal::UniversalCameraData* UnityEngine::Rendering::Universal::CameraData::get_universalCameraData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_universalCameraData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalCameraData*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::CameraData::SetViewAndProjectionMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "SetViewAndProjectionMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewMatrix, projectionMatrix);
}
inline void UnityEngine::Rendering::Universal::CameraData::SetViewProjectionAndJitterMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                                                            ::UnityEngine::Matrix4x4 jitterMatrix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "SetViewProjectionAndJitterMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewMatrix, projectionMatrix, jitterMatrix);
}
inline void UnityEngine::Rendering::Universal::CameraData::PushBuiltinShaderConstantsXR(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool renderIntoTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "PushBuiltinShaderConstantsXR", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RasterCommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderIntoTexture);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetViewMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetViewMatrix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetProjectionMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetProjectionMatrix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetProjectionMatrixNoJitter(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetProjectionMatrixNoJitter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrix(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetGPUProjectionMatrix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrixNoJitter(int32_t viewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetGPUProjectionMatrixNoJitter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, viewIndex);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Rendering::Universal::CameraData::GetGPUProjectionMatrix(bool renderIntoTexture, int32_t viewIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "GetGPUProjectionMatrix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method, renderIntoTexture, viewIndex);
}
inline ::ByRef<::UnityW<::UnityEngine::Camera>> UnityEngine::Rendering::Universal::CameraData::get_camera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_camera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityW<::UnityEngine::Camera>>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraHistory*> UnityEngine::Rendering::Universal::CameraData::get_historyManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_historyManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraHistory*>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::CameraRenderType> UnityEngine::Rendering::Universal::CameraData::get_renderType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_renderType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::CameraRenderType>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityW<::UnityEngine::RenderTexture>> UnityEngine::Rendering::Universal::CameraData::get_targetTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_targetTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityW<::UnityEngine::RenderTexture>>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::RenderTextureDescriptor> UnityEngine::Rendering::Universal::CameraData::get_cameraTargetDescriptor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_cameraTargetDescriptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::RenderTextureDescriptor>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rect> UnityEngine::Rendering::Universal::CameraData::get_pixelRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_pixelRect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rect>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_useScreenCoordOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_useScreenCoordOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Vector4> UnityEngine::Rendering::Universal::CameraData::get_screenSizeOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_screenSizeOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Vector4>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Vector4> UnityEngine::Rendering::Universal::CameraData::get_screenCoordScaleBias() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_screenCoordScaleBias", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Vector4>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::CameraData::get_pixelWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_pixelWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<int32_t> UnityEngine::Rendering::Universal::CameraData::get_pixelHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_pixelHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<int32_t>, false>(this, ___internal_method);
}
inline ::ByRef<float_t> UnityEngine::Rendering::Universal::CameraData::get_aspectRatio() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_aspectRatio", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<float_t>, false>(this, ___internal_method);
}
inline ::ByRef<float_t> UnityEngine::Rendering::Universal::CameraData::get_renderScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_renderScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<float_t>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::ImageScalingMode> UnityEngine::Rendering::Universal::CameraData::get_imageScalingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_imageScalingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::ImageScalingMode>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::ImageUpscalingFilter> UnityEngine::Rendering::Universal::CameraData::get_upscalingFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_upscalingFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::ImageUpscalingFilter>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_fsrOverrideSharpness() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_fsrOverrideSharpness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<float_t> UnityEngine::Rendering::Universal::CameraData::get_fsrSharpness() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_fsrSharpness", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<float_t>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision> UnityEngine::Rendering::Universal::CameraData::get_hdrColorBufferPrecision() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_hdrColorBufferPrecision", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_clearDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_clearDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::CameraType> UnityEngine::Rendering::Universal::CameraData::get_cameraType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_cameraType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::CameraType>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_isDefaultViewport() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isDefaultViewport", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_isHdrEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isHdrEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_allowHDROutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_allowHDROutput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_isAlphaOutputEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isAlphaOutputEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_requiresDepthTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_requiresDepthTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_requiresOpaqueTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_requiresOpaqueTexture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_postProcessingRequiresDepthTexture() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "get_postProcessingRequiresDepthTexture",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_xrRendering() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_xrRendering", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_requireSrgbConversion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_requireSrgbConversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isSceneViewCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isSceneViewCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isPreviewCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isPreviewCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isRenderPassSupportedCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isRenderPassSupportedCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_resolveToScreen() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_resolveToScreen", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_isHDROutputActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isHDROutputActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation UnityEngine::Rendering::Universal::CameraData::get_hdrDisplayInformation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_hdrDisplayInformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, false>(this, ___internal_method);
}
inline ::UnityEngine::ColorGamut UnityEngine::Rendering::Universal::CameraData::get_hdrDisplayColorGamut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_hdrDisplayColorGamut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorGamut, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_rendersOverlayUI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_rendersOverlayUI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::IsHandleYFlipped(::UnityEngine::Rendering::RTHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "IsHandleYFlipped", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, handle);
}
inline bool UnityEngine::Rendering::Universal::CameraData::IsCameraProjectionMatrixFlipped() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "IsCameraProjectionMatrixFlipped", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::IsRenderTargetProjectionMatrixFlipped(::UnityEngine::Rendering::RTHandle* color, ::UnityEngine::Rendering::RTHandle* depth) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "IsRenderTargetProjectionMatrixFlipped", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, color, depth);
}
inline bool UnityEngine::Rendering::Universal::CameraData::IsTemporalAAEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "IsTemporalAAEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::SortingCriteria> UnityEngine::Rendering::Universal::CameraData::get_defaultOpaqueSortFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_defaultOpaqueSortFlags", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::SortingCriteria>, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRPass* UnityEngine::Rendering::Universal::CameraData::get_xr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "get_xr",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRPass*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::CameraData::set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(), "set_xr", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::XRPassUniversal* UnityEngine::Rendering::Universal::CameraData::get_xrUniversal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_xrUniversal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::XRPassUniversal*, false>(this, ___internal_method);
}
inline ::ByRef<float_t> UnityEngine::Rendering::Universal::CameraData::get_maxShadowDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_maxShadowDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<float_t>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_postProcessEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_postProcessEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>
UnityEngine::Rendering::Universal::CameraData::get_captureActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_captureActions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::ByRef<::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*>, false>(
      this, ___internal_method);
}
inline ::ByRef<::UnityEngine::LayerMask> UnityEngine::Rendering::Universal::CameraData::get_volumeLayerMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_volumeLayerMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::LayerMask>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityW<::UnityEngine::Transform>> UnityEngine::Rendering::Universal::CameraData::get_volumeTrigger() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_volumeTrigger", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityW<::UnityEngine::Transform>>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_isStopNaNEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isStopNaNEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_isDitheringEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_isDitheringEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::AntialiasingMode> UnityEngine::Rendering::Universal::CameraData::get_antialiasing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_antialiasing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::AntialiasingMode>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::AntialiasingQuality> UnityEngine::Rendering::Universal::CameraData::get_antialiasingQuality() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_antialiasingQuality", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::AntialiasingQuality>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> UnityEngine::Rendering::Universal::CameraData::get_renderer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_renderer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>, false>(this, ___internal_method);
}
inline ::ByRef<bool> UnityEngine::Rendering::Universal::CameraData::get_resolveFinalTarget() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_resolveFinalTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<bool>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Vector3> UnityEngine::Rendering::Universal::CameraData::get_worldSpaceCameraPos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_worldSpaceCameraPos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Vector3>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Color> UnityEngine::Rendering::Universal::CameraData::get_backgroundColor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_backgroundColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Color>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::TaaHistory*> UnityEngine::Rendering::Universal::CameraData::get_taaHistory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_taaHistory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::TaaHistory*>, false>(this, ___internal_method);
}
inline ::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings> UnityEngine::Rendering::Universal::CameraData::get_taaSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_taaSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings>, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::CameraData::get_resetHistory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_resetHistory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ByRef<::UnityW<::UnityEngine::Camera>> UnityEngine::Rendering::Universal::CameraData::get_baseCamera() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::CameraData>::get(),
                                                                             "get_baseCamera", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<::UnityW<::UnityEngine::Camera>>, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::CameraData::CameraData(::UnityEngine::Rendering::ContextContainer* frameData) noexcept {
  this->frameData = frameData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CameraData::CameraData() {}
